class CBA_Extended_EventHandlers;
class CBA_Extended_EventHandlers_base;
class CfgVehicles {
    class C_Van_01_fuel_F;
    class C_Van_01_fuel_F_OCimport_01 : C_Van_01_fuel_F { scope = 0; class EventHandlers; };
    class C_Van_01_fuel_F_OCimport_02 : C_Van_01_fuel_F_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Van_02_transport_F;
    class C_Van_02_transport_F_OCimport_01 : C_Van_02_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Van_02_transport_F_OCimport_02 : C_Van_02_transport_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };
    class C_Van_02_vehicle_F;
    class C_Van_02_vehicle_F_OCimport_01 : C_Van_02_vehicle_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Van_02_vehicle_F_OCimport_02 : C_Van_02_vehicle_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };
    class C_Offroad_lxWS;
    class C_Offroad_lxWS_OCimport_01 : C_Offroad_lxWS { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_lxWS_OCimport_02 : C_Offroad_lxWS_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };
    class C_Djella_02_lxWS;
    class C_Djella_02_lxWS_OCimport_01 : C_Djella_02_lxWS { scope = 0; class EventHandlers; };
    class C_Djella_02_lxWS_OCimport_02 : C_Djella_02_lxWS_OCimport_01 { class EventHandlers; };
    class C_Djella_05_lxWS;
    class C_Djella_05_lxWS_OCimport_01 : C_Djella_05_lxWS { scope = 0; class EventHandlers; };
    class C_Djella_05_lxWS_OCimport_02 : C_Djella_05_lxWS_OCimport_01 { class EventHandlers; };
    class C_Djella_04_lxWS;
    class C_Djella_04_lxWS_OCimport_01 : C_Djella_04_lxWS { scope = 0; class EventHandlers; };
    class C_Djella_04_lxWS_OCimport_02 : C_Djella_04_lxWS_OCimport_01 { class EventHandlers; };
    class C_Truck_02_flatbed_lxWS;
    class C_Truck_02_flatbed_lxWS_OCimport_01 : C_Truck_02_flatbed_lxWS { scope = 0; class EventHandlers; };
    class C_Truck_02_flatbed_lxWS_OCimport_02 : C_Truck_02_flatbed_lxWS_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Truck_02_cargo_lxWS;
    class C_Truck_02_cargo_lxWS_OCimport_01 : C_Truck_02_cargo_lxWS { scope = 0; class EventHandlers; };
    class C_Truck_02_cargo_lxWS_OCimport_02 : C_Truck_02_cargo_lxWS_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Truck_02_racing_lxWS;
    class C_Truck_02_racing_lxWS_OCimport_01 : C_Truck_02_racing_lxWS { scope = 0; class EventHandlers; };
    class C_Truck_02_racing_lxWS_OCimport_02 : C_Truck_02_racing_lxWS_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Djella_03_lxWS;
    class C_Djella_03_lxWS_OCimport_01 : C_Djella_03_lxWS { scope = 0; class EventHandlers; };
    class C_Djella_03_lxWS_OCimport_02 : C_Djella_03_lxWS_OCimport_01 { class EventHandlers; };
    class C_Van_01_box_F;
    class C_Van_01_box_F_OCimport_01 : C_Van_01_box_F { scope = 0; class EventHandlers; };
    class C_Van_01_box_F_OCimport_02 : C_Van_01_box_F_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Quadbike_01_F;
    class C_Quadbike_01_F_OCimport_01 : C_Quadbike_01_F { scope = 0; class EventHandlers; };
    class C_Quadbike_01_F_OCimport_02 : C_Quadbike_01_F_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Truck_02_covered_F;
    class C_Truck_02_covered_F_OCimport_01 : C_Truck_02_covered_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Truck_02_covered_F_OCimport_02 : C_Truck_02_covered_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };
    class C_Van_02_service_F;
    class C_Van_02_service_F_OCimport_01 : C_Van_02_service_F { scope = 0; class EventHandlers; };
    class C_Van_02_service_F_OCimport_02 : C_Van_02_service_F_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Truck_02_transport_F;
    class C_Truck_02_transport_F_OCimport_01 : C_Truck_02_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Truck_02_transport_F_OCimport_02 : C_Truck_02_transport_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };
    class C_Offroad_02_unarmed_F;
    class C_Offroad_02_unarmed_F_OCimport_01 : C_Offroad_02_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_02_unarmed_F_OCimport_02 : C_Offroad_02_unarmed_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };
    class C_Offroad_01_F;
    class C_Offroad_01_F_OCimport_01 : C_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_01_F_OCimport_02 : C_Offroad_01_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };
    class C_Offroad_01_repair_F;
    class C_Offroad_01_repair_F_OCimport_01 : C_Offroad_01_repair_F { scope = 0; class EventHandlers; };
    class C_Offroad_01_repair_F_OCimport_02 : C_Offroad_01_repair_F_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Djella_01_lxWS;
    class C_Djella_01_lxWS_OCimport_01 : C_Djella_01_lxWS { scope = 0; class EventHandlers; };
    class C_Djella_01_lxWS_OCimport_02 : C_Djella_01_lxWS_OCimport_01 { class EventHandlers; };
    class C_Tak_03_C_lxWS;
    class C_Tak_03_C_lxWS_OCimport_01 : C_Tak_03_C_lxWS { scope = 0; class EventHandlers; };
    class C_Tak_03_C_lxWS_OCimport_02 : C_Tak_03_C_lxWS_OCimport_01 { class EventHandlers; };
    class C_Tak_03_B_lxWS;
    class C_Tak_03_B_lxWS_OCimport_01 : C_Tak_03_B_lxWS { scope = 0; class EventHandlers; };
    class C_Tak_03_B_lxWS_OCimport_02 : C_Tak_03_B_lxWS_OCimport_01 { class EventHandlers; };
    class C_Tak_03_A_lxWS;
    class C_Tak_03_A_lxWS_OCimport_01 : C_Tak_03_A_lxWS { scope = 0; class EventHandlers; };
    class C_Tak_03_A_lxWS_OCimport_02 : C_Tak_03_A_lxWS_OCimport_01 { class EventHandlers; };
    class C_Tak_02_C_lxWS;
    class C_Tak_02_C_lxWS_OCimport_01 : C_Tak_02_C_lxWS { scope = 0; class EventHandlers; };
    class C_Tak_02_C_lxWS_OCimport_02 : C_Tak_02_C_lxWS_OCimport_01 { class EventHandlers; };
    class C_Tak_02_B_lxWS;
    class C_Tak_02_B_lxWS_OCimport_01 : C_Tak_02_B_lxWS { scope = 0; class EventHandlers; };
    class C_Tak_02_B_lxWS_OCimport_02 : C_Tak_02_B_lxWS_OCimport_01 { class EventHandlers; };
    class C_Tak_02_A_lxWS;
    class C_Tak_02_A_lxWS_OCimport_01 : C_Tak_02_A_lxWS { scope = 0; class EventHandlers; };
    class C_Tak_02_A_lxWS_OCimport_02 : C_Tak_02_A_lxWS_OCimport_01 { class EventHandlers; };
    class C_Tak_01_C_lxWS;
    class C_Tak_01_C_lxWS_OCimport_01 : C_Tak_01_C_lxWS { scope = 0; class EventHandlers; };
    class C_Tak_01_C_lxWS_OCimport_02 : C_Tak_01_C_lxWS_OCimport_01 { class EventHandlers; };
    class C_Tak_01_B_lxWS;
    class C_Tak_01_B_lxWS_OCimport_01 : C_Tak_01_B_lxWS { scope = 0; class EventHandlers; };
    class C_Tak_01_B_lxWS_OCimport_02 : C_Tak_01_B_lxWS_OCimport_01 { class EventHandlers; };
    class C_Tak_01_A_lxWS;
    class C_Tak_01_A_lxWS_OCimport_01 : C_Tak_01_A_lxWS { scope = 0; class EventHandlers; };
    class C_Tak_01_A_lxWS_OCimport_02 : C_Tak_01_A_lxWS_OCimport_01 { class EventHandlers; };
    class C_Journalist_lxWS;
    class C_Journalist_lxWS_OCimport_01 : C_Journalist_lxWS { scope = 0; class EventHandlers; };
    class C_Journalist_lxWS_OCimport_02 : C_Journalist_lxWS_OCimport_01 { class EventHandlers; };
    class C_Tractor_01_F;
    class C_Tractor_01_F_OCimport_01 : C_Tractor_01_F { scope = 0; class EventHandlers; };
    class C_Tractor_01_F_OCimport_02 : C_Tractor_01_F_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Offroad_01_comms_F;
    class C_Offroad_01_comms_F_OCimport_01 : C_Offroad_01_comms_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_01_comms_F_OCimport_02 : C_Offroad_01_comms_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };
    class C_Offroad_01_covered_F;
    class C_Offroad_01_covered_F_OCimport_01 : C_Offroad_01_covered_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_01_covered_F_OCimport_02 : C_Offroad_01_covered_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };
    class C_Hatchback_01_F;
    class C_Hatchback_01_F_OCimport_01 : C_Hatchback_01_F { scope = 0; class EventHandlers; };
    class C_Hatchback_01_F_OCimport_02 : C_Hatchback_01_F_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Van_01_transport_F;
    class C_Van_01_transport_F_OCimport_01 : C_Van_01_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Van_01_transport_F_OCimport_02 : C_Van_01_transport_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_L1;
            class CargoTurret_L2;
            class CargoTurret_L3;
            class CargoTurret_L4;
            class CargoTurret_L5;
            class CargoTurret_R1;
            class CargoTurret_R2;
            class CargoTurret_R3;
            class CargoTurret_R4;
            class CargoTurret_R5;
        };
    };
    class C_SUV_01_F;
    class C_SUV_01_F_OCimport_01 : C_SUV_01_F { scope = 0; class EventHandlers; };
    class C_SUV_01_F_OCimport_02 : C_SUV_01_F_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Truck_02_fuel_F;
    class C_Truck_02_fuel_F_OCimport_01 : C_Truck_02_fuel_F { scope = 0; class EventHandlers; };
    class C_Truck_02_fuel_F_OCimport_02 : C_Truck_02_fuel_F_OCimport_01 { scope = 0; class EventHandlers; };
    class C_Truck_02_box_F;
    class C_Truck_02_box_F_OCimport_01 : C_Truck_02_box_F { scope = 0; class EventHandlers; };
    class C_Truck_02_box_F_OCimport_02 : C_Truck_02_box_F_OCimport_01 { scope = 0; class EventHandlers; };

    class C_me_Fuel_Truck_01 : C_Van_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fuel Truck";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Nomad_1_01";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Van_Transport_01 : C_Van_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van Transport";
        side = 3;
        faction = "C_me";
        crew = "C_man_1";
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Van_Cargo_01 : C_Van_02_vehicle_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Cargo)";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Merchant_2_01";
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Offroad_Desert_01 : C_Offroad_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Desert)";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Merchant_2_01";
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Commoner_2_01 : C_Djella_02_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Commoner) 2";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_C_Djella_02";
        linkedItems[] = {"lxWS_H_turban_04_red","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_04_red","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_02",{}},{},{},"lxWS_H_turban_04_red","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Commoner_5_01 : C_Djella_05_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Commoner) 5";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_C_Djella_05";
        linkedItems[] = {"lxWS_H_turban_03_green","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_03_green","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_05",{}},{},{},"lxWS_H_turban_03_green","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Commoner_4_01 : C_Djella_04_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Commoner) 4";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_C_Djella_04";
        linkedItems[] = {"lxWS_H_turban_02_yellow","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_02_yellow","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_04",{}},{},{},"lxWS_H_turban_02_yellow","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Zamak_Flatbed_01 : C_Truck_02_flatbed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Flatbed";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Commoner_5_01";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Zamak_Cargo_01 : C_Truck_02_cargo_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 3;
        faction = "C_me";
        crew = "C_man_1";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Zamak_Racing_01 : C_Truck_02_racing_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Racing";
        side = 3;
        faction = "C_me";
        crew = "C_Driver_1_random_base_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Commoner_3_01 : C_Djella_03_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Commoner) 3";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_C_Djella_03";
        linkedItems[] = {"lxWS_H_turban_02_sand","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_02_sand","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_03",{}},{},{},"lxWS_H_turban_02_sand","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Truck_Boxer_01 : C_Van_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck Boxer";
        side = 3;
        faction = "C_me";
        crew = "C_man_1";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Quad_Bike_01 : C_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 3;
        faction = "C_me";
        crew = "C_man_1";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_KamAZ_Transport_covered_01 : C_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Villager_3_01";
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Van_Services_01 : C_Van_02_service_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Services)";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Merchant_3_01";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_KamAZ_Transport_01 : C_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Commoner_4_01";
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Jeep_Wrangler_01 : C_Offroad_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Merchant_1_01";
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Offroad_01 : C_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Commoner_1_01";
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Offroad_Services_01 : C_Offroad_01_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Services)";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Villager_3_01";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Commoner_1_01 : C_Djella_01_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Commoner) 1";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_C_Djella_01";
        linkedItems[] = {"lxWS_H_turban_01_sand","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_01_sand","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_01",{}},{},{},"lxWS_H_turban_01_sand","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Nomad_3_01 : C_Tak_03_C_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Nomad) 3";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_Tak_03_C";
        linkedItems[] = {"lxWS_H_turban_01_red","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_01_red","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_03_C",{}},{},{},"lxWS_H_turban_01_red","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Nomad_2_01 : C_Tak_03_B_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Nomad) 2";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_Tak_03_B";
        linkedItems[] = {"lxWS_H_turban_01_blue","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_01_blue","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_03_B",{}},{},{},"lxWS_H_turban_01_blue","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Nomad_1_01 : C_Tak_03_A_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Nomad) 1";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_Tak_03_A";
        linkedItems[] = {"lxWS_H_turban_01_yellow","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_01_yellow","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_03_A",{}},{},{},"lxWS_H_turban_01_yellow","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Merchant_3_01 : C_Tak_02_C_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Merchant) 3";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_Tak_02_C";
        linkedItems[] = {"lxWS_H_turban_02_green_pattern","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_02_green_pattern","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_02_C",{}},{},{},"lxWS_H_turban_02_green_pattern","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Merchant_2_01 : C_Tak_02_B_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Merchant) 2";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_Tak_02_B";
        linkedItems[] = {"lxWS_H_turban_02_orange","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_02_orange","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_02_B",{}},{},{},"lxWS_H_turban_02_orange","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Merchant_1_01 : C_Tak_02_A_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Merchant) 1";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_Tak_02_A";
        linkedItems[] = {"lxWS_H_turban_01_blue","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_01_blue","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_02_A",{}},{},{},"lxWS_H_turban_01_blue","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Villager_3_01 : C_Tak_01_C_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Villager) 3";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_Tak_01_C";
        linkedItems[] = {"H_Bandanna_cbr","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"H_Bandanna_cbr","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_01_C",{}},{},{},"H_Bandanna_cbr","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Villager_2_01 : C_Tak_01_B_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Villager) 2";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_Tak_01_B";
        linkedItems[] = {"lxWS_H_turban_03_sand","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_03_sand","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_01_B",{}},{},{},"lxWS_H_turban_03_sand","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Civilian_Villager_1_01 : C_Tak_01_A_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian (Villager) 1";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Head_African","G_CIVIL_male"};
        uniformClass = "U_lxWS_Tak_01_A";
        linkedItems[] = {"lxWS_H_turban_03_green","ItemSmartPhone","ItemWatch"};
        respawnlinkedItems[] = {"lxWS_H_turban_03_green","ItemSmartPhone","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_01_A",{}},{},{},"lxWS_H_turban_03_green","",{},{"","ItemSmartPhone","","","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Michael_Sully_01 : C_Journalist_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Michael Sully";
        side = 3;
        faction = "C_me";
        identityTypes[] = {"lxWS_Journalist_Head","LanguageGRE_F"};
        uniformClass = "U_C_Journalist";
        linkedItems[] = {"V_Press_F","lxWS_H_turban_02_blue","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_Press_F","lxWS_H_turban_02_blue","ItemMap","ItemCompass","ItemWatch"};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        backpack = "B_Kitbag_cbr";
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_Journalist",{}},{"V_Press_F",{}},{"B_Kitbag_cbr",{}},"lxWS_H_turban_02_blue","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Tractor_01 : C_Tractor_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tractor";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Nomad_2_01";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Offroad_Comms_01 : C_Offroad_01_comms_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Comms)";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Villager_1_01";
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Offroad_Covered_01 : C_Offroad_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Covered)";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Nomad_3_01";
        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Hatchback_01 : C_Hatchback_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hatchback";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Commoner_3_01";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Commoner_3_01";
        class Turrets : Turrets {
            class CargoTurret_L1 : CargoTurret_L1 { gunnerType = ""; };
            class CargoTurret_L2 : CargoTurret_L2 { gunnerType = ""; };
            class CargoTurret_L3 : CargoTurret_L3 { gunnerType = ""; };
            class CargoTurret_L4 : CargoTurret_L4 { gunnerType = ""; };
            class CargoTurret_L5 : CargoTurret_L5 { gunnerType = ""; };
            class CargoTurret_R1 : CargoTurret_R1 { gunnerType = ""; };
            class CargoTurret_R2 : CargoTurret_R2 { gunnerType = ""; };
            class CargoTurret_R3 : CargoTurret_R3 { gunnerType = ""; };
            class CargoTurret_R4 : CargoTurret_R4 { gunnerType = ""; };
            class CargoTurret_R5 : CargoTurret_R5 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_SUV_01 : C_SUV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Commoner_4_01";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_KamAZ_Fuel_01 : C_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Commoner_4_01";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class C_me_KamAZ_Repair_01 : C_Truck_02_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 3;
        faction = "C_me";
        crew = "C_me_Civilian_Commoner_5_01";

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