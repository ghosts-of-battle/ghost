//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class UK_ARMED_FORCES {
        displayName = "UK Armed Forces";
        side = 1;
        priority = 8;
        icon = "a3\ui_f\data\map\Markers\Flags\uk_ca.paa";
    };
};

class CfgVehicles {

    class I_G_Soldier_F;
    class I_G_Soldier_F_OCimport_01 : I_G_Soldier_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_F_OCimport_02 : I_G_Soldier_F_OCimport_01 { class EventHandlers; };

    class rksla3_RN_Boat_Crew : I_G_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RN Boat Crew";
        side = 1;
        faction = "uk_armed_forces";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_B_GEN_Soldier_F";

        linkedItems[] = {"H_Helmet_Skate","V_Chestrig_blk","FirstAidKit","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        respawnlinkedItems[] = {"H_Helmet_Skate","V_Chestrig_blk","FirstAidKit","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};

        weapons[] = {"Throw","Put","SMG_05_F","hgun_P07_F"};
        respawnWeapons[] = {"Throw","Put","SMG_05_F","hgun_P07_F"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};


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
