//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class EF_B_MJTF_Navy {
        displayName = "MJTF (Navy)";
        side = 1;
        priority = 1;
        icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
        flag = "\a3\Data_f\Flags\flag_nato_co.paa";
    };
};

class CfgVehicles {

    class B_Helipilot_F;
    class B_Helipilot_F_OCimport_01 : B_Helipilot_F { scope = 0; class EventHandlers; };
    class B_Helipilot_F_OCimport_02 : B_Helipilot_F_OCimport_01 { class EventHandlers; };

    class EF_B_Navy_FlightDeckCrew;
    class EF_B_Navy_FlightDeckCrew_OCimport_01 : EF_B_Navy_FlightDeckCrew { scope = 0; class EventHandlers; };
    class EF_B_Navy_FlightDeckCrew_OCimport_02 : EF_B_Navy_FlightDeckCrew_OCimport_01 { class EventHandlers; };

    class EF_B_Navy_FlightDeckCrew : B_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flight Deck Crewman";
        side = 1;
        faction = "ef_b_mjtf_navy";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "EF_U_B_CrewCoveralls_Navy";

        linkedItems[] = {"V_TacVest_blk","EF_H_HelmetCrew_Yellow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        respawnlinkedItems[] = {"V_TacVest_blk","EF_H_HelmetCrew_Yellow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};

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

    class EF_B_Navy_Sailor : EF_B_Navy_FlightDeckCrew_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sailor";
        side = 1;
        faction = "ef_b_mjtf_navy";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "EF_U_B_CrewCoveralls_Navy";

        linkedItems[] = {"EF_H_Cap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        respawnlinkedItems[] = {"EF_H_Cap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};

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

    class EF_B_Navy_WellDeckCrew : EF_B_Navy_FlightDeckCrew_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Well Deck Crewman";
        side = 1;
        faction = "ef_b_mjtf_navy";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "EF_U_B_CrewCoveralls_Navy";

        linkedItems[] = {"V_TacVest_blk","EF_H_HelmetCrew_White","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        respawnlinkedItems[] = {"V_TacVest_blk","EF_H_HelmetCrew_White","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};

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

};
