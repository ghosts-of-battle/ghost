//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class BLU_CTRG_F {
        displayName = "CTRG";
        side = 1;
        priority = 4;
        icon = "\a3\Data_F_Exp\FactionIcons\icon_CTRG_CA.paa";
        flag = "\a3\Data_F_Exp\Flags\flag_CTRG_CO.paa";
    };
};

class CfgVehicles {

    class EF_B_CombatBoat_AT_CTRG;
    class EF_B_CombatBoat_AT_CTRG_OCimport_01 : EF_B_CombatBoat_AT_CTRG { scope = 0; class EventHandlers; };
    class EF_B_CombatBoat_AT_CTRG_OCimport_02 : EF_B_CombatBoat_AT_CTRG_OCimport_01 { class EventHandlers; };

    class EF_B_CombatBoat_HMG_CTRG;
    class EF_B_CombatBoat_HMG_CTRG_OCimport_01 : EF_B_CombatBoat_HMG_CTRG { scope = 0; class EventHandlers; };
    class EF_B_CombatBoat_HMG_CTRG_OCimport_02 : EF_B_CombatBoat_HMG_CTRG_OCimport_01 { class EventHandlers; };

    class EF_B_CombatBoat_Unarmed_CTRG;
    class EF_B_CombatBoat_Unarmed_CTRG_OCimport_01 : EF_B_CombatBoat_Unarmed_CTRG { scope = 0; class EventHandlers; };
    class EF_B_CombatBoat_Unarmed_CTRG_OCimport_02 : EF_B_CombatBoat_Unarmed_CTRG_OCimport_01 { class EventHandlers; };

    class Aegis_B_Pickup_AT_RF;
    class Aegis_B_Pickup_AT_RF_OCimport_01 : Aegis_B_Pickup_AT_RF { scope = 0; class EventHandlers; };
    class Aegis_B_Pickup_AT_RF_OCimport_02 : Aegis_B_Pickup_AT_RF_OCimport_01 { class EventHandlers; };

    class B_Pickup_Comms_rf;
    class B_Pickup_Comms_rf_OCimport_01 : B_Pickup_Comms_rf { scope = 0; class EventHandlers; };
    class B_Pickup_Comms_rf_OCimport_02 : B_Pickup_Comms_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_hmg_base_rf;
    class Pickup_01_hmg_base_rf_OCimport_01 : Pickup_01_hmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_hmg_base_rf_OCimport_02 : Pickup_01_hmg_base_rf_OCimport_01 { class EventHandlers; };

    class B_Pickup_aat_rf;
    class B_Pickup_aat_rf_OCimport_01 : B_Pickup_aat_rf { scope = 0; class EventHandlers; };
    class B_Pickup_aat_rf_OCimport_02 : B_Pickup_aat_rf_OCimport_01 { class EventHandlers; };

    class B_Pickup_mmg_rf;
    class B_Pickup_mmg_rf_OCimport_01 : B_Pickup_mmg_rf { scope = 0; class EventHandlers; };
    class B_Pickup_mmg_rf_OCimport_02 : B_Pickup_mmg_rf_OCimport_01 { class EventHandlers; };

    class B_Pickup_rf;
    class B_Pickup_rf_OCimport_01 : B_Pickup_rf { scope = 0; class EventHandlers; };
    class B_Pickup_rf_OCimport_02 : B_Pickup_rf_OCimport_01 { class EventHandlers; };

    class B_sniper_F;
    class B_sniper_F_OCimport_01 : B_sniper_F { scope = 0; class EventHandlers; };
    class B_sniper_F_OCimport_02 : B_sniper_F_OCimport_01 { class EventHandlers; };

    class B_spotter_F;
    class B_spotter_F_OCimport_01 : B_spotter_F { scope = 0; class EventHandlers; };
    class B_spotter_F_OCimport_02 : B_spotter_F_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class Heli_Transport_01_Assault_base_F;
    class Heli_Transport_01_Assault_base_F_OCimport_01 : Heli_Transport_01_Assault_base_F { scope = 0; class EventHandlers; };
    class Heli_Transport_01_Assault_base_F_OCimport_02 : Heli_Transport_01_Assault_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Transport_01_DAP_base_F;
    class Heli_Transport_01_DAP_base_F_OCimport_01 : Heli_Transport_01_DAP_base_F { scope = 0; class EventHandlers; };
    class Heli_Transport_01_DAP_base_F_OCimport_02 : Heli_Transport_01_DAP_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Transport_01_base_F;
    class Heli_Transport_01_base_F_OCimport_01 : Heli_Transport_01_base_F { scope = 0; class EventHandlers; };
    class Heli_Transport_01_base_F_OCimport_02 : Heli_Transport_01_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_AT_base_F;
    class LSV_01_AT_base_F_OCimport_01 : LSV_01_AT_base_F { scope = 0; class EventHandlers; };
    class LSV_01_AT_base_F_OCimport_02 : LSV_01_AT_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_armed_base_F;
    class LSV_01_armed_base_F_OCimport_01 : LSV_01_armed_base_F { scope = 0; class EventHandlers; };
    class LSV_01_armed_base_F_OCimport_02 : LSV_01_armed_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_light_base_F;
    class LSV_01_light_base_F_OCimport_01 : LSV_01_light_base_F { scope = 0; class EventHandlers; };
    class LSV_01_light_base_F_OCimport_02 : LSV_01_light_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_unarmed_base_F;
    class LSV_01_unarmed_base_F_OCimport_01 : LSV_01_unarmed_base_F { scope = 0; class EventHandlers; };
    class LSV_01_unarmed_base_F_OCimport_02 : LSV_01_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_base_F;
    class B_Soldier_base_F_OCimport_01 : B_Soldier_base_F { scope = 0; class EventHandlers; };
    class B_Soldier_base_F_OCimport_02 : B_Soldier_base_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_Soldier_F;
    class B_CTRG_Soldier_F_OCimport_01 : B_CTRG_Soldier_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_F_OCimport_02 : B_CTRG_Soldier_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_Soldier_arid_F;
    class B_CTRG_Soldier_arid_F_OCimport_01 : B_CTRG_Soldier_arid_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_arid_F_OCimport_02 : B_CTRG_Soldier_arid_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_ghillie_base_F;
    class B_CTRG_ghillie_base_F_OCimport_01 : B_CTRG_ghillie_base_F { scope = 0; class EventHandlers; };
    class B_CTRG_ghillie_base_F_OCimport_02 : B_CTRG_ghillie_base_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_ghillie_ard_F;
    class B_CTRG_ghillie_ard_F_OCimport_01 : B_CTRG_ghillie_ard_F { scope = 0; class EventHandlers; };
    class B_CTRG_ghillie_ard_F_OCimport_02 : B_CTRG_ghillie_ard_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_ghillie_lsh_F;
    class B_CTRG_ghillie_lsh_F_OCimport_01 : B_CTRG_ghillie_lsh_F { scope = 0; class EventHandlers; };
    class B_CTRG_ghillie_lsh_F_OCimport_02 : B_CTRG_ghillie_lsh_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_ghillie_sard_F;
    class B_CTRG_ghillie_sard_F_OCimport_01 : B_CTRG_ghillie_sard_F { scope = 0; class EventHandlers; };
    class B_CTRG_ghillie_sard_F_OCimport_02 : B_CTRG_ghillie_sard_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_03_f;
    class B_Soldier_03_f_OCimport_01 : B_Soldier_03_f { scope = 0; class EventHandlers; };
    class B_Soldier_03_f_OCimport_02 : B_Soldier_03_f_OCimport_01 { class EventHandlers; };

    class B_Soldier_02_f;
    class B_Soldier_02_f_OCimport_01 : B_Soldier_02_f { scope = 0; class EventHandlers; };
    class B_Soldier_02_f_OCimport_02 : B_Soldier_02_f_OCimport_01 { class EventHandlers; };

    class B_CommandoMortar_RF;
    class B_CommandoMortar_RF_OCimport_01 : B_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_CommandoMortar_RF_OCimport_02 : B_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class B_D_CTRG_Soldier_M_lxWS;
    class B_D_CTRG_Soldier_M_lxWS_OCimport_01 : B_D_CTRG_Soldier_M_lxWS { scope = 0; class EventHandlers; };
    class B_D_CTRG_Soldier_M_lxWS_OCimport_02 : B_D_CTRG_Soldier_M_lxWS_OCimport_01 { class EventHandlers; };

    class B_CTRG_Soldier_Exp_tna_F;
    class B_CTRG_Soldier_Exp_tna_F_OCimport_01 : B_CTRG_Soldier_Exp_tna_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_Exp_tna_F_OCimport_02 : B_CTRG_Soldier_Exp_tna_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_Soldier_AR_tna_F;
    class B_CTRG_Soldier_AR_tna_F_OCimport_01 : B_CTRG_Soldier_AR_tna_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_AR_tna_F_OCimport_02 : B_CTRG_Soldier_AR_tna_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_Soldier_JTAC_tna_F;
    class B_CTRG_Soldier_JTAC_tna_F_OCimport_01 : B_CTRG_Soldier_JTAC_tna_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_JTAC_tna_F_OCimport_02 : B_CTRG_Soldier_JTAC_tna_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_Soldier_LAT2_tna_F;
    class B_CTRG_Soldier_LAT2_tna_F_OCimport_01 : B_CTRG_Soldier_LAT2_tna_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_LAT2_tna_F_OCimport_02 : B_CTRG_Soldier_LAT2_tna_F_OCimport_01 { class EventHandlers; };

    class B_D_CTRG_Soldier_LAT2_lxWS;
    class B_D_CTRG_Soldier_LAT2_lxWS_OCimport_01 : B_D_CTRG_Soldier_LAT2_lxWS { scope = 0; class EventHandlers; };
    class B_D_CTRG_Soldier_LAT2_lxWS_OCimport_02 : B_D_CTRG_Soldier_LAT2_lxWS_OCimport_01 { class EventHandlers; };

    class B_CTRG_Soldier_M_tna_F;
    class B_CTRG_Soldier_M_tna_F_OCimport_01 : B_CTRG_Soldier_M_tna_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_M_tna_F_OCimport_02 : B_CTRG_Soldier_M_tna_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_Soldier_Medic_tna_F;
    class B_CTRG_Soldier_Medic_tna_F_OCimport_01 : B_CTRG_Soldier_Medic_tna_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_Medic_tna_F_OCimport_02 : B_CTRG_Soldier_Medic_tna_F_OCimport_01 { class EventHandlers; };

    class B_ION_Soldier_SG_lxWS;
    class B_ION_Soldier_SG_lxWS_OCimport_01 : B_ION_Soldier_SG_lxWS { scope = 0; class EventHandlers; };
    class B_ION_Soldier_SG_lxWS_OCimport_02 : B_ION_Soldier_SG_lxWS_OCimport_01 { class EventHandlers; };

    class B_CTRG_Soldier_TL_tna_F;
    class B_CTRG_Soldier_TL_tna_F_OCimport_01 : B_CTRG_Soldier_TL_tna_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_TL_tna_F_OCimport_02 : B_CTRG_Soldier_TL_tna_F_OCimport_01 { class EventHandlers; };

    class B_CTRG_Soldier_tna_F;
    class B_CTRG_Soldier_tna_F_OCimport_01 : B_CTRG_Soldier_tna_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_tna_F_OCimport_02 : B_CTRG_Soldier_tna_F_OCimport_01 { class EventHandlers; };

    class B_soldier_UAV_F;
    class B_soldier_UAV_F_OCimport_01 : B_soldier_UAV_F { scope = 0; class EventHandlers; };
    class B_soldier_UAV_F_OCimport_02 : B_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class B_D_CTRG_Soldier_Exp_lxWS;
    class B_D_CTRG_Soldier_Exp_lxWS_OCimport_01 : B_D_CTRG_Soldier_Exp_lxWS { scope = 0; class EventHandlers; };
    class B_D_CTRG_Soldier_Exp_lxWS_OCimport_02 : B_D_CTRG_Soldier_Exp_lxWS_OCimport_01 { class EventHandlers; };

    class qav_abramsx_base;
    class qav_abramsx_base_OCimport_01 : qav_abramsx_base { scope = 0; class EventHandlers; };
    class qav_abramsx_base_OCimport_02 : qav_abramsx_base_OCimport_01 { class EventHandlers; };

    class qav_ripsaw_Mk44;
    class qav_ripsaw_Mk44_OCimport_01 : qav_ripsaw_Mk44 { scope = 0; class EventHandlers; };
    class qav_ripsaw_Mk44_OCimport_02 : qav_ripsaw_Mk44_OCimport_01 { class EventHandlers; };

    class Aegis_B_CTRG_CombatBoat_AT_EF : EF_B_CombatBoat_AT_CTRG_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (AT)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_CombatBoat_HMG_EF : EF_B_CombatBoat_HMG_CTRG_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (HMG)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_CombatBoat_Unarmed_EF : EF_B_CombatBoat_Unarmed_CTRG_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (Unarmed)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_Pickup_AT_sand_rf : Aegis_B_Pickup_AT_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aegis_B_CTRG_Pickup_AT_sand_rf";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_Pickup_Comms_sand_rf : B_Pickup_Comms_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_Pickup_HMG_sand_rf : Pickup_01_hmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_Pickup_aat_sand_rf : B_Pickup_aat_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_Pickup_mmg_sand_rf : B_Pickup_mmg_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MMG)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_Pickup_sand_RF : B_Pickup_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_Sniper_F : B_sniper_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_sniper"};

        uniformClass = "Aegis_U_B_Sniper_Fatigues_CTRG_F";

        linkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetB_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetB_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"Aegis_srifle_GM6B_LRPS_PointerDM_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Aegis_srifle_GM6B_LRPS_PointerDM_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_AP_Mag","Aegis_5Rnd_127x99_AP_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_AP_Mag","Aegis_5Rnd_127x99_AP_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_Spotter_F : B_spotter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_sniper"};

        uniformClass = "Aegis_U_B_Sniper_Fatigues_CTRG_F";

        linkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetB_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetB_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_CTRG_UAV_02_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AP-5 Bustard";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Heli_Transport_01_Assault_F : Heli_Transport_01_Assault_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-80 Ghost Hawk";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Heli_Transport_01_Assault_sand_F : Heli_Transport_01_Assault_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-80 Ghost Hawk (Sand)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Heli_Transport_01_Assault_tropic_F : Heli_Transport_01_Assault_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-80 Ghost Hawk (Tropic)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Heli_Transport_01_DAP_F : Heli_Transport_01_DAP_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-80 DAP Ghost Hawk";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Heli_Transport_01_DAP_sand_F : Heli_Transport_01_DAP_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-80 DAP Ghost Hawk (Sand)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Heli_Transport_01_DAP_tropic_F : Heli_Transport_01_DAP_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-80 DAP Ghost Hawk (Tropic)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Heli_Transport_01_sand_F : Heli_Transport_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-80 Ghost Hawk";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_LSV_01_AT_sand_F : LSV_01_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (Mini-Spike AT)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_LSV_01_armed_sand_F : LSV_01_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (XM312)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_LSV_01_light_sand_F : LSV_01_light_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (light)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_LSV_01_unarmed_sand_F : LSV_01_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_v2_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Sharphooter_F : B_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "O'Connor";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_B_CTRG_1";

        linkedItems[] = {"H_HelmetB_light_snakeskin","V_PlateCarrierL_CTRG","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"H_HelmetB_light_snakeskin","V_PlateCarrierL_CTRG","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"srifle_DMR_02_camo_AMS_LP_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_02_camo_AMS_LP_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_AR_F : B_CTRG_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_recon"};

        uniformClass = "U_B_CTRG_3";

        linkedItems[] = {"V_PlateCarrierH_CTRG","H_Beret_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierH_CTRG","H_Beret_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_SW_Black_Hamr_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};

        magazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_AR_arid_F : B_CTRG_Soldier_arid_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_Soldier_Arid_F";

        linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};

        magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_Exp_F : B_CTRG_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Demo Specialist";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_recon"};

        uniformClass = "U_B_CTRG_3";

        backpack = "B_Kitbag_rgr_CTRGExp_F";

        linkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_khaki_specops_UK_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_khaki_specops_UK_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_Exp_arid_F : B_CTRG_Soldier_arid_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Demo Specialist";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_Soldier_Arid_F";

        backpack = "B_Kitbag_blk_CTRGexp_F";

        linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetSpecB_light_black","G_Balaclava_TI_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetSpecB_light_black","G_Balaclava_TI_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_blk_F"};

        weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_JTAC_F : B_CTRG_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "JTAC";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_1";

        backpack = "B_RadioBag_01_mtp_F";

        linkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetSpecB_light_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetSpecB_light_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_GL_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_JTAC_arid_F : B_CTRG_Soldier_arid_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "JTAC";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_Soldier_Arid_F";

        backpack = "B_RadioBag_01_black_F";

        linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_LAT2_F : B_CTRG_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout (Light AT)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_2";

        backpack = "B_AssaultPack_rgr_CTRGLAT2_F";

        linkedItems[] = {"H_HelmetB_snakeskin","V_PlateCarrierH_CTRG","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"H_HelmetB_snakeskin","V_PlateCarrierH_CTRG","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","launch_MRAWS_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","launch_MRAWS_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_LAT2_arid_F : B_CTRG_Soldier_arid_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout (Light AT)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_Soldier_Arid_F";

        backpack = "B_AssaultPack_blk_CTRGLAT2_F";

        linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","launch_MRAWS_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","launch_MRAWS_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_LAT_F : B_CTRG_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout (AT)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_2";

        backpack = "B_AssaultPack_rgr_CTRGLAT_F";

        linkedItems[] = {"H_HelmetB_snakeskin","V_PlateCarrierH_CTRG","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"H_HelmetB_snakeskin","V_PlateCarrierH_CTRG","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","launch_NLAW_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","launch_NLAW_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_LAT_arid_F : B_CTRG_Soldier_arid_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout (AT)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_Soldier_Arid_F";

        backpack = "B_AssaultPack_blk_CTRGLAT_F";

        linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","launch_NLAW_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","launch_NLAW_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_M_F : B_CTRG_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_recon"};

        uniformClass = "U_B_CTRG_2";

        linkedItems[] = {"V_PlateCarrierL_CTRG","H_Watchcap_blk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierL_CTRG","H_Watchcap_blk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_M_arid_F : B_CTRG_Soldier_arid_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_Soldier_Arid_F";

        linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetSpecB_light_black","G_Balaclava_TI_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetSpecB_light_black","G_Balaclava_TI_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_blk_F"};

        weapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_Medic_F : B_CTRG_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramedic";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_recon"};

        uniformClass = "U_B_CTRG_2";

        backpack = "B_AssaultPack_rgr_CTRGMedic_F";

        linkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_Medic_arid_F : B_CTRG_Soldier_arid_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramedic";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_Soldier_Arid_F";

        backpack = "B_AssaultPack_blk_CTRGMedic_F";

        linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetSpecB_light_black","G_Balaclava_TI_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetSpecB_light_black","G_Balaclava_TI_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_blk_F"};

        weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_TL_F : B_CTRG_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3";

        linkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetSpecB_light_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetSpecB_light_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_TL_arid_F : B_CTRG_Soldier_arid_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_Soldier_Arid_F";

        linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_arid_v2_F : B_CTRG_Soldier_arid_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_Soldier_Arid_F";

        linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_TI_arid_F","G_Balaclava_TI_G_alt_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_Soldier_v2_F : B_CTRG_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3";

        linkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetB_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetB_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_ghillie_ard_F : B_CTRG_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Arid)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO_camo_arid","G_NATO_sniper"};

        uniformClass = "U_B_FullGhillie_ard";

        linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"srifle_DMR_02_camo_AMS_LP_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_02_camo_AMS_LP_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_ghillie_lsh_F : B_CTRG_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Lush)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO_camo_lush","G_NATO_sniper"};

        uniformClass = "U_B_FullGhillie_lsh";

        linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"srifle_DMR_02_camo_AMS_LP_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_02_camo_AMS_LP_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_ghillie_sard_F : B_CTRG_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Semi-Arid)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO_camo_semiarid","G_NATO_sniper"};

        uniformClass = "U_B_FullGhillie_sard";

        linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"srifle_DMR_02_camo_AMS_LP_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_02_camo_AMS_LP_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_ghillie_spotter_ard_F : B_CTRG_ghillie_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Arid)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO_camo_arid","G_NATO_sniper"};

        uniformClass = "U_B_FullGhillie_ard";

        linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_ghillie_spotter_lsh_F : B_CTRG_ghillie_lsh_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Lush)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO_camo_lush","G_NATO_sniper"};

        uniformClass = "U_B_FullGhillie_lsh";

        linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_ghillie_spotter_sard_F : B_CTRG_ghillie_sard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Semi-Arid)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO_camo_semiarid","G_NATO_sniper"};

        uniformClass = "U_B_FullGhillie_sard";

        linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_soldier_AR_A_F : B_Soldier_03_f_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "McKay";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"EPA_B_McKay","G_NATO_default"};

        uniformClass = "U_B_CTRG_3";

        backpack = "B_AssaultPack_mcamo_Ammo";

        linkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetSpecB_light_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetSpecB_light_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Northgate";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"EPA_B_Northgate","G_NATO_default"};

        uniformClass = "U_B_CTRG_1";

        backpack = "B_AssaultPack_rgr_LAT";

        linkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetSpecB_light_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
        respawnlinkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetSpecB_light_snakeskin","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};

        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","launch_NLAW_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","launch_NLAW_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_soldier_M_medic_F : B_Soldier_03_f_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "James";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"EPA_B_James","G_NATO_default"};

        uniformClass = "U_B_CTRG_3";

        backpack = "B_AssaultPack_rgr_Medic";

        linkedItems[] = {"V_PlateCarrierH_CTRG","H_Watchcap_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierH_CTRG","H_Watchcap_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_EBR_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_EBR_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_CTRG_soldier_engineer_exp_F : B_Soldier_02_f_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hardy";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"EPA_B_Hardy","G_NATO_default"};

        uniformClass = "U_B_CTRG_2";

        backpack = "B_Kitbag_rgr_Exp";

        linkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_khaki_specops_UK_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_khaki_specops_UK_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_Captain_Jay_F : B_Soldier_02_f_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jay";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"Jay","LanguageENGB_F"};

        uniformClass = "U_B_CTRG_1";

        linkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_khaki_specops_UK","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_khaki_specops_UK","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_CommandoMortar_RF : B_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_D_CTRG_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Sharpshooter_lxWS : B_D_CTRG_Soldier_M_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3";

        linkedItems[] = {"H_Booniehat_khk_hs","V_PlateCarrierH_CTRG","G_Bandanna_tan","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Booniehat_khk_hs","V_PlateCarrierH_CTRG","G_Bandanna_tan","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_h6_tan_vrco_snd_rf","hgun_Glock19_auto_tan_MRD_light_RF","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_h6_tan_vrco_snd_rf","hgun_Glock19_auto_tan_MRD_light_RF","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","33Rnd_9x19_Mag_Tan_RF","33Rnd_9x19_Mag_Tan_RF","33Rnd_9x19_Mag_Tan_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","33Rnd_9x19_Mag_Tan_RF","33Rnd_9x19_Mag_Tan_RF","33Rnd_9x19_Mag_Tan_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_Exp_lxWS : B_CTRG_Soldier_Exp_tna_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Demo Specialist";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3_lxWS";

        backpack = "B_D_Kitbag_cbr_CTRGExp_lxWS";

        linkedItems[] = {"lxWS_H_turban_03_sand","V_PlateCarrier_CTRG_lxWS","G_Combat_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"lxWS_H_turban_03_sand","V_PlateCarrier_CTRG_lxWS","G_Combat_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"glaunch_GLX_snake_lxWS","hgun_P07_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"glaunch_GLX_snake_lxWS","hgun_P07_F","Throw","Put","Binocular"};

        magazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Pellet_Grenade_shell_lxWS","1Rnd_Pellet_Grenade_shell_lxWS","1Rnd_Pellet_Grenade_shell_lxWS","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareRed_F","UGL_FlareYellow_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Pellet_Grenade_shell_lxWS","1Rnd_Pellet_Grenade_shell_lxWS","1Rnd_Pellet_Grenade_shell_lxWS","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareRed_F","UGL_FlareYellow_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_HG_lxWS : B_CTRG_Soldier_AR_tna_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3_lxWS";

        linkedItems[] = {"lxWS_H_turban_03_sand","V_PlateCarrier_CTRG_lxWS","G_Combat_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"lxWS_H_turban_03_sand","V_PlateCarrier_CTRG_lxWS","G_Combat_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_S77_Compact_Snakeskin_Holosight_Pointer_lxWS","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"LMG_S77_Compact_Snakeskin_Holosight_Pointer_lxWS","hgun_P07_F","Throw","Put"};

        magazines[] = {"100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_JTAC_lxWS : B_CTRG_Soldier_JTAC_tna_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "JTAC";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3_lxWS";

        backpack = "B_RadioBag_01_green_F";

        linkedItems[] = {"lxWS_H_turban_02_sand","V_PlateCarrier_CTRG_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"lxWS_H_turban_02_sand","V_PlateCarrier_CTRG_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_GL_snake_Hamr_IR_snd_lxWS","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"arifle_VelkoR5_GL_snake_Hamr_IR_snd_lxWS","hgun_P07_snds_F","Throw","Put","Laserdesignator"};

        magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_LAT2_lxWS : B_CTRG_Soldier_LAT2_tna_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout (Light AT)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3_lxWS";

        backpack = "B_AssaultPack_rgr_CTRGLAT2_F";

        linkedItems[] = {"lxWS_H_turban_02_sand","V_PlateCarrier_CTRG_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"lxWS_H_turban_02_sand","V_PlateCarrier_CTRG_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_snake_R1_IR_lxWS","launch_MRAWS_sand_F","hgun_P07_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_VelkoR5_snake_R1_IR_lxWS","launch_MRAWS_sand_F","hgun_P07_F","Throw","Put","Binocular"};

        magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_LAT_RF : B_D_CTRG_Soldier_LAT2_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Launcher)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3_lxWS";

        backpack = "B_Kitbag_LAT_cbr_RF";

        linkedItems[] = {"lxWS_H_turban_02_sand","V_PlateCarrier_CTRG_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"lxWS_H_turban_02_sand","V_PlateCarrier_CTRG_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_snake_R1_IR_lxWS","launch_PSRL1_PWS_sand_RF","hgun_Glock19_auto_tan_MRD_light_RF","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_VelkoR5_snake_R1_IR_lxWS","launch_PSRL1_PWS_sand_RF","hgun_Glock19_auto_tan_MRD_light_RF","Throw","Put","Binocular"};

        magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","33Rnd_9x19_Red_Mag_Tan_RF","33Rnd_9x19_Red_Mag_Tan_RF","33Rnd_9x19_Red_Mag_Tan_RF","PSRL1_AT_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","33Rnd_9x19_Red_Mag_Tan_RF","33Rnd_9x19_Red_Mag_Tan_RF","33Rnd_9x19_Red_Mag_Tan_RF","PSRL1_AT_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_M_lxWS : B_CTRG_Soldier_M_tna_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3";

        linkedItems[] = {"H_turban_02_mask_snake_lxws","V_PlateCarrierH_CTRG","G_Bandanna_tan","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_turban_02_mask_snake_lxws","V_PlateCarrierH_CTRG","G_Bandanna_tan","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_EBR_snake_Hamr_Pointer_Bipod_snd_lxWS","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_EBR_snake_Hamr_Pointer_Bipod_snd_lxWS","hgun_P07_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_Medic_lxWS : B_CTRG_Soldier_Medic_tna_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramedic";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_2";

        backpack = "B_AssaultPack_rgr_CTRGMedic_F";

        linkedItems[] = {"V_PlateCarrierL_CTRG","lxWS_H_turban_03_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierL_CTRG","lxWS_H_turban_03_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_snake_aco_IR_lxWS","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_snake_aco_IR_lxWS","hgun_P07_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_SG_lxWS : B_ION_Soldier_SG_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "U_B_CTRG_1";

        linkedItems[] = {"V_PlateCarrierH_CTRG","H_turban_02_mask_snake_lxws","G_Bandanna_tan","ItemMotionSensor_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierH_CTRG","H_turban_02_mask_snake_lxws","G_Bandanna_tan","ItemMotionSensor_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_aa40_snake_Holo_IR_snd_lxWS","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"sgun_aa40_snake_Holo_IR_snd_lxWS","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Slug_Snake_lxWS","8Rnd_12Gauge_AA40_Slug_Snake_lxWS","8Rnd_12Gauge_AA40_Smoke_Snake_lxWS","20Rnd_12Gauge_AA40_HE_Snake_lxWS","8Rnd_12Gauge_AA40_HE_Snake_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Slug_Snake_lxWS","8Rnd_12Gauge_AA40_Slug_Snake_lxWS","8Rnd_12Gauge_AA40_Smoke_Snake_lxWS","20Rnd_12Gauge_AA40_HE_Snake_lxWS","8Rnd_12Gauge_AA40_HE_Snake_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_TL_lxWS : B_CTRG_Soldier_TL_tna_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3";

        linkedItems[] = {"V_PlateCarrierH_CTRG","lxWS_H_turban_03_gray","G_Combat_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};
        respawnlinkedItems[] = {"V_PlateCarrierH_CTRG","lxWS_H_turban_03_gray","G_Combat_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};

        weapons[] = {"arifle_VelkoR5_snake_Holo_IR_Snd_lxWS","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_VelkoR5_snake_Holo_IR_Snd_lxWS","hgun_P07_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"50Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"50Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_lxWS : B_CTRG_Soldier_tna_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3_lxWS";

        linkedItems[] = {"V_PlateCarrier_CTRG_lxWS","lxWS_H_turban_03_sand","G_Lowprofile","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier_CTRG_lxWS","lxWS_H_turban_03_sand","G_Lowprofile","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_Para_snake_holosight_snd_lxWS","hgun_P07_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SLR_Para_snake_holosight_snd_lxWS","hgun_P07_snds_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS","20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS","20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_Soldier_sniper_lxWS : B_D_CTRG_Soldier_M_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3";

        linkedItems[] = {"lxWS_H_turban_03_sand","V_PlateCarrierH_CTRG","G_Combat_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"lxWS_H_turban_03_sand","V_PlateCarrierH_CTRG","G_Combat_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_GM6_snake_DMS_lxWS","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_snake_DMS_lxWS","hgun_P07_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_soldier_UAV_lxWS : B_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_B_CTRG_3";

        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = {"V_PlateCarrierH_CTRG","lxWS_H_turban_02_gray","G_Tactical_Black","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};
        respawnlinkedItems[] = {"V_PlateCarrierH_CTRG","lxWS_H_turban_02_gray","G_Tactical_Black","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};

        weapons[] = {"arifle_VelkoR5_snake_R1_IR_lxWS","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_snake_R1_IR_lxWS","hgun_P07_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_CTRG_support_CMort_RF : B_D_CTRG_Soldier_Exp_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_B_CTRG_3_lxWS";

        backpack = "B_D_CTRG_CommandoMortar_weapon_RF";

        linkedItems[] = {"lxWS_H_turban_03_sand","V_PlateCarrier_CTRG_lxWS","G_Combat_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"lxWS_H_turban_03_sand","V_PlateCarrier_CTRG_lxWS","G_Combat_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_snake_IR_lxWS","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_snake_IR_lxWS","hgun_P07_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_Story_SF_Captain_F : B_Soldier_02_f_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Miller";
        side = 1;
        faction = "blu_ctrg_f";

        identityTypes[] = {"Miller","G_NATO_default"};

        uniformClass = "U_B_CTRG_2";

        linkedItems[] = {"V_PlateCarrierL_CTRG","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierL_CTRG","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CTRG_D_qav_abramsx : qav_abramsx_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AbramsX";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CTRG_qav_abramsx : qav_abramsx_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AbramsX";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_CTRG_Soldier_arid_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class qav_b_ctrg_ripsaw_Mk44 : qav_ripsaw_Mk44_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M6A Ripsaw (Mk44)";
        side = 1;
        faction = "blu_ctrg_f";
        crew = "B_UAV_AI";

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
    class West {
        class BLU_CTRG_F {
            class InfantryArid {
                class B_C_tna_InfSentryArid {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_CTRG_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_CTRG_Soldier_Exp_arid_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_CTRG_Soldier_arid_v2_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_C_tna_InfSquadArid {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_CTRG_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_CTRG_Soldier_TL_arid_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_CTRG_Soldier_JTAC_arid_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_CTRG_Soldier_Exp_arid_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_CTRG_Soldier_M_arid_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_CTRG_Soldier_TL_arid_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_CTRG_Soldier_Medic_arid_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_CTRG_Soldier_LAT_arid_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_CTRG_Soldier_arid_v2_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_C_tna_InfTeamArid {
                    name = "Fire Team";
                    side = 1;
                    faction = "BLU_CTRG_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_CTRG_Soldier_TL_arid_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_CTRG_Soldier_Exp_arid_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_CTRG_Soldier_arid_v2_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_CTRG_Soldier_LAT_arid_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class InfantryMediterranean {
                class B_C_tna_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_CTRG_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_CTRG_Soldier_Exp_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_CTRG_Soldier_v2_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_C_tna_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_CTRG_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_CTRG_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_CTRG_Soldier_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_CTRG_Soldier_Exp_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_CTRG_Soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_CTRG_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_CTRG_Soldier_Medic_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_CTRG_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_CTRG_Soldier_v2_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_C_tna_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "BLU_CTRG_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_CTRG_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_CTRG_Soldier_Exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_CTRG_Soldier_v2_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_CTRG_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Motorized {
                class B_C_MotInf_AssaultTeam_T {
                    name = "Motorized Assault Team";
                    side = 1;
                    faction = "BLU_CTRG_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_CTRG_LSV_01_armed_sand_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_CTRG_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_CTRG_Soldier_Exp_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class B_C_MotInf_ReconTeam_T {
                    name = "Motorized Recon Squad";
                    side = 1;
                    faction = "BLU_CTRG_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_CTRG_LSV_01_unarmed_sand_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_CTRG_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_CTRG_Soldier_Exp_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_CTRG_Soldier_Medic_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_CTRG_Soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_CTRG_Soldier_v2_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
                class B_C_tna_MotInf_AssaultTeam_T {
                    name = "Motorized Assault Team";
                    side = 1;
                    faction = "BLU_CTRG_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_CTRG_LSV_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_CTRG_Soldier_LAT_tna_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_CTRG_Soldier_Exp_tna_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class B_C_tna_MotInf_ReconTeam_T {
                    name = "Motorized Recon Squad";
                    side = 1;
                    faction = "BLU_CTRG_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_CTRG_LSV_01_unarmed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_CTRG_Soldier_LAT_tna_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_CTRG_Soldier_Exp_tna_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_CTRG_Soldier_Medic_tna_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_CTRG_Soldier_M_tna_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_CTRG_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
        };
    };
};
