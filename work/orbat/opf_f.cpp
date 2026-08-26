//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class OPF_F {
        displayName = "Iran";
        side = 0;
        priority = 1;
        icon = "\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_OPF_CA.paa";
        flag = "\A3_Aegis\Data_F_Aegis\Flags\flag_IranArmy_CO.paa";
    };
};

class CfgVehicles {

    class ACE_SpottingScopeObject;
    class ACE_SpottingScopeObject_OCimport_01 : ACE_SpottingScopeObject { scope = 0; class EventHandlers; };
    class ACE_SpottingScopeObject_OCimport_02 : ACE_SpottingScopeObject_OCimport_01 { class EventHandlers; };

    class O_crew_F;
    class O_crew_F_OCimport_01 : O_crew_F { scope = 0; class EventHandlers; };
    class O_crew_F_OCimport_02 : O_crew_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_Soldier_R_base_F;
    class Atlas_O_Soldier_R_base_F_OCimport_01 : Atlas_O_Soldier_R_base_F { scope = 0; class EventHandlers; };
    class Atlas_O_Soldier_R_base_F_OCimport_02 : Atlas_O_Soldier_R_base_F_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_AT_East_Base;
    class EF_CombatBoat_AT_East_Base_OCimport_01 : EF_CombatBoat_AT_East_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_AT_East_Base_OCimport_02 : EF_CombatBoat_AT_East_Base_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_HMG_East_Base;
    class EF_CombatBoat_HMG_East_Base_OCimport_01 : EF_CombatBoat_HMG_East_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_HMG_East_Base_OCimport_02 : EF_CombatBoat_HMG_East_Base_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_Unarmed_Base;
    class EF_CombatBoat_Unarmed_Base_OCimport_01 : EF_CombatBoat_Unarmed_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_Unarmed_Base_OCimport_02 : EF_CombatBoat_Unarmed_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Antiair_Base;
    class EF_Gyra_Antiair_Base_OCimport_01 : EF_Gyra_Antiair_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Antiair_Base_OCimport_02 : EF_Gyra_Antiair_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Armed_Base;
    class EF_Gyra_Armed_Base_OCimport_01 : EF_Gyra_Armed_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Armed_Base_OCimport_02 : EF_Gyra_Armed_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_HMG_Base;
    class EF_Gyra_HMG_Base_OCimport_01 : EF_Gyra_HMG_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_HMG_Base_OCimport_02 : EF_Gyra_HMG_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Mortar_Base;
    class EF_Gyra_Mortar_Base_OCimport_01 : EF_Gyra_Mortar_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Mortar_Base_OCimport_02 : EF_Gyra_Mortar_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Unarmed_Base;
    class EF_Gyra_Unarmed_Base_OCimport_01 : EF_Gyra_Unarmed_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Unarmed_Base_OCimport_02 : EF_Gyra_Unarmed_Base_OCimport_01 { class EventHandlers; };

    class O_Soldier_Urban_base;
    class O_Soldier_Urban_base_OCimport_01 : O_Soldier_Urban_base { scope = 0; class EventHandlers; };
    class O_Soldier_Urban_base_OCimport_02 : O_Soldier_Urban_base_OCimport_01 { class EventHandlers; };

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

    class GX_O_MQ8B_UAV_RECON;
    class GX_O_MQ8B_UAV_RECON_OCimport_01 : GX_O_MQ8B_UAV_RECON { scope = 0; class EventHandlers; };
    class GX_O_MQ8B_UAV_RECON_OCimport_02 : GX_O_MQ8B_UAV_RECON_OCimport_01 { class EventHandlers; };

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

    class JK_76n6_ClamShell_base_F;
    class JK_76n6_ClamShell_base_F_OCimport_01 : JK_76n6_ClamShell_base_F { scope = 0; class EventHandlers; };
    class JK_76n6_ClamShell_base_F_OCimport_02 : JK_76n6_ClamShell_base_F_OCimport_01 { class EventHandlers; };

    class JK_76n6_ClamShell_Lower_base_F;
    class JK_76n6_ClamShell_Lower_base_F_OCimport_01 : JK_76n6_ClamShell_Lower_base_F { scope = 0; class EventHandlers; };
    class JK_76n6_ClamShell_Lower_base_F_OCimport_02 : JK_76n6_ClamShell_Lower_base_F_OCimport_01 { class EventHandlers; };

    class Pod_Heli_Transport_04_base_F;
    class Pod_Heli_Transport_04_base_F_OCimport_01 : Pod_Heli_Transport_04_base_F { scope = 0; class EventHandlers; };
    class Pod_Heli_Transport_04_base_F_OCimport_02 : Pod_Heli_Transport_04_base_F_OCimport_01 { class EventHandlers; };

    class Pod_Heli_Transport_04_crewed_base_F;
    class Pod_Heli_Transport_04_crewed_base_F_OCimport_01 : Pod_Heli_Transport_04_crewed_base_F { scope = 0; class EventHandlers; };
    class Pod_Heli_Transport_04_crewed_base_F_OCimport_02 : Pod_Heli_Transport_04_crewed_base_F_OCimport_01 { class EventHandlers; };

    class B_AAA_System_01_F;
    class B_AAA_System_01_F_OCimport_01 : B_AAA_System_01_F { scope = 0; class EventHandlers; };
    class B_AAA_System_01_F_OCimport_02 : B_AAA_System_01_F_OCimport_01 { class EventHandlers; };

    class O_APC_Tracked_02_cannon_F;
    class O_APC_Tracked_02_cannon_F_OCimport_01 : O_APC_Tracked_02_cannon_F { scope = 0; class EventHandlers; };
    class O_APC_Tracked_02_cannon_F_OCimport_02 : O_APC_Tracked_02_cannon_F_OCimport_01 { class EventHandlers; };

    class O_APC_Tracked_02_base_F;
    class O_APC_Tracked_02_base_F_OCimport_01 : O_APC_Tracked_02_base_F { scope = 0; class EventHandlers; };
    class O_APC_Tracked_02_base_F_OCimport_02 : O_APC_Tracked_02_base_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_hmg_base_lxws;
    class APC_Wheeled_02_hmg_base_lxws_OCimport_01 : APC_Wheeled_02_hmg_base_lxws { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_hmg_base_lxws_OCimport_02 : APC_Wheeled_02_hmg_base_lxws_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_base_v2_F;
    class APC_Wheeled_02_base_v2_F_OCimport_01 : APC_Wheeled_02_base_v2_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_base_v2_F_OCimport_02 : APC_Wheeled_02_base_v2_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_unarmed_base_lxws;
    class APC_Wheeled_02_unarmed_base_lxws_OCimport_01 : APC_Wheeled_02_unarmed_base_lxws { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_unarmed_base_lxws_OCimport_02 : APC_Wheeled_02_unarmed_base_lxws_OCimport_01 { class EventHandlers; };

    class Boat_Armed_01_base_F;
    class Boat_Armed_01_base_F_OCimport_01 : Boat_Armed_01_base_F { scope = 0; class EventHandlers; };
    class Boat_Armed_01_base_F_OCimport_02 : Boat_Armed_01_base_F_OCimport_01 { class EventHandlers; };

    class Rubber_duck_base_F;
    class Rubber_duck_base_F_OCimport_01 : Rubber_duck_base_F { scope = 0; class EventHandlers; };
    class Rubber_duck_base_F_OCimport_02 : Rubber_duck_base_F_OCimport_01 { class EventHandlers; };

    class B_CommandoMortar_RF;
    class B_CommandoMortar_RF_OCimport_01 : B_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_CommandoMortar_RF_OCimport_02 : B_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class ARMAFPV_Crocus_AP_Base;
    class ARMAFPV_Crocus_AP_Base_OCimport_01 : ARMAFPV_Crocus_AP_Base { scope = 0; class EventHandlers; };
    class ARMAFPV_Crocus_AP_Base_OCimport_02 : ARMAFPV_Crocus_AP_Base_OCimport_01 { class EventHandlers; };

    class O_Crocus_AP;
    class O_Crocus_AP_OCimport_01 : O_Crocus_AP { scope = 0; class EventHandlers; };
    class O_Crocus_AP_OCimport_02 : O_Crocus_AP_OCimport_01 { class EventHandlers; };

    class ARMAFPV_Crocus_AT_Base;
    class ARMAFPV_Crocus_AT_Base_OCimport_01 : ARMAFPV_Crocus_AT_Base { scope = 0; class EventHandlers; };
    class ARMAFPV_Crocus_AT_Base_OCimport_02 : ARMAFPV_Crocus_AT_Base_OCimport_01 { class EventHandlers; };

    class O_Crocus_AT;
    class O_Crocus_AT_OCimport_01 : O_Crocus_AT { scope = 0; class EventHandlers; };
    class O_Crocus_AT_OCimport_02 : O_Crocus_AT_OCimport_01 { class EventHandlers; };

    class O_Pilot_F;
    class O_Pilot_F_OCimport_01 : O_Pilot_F { scope = 0; class EventHandlers; };
    class O_Pilot_F_OCimport_02 : O_Pilot_F_OCimport_01 { class EventHandlers; };

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

    class O_Soldier_base_F;
    class O_Soldier_base_F_OCimport_01 : O_Soldier_base_F { scope = 0; class EventHandlers; };
    class O_Soldier_base_F_OCimport_02 : O_Soldier_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Attack_02_dynamicLoadout_base_F;
    class Heli_Attack_02_dynamicLoadout_base_F_OCimport_01 : Heli_Attack_02_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class Heli_Attack_02_dynamicLoadout_base_F_OCimport_02 : Heli_Attack_02_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Light_02_dynamicLoadout_base_F;
    class Heli_Light_02_dynamicLoadout_base_F_OCimport_01 : Heli_Light_02_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class Heli_Light_02_dynamicLoadout_base_F_OCimport_02 : Heli_Light_02_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Light_02_unarmed_base_F;
    class Heli_Light_02_unarmed_base_F_OCimport_01 : Heli_Light_02_unarmed_base_F { scope = 0; class EventHandlers; };
    class Heli_Light_02_unarmed_base_F_OCimport_02 : Heli_Light_02_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Transport_04_base_F;
    class Heli_Transport_04_base_F_OCimport_01 : Heli_Transport_04_base_F { scope = 0; class EventHandlers; };
    class Heli_Transport_04_base_F_OCimport_02 : Heli_Transport_04_base_F_OCimport_01 { class EventHandlers; };

    class O_KVN_AT;
    class O_KVN_AT_OCimport_01 : O_KVN_AT { scope = 0; class EventHandlers; };
    class O_KVN_AT_OCimport_02 : O_KVN_AT_OCimport_01 { class EventHandlers; };

    class O_KVN_AP;
    class O_KVN_AP_OCimport_01 : O_KVN_AP { scope = 0; class EventHandlers; };
    class O_KVN_AP_OCimport_02 : O_KVN_AP_OCimport_01 { class EventHandlers; };

    class vnd_KVN_Base;
    class vnd_KVN_Base_OCimport_01 : vnd_KVN_Base { scope = 0; class EventHandlers; };
    class vnd_KVN_Base_OCimport_02 : vnd_KVN_Base_OCimport_01 { class EventHandlers; };

    class LSV_02_AT_base_F;
    class LSV_02_AT_base_F_OCimport_01 : LSV_02_AT_base_F { scope = 0; class EventHandlers; };
    class LSV_02_AT_base_F_OCimport_02 : LSV_02_AT_base_F_OCimport_01 { class EventHandlers; };

    class LSV_02_armed_base_F;
    class LSV_02_armed_base_F_OCimport_01 : LSV_02_armed_base_F { scope = 0; class EventHandlers; };
    class LSV_02_armed_base_F_OCimport_02 : LSV_02_armed_base_F_OCimport_01 { class EventHandlers; };

    class LSV_02_unarmed_base_F;
    class LSV_02_unarmed_base_F_OCimport_01 : LSV_02_unarmed_base_F { scope = 0; class EventHandlers; };
    class LSV_02_unarmed_base_F_OCimport_02 : LSV_02_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class Rescue_duck_base_F;
    class Rescue_duck_base_F_OCimport_01 : Rescue_duck_base_F { scope = 0; class EventHandlers; };
    class Rescue_duck_base_F_OCimport_02 : Rescue_duck_base_F_OCimport_01 { class EventHandlers; };

    class O_MBT_02_arty_base_F;
    class O_MBT_02_arty_base_F_OCimport_01 : O_MBT_02_arty_base_F { scope = 0; class EventHandlers; };
    class O_MBT_02_arty_base_F_OCimport_02 : O_MBT_02_arty_base_F_OCimport_01 { class EventHandlers; };

    class O_MBT_02_base_F;
    class O_MBT_02_base_F_OCimport_01 : O_MBT_02_base_F { scope = 0; class EventHandlers; };
    class O_MBT_02_base_F_OCimport_02 : O_MBT_02_base_F_OCimport_01 { class EventHandlers; };

    class O_MBT_02_railgun_base_F;
    class O_MBT_02_railgun_base_F_OCimport_01 : O_MBT_02_railgun_base_F { scope = 0; class EventHandlers; };
    class O_MBT_02_railgun_base_F_OCimport_02 : O_MBT_02_railgun_base_F_OCimport_01 { class EventHandlers; };

    class MBT_04_cannon_base_F;
    class MBT_04_cannon_base_F_OCimport_01 : MBT_04_cannon_base_F { scope = 0; class EventHandlers; };
    class MBT_04_cannon_base_F_OCimport_02 : MBT_04_cannon_base_F_OCimport_01 { class EventHandlers; };

    class MBT_04_command_base_F;
    class MBT_04_command_base_F_OCimport_01 : MBT_04_command_base_F { scope = 0; class EventHandlers; };
    class MBT_04_command_base_F_OCimport_02 : MBT_04_command_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_02_base_F;
    class MRAP_02_base_F_OCimport_01 : MRAP_02_base_F { scope = 0; class EventHandlers; };
    class MRAP_02_base_F_OCimport_02 : MRAP_02_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_02_gmg_base_F;
    class MRAP_02_gmg_base_F_OCimport_01 : MRAP_02_gmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_02_gmg_base_F_OCimport_02 : MRAP_02_gmg_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_02_hmg_base_F;
    class MRAP_02_hmg_base_F_OCimport_01 : MRAP_02_hmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_02_hmg_base_F_OCimport_02 : MRAP_02_hmg_base_F_OCimport_01 { class EventHandlers; };

    class Mortar_01_base_F;
    class Mortar_01_base_F_OCimport_01 : Mortar_01_base_F { scope = 0; class EventHandlers; };
    class Mortar_01_base_F_OCimport_02 : Mortar_01_base_F_OCimport_01 { class EventHandlers; };

    class O_officer_F;
    class O_officer_F_OCimport_01 : O_officer_F { scope = 0; class EventHandlers; };
    class O_officer_F_OCimport_02 : O_officer_F_OCimport_01 { class EventHandlers; };

    class O_Officer_Parade_F;
    class O_Officer_Parade_F_OCimport_01 : O_Officer_Parade_F { scope = 0; class EventHandlers; };
    class O_Officer_Parade_F_OCimport_02 : O_Officer_Parade_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_recon_base;
    class O_Soldier_recon_base_OCimport_01 : O_Soldier_recon_base { scope = 0; class EventHandlers; };
    class O_Soldier_recon_base_OCimport_02 : O_Soldier_recon_base_OCimport_01 { class EventHandlers; };

    class Pickup_comms_base_rf;
    class Pickup_comms_base_rf_OCimport_01 : Pickup_comms_base_rf { scope = 0; class EventHandlers; };
    class Pickup_comms_base_rf_OCimport_02 : Pickup_comms_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_rcws_base_rf;
    class Pickup_01_rcws_base_rf_OCimport_01 : Pickup_01_rcws_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_rcws_base_rf_OCimport_02 : Pickup_01_rcws_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class O_helipilot_F;
    class O_helipilot_F_OCimport_01 : O_helipilot_F { scope = 0; class EventHandlers; };
    class O_helipilot_F_OCimport_02 : O_helipilot_F_OCimport_01 { class EventHandlers; };

    class Plane_CAS_02_dynamicLoadout_base_F;
    class Plane_CAS_02_dynamicLoadout_base_F_OCimport_01 : Plane_CAS_02_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class Plane_CAS_02_dynamicLoadout_base_F_OCimport_02 : Plane_CAS_02_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class Plane_Fighter_02_Base_F;
    class Plane_Fighter_02_Base_F_OCimport_01 : Plane_Fighter_02_Base_F { scope = 0; class EventHandlers; };
    class Plane_Fighter_02_Base_F_OCimport_02 : Plane_Fighter_02_Base_F_OCimport_01 { class EventHandlers; };

    class Plane_Transport_01_infantry_base_F;
    class Plane_Transport_01_infantry_base_F_OCimport_01 : Plane_Transport_01_infantry_base_F { scope = 0; class EventHandlers; };
    class Plane_Transport_01_infantry_base_F_OCimport_02 : Plane_Transport_01_infantry_base_F_OCimport_01 { class EventHandlers; };

    class Plane_Transport_01_vehicle_base_F;
    class Plane_Transport_01_vehicle_base_F_OCimport_01 : Plane_Transport_01_vehicle_base_F { scope = 0; class EventHandlers; };
    class Plane_Transport_01_vehicle_base_F_OCimport_02 : Plane_Transport_01_vehicle_base_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_AR_F;
    class O_Soldier_AR_F_OCimport_01 : O_Soldier_AR_F { scope = 0; class EventHandlers; };
    class O_Soldier_AR_F_OCimport_02 : O_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_GL_F;
    class O_Soldier_GL_F_OCimport_01 : O_Soldier_GL_F { scope = 0; class EventHandlers; };
    class O_Soldier_GL_F_OCimport_02 : O_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_HAT_F;
    class O_Soldier_HAT_F_OCimport_01 : O_Soldier_HAT_F { scope = 0; class EventHandlers; };
    class O_Soldier_HAT_F_OCimport_02 : O_Soldier_HAT_F_OCimport_01 { class EventHandlers; };

    class O_soldier_F;
    class O_soldier_F_OCimport_01 : O_soldier_F { scope = 0; class EventHandlers; };
    class O_soldier_F_OCimport_02 : O_soldier_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_SL_F;
    class O_Soldier_SL_F_OCimport_01 : O_Soldier_SL_F { scope = 0; class EventHandlers; };
    class O_Soldier_SL_F_OCimport_02 : O_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class O_soldier_UAV_F;
    class O_soldier_UAV_F_OCimport_01 : O_soldier_UAV_F { scope = 0; class EventHandlers; };
    class O_soldier_UAV_F_OCimport_02 : O_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class O_medic_F;
    class O_medic_F_OCimport_01 : O_medic_F { scope = 0; class EventHandlers; };
    class O_medic_F_OCimport_02 : O_medic_F_OCimport_01 { class EventHandlers; };

    class O_soldier_M_F;
    class O_soldier_M_F_OCimport_01 : O_soldier_M_F { scope = 0; class EventHandlers; };
    class O_soldier_M_F_OCimport_02 : O_soldier_M_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class O_Quadbike_01_F;
    class O_Quadbike_01_F_OCimport_01 : O_Quadbike_01_F { scope = 0; class EventHandlers; };
    class O_Quadbike_01_F_OCimport_02 : O_Quadbike_01_F_OCimport_01 { class EventHandlers; };

    class Radar_System_02_base_F;
    class Radar_System_02_base_F_OCimport_01 : Radar_System_02_base_F { scope = 0; class EventHandlers; };
    class Radar_System_02_base_F_OCimport_02 : Radar_System_02_base_F_OCimport_01 { class EventHandlers; };

    class O_UAV_02_lxWS;
    class O_UAV_02_lxWS_OCimport_01 : O_UAV_02_lxWS { scope = 0; class EventHandlers; };
    class O_UAV_02_lxWS_OCimport_02 : O_UAV_02_lxWS_OCimport_01 { class EventHandlers; };

    class O_UAV_01_F;
    class O_UAV_01_F_OCimport_01 : O_UAV_01_F { scope = 0; class EventHandlers; };
    class O_UAV_01_F_OCimport_02 : O_UAV_01_F_OCimport_01 { class EventHandlers; };

    class C_IDAP_UAV_06_antimine_F;
    class C_IDAP_UAV_06_antimine_F_OCimport_01 : C_IDAP_UAV_06_antimine_F { scope = 0; class EventHandlers; };
    class C_IDAP_UAV_06_antimine_F_OCimport_02 : C_IDAP_UAV_06_antimine_F_OCimport_01 { class EventHandlers; };

    class O_Static_Designator_02_F;
    class O_Static_Designator_02_F_OCimport_01 : O_Static_Designator_02_F { scope = 0; class EventHandlers; };
    class O_Static_Designator_02_F_OCimport_02 : O_Static_Designator_02_F_OCimport_01 { class EventHandlers; };

    class O_UAV_06_F;
    class O_UAV_06_F_OCimport_01 : O_UAV_06_F { scope = 0; class EventHandlers; };
    class O_UAV_06_F_OCimport_02 : O_UAV_06_F_OCimport_01 { class EventHandlers; };

    class O_UGV_02_Demining_F;
    class O_UGV_02_Demining_F_OCimport_01 : O_UGV_02_Demining_F { scope = 0; class EventHandlers; };
    class O_UGV_02_Demining_F_OCimport_02 : O_UGV_02_Demining_F_OCimport_01 { class EventHandlers; };

    class O_UGV_02_Science_F;
    class O_UGV_02_Science_F_OCimport_01 : O_UGV_02_Science_F { scope = 0; class EventHandlers; };
    class O_UGV_02_Science_F_OCimport_02 : O_UGV_02_Science_F_OCimport_01 { class EventHandlers; };

    class B_SAM_System_01_F;
    class B_SAM_System_01_F_OCimport_01 : B_SAM_System_01_F { scope = 0; class EventHandlers; };
    class B_SAM_System_01_F_OCimport_02 : B_SAM_System_01_F_OCimport_01 { class EventHandlers; };

    class B_SAM_System_02_F;
    class B_SAM_System_02_F_OCimport_01 : B_SAM_System_02_F { scope = 0; class EventHandlers; };
    class B_SAM_System_02_F_OCimport_02 : B_SAM_System_02_F_OCimport_01 { class EventHandlers; };

    class SAM_System_04_base_F;
    class SAM_System_04_base_F_OCimport_01 : SAM_System_04_base_F { scope = 0; class EventHandlers; };
    class SAM_System_04_base_F_OCimport_02 : SAM_System_04_base_F_OCimport_01 { class EventHandlers; };

    class SDV_01_base_F;
    class SDV_01_base_F_OCimport_01 : SDV_01_base_F { scope = 0; class EventHandlers; };
    class SDV_01_base_F_OCimport_02 : SDV_01_base_F_OCimport_01 { class EventHandlers; };

    class O_soldierU_F;
    class O_soldierU_F_OCimport_01 : O_soldierU_F { scope = 0; class EventHandlers; };
    class O_soldierU_F_OCimport_02 : O_soldierU_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_AAT_F;
    class O_Soldier_AAT_F_OCimport_01 : O_Soldier_AAT_F { scope = 0; class EventHandlers; };
    class O_Soldier_AAT_F_OCimport_02 : O_Soldier_AAT_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_support_base_F;
    class O_Soldier_support_base_F_OCimport_01 : O_Soldier_support_base_F { scope = 0; class EventHandlers; };
    class O_Soldier_support_base_F_OCimport_02 : O_Soldier_support_base_F_OCimport_01 { class EventHandlers; };

    class Static_Designator_02_base_F;
    class Static_Designator_02_base_F_OCimport_01 : Static_Designator_02_base_F { scope = 0; class EventHandlers; };
    class Static_Designator_02_base_F_OCimport_02 : Static_Designator_02_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_Ammo_base_F;
    class Truck_02_Ammo_base_F_OCimport_01 : Truck_02_Ammo_base_F { scope = 0; class EventHandlers; };
    class Truck_02_Ammo_base_F_OCimport_02 : Truck_02_Ammo_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_MRL_base_F;
    class Truck_02_MRL_base_F_OCimport_01 : Truck_02_MRL_base_F { scope = 0; class EventHandlers; };
    class Truck_02_MRL_base_F_OCimport_02 : Truck_02_MRL_base_F_OCimport_01 { class EventHandlers; };

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

    class Truck_03_base_F;
    class Truck_03_base_F_OCimport_01 : Truck_03_base_F { scope = 0; class EventHandlers; };
    class Truck_03_base_F_OCimport_02 : Truck_03_base_F_OCimport_01 { class EventHandlers; };

    class O_Truck_03_transport_F;
    class O_Truck_03_transport_F_OCimport_01 : O_Truck_03_transport_F { scope = 0; class EventHandlers; };
    class O_Truck_03_transport_F_OCimport_02 : O_Truck_03_transport_F_OCimport_01 { class EventHandlers; };

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

    class VTOL_02_infantry_dynamicLoadout_base_F;
    class VTOL_02_infantry_dynamicLoadout_base_F_OCimport_01 : VTOL_02_infantry_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class VTOL_02_infantry_dynamicLoadout_base_F_OCimport_02 : VTOL_02_infantry_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class VTOL_02_vehicle_dynamicLoadout_base_F;
    class VTOL_02_vehicle_dynamicLoadout_base_F_OCimport_01 : VTOL_02_vehicle_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class VTOL_02_vehicle_dynamicLoadout_base_F_OCimport_02 : VTOL_02_vehicle_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_diver_base_F;
    class O_Soldier_diver_base_F_OCimport_01 : O_Soldier_diver_base_F { scope = 0; class EventHandlers; };
    class O_Soldier_diver_base_F_OCimport_02 : O_Soldier_diver_base_F_OCimport_01 { class EventHandlers; };

    class O_ghillie_base_F;
    class O_ghillie_base_F_OCimport_01 : O_ghillie_base_F { scope = 0; class EventHandlers; };
    class O_ghillie_base_F_OCimport_02 : O_ghillie_base_F_OCimport_01 { class EventHandlers; };

    class O_ghillie_ard_F;
    class O_ghillie_ard_F_OCimport_01 : O_ghillie_ard_F { scope = 0; class EventHandlers; };
    class O_ghillie_ard_F_OCimport_02 : O_ghillie_ard_F_OCimport_01 { class EventHandlers; };

    class O_ghillie_lsh_F;
    class O_ghillie_lsh_F_OCimport_01 : O_ghillie_lsh_F { scope = 0; class EventHandlers; };
    class O_ghillie_lsh_F_OCimport_02 : O_ghillie_lsh_F_OCimport_01 { class EventHandlers; };

    class O_ghillie_sard_F;
    class O_ghillie_sard_F_OCimport_01 : O_ghillie_sard_F { scope = 0; class EventHandlers; };
    class O_ghillie_sard_F_OCimport_02 : O_ghillie_sard_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_02_F;
    class O_Soldier_02_F_OCimport_01 : O_Soldier_02_F { scope = 0; class EventHandlers; };
    class O_Soldier_02_F_OCimport_02 : O_Soldier_02_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_sniper_base_F;
    class O_Soldier_sniper_base_F_OCimport_01 : O_Soldier_sniper_base_F { scope = 0; class EventHandlers; };
    class O_Soldier_sniper_base_F_OCimport_02 : O_Soldier_sniper_base_F_OCimport_01 { class EventHandlers; };

    class O_soldier_exp_F;
    class O_soldier_exp_F_OCimport_01 : O_soldier_exp_F { scope = 0; class EventHandlers; };
    class O_soldier_exp_F_OCimport_02 : O_soldier_exp_F_OCimport_01 { class EventHandlers; };

    class AA_01_base_F;
    class AA_01_base_F_OCimport_01 : AA_01_base_F { scope = 0; class EventHandlers; };
    class AA_01_base_F_OCimport_02 : AA_01_base_F_OCimport_01 { class EventHandlers; };

    class AT_01_base_F;
    class AT_01_base_F_OCimport_01 : AT_01_base_F { scope = 0; class EventHandlers; };
    class AT_01_base_F_OCimport_02 : AT_01_base_F_OCimport_01 { class EventHandlers; };

    class O_support_AMort_F;
    class O_support_AMort_F_OCimport_01 : O_support_AMort_F { scope = 0; class EventHandlers; };
    class O_support_AMort_F_OCimport_02 : O_support_AMort_F_OCimport_01 { class EventHandlers; };

    class O_SAM_System_04_F;
    class O_SAM_System_04_F_OCimport_01 : O_SAM_System_04_F { scope = 0; class EventHandlers; };
    class O_SAM_System_04_F_OCimport_02 : O_SAM_System_04_F_OCimport_01 { class EventHandlers; };

    class O_Radar_System_02_F;
    class O_Radar_System_02_F_OCimport_01 : O_Radar_System_02_F { scope = 0; class EventHandlers; };
    class O_Radar_System_02_F_OCimport_02 : O_Radar_System_02_F_OCimport_01 { class EventHandlers; };

    class orion_F_OPF;
    class orion_F_OPF_OCimport_01 : orion_F_OPF { scope = 0; class EventHandlers; };
    class orion_F_OPF_OCimport_02 : orion_F_OPF_OCimport_01 { class EventHandlers; };

    class UAV_02_base_F;
    class UAV_02_base_F_OCimport_01 : UAV_02_base_F { scope = 0; class EventHandlers; };
    class UAV_02_base_F_OCimport_02 : UAV_02_base_F_OCimport_01 { class EventHandlers; };

    class StaticWeapon;
    class StaticWeapon_OCimport_01 : StaticWeapon { scope = 0; class EventHandlers; };
    class StaticWeapon_OCimport_02 : StaticWeapon_OCimport_01 { class EventHandlers; };

    class rksla3_uav_h450_base;
    class rksla3_uav_h450_base_OCimport_01 : rksla3_uav_h450_base { scope = 0; class EventHandlers; };
    class rksla3_uav_h450_base_OCimport_02 : rksla3_uav_h450_base_OCimport_01 { class EventHandlers; };

    class ACE_O_SpottingScope : ACE_SpottingScopeObject_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotting Scope";
        side = 0;
        faction = "opf_f";
        crew = "O_spotter_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_BoatCrew_EF : O_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aegis_O_BoatCrew_EF";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Crew_R_F : O_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"V_BandolierB_khk","lxWS_H_tank_tan_F","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandolierB_khk","lxWS_H_tank_tan_F","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_02_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"SMG_02_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed"};
        respawnMagazines[] = {"30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","30Rnd_9x21_mag_smg_02","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_AA_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_FieldPack_ocamo_AA";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_C_ACO_IRFL_F","launch_B_Titan_Coyote_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_C_ACO_IRFL_F","launch_B_Titan_Coyote_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_AR_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_LMG_Zafir_Black_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_LMG_Zafir_Black_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"150rnd_762x54_box","150rnd_762x54_box","150rnd_762x54_box","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"150rnd_762x54_box","150rnd_762x54_box","150rnd_762x54_box","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_AT_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_FieldPack_cbr_AT";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_C_ACO_IRFL_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_C_ACO_IRFL_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_A_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_FieldPack_cbr_ammo";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_Engineer_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_Carryall_ocamo_Eng";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_C_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_C_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_Exp_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_Carryall_ocamo_Exp";

        linkedItems[] = {"Atlas_V_OCarrierRig_GL_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_GL_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_C_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_C_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_GL_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"Atlas_V_OCarrierRig_GL_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_GL_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_GL_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_GL_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_HG_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_MMG_01_black_ARCO_BI_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_MMG_01_black_ARCO_BI_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_LAT_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_FieldPack_cbr_LAT";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_M_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_srifle_DMR_01_black_ARCO_IRFL_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_srifle_DMR_01_black_ARCO_IRFL_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_Medic_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_FieldPack_ocamo_medic";

        linkedItems[] = {"Atlas_V_OCarrierRig_CQB_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_CQB_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_RadioOp_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_RadioBag_01_hex_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_SL_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_TL_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"Atlas_V_OCarrierRig_GL_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_GL_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_Soldier_R_UAV_F : Atlas_O_Soldier_R_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "O_UAV_01_backpack_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","O_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_khk_F","H_O_Helmet_canvas_ocamo","NVGoggles_OPFOR","O_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_Katiba_ACO_IRFL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_CombatBoat_AT_OPF : EF_CombatBoat_AT_East_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (AT)";
        side = 0;
        faction = "opf_f";
        crew = "Aegis_O_BoatCrew_EF";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_CombatBoat_HMG_OPF : EF_CombatBoat_HMG_East_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (HMG)";
        side = 0;
        faction = "opf_f";
        crew = "Aegis_O_BoatCrew_EF";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_CombatBoat_Unarmed_OPF : EF_CombatBoat_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (Unarmed)";
        side = 0;
        faction = "opf_f";
        crew = "Aegis_O_BoatCrew_EF";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_Antiair_OPF : EF_Gyra_Antiair_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra AA";
        side = 0;
        faction = "opf_f";
        crew = "EF_O_crewU_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_Armed_OPF : EF_Gyra_Armed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra IFV";
        side = 0;
        faction = "opf_f";
        crew = "EF_O_crewU_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_HMG_OPF : EF_Gyra_HMG_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra HMG";
        side = 0;
        faction = "opf_f";
        crew = "EF_O_crewU_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_Mortar_OPF : EF_Gyra_Mortar_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra Mortar";
        side = 0;
        faction = "opf_f";
        crew = "EF_O_crewU_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_OPF : EF_Gyra_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra";
        side = 0;
        faction = "opf_f";
        crew = "EF_O_crewU_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_crewU_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_TacVest_Blk","EF_H_HelmetCrew_O_Urban","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacVest_Blk","EF_H_HelmetCrew_O_Urban","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"EF_smg_Diplomat","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"EF_smg_Diplomat","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"EF_Diplomat_25Rnd_9x19_Mag","EF_Diplomat_25Rnd_9x19_Mag","EF_Diplomat_25Rnd_9x19_Mag","EF_Diplomat_25Rnd_9x19_Mag","EF_Diplomat_25Rnd_9x19_Mag","EF_Diplomat_25Rnd_9x19_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"EF_Diplomat_25Rnd_9x19_Mag","EF_Diplomat_25Rnd_9x19_Mag","EF_Diplomat_25Rnd_9x19_Mag","EF_Diplomat_25Rnd_9x19_Mag","EF_Diplomat_25Rnd_9x19_Mag","EF_Diplomat_25Rnd_9x19_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_BLACKHORNET_UAV : GX_BLACKHORNET_UAV_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Black Hornet 4";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_DRONE40_UAV_HE : GX_B_DRONE40_UAV_HE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 HE";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_DRONE40_UAV_RECON : GX_B_DRONE40_UAV_RECON_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Recon";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_DRONE40_UAV_SMOKE_BLUE : GX_B_DRONE40_UAV_SMOKE_BLUE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Blue)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_DRONE40_UAV_SMOKE_GREEN : GX_B_DRONE40_UAV_SMOKE_GREEN_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Green)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_DRONE40_UAV_SMOKE_ORANGE : GX_B_DRONE40_UAV_SMOKE_ORANGE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Orange)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_DRONE40_UAV_SMOKE_PURPLE : GX_B_DRONE40_UAV_SMOKE_PURPLE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Purple)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_DRONE40_UAV_SMOKE_RED : GX_B_DRONE40_UAV_SMOKE_RED_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Red)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_DRONE40_UAV_SMOKE_WHITE : GX_B_DRONE40_UAV_SMOKE_WHITE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (White)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_DRONE40_UAV_SMOKE_YELLOW : GX_B_DRONE40_UAV_SMOKE_YELLOW_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Yellow)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_HONEYBADGER_UGV_AT_BLACK : GX_HONEYBADGER_UGV_AT_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Honeybadger (AT) (Black)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_HONEYBADGER_UGV_AT_DESERT : GX_HONEYBADGER_UGV_AT_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Honeybadger (AT) (Desert)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_HONEYBADGER_UGV_AT_GREEN : GX_HONEYBADGER_UGV_AT_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Honeybadger (AT) (Green)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_HONEYBADGER_UGV_AT_HEX : GX_HONEYBADGER_UGV_AT_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Honeybadger (AT) (Hex)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_HUNTER_SP_LAUNCHER : GX_HUNTER_SP_LAUNCHER_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "GX_O_HUNTER_SP_LAUNCHER";
        side = 0;
        faction = "opf_f";
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

    class GX_O_HUNTER_SP_UAV : GX_HUNTER_SP_UAV_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter-SP";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_MAGURA_V5_USV : GX_MAGURA_V5_USV_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MAGURA V5";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_MQ8B_UAV_ARMED : GX_MQ8B_UAV_ARMED_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-8B Fire Scout (Armed)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_MQ8B_UAV_RECON : GX_MQ8B_UAV_RECON_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-8B Fire Scout (Recon)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_MQ8B_UAV_RECON_SEATED : GX_O_MQ8B_UAV_RECON_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-8B Fire Scout (Recon) (Seated)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_RQ11B_UAV : GX_RQ11B_UAV_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RQ-11B Raven";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_RWS_DEFNDER_MEDIUM : GX_RWS_DEFNDER_MEDIUM_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "DeFNder Medium";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_THEMIS_UGV_CARGO : GX_THEMIS_UGV_CARGO_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "THeMIS (Cargo)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_THEMIS_UGV_DEFNDER_MEDIUM : GX_THEMIS_UGV_DEFNDER_MEDIUM_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "THeMIS (DeFNder Medium)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_O_THEMIS_UGV_HUNTER_LAUNCHER : GX_THEMIS_UGV_HUNTER_LAUNCHER_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "THeMIS (Hunter-SP Launcher)";
        side = 0;
        faction = "opf_f";
        crew = "GX_O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class JK_O_76n6_ClamShell_F : JK_76n6_ClamShell_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "76n6 Clam Shell";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class JK_O_76n6_ClamShell_Lower_F : JK_76n6_ClamShell_Lower_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "76n6 Clam Shell (Artillery Radar)";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_ammo_F : Pod_Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Ammo Pod";
        side = 3;
        faction = "opf_f";
        crew = "Civilian";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_bench_F : Pod_Heli_Transport_04_crewed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Bench Pod";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_box_F : Pod_Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Cargo Pod";
        side = 3;
        faction = "opf_f";
        crew = "Civilian";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_covered_F : Pod_Heli_Transport_04_crewed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Transport Pod";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_fuel_F : Pod_Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Fuel Pod";
        side = 3;
        faction = "opf_f";
        crew = "Civilian";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_medevac_F : Pod_Heli_Transport_04_crewed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Medical Pod";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_repair_F : Pod_Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Repair Pod";
        side = 3;
        faction = "opf_f";
        crew = "Civilian";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_AAA_System_01_F : B_AAA_System_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praetorian 1C";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_APC_Tracked_02_30mm_lxWS : O_APC_Tracked_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker (Bumerang-BM)";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_APC_Tracked_02_AA_F : O_APC_Tracked_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZSU-35 Tigris";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_APC_Tracked_02_cannon_F : O_APC_Tracked_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_APC_Wheeled_02_hmg_lxWS : APC_Wheeled_02_hmg_base_lxws_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (HMG)";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_APC_Wheeled_02_rcws_v2_F : APC_Wheeled_02_base_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_APC_Wheeled_02_unarmed_lxWS : APC_Wheeled_02_unarmed_base_lxws_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (Unarmed)";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Boat_Armed_01_hmg_F : Boat_Armed_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Speedboat HMG";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Boat_Transport_01_F : Rubber_duck_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CommandoMortar_RF : B_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Crocus_AP : ARMAFPV_Crocus_AP_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crocus AP";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Crocus_AP_TI : O_Crocus_AP_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crocus AP TI";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Crocus_AT : ARMAFPV_Crocus_AT_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crocus AT";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Crocus_AT_TI : O_Crocus_AT_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crocus AT TI";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Fighter_Pilot_F : O_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_PilotCoveralls";

        linkedItems[] = {"H_PilotHelmetFighter_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"hgun_Rook40_F","Throw","Put"};

        magazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GMG_01_A_F : GMG_01_A_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GMG_01_F : GMG_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GMG_01_high_F : GMG_01_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_HMG_01_A_F : HMG_01_A_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_HMG_01_F : HMG_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_HMG_01_high_F : HMG_01_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_HeavyGunner_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Attack_02_dynamicLoadout_F : Heli_Attack_02_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-48 Kajman";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Light_02_dynamicLoadout_F : Heli_Light_02_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Light_02_unarmed_F : Heli_Light_02_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Transport_04_F : Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Transport_04_ammo_F : Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Ammo)";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Transport_04_bench_F : Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Bench)";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Transport_04_box_F : Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Cargo)";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Transport_04_covered_F : Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Transport)";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Transport_04_fuel_F : Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Fuel)";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Transport_04_medevac_F : Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Medical)";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Heli_Transport_04_repair_F : Heli_Transport_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Repair)";
        side = 0;
        faction = "opf_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_KVN_AP : O_KVN_AT_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KVN AP";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_KVN_AP_TI : O_KVN_AP_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KVN AP TI";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_KVN_AT : vnd_KVN_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KVN AT";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_KVN_AT_TI : O_KVN_AT_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KVN AT TI";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_LSV_02_AT_F : LSV_02_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II (Metis-M)";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_LSV_02_armed_F : LSV_02_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II (M134)";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_LSV_02_unarmed_F : LSV_02_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Lifeboat : Rescue_duck_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rescue Boat";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_MBT_02_arty_F : O_MBT_02_arty_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "2S9 Sochor";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_MBT_02_cannon_F : O_MBT_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T100 Black Eagle";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_MBT_02_railgun_F : O_MBT_02_railgun_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-100X Futura";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_MBT_04_cannon_F : MBT_04_cannon_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-14 Armata";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_MBT_04_command_F : MBT_04_command_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-14K Armata";
        side = 0;
        faction = "opf_f";
        crew = "O_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_MRAP_02_F : MRAP_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Karatel";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_f";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_MRAP_02_gmg_F : MRAP_02_gmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Karatel (GMG)";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_f";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_MRAP_02_hmg_F : MRAP_02_hmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Karatel (HMG)";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_f";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Mortar_01_F : Mortar_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "O_Mortar_01_F";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Officer_Parade_F : O_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer (Parade Dress)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_officer"};

        uniformClass = "U_O_ParadeUniform_01_CSAT_F";

        linkedItems[] = {"H_ParadeDressCap_01_CSAT_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_ParadeDressCap_01_CSAT_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Officer_Parade_Veteran_F : O_Officer_Parade_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer (Veteran, Parade Dress)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_officer"};

        uniformClass = "U_O_ParadeUniform_01_CSAT_decorated_F";

        linkedItems[] = {"H_ParadeDressCap_01_CSAT_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_ParadeDressCap_01_CSAT_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Pathfinder_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Pathfinder";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_DMR_04_NS_LP_F","hgun_Rook40_snds_F","Throw","Put","laserdesignator_02"};
        respawnWeapons[] = {"srifle_DMR_04_NS_LP_F","hgun_Rook40_snds_F","Throw","Put","laserdesignator_02"};

        magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Pickup_Comms_rf : Pickup_comms_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Pickup_rcws_rf : Pickup_01_rcws_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (RCWS)";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Pickup_rf : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Pilot_F : O_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_PilotCoveralls";

        backpack = "ACE_NonSteerableParachute";

        linkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"SMG_02_ACO_F","Throw","Put"};
        respawnWeapons[] = {"SMG_02_ACO_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Plane_CAS_02_dynamicLoadout_F : Plane_CAS_02_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Yak-130";
        side = 0;
        faction = "opf_f";
        crew = "O_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Plane_Fighter_02_F : Plane_Fighter_02_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "To-201 Shikra";
        side = 0;
        faction = "opf_f";
        crew = "O_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Plane_Fighter_02_Stealth_F : Plane_Fighter_02_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "To-201 Shikra (Stealth)";
        side = 0;
        faction = "opf_f";
        crew = "O_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Plane_Transport_01_infantry_F : Plane_Transport_01_infantry_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Iran-150 (Infantry Transport)";
        side = 0;
        faction = "opf_f";
        crew = "O_pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Plane_Transport_01_vehicle_F : Plane_Transport_01_vehicle_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Iran-150 (Vehicle Transport)";
        side = 0;
        faction = "opf_f";
        crew = "O_pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Protagonist_VR_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "VR Soldier";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_Protagonist_VR";

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

    class O_QRF_Soldier_AR_RF : O_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetHeavy_Hex_RF","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetHeavy_Hex_RF","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_Zafir_flashlight_RF","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Zafir_flashlight_RF","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QRF_Soldier_GL_RF : O_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessOGL_brn","H_HelmetHeavy_Hex_RF","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessOGL_brn","H_HelmetHeavy_Hex_RF","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ash12_GL_blk_aco_snd_RF","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_ash12_GL_blk_aco_snd_RF","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QRF_Soldier_HAT_RF : O_Soldier_HAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Heavy AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_cbr_HAT";

        linkedItems[] = {"V_TacVest_khk","H_HelmetHeavy_VisorUp_Hex_RF","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetHeavy_VisorUp_Hex_RF","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_02_ACO_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"SMG_02_ACO_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QRF_Soldier_RF : O_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetHeavy_VisorUp_Hex_RF","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetHeavy_VisorUp_Hex_RF","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ash12_blk_aco_snd_flashlight_RF","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_ash12_blk_aco_snd_flashlight_RF","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QRF_Soldier_SL_RF : O_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_TacVest_khk","H_HelmetHeavy_VisorUp_Hex_RF","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetHeavy_VisorUp_Hex_RF","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ash12_LR_blk_vrco_snd_flashlight_RF","hgun_DEagle_RF","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_ash12_LR_blk_vrco_snd_flashlight_RF","hgun_DEagle_RF","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","7Rnd_50AE_Mag_RF","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QRF_Soldier_UAV_RF : O_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_UAV_01_backpack_F";

        linkedItems[] = {"V_HarnessOGL_brn","H_HelmetHeavy_Simple_Hex_RF","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessOGL_brn","H_HelmetHeavy_Simple_Hex_RF","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ash12_GL_blk_snd_RF","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_ash12_GL_blk_snd_RF","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_SmokeRed_shell_RF","1Rnd_RC40_SmokeGreen_shell_RF","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_SmokeRed_shell_RF","1Rnd_RC40_SmokeGreen_shell_RF","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QRF_medic_RF : O_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_ocamo_Medic";

        linkedItems[] = {"V_TacVest_khk","H_HelmetHeavy_Simple_Hex_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetHeavy_Simple_Hex_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ash12_blk_RF","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_ash12_blk_RF","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QRF_soldier_M_RF : O_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo_sb_hex_RF","G_Bandanna_beast","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo_sb_hex_RF","G_Bandanna_beast","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_01_black_DMS_BI_RF","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_01_black_DMS_BI_RF","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Quadbike_ALIVE : O_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quadbike (Light)";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Radar_System_02_F : Radar_System_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "R-750 Cronus Radar";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_RadioOperator_F : O_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_RadioBag_01_hex_F";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Rev_Bustard : O_UAV_02_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deployable AP-5 Roshanak";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Rev_Darter : O_UAV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deployable AR-2 Tayran";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Rev_Demine : C_IDAP_UAV_06_antimine_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deployable Demining Drone";
        side = 0;
        faction = "opf_f";
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

    class O_Rev_Designator : O_Static_Designator_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "O_Rev_Designator";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Rev_Pelican : O_UAV_06_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deployable AL-6 Jinaah";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Rev_Pelter : O_UGV_02_Demining_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "O_Rev_Pelter";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Rev_Roller : O_UGV_02_Science_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "O_Rev_Roller";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SAM_System_01_F : B_SAM_System_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk49 Spartan";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SAM_System_02_F : B_SAM_System_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk-29 ESSM";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SAM_System_04_F : SAM_System_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "S-400";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SDV_01_F : SDV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SDV";
        side = 0;
        faction = "opf_f";
        crew = "O_diver_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Sharpshooter_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_DMR_05_KHS_LP_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_05_KHS_LP_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SoldierU_GL_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_HarnessOGL_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_GL_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_GL_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SoldierU_SL_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_TacVest_gry","H_HelmetLeaderO_oucamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_TacVest_gry","H_HelmetLeaderO_oucamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SoldierU_unarmed_F : O_soldierU_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class O_Soldier_AAA_F : O_Soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_Carryall_ocamo_AAA";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_AAR_F : O_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_Carryall_ocamo_AAR";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_AAT_F : O_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_Carryall_cbr_AAT";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_AA_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_ocamo_AA";

        linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_AHAT_F : O_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Heavy AT";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_Carryall_cbr_AHAT";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_AR_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"LMG_Zafir_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Zafir_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_AT_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_cbr_AT";

        linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_A_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_cbr_Ammo";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_CBRN_F : O_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","G_AirPurifyingRespirator_02_sand_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","G_AirPurifyingRespirator_02_sand_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_flash_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_flash_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_CQ_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_sgun_AA40_ACO_LP_LxWS","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_sgun_AA40_ACO_LP_LxWS","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_GL_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessOGL_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_GL_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_GL_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_HAT_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Heavy AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_cbr_HAT";

        linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_LAT_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_cbr_LAT";

        linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_SL_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_TacVest_khk","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_TL_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_VR_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "VR Entity";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePERVR_F","Head_TK","NoGlasses"};

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

    class O_Soldier_lite_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Katiba_C_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Soldier_unarmed_F : O_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class O_Static_Designator_02_F : Static_Designator_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Designator";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Survivor_F : O_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

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

    class O_Truck_02_Ammo_F : Truck_02_Ammo_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_02_MRL_F : Truck_02_MRL_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak MRL";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_02_box_F : Truck_02_box_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_02_cargo_lxWS : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Cargo";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_02_covered_F : Truck_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_02_flatbed_lxWS : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Flatbed";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_02_fuel_F : Truck_02_fuel_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_02_medical_F : Truck_02_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_02_transport_F : Truck_02_transport_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_03_ammo_F : Truck_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Ammo";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_03_cargo_RF : O_Truck_03_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Cargo";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_03_covered_F : Truck_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Transport (covered)";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_03_device_F : Truck_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Device";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_03_fuel_F : Truck_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Fuel";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_03_medical_F : Truck_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Medical";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_03_repair_F : Truck_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Repair";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Truck_03_transport_F : Truck_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Transport";
        side = 0;
        faction = "opf_f";
        crew = "O_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_01_F : UAV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tayran AR-2";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_02_dynamicLoadout_F : UAV_02_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 0;
        displayName = "YABHON-R3";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_02_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Roshanak AP-5";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_06_F : UAV_06_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jinaah AL-6";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_06_medical_F : UAV_06_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jinaah AL-6 (Medical)";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_RC40_HE_RF : UAV_RC40_Base_HE_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 HE";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_RC40_SENSOR_RF : UAV_RC40_Base_Sensor_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Scout";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_RC40_SmokeBlue_RF : UAV_RC40_Base_SmokeBlue_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Blue)";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_RC40_SmokeGreen_RF : UAV_RC40_Base_SmokeGreen_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Green)";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_RC40_SmokeOrange_RF : UAV_RC40_Base_SmokeOrange_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Orange)";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_RC40_SmokeRed_RF : UAV_RC40_Base_SmokeRed_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Red)";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UAV_RC40_SmokeWhite_RF : UAV_RC40_Base_SmokeWhite_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (White)";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UGV_01_F : UGV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Saif";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UGV_01_medical_F : UGV_01_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Saif Medical";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UGV_01_rcws_F : UGV_01_rcws_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Saif RCWS";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UGV_02_Demining_F : UGV_02_Demining_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Akinaka ED-1D";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_UGV_02_Science_F : UGV_02_Science_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sayyah ED-1E";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Urban_HeavyGunner_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Urban_RadioOperator_F : O_soldierU_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_RadioBag_01_oucamo_F";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Urban_Sharpshooter_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"srifle_DMR_05_KHS_LP_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_05_KHS_LP_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_VTOL_02_infantry_dynamicLoadout_F : VTOL_02_infantry_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Y-32 Xi'an (Infantry Transport)";
        side = 0;
        faction = "opf_f";
        crew = "O_pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_VTOL_02_vehicle_dynamicLoadout_F : VTOL_02_vehicle_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Y-32 Xi'an (Vehicle Transport)";
        side = 0;
        faction = "opf_f";
        crew = "O_pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_crew_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_BandollierB_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_diver_F : O_Soldier_diver_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Diver";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_diver"};

        uniformClass = "U_O_Wetsuit";

        linkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_diver_TL_F : O_Soldier_diver_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Team Leader";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_diver"};

        uniformClass = "U_O_Wetsuit";

        linkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_diver_exp_F : O_Soldier_diver_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Explosive Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_diver"};

        uniformClass = "U_O_Wetsuit";

        backpack = "B_FieldPack_blk_DiverExp";

        linkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_engineer_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_Carryall_ocamo_Eng";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_engineer_U_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_Carryall_oucamo_Eng";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ghillie_ard_F : O_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Arid)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK_camo_arid","G_IRAN_default"};

        uniformClass = "U_O_FullGhillie_ard";

        linkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ghillie_lsh_F : O_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Lush)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK_camo_lush","G_IRAN_default"};

        uniformClass = "U_O_FullGhillie_lsh";

        linkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ghillie_sard_F : O_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Semi-Arid)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK_camo_semiarid","G_IRAN_default"};

        uniformClass = "U_O_FullGhillie_sard";

        linkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ghillie_spotter_ard_F : O_ghillie_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Arid)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK_camo_arid","G_IRAN_default"};

        uniformClass = "U_O_FullGhillie_ard";

        linkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
        respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ghillie_spotter_lsh_F : O_ghillie_lsh_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Lush)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK_camo_lush","G_IRAN_default"};

        uniformClass = "U_O_FullGhillie_lsh";

        linkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
        respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ghillie_spotter_sard_F : O_ghillie_sard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Semi-Arid)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK_camo_semiarid","G_IRAN_default"};

        uniformClass = "U_O_FullGhillie_sard";

        linkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
        respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_helicrew_F : O_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_PilotCoveralls";

        linkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_helipilot_F : O_Soldier_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_PilotCoveralls";

        linkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"SMG_02_ACO_F","Throw","Put"};
        respawnWeapons[] = {"SMG_02_ACO_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_medic_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_ocamo_Medic";

        linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_officer_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_officer"};

        uniformClass = "U_O_OfficerUniform_ocamo";

        linkedItems[] = {"V_Rangemaster_belt_khk","H_Beret_CSAT_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_khk","H_Beret_CSAT_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Katiba_C_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Katiba_C_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_recon_AR_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessOSpec_brn","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};
        respawnlinkedItems[] = {"V_HarnessOSpec_brn","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};

        weapons[] = {"LMG_Zafir_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Zafir_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_recon_CQ_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (Shotgun)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_sgun_AA40_ACO_LP_snds_LxWS","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_sgun_AA40_ACO_LP_snds_LxWS","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_recon_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessOSpec_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOSpec_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Katiba_C_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_recon_GL_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessOGL_brn","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_brn","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};

        weapons[] = {"arifle_Katiba_GL_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_GL_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_recon_JTAC_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_RadioBag_01_hex_F";

        linkedItems[] = {"V_HarnessOGL_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_recon_LAT_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_cbr_RPG_AT";

        linkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_recon_M_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};

        weapons[] = {"srifle_DMR_01_DMS_LP_BI_S_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_01_DMS_LP_BI_S_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_recon_TL_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessOSpec_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOSpec_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_recon_exp_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_ocamo_ReconExp";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_recon_medic_F : O_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_ocamo_ReconMedic";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_sniper_F : O_Soldier_sniper_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_GhillieSuit";

        linkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_AAA_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_Carryall_oucamo_AAA";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_AAR_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_Carryall_oucamo_AAR";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_AAT_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_Carryall_oucamo_AAT";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_AA_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_FieldPack_oucamo_AA";

        linkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_AR_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"LMG_Zafir_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Zafir_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_AT_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_FieldPack_oucamo_AT";

        linkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_A_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_FieldPack_oucamo_Ammo";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_CBRN_F : O_soldierU_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","G_AirPurifyingRespirator_02_black_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","G_AirPurifyingRespirator_02_black_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_C_ACO_flash_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_flash_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_CQ_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"Aegis_sgun_AA40_ACO_LP_LxWS","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_sgun_AA40_ACO_LP_LxWS","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_LAT_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_FieldPack_oucamo_LAT";

        linkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_M_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"srifle_DMR_01_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_01_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_TL_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        linkedItems[] = {"V_HarnessOGL_gry","H_HelmetLeaderO_oucamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_gry","H_HelmetLeaderO_oucamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_exp_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_Carryall_oucamo_Exp";

        linkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_medic_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_FieldPack_oucamo_Medic";

        linkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_TacVest_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldierU_repair_F : O_Soldier_Urban_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oucamo";

        backpack = "B_FieldPack_oucamo_Repair";

        linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
        respawnlinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_M_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_DMR_01_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_01_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_PG_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_Parachute";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_UAV_06_F : O_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_UAV_06_backpack_F";

        linkedItems[] = {"H_HelmetO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_UAV_06_medical_F : O_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_UAV_06_medical_backpack_F";

        linkedItems[] = {"H_HelmetO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_UAV_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_UAV_01_backpack_F";

        linkedItems[] = {"H_HelmetO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_UAV_lxWS : O_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxws";

        backpack = "O_UAV_02_backpack_lxWS";

        linkedItems[] = {"H_HelmetO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};

        weapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_UGV_02_Demining_F : O_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_UGV_02_Demining_backpack_F";

        linkedItems[] = {"H_HelmetO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_exp_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_Carryall_ocamo_Exp";

        linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_mine_F : O_soldier_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_Carryall_ocamo_Mine";

        linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_soldier_repair_F : O_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "B_FieldPack_cbr_Repair";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_spotter_F : O_Soldier_sniper_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_GhillieSuit";

        linkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
        respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_static_AA_F : AA_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_f";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_static_AT_F : AT_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_f";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_support_AMG_F : O_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_HMG_01_support_F";

        linkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_support_AMort_F : O_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_Mortar_01_support_F";

        linkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_support_CMort_RF : O_support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_support_GMG_F : O_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_GMG_01_weapon_F";

        linkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_support_MG_F : O_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_HMG_01_weapon_F";

        linkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_support_Mort_F : O_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 0;
        faction = "opf_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_ocamo";

        backpack = "O_Mortar_01_weapon_F";

        linkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ghost_antiship_launcher : O_SAM_System_04_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "3K72 Burevestnik (Anti-Ship)";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ghost_antiship_radar : O_Radar_System_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Surface Search Radar";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orion_F_KAB20_OPF : orion_F_OPF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orion KAB-20";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orion_F_KAB50_OPF : orion_F_OPF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orion KAB-50";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orion_F_KORNET_OPF : orion_F_OPF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orion Kornet-D (ATGM)";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orion_F_OPF : UAV_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orion";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orlan_F_OPF : UAV_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orlan-30";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orlan_tripod_launcher_OPF : StaticWeapon_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orlan Tripod Launcher";
        side = 0;
        faction = "opf_f";
        crew = "O_soldier_UAV_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class rksla3_uav_h450_2 : rksla3_uav_h450_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hermes 450";
        side = 0;
        faction = "opf_f";
        crew = "O_UAV_AI";

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
    class East {
        class OPF_F {
            class Air {
                class OIA_PO30_Squadron {
                    name = "PO-30 Squadron";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_Heli_Attack_02_F";
                        rank = "CAPTAIN";
                        position[] = {0,15,0};
                    };

                    class Unit1 {
                        vehicle = "O_Heli_Attack_02_F";
                        rank = "LIEUTENANT";
                        position[] = {15,0,0};
                    };
                };
                class OIA_PO30_Transport {
                    name = "PO-30 Transport";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_Heli_Light_02_unarmed_F";
                        rank = "CAPTAIN";
                        position[] = {0,15,0};
                    };

                    class Unit1 {
                        vehicle = "O_Heli_Light_02_unarmed_F";
                        rank = "LIEUTENANT";
                        position[] = {15,0,0};
                    };
                };
            };
            class ArmInfantry {
                class Atlas_O_InfSentry_R {
                    name = "Sentry";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_soldier_R_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_soldier_R_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Atlas_O_InfSquad_R {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_soldier_R_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_soldier_R_RadioOp_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_soldier_R_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_soldier_R_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_soldier_R_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_soldier_R_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_soldier_R_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_soldier_R_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_O_InfSquad_Weapons_R {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_soldier_R_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_soldier_R_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_soldier_R_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_soldier_R_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_soldier_R_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_soldier_R_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_soldier_R_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_soldier_R_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_O_InfTeam_AA_R {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_soldier_R_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_soldier_R_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_soldier_R_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_soldier_R_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_O_InfTeam_AT_R {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_soldier_R_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_soldier_R_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_soldier_R_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_soldier_R_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_O_InfTeam_R {
                    name = "Fire Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_soldier_R_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_soldier_R_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_soldier_R_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_soldier_R_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Armored {
                class OIA_SPGPlatoon_Scorcher {
                    name = "Artillery SPG Platoon";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";

                    class Unit0 {
                        vehicle = "O_MBT_02_arty_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_MBT_02_arty_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_MBT_02_arty_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_MBT_02_arty_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class OIA_SPGSection_Scorcher {
                    name = "Artillery SPG Section";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";

                    class Unit0 {
                        vehicle = "O_MBT_02_arty_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_MBT_02_arty_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class OIA_TankPlatoon {
                    name = "Tank Platoon";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_MBT_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_MBT_02_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class OIA_TankPlatoon_AA {
                    name = "Tank Platoon (Combined)";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_MBT_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_APC_Tracked_02_AA_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_APC_Tracked_02_AA_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class OIA_TankSection {
                    name = "Tank Section";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_MBT_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class O_TankPlatoon_Heavy {
                    name = "Tank Platoon (Heavy)";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_MBT_04_command_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_MBT_04_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_MBT_04_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_MBT_04_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_TankSection_Heavy {
                    name = "Tank Section (Heavy)";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_MBT_04_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_MBT_04_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class EF_UMotorized {
                class EF_OIA_Guard_MotorizedAirdefenseTeam {
                    name = "Guard Motorized Air-defense Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_O_Gyra_Antiair_OPF";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldierU_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldierU_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldierU_AAA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_OIA_Guard_MotorizedAntiarmorTeam {
                    name = "Guard Motorized Anti-armor Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_O_Gyra_Armed_OPF";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldierU_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldierU_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldierU_AAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_OIA_Guard_MotorizedAssaultTeam {
                    name = "Guard Motorized Assault Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_O_Gyra_Armed_OPF";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldierU_TL_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldierU_AR_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldierU_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldierU_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                };
                class EF_OIA_Guard_MotorizedPatrol {
                    name = "Guard Motorized Patrol";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_O_Gyra_OPF";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldierU_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldierU_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class EF_OIA_Guard_MotorizedTeam {
                    name = "Guard Motorized Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_O_Gyra_HMG_OPF";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldierU_TL_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldierU_AR_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldierU_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldierU_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                };
            };
            class Infantry {
                class OIA_InfAssault {
                    name = "Assault Squad";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_HeavyGunner_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_Soldier_AAR_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_Sharpshooter_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class OIA_InfHQ {
                    name = "Infantry HQ";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_soldier_SL_F";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_medic_F";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                };
                class OIA_InfSentry {
                    name = "Sentry";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class OIA_InfSniper {
                    name = "Sniper Team";
                    side = 0;
                    rarityGroup = 0.05;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_sniper_F";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_spotter_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };
                };
                class OIA_InfSquad {
                    name = "Rifle Squad";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class OIA_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_M_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class OIA_InfSupTeam {
                    name = "Support Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class OIA_InfTeam {
                    name = "Fire Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OIA_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OIA_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OIA_InfWepTeam {
                    name = "Weapons Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class OIA_QRFSquad_RF {
                    name = "QRF Rifle Squad";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_QRF_Soldier_SL_RF";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_QRF_soldier_M_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_QRF_medic_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_QRF_Soldier_RF";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_QRF_Soldier_HAT_RF";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_QRF_Soldier_AR_RF";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_QRF_Soldier_UAV_RF";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_QRF_Soldier_GL_RF";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_InfTeam_AT_Heavy {
                    name = "Anti-Armor Team (Heavy)";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_HAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_HAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_AHAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class OIA_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_APC_Wheeled_02_rcws_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class OIA_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_APC_Tracked_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_soldier_AA_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_soldier_AAA_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class OIA_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_APC_Tracked_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_soldier_AT_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_soldier_AAT_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class OIA_MechInf_CoyHQ {
                    name = "Mechanized Company HQ";
                    rarityGroup = 0.1;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_officer_F";
                        rank = "CAPTAIN";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_officer_F";
                        rank = "LIEUTENANT";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_APC_Wheeled_02_rcws_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class OIA_MechInf_Section1 {
                    name = "Mechanized 1st Rifle Section";
                    rarityGroup = 0.9;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_Soldier_SL_F";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_APC_Wheeled_02_rcws_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {13,0,0};
                    };

                    class Unit8 {
                        vehicle = "O_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {15,0,0};
                    };
                };
                class OIA_MechInf_Section2 {
                    name = "Mechanized 2nd Rifle Section";
                    rarityGroup = 0.9;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_APC_Wheeled_02_rcws_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {13,0,0};
                    };

                    class Unit8 {
                        vehicle = "O_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {15,0,0};
                    };
                };
                class OIA_MechInf_Section3 {
                    name = "Mechanized 3rd Rifle Section";
                    rarityGroup = 0.9;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_APC_Wheeled_02_rcws_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {13,0,0};
                    };
                };
                class OIA_MechInf_SectionAT {
                    name = "Mechanized Anti-Tank Section";
                    rarityGroup = 0.5;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_APC_Wheeled_02_rcws_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {13,0,0};
                    };
                };
                class OIA_MechInf_SectionMG {
                    name = "Mechanized Weapons Section";
                    rarityGroup = 0.5;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_APC_Wheeled_02_rcws_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {13,0,0};
                    };
                };
                class OIA_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_APC_Wheeled_02_rcws_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_repair_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized_MTP {
                class OIA_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class OIA_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class OIA_MotInf_ATV {
                    name = "Motorized ATV Team";
                    side = 0;
                    rarityGroup = 0.2;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_Quadbike_ALIVE";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_Quadbike_ALIVE";
                        rank = "CORPORAL";
                        position[] = {-5,-7,0};
                    };
                };
                class OIA_MotInf_GMGTeam {
                    name = "Motorized GMG Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class OIA_MotInf_HQ {
                    name = "Motorized HQ";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_soldier_SL_F";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_Medic_F";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class OIA_MotInf_MGTeam {
                    name = "Motorized HMG Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_support_MG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class OIA_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class OIA_MotInf_Reinforce {
                    name = "Motorized Reinforcements";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_Truck_03_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "O_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-8,0};
                    };

                    class Unit8 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-10,0};
                    };

                    class Unit9 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "O_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };
                };
                class OIA_MotInf_Section {
                    name = "Motorized Section";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_MRAP_02_hmg_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_MRAP_02_gmg_F";
                        rank = "CORPORAL";
                        position[] = {-5,-7,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_soldier_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };
                };
                class OIA_MotInf_Team {
                    name = "Motorized Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_MRAP_02_GMG_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class OIA_MotInf_Transport {
                    name = "Motorized Transport";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_F";

                    class Unit0 {
                        vehicle = "O_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldier_AAR_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_soldier_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_Truck_02_covered_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Naval {
                class OI_diverTeam {
                    name = "Diver Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";

                    class Unit0 {
                        vehicle = "O_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OI_diverTeam_Boat {
                    name = "Diver Team (Boat)";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";

                    class Unit0 {
                        vehicle = "O_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_Boat_Transport_01_F";
                        rank = "PRIVATE";
                        position[] = {-32,-57,0};
                    };
                };
                class OI_diverTeam_SDV {
                    name = "Diver Team (SDV)";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";

                    class Unit0 {
                        vehicle = "O_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_diver_F";
                        rank = "PRIVATE";
                        position[] = {-6,-6,0};
                    };

                    class Unit3 {
                        vehicle = "O_diver_F";
                        rank = "PRIVATE";
                        position[] = {11,-11,0};
                    };

                    class Unit4 {
                        vehicle = "O_SDV_01_F";
                        rank = "PRIVATE";
                        position[] = {-16,-16,0};
                    };

                    class Unit5 {
                        vehicle = "O_SDV_01_F";
                        rank = "PRIVATE";
                        position[] = {21,-21,0};
                    };
                };
                class OI_sentryTeam_SpeedBoat {
                    name = "Sentry Team (Speed Boat)";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_Boat_Armed_01_hmg_F";
                        rank = "PRIVATE";
                        position[] = {-32,-57,0};
                    };
                };
            };
            class SpecOps {
                class OIA_ReconSquad {
                    name = "Recon Squad";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_recon_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_Pathfinder_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class OI_SniperTeam {
                    name = "Sniper Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_spotter_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_sniper_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
                class OI_diverTeam {
                    name = "Diver Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OI_reconPatrol {
                    name = "Recon Patrol";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OI_reconSentry {
                    name = "Recon Sentry";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_recon_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class OI_reconTeam {
                    name = "Recon Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_recon_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
            class Support {
                class OIA_Support_Mort_RF {
                    name = "Light Mortar Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";

                    class Unit0 {
                        vehicle = "O_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_support_CMort_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class OI_recon_EOD {
                    name = "Recon Support Team (EOD)";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_recon_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OI_support_CLS {
                    name = "Support Team (CLS)";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OI_support_ENG {
                    name = "Support Team (Engineer)";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OI_support_EOD {
                    name = "Support Team (EOD)";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OI_support_GMG {
                    name = "GMG Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class OI_support_MG {
                    name = "HMG Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_support_MG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class OI_support_Mort {
                    name = "Mortar Team";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";

                    class Unit0 {
                        vehicle = "O_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
            class UInfantry {
                class OIA_GuardSentry {
                    name = "Guard Sentry";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldierU_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldierU_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class OIA_GuardSquad {
                    name = "Guard Squad";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldierU_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_Urban_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldierU_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldierU_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_soldierU_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_soldierU_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_soldierU_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_soldierU_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class OIA_GuardTeam {
                    name = "Guard Patrol";
                    side = 0;
                    faction = "OPF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_soldierU_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_soldierU_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_soldierU_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_soldierU_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
