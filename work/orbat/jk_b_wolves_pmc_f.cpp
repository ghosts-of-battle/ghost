//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class JK_B_Wolves_PMC_F {
        displayName = "Wolves PMC";
        side = 1;
        priority = 1;
    };
};

class CfgVehicles {

    class JK_76n6_ClamShell_base_F;
    class JK_76n6_ClamShell_base_F_OCimport_01 : JK_76n6_ClamShell_base_F { scope = 0; class EventHandlers; };
    class JK_76n6_ClamShell_base_F_OCimport_02 : JK_76n6_ClamShell_base_F_OCimport_01 { class EventHandlers; };

    class JK_76n6_ClamShell_Lower_base_F;
    class JK_76n6_ClamShell_Lower_base_F_OCimport_01 : JK_76n6_ClamShell_Lower_base_F { scope = 0; class EventHandlers; };
    class JK_76n6_ClamShell_Lower_base_F_OCimport_02 : JK_76n6_ClamShell_Lower_base_F_OCimport_01 { class EventHandlers; };

    class JK_B_Wolves_PMC_76n6_ClamShell_F : JK_76n6_ClamShell_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "76n6 Clam Shell";
        side = 1;
        faction = "jk_b_wolves_pmc_f";
        crew = "B_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class JK_B_Wolves_PMC_76n6_ClamShell_Lower_F : JK_76n6_ClamShell_Lower_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "76n6 Clam Shell (Artillery Radar)";
        side = 1;
        faction = "jk_b_wolves_pmc_f";
        crew = "B_UAV_AI_F";

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
