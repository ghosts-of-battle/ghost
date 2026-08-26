//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class E22_OPF_JC_W_F {
        displayName = "JointCom (Woodland)";
        side = 0;
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

    class E22_O_JC_W_AAA_System_01_F : E22_B_JC_W_AAA_System_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADS-2 Skynex";
        side = 0;
        faction = "e22_opf_jc_w_f";
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

    class E22_O_JC_W_Radar_system_01_F : E22_B_JC_W_Radar_system_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/MPQ-64 Sentinel";
        side = 0;
        faction = "e22_opf_jc_w_f";
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

    class E22_O_JC_W_SAM_system_01_F : E22_B_JC_W_SAM_system_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADS-1 NASAMS";
        side = 0;
        faction = "e22_opf_jc_w_f";
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

    class JCA_O_SpottingScope_01_black_F : JCA_B_SpottingScope_01_black_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotting Scope";
        side = 0;
        faction = "e22_opf_jc_w_f";
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
