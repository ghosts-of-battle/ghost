//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class E22_BLU_JC_D_F {
        displayName = "JointCom (Desert)";
        side = 1;
        priority = 3;
        icon = "static_f_JCA_LS\Icons\cfgFactionClasses_JointCom_CA.paa";
        flag = "static_f_JCA_LS\Icons\cfgFactionClasses_JointCom_Flag_CO.paa";
    };
};

class CfgVehicles {

    class E22_B_JC_W_AAA_System_01_F;
    class E22_B_JC_W_AAA_System_01_F_OCimport_01 : E22_B_JC_W_AAA_System_01_F { scope = 0; class EventHandlers; };
    class E22_B_JC_W_AAA_System_01_F_OCimport_02 : E22_B_JC_W_AAA_System_01_F_OCimport_01 { class EventHandlers; };

    class E22_B_JC_W_Radar_system_01_F;
    class E22_B_JC_W_Radar_system_01_F_OCimport_01 : E22_B_JC_W_Radar_system_01_F { scope = 0; class EventHandlers; };
    class E22_B_JC_W_Radar_system_01_F_OCimport_02 : E22_B_JC_W_Radar_system_01_F_OCimport_01 { class EventHandlers; };

    class E22_B_JC_W_SAM_system_01_F;
    class E22_B_JC_W_SAM_system_01_F_OCimport_01 : E22_B_JC_W_SAM_system_01_F { scope = 0; class EventHandlers; };
    class E22_B_JC_W_SAM_system_01_F_OCimport_02 : E22_B_JC_W_SAM_system_01_F_OCimport_01 { class EventHandlers; };

    class JCA_B_SpottingScope_01_black_F;
    class JCA_B_SpottingScope_01_black_F_OCimport_01 : JCA_B_SpottingScope_01_black_F { scope = 0; class EventHandlers; };
    class JCA_B_SpottingScope_01_black_F_OCimport_02 : JCA_B_SpottingScope_01_black_F_OCimport_01 { class EventHandlers; };

    class E22_B_JC_D_AAA_System_01_F : E22_B_JC_W_AAA_System_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADS-2 Skynex";
        side = 1;
        faction = "e22_blu_jc_d_f";
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

    class E22_B_JC_D_Radar_system_01_F : E22_B_JC_W_Radar_system_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/MPQ-64 Sentinel";
        side = 1;
        faction = "e22_blu_jc_d_f";
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

    class E22_B_JC_D_SAM_system_01_F : E22_B_JC_W_SAM_system_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADS-1 NASAMS";
        side = 1;
        faction = "e22_blu_jc_d_f";
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

    class JCA_B_SpottingScope_01_sand_F : JCA_B_SpottingScope_01_black_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotting Scope";
        side = 1;
        faction = "e22_blu_jc_d_f";
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

};
