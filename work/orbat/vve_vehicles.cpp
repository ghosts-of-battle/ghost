//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class vve_vehicles {
        displayName = "QAV - Vanilla Vehicles";
        side = 1;
        priority = 1;
    };
};

class CfgVehicles {

    class APC_Wheeled_01_apc_qav;
    class APC_Wheeled_01_apc_qav_OCimport_01 : APC_Wheeled_01_apc_qav { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_apc_qav_OCimport_02 : APC_Wheeled_01_apc_qav_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_mgs_QAV;
    class APC_Wheeled_01_mgs_QAV_OCimport_01 : APC_Wheeled_01_mgs_QAV { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_mgs_QAV_OCimport_02 : APC_Wheeled_01_mgs_QAV_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_mgs_up_QAV;
    class APC_Wheeled_01_mgs_up_QAV_OCimport_01 : APC_Wheeled_01_mgs_up_QAV { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_mgs_up_QAV_OCimport_02 : APC_Wheeled_01_mgs_up_QAV_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_shorad_QAV;
    class APC_Wheeled_01_shorad_QAV_OCimport_01 : APC_Wheeled_01_shorad_QAV { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_shorad_QAV_OCimport_02 : APC_Wheeled_01_shorad_QAV_OCimport_01 { class EventHandlers; };

    class VVE_APC_Wheeled_01_apc_QAV : APC_Wheeled_01_apc_qav_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall (APC)";
        side = 1;
        faction = "vve_vehicles";
        crew = "B_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class VVE_APC_Wheeled_01_mgs_QAV : APC_Wheeled_01_mgs_QAV_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall (MGS)";
        side = 1;
        faction = "vve_vehicles";
        crew = "B_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class VVE_APC_Wheeled_01_mgs_up_QAV : APC_Wheeled_01_mgs_up_QAV_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall (MGS-UP)";
        side = 1;
        faction = "vve_vehicles";
        crew = "B_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class VVE_APC_Wheeled_01_shorad_QAV : APC_Wheeled_01_shorad_QAV_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7A Guardian";
        side = 1;
        faction = "vve_vehicles";
        crew = "B_crew_F";

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
