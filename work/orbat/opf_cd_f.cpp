//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class OPF_CD_F {
        displayName = "China (Desert)";
        side = 0;
        priority = 3;
        icon = "\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_OPF_T_CA.paa";
        flag = "\A3_Aegis\Data_F_Aegis\Flags\flag_China_CO.paa";
    };
};

class CfgVehicles {

    class O_T_Crew_F;
    class O_T_Crew_F_OCimport_01 : O_T_Crew_F { scope = 0; class EventHandlers; };
    class O_T_Crew_F_OCimport_02 : O_T_Crew_F_OCimport_01 { class EventHandlers; };

    class O_T_Engineer_F;
    class O_T_Engineer_F_OCimport_01 : O_T_Engineer_F { scope = 0; class EventHandlers; };
    class O_T_Engineer_F_OCimport_02 : O_T_Engineer_F_OCimport_01 { class EventHandlers; };

    class O_T_Fighter_Pilot_F;
    class O_T_Fighter_Pilot_F_OCimport_01 : O_T_Fighter_Pilot_F { scope = 0; class EventHandlers; };
    class O_T_Fighter_Pilot_F_OCimport_02 : O_T_Fighter_Pilot_F_OCimport_01 { class EventHandlers; };

    class O_T_HeavyGunner_F;
    class O_T_HeavyGunner_F_OCimport_01 : O_T_HeavyGunner_F { scope = 0; class EventHandlers; };
    class O_T_HeavyGunner_F_OCimport_02 : O_T_HeavyGunner_F_OCimport_01 { class EventHandlers; };

    class O_T_Helicrew_F;
    class O_T_Helicrew_F_OCimport_01 : O_T_Helicrew_F { scope = 0; class EventHandlers; };
    class O_T_Helicrew_F_OCimport_02 : O_T_Helicrew_F_OCimport_01 { class EventHandlers; };

    class O_T_Helipilot_F;
    class O_T_Helipilot_F_OCimport_01 : O_T_Helipilot_F { scope = 0; class EventHandlers; };
    class O_T_Helipilot_F_OCimport_02 : O_T_Helipilot_F_OCimport_01 { class EventHandlers; };

    class O_T_Medic_F;
    class O_T_Medic_F_OCimport_01 : O_T_Medic_F { scope = 0; class EventHandlers; };
    class O_T_Medic_F_OCimport_02 : O_T_Medic_F_OCimport_01 { class EventHandlers; };

    class O_T_Officer_F;
    class O_T_Officer_F_OCimport_01 : O_T_Officer_F { scope = 0; class EventHandlers; };
    class O_T_Officer_F_OCimport_02 : O_T_Officer_F_OCimport_01 { class EventHandlers; };

    class O_T_Pathfinder_F;
    class O_T_Pathfinder_F_OCimport_01 : O_T_Pathfinder_F { scope = 0; class EventHandlers; };
    class O_T_Pathfinder_F_OCimport_02 : O_T_Pathfinder_F_OCimport_01 { class EventHandlers; };

    class O_T_Pilot_F;
    class O_T_Pilot_F_OCimport_01 : O_T_Pilot_F { scope = 0; class EventHandlers; };
    class O_T_Pilot_F_OCimport_02 : O_T_Pilot_F_OCimport_01 { class EventHandlers; };

    class O_T_RadioOperator_F;
    class O_T_RadioOperator_F_OCimport_01 : O_T_RadioOperator_F { scope = 0; class EventHandlers; };
    class O_T_RadioOperator_F_OCimport_02 : O_T_RadioOperator_F_OCimport_01 { class EventHandlers; };

    class O_T_Recon_AR_F;
    class O_T_Recon_AR_F_OCimport_01 : O_T_Recon_AR_F { scope = 0; class EventHandlers; };
    class O_T_Recon_AR_F_OCimport_02 : O_T_Recon_AR_F_OCimport_01 { class EventHandlers; };

    class O_T_Recon_CQ_F;
    class O_T_Recon_CQ_F_OCimport_01 : O_T_Recon_CQ_F { scope = 0; class EventHandlers; };
    class O_T_Recon_CQ_F_OCimport_02 : O_T_Recon_CQ_F_OCimport_01 { class EventHandlers; };

    class O_T_Recon_Exp_F;
    class O_T_Recon_Exp_F_OCimport_01 : O_T_Recon_Exp_F { scope = 0; class EventHandlers; };
    class O_T_Recon_Exp_F_OCimport_02 : O_T_Recon_Exp_F_OCimport_01 { class EventHandlers; };

    class O_T_Recon_F;
    class O_T_Recon_F_OCimport_01 : O_T_Recon_F { scope = 0; class EventHandlers; };
    class O_T_Recon_F_OCimport_02 : O_T_Recon_F_OCimport_01 { class EventHandlers; };

    class O_T_Recon_GL_F;
    class O_T_Recon_GL_F_OCimport_01 : O_T_Recon_GL_F { scope = 0; class EventHandlers; };
    class O_T_Recon_GL_F_OCimport_02 : O_T_Recon_GL_F_OCimport_01 { class EventHandlers; };

    class O_T_Recon_JTAC_F;
    class O_T_Recon_JTAC_F_OCimport_01 : O_T_Recon_JTAC_F { scope = 0; class EventHandlers; };
    class O_T_Recon_JTAC_F_OCimport_02 : O_T_Recon_JTAC_F_OCimport_01 { class EventHandlers; };

    class O_T_Recon_LAT_F;
    class O_T_Recon_LAT_F_OCimport_01 : O_T_Recon_LAT_F { scope = 0; class EventHandlers; };
    class O_T_Recon_LAT_F_OCimport_02 : O_T_Recon_LAT_F_OCimport_01 { class EventHandlers; };

    class O_T_Recon_M_F;
    class O_T_Recon_M_F_OCimport_01 : O_T_Recon_M_F { scope = 0; class EventHandlers; };
    class O_T_Recon_M_F_OCimport_02 : O_T_Recon_M_F_OCimport_01 { class EventHandlers; };

    class O_T_Recon_Medic_F;
    class O_T_Recon_Medic_F_OCimport_01 : O_T_Recon_Medic_F { scope = 0; class EventHandlers; };
    class O_T_Recon_Medic_F_OCimport_02 : O_T_Recon_Medic_F_OCimport_01 { class EventHandlers; };

    class O_T_Recon_TL_F;
    class O_T_Recon_TL_F_OCimport_01 : O_T_Recon_TL_F { scope = 0; class EventHandlers; };
    class O_T_Recon_TL_F_OCimport_02 : O_T_Recon_TL_F_OCimport_01 { class EventHandlers; };

    class O_T_Sharpshooter_F;
    class O_T_Sharpshooter_F_OCimport_01 : O_T_Sharpshooter_F { scope = 0; class EventHandlers; };
    class O_T_Sharpshooter_F_OCimport_02 : O_T_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class O_sniper_F;
    class O_sniper_F_OCimport_01 : O_sniper_F { scope = 0; class EventHandlers; };
    class O_sniper_F_OCimport_02 : O_sniper_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_AAA_F;
    class O_T_Soldier_AAA_F_OCimport_01 : O_T_Soldier_AAA_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_AAA_F_OCimport_02 : O_T_Soldier_AAA_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_AAR_F;
    class O_T_Soldier_AAR_F_OCimport_01 : O_T_Soldier_AAR_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_AAR_F_OCimport_02 : O_T_Soldier_AAR_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_AAT_F;
    class O_T_Soldier_AAT_F_OCimport_01 : O_T_Soldier_AAT_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_AAT_F_OCimport_02 : O_T_Soldier_AAT_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_AA_F;
    class O_T_Soldier_AA_F_OCimport_01 : O_T_Soldier_AA_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_AA_F_OCimport_02 : O_T_Soldier_AA_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_AHAT_F;
    class O_T_Soldier_AHAT_F_OCimport_01 : O_T_Soldier_AHAT_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_AHAT_F_OCimport_02 : O_T_Soldier_AHAT_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_AR_F;
    class O_T_Soldier_AR_F_OCimport_01 : O_T_Soldier_AR_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_AR_F_OCimport_02 : O_T_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_AT_F;
    class O_T_Soldier_AT_F_OCimport_01 : O_T_Soldier_AT_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_AT_F_OCimport_02 : O_T_Soldier_AT_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_A_F;
    class O_T_Soldier_A_F_OCimport_01 : O_T_Soldier_A_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_A_F_OCimport_02 : O_T_Soldier_A_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_CBRN_F;
    class O_T_Soldier_CBRN_F_OCimport_01 : O_T_Soldier_CBRN_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_CBRN_F_OCimport_02 : O_T_Soldier_CBRN_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_CQ_F;
    class O_T_Soldier_CQ_F_OCimport_01 : O_T_Soldier_CQ_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_CQ_F_OCimport_02 : O_T_Soldier_CQ_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_Exp_F;
    class O_T_Soldier_Exp_F_OCimport_01 : O_T_Soldier_Exp_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_Exp_F_OCimport_02 : O_T_Soldier_Exp_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_F;
    class O_T_Soldier_F_OCimport_01 : O_T_Soldier_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_F_OCimport_02 : O_T_Soldier_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_GL_F;
    class O_T_Soldier_GL_F_OCimport_01 : O_T_Soldier_GL_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_GL_F_OCimport_02 : O_T_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_HAT_F;
    class O_T_Soldier_HAT_F_OCimport_01 : O_T_Soldier_HAT_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_HAT_F_OCimport_02 : O_T_Soldier_HAT_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_LAT_F;
    class O_T_Soldier_LAT_F_OCimport_01 : O_T_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_LAT_F_OCimport_02 : O_T_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_Lite_F;
    class O_T_Soldier_Lite_F_OCimport_01 : O_T_Soldier_Lite_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_Lite_F_OCimport_02 : O_T_Soldier_Lite_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_M_F;
    class O_T_Soldier_M_F_OCimport_01 : O_T_Soldier_M_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_M_F_OCimport_02 : O_T_Soldier_M_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_PG_F;
    class O_T_Soldier_PG_F_OCimport_01 : O_T_Soldier_PG_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_PG_F_OCimport_02 : O_T_Soldier_PG_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_Repair_F;
    class O_T_Soldier_Repair_F_OCimport_01 : O_T_Soldier_Repair_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_Repair_F_OCimport_02 : O_T_Soldier_Repair_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_SL_F;
    class O_T_Soldier_SL_F_OCimport_01 : O_T_Soldier_SL_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_SL_F_OCimport_02 : O_T_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_TL_F;
    class O_T_Soldier_TL_F_OCimport_01 : O_T_Soldier_TL_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_TL_F_OCimport_02 : O_T_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class O_T_soldier_UAV_06_F;
    class O_T_soldier_UAV_06_F_OCimport_01 : O_T_soldier_UAV_06_F { scope = 0; class EventHandlers; };
    class O_T_soldier_UAV_06_F_OCimport_02 : O_T_soldier_UAV_06_F_OCimport_01 { class EventHandlers; };

    class O_T_soldier_UAV_06_medical_F;
    class O_T_soldier_UAV_06_medical_F_OCimport_01 : O_T_soldier_UAV_06_medical_F { scope = 0; class EventHandlers; };
    class O_T_soldier_UAV_06_medical_F_OCimport_02 : O_T_soldier_UAV_06_medical_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_UAV_F;
    class O_T_Soldier_UAV_F_OCimport_01 : O_T_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_UAV_F_OCimport_02 : O_T_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_C_D_Soldier_UAV_F;
    class Aegis_O_C_D_Soldier_UAV_F_OCimport_01 : Aegis_O_C_D_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class Aegis_O_C_D_Soldier_UAV_F_OCimport_02 : Aegis_O_C_D_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_unarmed_F;
    class O_T_Soldier_unarmed_F_OCimport_01 : O_T_Soldier_unarmed_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_unarmed_F_OCimport_02 : O_T_Soldier_unarmed_F_OCimport_01 { class EventHandlers; };

    class O_spotter_F;
    class O_spotter_F_OCimport_01 : O_spotter_F { scope = 0; class EventHandlers; };
    class O_spotter_F_OCimport_02 : O_spotter_F_OCimport_01 { class EventHandlers; };

    class O_T_Support_AMG_F;
    class O_T_Support_AMG_F_OCimport_01 : O_T_Support_AMG_F { scope = 0; class EventHandlers; };
    class O_T_Support_AMG_F_OCimport_02 : O_T_Support_AMG_F_OCimport_01 { class EventHandlers; };

    class O_T_Support_AMort_F;
    class O_T_Support_AMort_F_OCimport_01 : O_T_Support_AMort_F { scope = 0; class EventHandlers; };
    class O_T_Support_AMort_F_OCimport_02 : O_T_Support_AMort_F_OCimport_01 { class EventHandlers; };

    class O_T_Support_GMG_F;
    class O_T_Support_GMG_F_OCimport_01 : O_T_Support_GMG_F { scope = 0; class EventHandlers; };
    class O_T_Support_GMG_F_OCimport_02 : O_T_Support_GMG_F_OCimport_01 { class EventHandlers; };

    class O_T_Support_MG_F;
    class O_T_Support_MG_F_OCimport_01 : O_T_Support_MG_F { scope = 0; class EventHandlers; };
    class O_T_Support_MG_F_OCimport_02 : O_T_Support_MG_F_OCimport_01 { class EventHandlers; };

    class O_T_Support_Mort_F;
    class O_T_Support_Mort_F_OCimport_01 : O_T_Support_Mort_F { scope = 0; class EventHandlers; };
    class O_T_Support_Mort_F_OCimport_02 : O_T_Support_Mort_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_C_D_Crew_F : O_T_Crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_BandollierB_cbr","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_BandollierB_cbr","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_f","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_f","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Engineer_F : O_T_Engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_carryall_oicamo_Eng_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Fighter_Pilot_F : O_T_Fighter_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_Pilot_F";

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

    class Aegis_O_C_D_HeavyGunner_F : O_T_HeavyGunner_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_MMG_01_tan_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_MMG_01_tan_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};

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

    class Aegis_O_C_D_Helicrew_F : O_T_Helicrew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_PilotCoveralls";

        linkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Helipilot_F : O_T_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

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

    class Aegis_O_C_D_Medic_F : O_T_Medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_FieldPack_oicamo_Medic_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Officer_F : O_T_Officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_officer"};

        uniformClass = "U_O_OfficerUniform_oicamo";

        linkedItems[] = {"V_Rangemaster_belt_cbr","H_Beret_CSAT_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_cbr","H_Beret_CSAT_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_CTAR_tan_F","hgun_Pistol_Heavy_02_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_F","hgun_Pistol_Heavy_02_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Pathfinder_F : O_T_Pathfinder_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Pathfinder";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_DMR_04_NS_LP_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};
        respawnWeapons[] = {"srifle_DMR_04_NS_LP_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};

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

    class Aegis_O_C_D_Pilot_F : O_T_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_Pilot_Coveralls";

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

    class Aegis_O_C_D_RadioOperator_F : O_T_RadioOperator_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_RadioBag_01_oicamo_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Recon_AR_F : O_T_Recon_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessOSpec_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOSpec_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTARS_tan_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTARS_tan_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","chemlight_red","chemlight_red"};
        respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","chemlight_red","chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Recon_CQ_F : O_T_Recon_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (Shotgun)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_TacVest_brn","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_brn","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_sgun_AA40_tan_ACO_LP_snds_LxWS","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_sgun_AA40_tan_ACO_LP_snds_LxWS","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Recon_Exp_F : O_T_Recon_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_carryall_oicamo_Exp_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Recon_F : O_T_Recon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessOSpec_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOSpec_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Recon_GL_F : O_T_Recon_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessOGL_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_GL_tan_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_GL_tan_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Recon_JTAC_F : O_T_Recon_JTAC_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_RadioBag_01_oicamo_F";

        linkedItems[] = {"V_HarnessOGL_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Laserdesignator_02","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Laserdesignator_02","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Recon_LAT_F : O_T_Recon_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_FieldPack_oicamo_LAT_F";

        linkedItems[] = {"V_TacVest_brn","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_brn","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Recon_M_F : O_T_Recon_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_TacVest_brn","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_brn","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_DMR_07_blk_DMS_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_07_blk_DMS_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Recon_Medic_F : O_T_Recon_Medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_FieldPack_oicamo_Medic_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetSpecO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Recon_TL_F : O_T_Recon_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessOSpec_oicamo","H_HelmetLeaderO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOSpec_oicamo","H_HelmetLeaderO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Rangefinder","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Rangefinder","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Sharpshooter_F : O_T_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

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

    class Aegis_O_C_D_Sniper_F : O_sniper_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_C_D_Sniper_oicamo_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

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

    class Aegis_O_C_D_Soldier_AAA_F : O_T_Soldier_AAA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_Carryall_oicamo_OCDAAA_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_AAR_F : O_T_Soldier_AAR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_Carryall_oicamo_OCDAAR_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_AAT_F : O_T_Soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_Carryall_oicamo_OCDAAT_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_AA_F : O_T_Soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_FieldPack_oicamo_AA_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_AHAT_F : O_T_Soldier_AHAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Heavy AT";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_Carryall_oicamo_OCDAHAT_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_AR_F : O_T_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTARS_tan_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTARS_tan_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_AT_F : O_T_Soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_FieldPack_oicamo_AT_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_A_F : O_T_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_Carryall_oicamo_OCDAmmo_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_CBRN_F : O_T_Soldier_CBRN_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_TacVest_brn","H_HelmetO_oicamo","G_AirPurifyingRespirator_02_sand_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_brn","H_HelmetO_oicamo","G_AirPurifyingRespirator_02_sand_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_CQ_F : O_T_Soldier_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_TacVest_brn","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_brn","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_sgun_AA40_tan_ACO_LP_LxWS","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_sgun_AA40_tan_ACO_LP_LxWS","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Pellets_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","8Rnd_12Gauge_AA40_Slug_tan_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_Exp_F : O_T_Soldier_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_carryall_oicamo_Exp_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_F : O_T_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_GL_F : O_T_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessOGL_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_GL_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_GL_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_HAT_F : O_T_Soldier_HAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Heavy AT)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_FieldPack_oicamo_HAT_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_LAT_F : O_T_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_FieldPack_oicamo_LAT_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_Lite_F : O_T_Soldier_Lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_BandollierB_cbr","H_MilCap_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_cbr","H_MilCap_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_CTAR_tan_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_M_F : O_T_Soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"srifle_DMR_07_blk_DMS_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_07_blk_DMS_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_PG_F : O_T_Soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_Parachute";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_Repair_F : O_T_Soldier_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "B_FieldPack_oicamo_RepSpec_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_SL_F : O_T_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_TacVest_brn","H_HelmetLeaderO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_brn","H_HelmetLeaderO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ARCO_Pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ARCO_Pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_TL_F : O_T_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessOGL_oicamo","H_HelmetO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_oicamo","H_HelmetO_oicamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_GL_tan_ARCO_Pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_GL_tan_ARCO_Pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_UAV_06_F : O_T_soldier_UAV_06_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "O_UAV_06_backpack_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UAVTerminal","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UAVTerminal","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_UAV_06_medical_F : O_T_soldier_UAV_06_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "O_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UAVTerminal","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UAVTerminal","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_UAV_F : O_T_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "O_UAV_01_backpack_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UAVTerminal","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UAVTerminal","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_UGV_02_Demining_F : Aegis_O_C_D_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "O_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UAVTerminal","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UAVTerminal","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Soldier_unarmed_F : O_T_Soldier_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

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

    class Aegis_O_C_D_Spotter_F : O_spotter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_C_D_Sniper_oicamo_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Support_AMG_F : O_T_Support_AMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "O_HMG_01_support_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Support_AMort_F : O_T_Support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "O_Mortar_01_support_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Support_GMG_F : O_T_Support_GMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "O_GMG_01_weapon_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Support_MG_F : O_T_Support_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "O_HMG_01_weapon_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_C_D_Support_Mort_F : O_T_Support_Mort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 0;
        faction = "opf_cd_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_CombatUniform_oicamo";

        backpack = "O_T_Mortar_01_weapon_F";

        linkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_HarnessO_oicamo","H_HelmetO_oicamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_CTAR_tan_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};

class CfgGroups {
    class East {
        class OPF_CD_F {
            class Infantry {
                class O_CD_InfSentry {
                    name = "Sentry";
                    side = 0;
                    faction = "OPF_CD_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_C_D_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_C_D_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_CD_InfSquad {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "OPF_CD_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_C_D_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_C_D_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_C_D_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_O_C_D_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_O_C_D_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_O_C_D_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_O_C_D_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_O_C_D_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_CD_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "OPF_CD_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_C_D_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_C_D_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_C_D_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_O_C_D_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_O_C_D_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_O_C_D_soldier_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_O_C_D_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_O_C_D_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_CD_InfTeam {
                    name = "Fire Team";
                    side = 0;
                    faction = "OPF_CD_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_C_D_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_C_D_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_C_D_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_O_C_D_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_CD_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "OPF_CD_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_C_D_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_C_D_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_C_D_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_O_C_D_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_CD_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = "OPF_CD_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_C_D_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_C_D_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_C_D_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_O_C_D_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class SpecOps {
                class O_CD_reconPatrol {
                    name = "Recon Patrol";
                    side = 0;
                    faction = "OPF_CD_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_C_D_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_C_D_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_C_D_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_O_C_D_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_CD_reconSentry {
                    name = "Recon Sentry";
                    side = 0;
                    faction = "OPF_CD_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_C_D_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_C_D_recon_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_CD_reconTeam {
                    name = "Recon Team";
                    side = 0;
                    faction = "OPF_CD_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_C_D_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_C_D_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_C_D_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_O_C_D_recon_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_O_C_D_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_O_C_D_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
        };
    };
};
