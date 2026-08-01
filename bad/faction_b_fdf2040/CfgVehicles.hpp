class CBA_Extended_EventHandlers_base;
class EventHandlers; 
class CfgVehicles {

    class E22_B_FDF_UAV_01_F;
    class E22_B_FDF_UAV_01_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_UAV_01_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_UAV_01_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_UAV_01_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_Boat_Combat_01_unarmed_F;
    class E22_B_FDF_Boat_Combat_01_unarmed_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Boat_Combat_01_unarmed_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Boat_Combat_01_unarmed_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Boat_Combat_01_unarmed_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_Boat_Combat_01_HMG_F;
    class E22_B_FDF_Boat_Combat_01_HMG_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Boat_Combat_01_HMG_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Boat_Combat_01_HMG_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Boat_Combat_01_HMG_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class mg2_station;
            class mg3_station;
            class mg4_station;
            class mg5_station;
        };
    };

    class E22_B_FDF_Boat_Combat_01_AT_F;
    class E22_B_FDF_Boat_Combat_01_AT_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Boat_Combat_01_AT_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Boat_Combat_01_AT_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Boat_Combat_01_AT_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class mg2_station;
            class mg3_station;
            class mg4_station;
            class mg5_station;
        };
    };

    class E22_B_FDF_Pickup_01_F;
    class E22_B_FDF_Pickup_01_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Pickup_01_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Pickup_01_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Pickup_01_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class E22_B_FDF_Pickup_01_comms_F;
    class E22_B_FDF_Pickup_01_comms_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Pickup_01_comms_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Pickup_01_comms_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Pickup_01_comms_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class E22_B_FDF_Pickup_01_fuel_F;
    class E22_B_FDF_Pickup_01_fuel_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Pickup_01_fuel_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Pickup_01_fuel_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Pickup_01_fuel_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class E22_B_FDF_Pickup_01_MMG_F;
    class E22_B_FDF_Pickup_01_MMG_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Pickup_01_MMG_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Pickup_01_MMG_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Pickup_01_MMG_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class E22_B_FDF_Pickup_01_MRL_F;
    class E22_B_FDF_Pickup_01_MRL_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Pickup_01_MRL_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Pickup_01_MRL_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Pickup_01_MRL_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_Pickup_01_AAT_F;
    class E22_B_FDF_Pickup_01_AAT_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Pickup_01_AAT_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Pickup_01_AAT_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Pickup_01_AAT_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_Pickup_01_RCWS_F;
    class E22_B_FDF_Pickup_01_RCWS_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Pickup_01_RCWS_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Pickup_01_RCWS_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Pickup_01_RCWS_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_Boat_Transport_01_F;
    class E22_B_FDF_Boat_Transport_01_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Boat_Transport_01_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Boat_Transport_01_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Boat_Transport_01_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class E22_B_FDF_Boat_Transport_02_F;
    class E22_B_FDF_Boat_Transport_02_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Boat_Transport_02_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Boat_Transport_02_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Boat_Transport_02_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
        };
    };

    class E22_B_FDF_W_AAA_System_01_F;
    class E22_B_FDF_W_AAA_System_01_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_W_AAA_System_01_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_W_AAA_System_01_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_W_AAA_System_01_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_W_Radar_system_01_F;
    class E22_B_FDF_W_Radar_system_01_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_W_Radar_system_01_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_W_Radar_system_01_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_W_Radar_system_01_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_W_SAM_system_01_F;
    class E22_B_FDF_W_SAM_system_01_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_W_SAM_system_01_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_W_SAM_system_01_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_W_SAM_system_01_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_UAV_06_F;
    class E22_B_FDF_UAV_06_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_UAV_06_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_UAV_06_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_UAV_06_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_UAV_06_antimine_F;
    class E22_B_FDF_UAV_06_antimine_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_UAV_06_antimine_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_UAV_06_antimine_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_UAV_06_antimine_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_UAV_06_medical_F;
    class E22_B_FDF_UAV_06_medical_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_UAV_06_medical_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_UAV_06_medical_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_UAV_06_medical_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_APC_Wheeled_01_cannon_F;
    class E22_B_FDF_APC_Wheeled_01_cannon_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_APC_Wheeled_01_cannon_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_APC_Wheeled_01_cannon_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_APC_Wheeled_01_cannon_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_APC_Wheeled_01_unarmed_F;
    class E22_B_FDF_APC_Wheeled_01_unarmed_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_APC_Wheeled_01_unarmed_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_APC_Wheeled_01_unarmed_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_APC_Wheeled_01_unarmed_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_LSV_01_unarmed_F;
    class E22_B_FDF_LSV_01_unarmed_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_LSV_01_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_LSV_01_unarmed_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_LSV_01_unarmed_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_01;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class E22_B_FDF_LSV_01_light_F;
    class E22_B_FDF_LSV_01_light_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_LSV_01_light_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_LSV_01_light_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_LSV_01_light_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_01;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class E22_B_FDF_LSV_01_AT_F;
    class E22_B_FDF_LSV_01_AT_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_LSV_01_AT_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_LSV_01_AT_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_LSV_01_AT_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class TopTurret;
            class CodRiverTurret;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class E22_B_FDF_MRAP_01_F;
    class E22_B_FDF_MRAP_01_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_MRAP_01_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_MRAP_01_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_MRAP_01_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_MRAP_01_hmg_F;
    class E22_B_FDF_MRAP_01_hmg_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_MRAP_01_hmg_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_MRAP_01_hmg_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_MRAP_01_hmg_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_MRAP_01_gmg_F;
    class E22_B_FDF_MRAP_01_gmg_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_MRAP_01_gmg_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_MRAP_01_gmg_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_MRAP_01_gmg_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_MRAP_01_FSV_F;
    class E22_B_FDF_MRAP_01_FSV_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_MRAP_01_FSV_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_MRAP_01_FSV_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_MRAP_01_FSV_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CommanderTurret;
        };
    };

    class E22_B_FDF_MRAP_01_LAAD_F;
    class E22_B_FDF_MRAP_01_LAAD_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_MRAP_01_LAAD_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_MRAP_01_LAAD_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_MRAP_01_LAAD_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CommanderTurret;
        };
    };

    class E22_B_FDF_MRAP_01_AT_F;
    class E22_B_FDF_MRAP_01_AT_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_MRAP_01_AT_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_MRAP_01_AT_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_MRAP_01_AT_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CommanderTurret;
        };
    };

    class E22_B_FDF_Quadbike_01_F;
    class E22_B_FDF_Quadbike_01_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Quadbike_01_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Quadbike_01_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Quadbike_01_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_Truck_01_transport_F;
    class E22_B_FDF_Truck_01_transport_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Truck_01_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Truck_01_transport_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Truck_01_transport_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class E22_B_FDF_Truck_01_covered_F;
    class E22_B_FDF_Truck_01_covered_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Truck_01_covered_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Truck_01_covered_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Truck_01_covered_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class E22_B_FDF_Truck_01_mover_F;
    class E22_B_FDF_Truck_01_mover_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Truck_01_mover_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Truck_01_mover_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Truck_01_mover_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_Truck_01_box_F;
    class E22_B_FDF_Truck_01_box_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Truck_01_box_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Truck_01_box_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Truck_01_box_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_Truck_01_Repair_F;
    class E22_B_FDF_Truck_01_Repair_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Truck_01_Repair_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Truck_01_Repair_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_Truck_01_ammo_F;
    class E22_B_FDF_Truck_01_ammo_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Truck_01_ammo_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Truck_01_ammo_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_Truck_01_fuel_F;
    class E22_B_FDF_Truck_01_fuel_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Truck_01_fuel_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Truck_01_fuel_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Truck_01_fuel_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_Truck_01_medical_F;
    class E22_B_FDF_Truck_01_medical_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Truck_01_medical_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Truck_01_medical_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Truck_01_medical_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_Truck_01_flatbed_F;
    class E22_B_FDF_Truck_01_flatbed_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Truck_01_flatbed_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Truck_01_flatbed_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Truck_01_flatbed_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_Truck_01_cargo_F;
    class E22_B_FDF_Truck_01_cargo_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Truck_01_cargo_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Truck_01_cargo_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Truck_01_cargo_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_UGV_02_Science_F;
    class E22_B_FDF_UGV_02_Science_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_UGV_02_Science_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_UGV_02_Science_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_UGV_02_Science_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_UGV_02_Demining_F;
    class E22_B_FDF_UGV_02_Demining_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_UGV_02_Demining_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_UGV_02_Demining_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_UGV_02_Demining_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_Mortar_01_F;
    class E22_B_FDF_Mortar_01_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Mortar_01_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_Mortar_01_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Mortar_01_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_Plane_Fighter_04_F;
    class E22_B_FDF_Plane_Fighter_04_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Plane_Fighter_04_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Plane_Fighter_04_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Plane_Fighter_04_F_OCimport_B_FinlandArmy_WDL_01 { scope = 0; class EventHandlers; };

    class E22_B_FDF_APC_Tracked_03_F;
    class E22_B_FDF_APC_Tracked_03_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_APC_Tracked_03_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_APC_Tracked_03_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_APC_Tracked_03_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_APC_Wheeled_01_cannon_ATGM_F;
    class E22_B_FDF_APC_Wheeled_01_cannon_ATGM_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_APC_Wheeled_01_cannon_ATGM_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_APC_Wheeled_01_cannon_ATGM_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_APC_Wheeled_01_cannon_ATGM_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_APC_Wheeled_01_command_F;
    class E22_B_FDF_APC_Wheeled_01_command_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_APC_Wheeled_01_command_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_APC_Wheeled_01_command_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_APC_Wheeled_01_command_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_APC_Wheeled_01_mortar_F;
    class E22_B_FDF_APC_Wheeled_01_mortar_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_APC_Wheeled_01_mortar_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_APC_Wheeled_01_mortar_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_APC_Wheeled_01_mortar_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_MBT_03_cannon_F;
    class E22_B_FDF_MBT_03_cannon_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_MBT_03_cannon_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_MBT_03_cannon_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_MBT_03_cannon_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_HMG_02_F;
    class E22_B_FDF_HMG_02_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_HMG_02_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_HMG_02_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_HMG_02_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_HMG_02_high_F;
    class E22_B_FDF_HMG_02_high_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_HMG_02_high_F { scope = 0; class EventHandlers; class Turrets; };
    class E22_B_FDF_HMG_02_high_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_HMG_02_high_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class E22_B_FDF_Soldier_F;
    class E22_B_FDF_Soldier_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_Light_F;
    class E22_B_FDF_Soldier_Light_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_Light_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_Light_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_Light_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_GL_F;
    class E22_B_FDF_Soldier_GL_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_GL_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_GL_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_GL_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_SL_F;
    class E22_B_FDF_Soldier_SL_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_SL_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_SL_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_SL_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_TL_F;
    class E22_B_FDF_Soldier_TL_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_TL_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_TL_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_TL_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_M_F;
    class E22_B_FDF_Soldier_M_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_M_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_M_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_M_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_LAT_F;
    class E22_B_FDF_Soldier_LAT_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_LAT_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_LAT_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_CLS_F;
    class E22_B_FDF_Soldier_CLS_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_CLS_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_CLS_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_CLS_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_REP_F;
    class E22_B_FDF_Soldier_REP_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_REP_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_REP_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_REP_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_EXP_F;
    class E22_B_FDF_Soldier_EXP_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_EXP_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_EXP_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_EXP_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Helipilot_F;
    class E22_B_FDF_Helipilot_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Helipilot_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Helipilot_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Helipilot_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Helicrew_F;
    class E22_B_FDF_Helicrew_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Helicrew_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Helicrew_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Helicrew_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_AB_F;
    class E22_B_FDF_Soldier_AB_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_AB_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_AB_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_AB_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_ENG_F;
    class E22_B_FDF_Soldier_ENG_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_ENG_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_ENG_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_ENG_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Crewman_F;
    class E22_B_FDF_Crewman_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Crewman_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Crewman_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Crewman_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Officer_F;
    class E22_B_FDF_Officer_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Officer_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Officer_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Officer_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Officer_Field_F;
    class E22_B_FDF_Officer_Field_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Officer_Field_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Officer_Field_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Officer_Field_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_Survivor_F;
    class E22_B_FDF_Soldier_Survivor_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_Survivor_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_Survivor_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_Survivor_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_Mine_F;
    class E22_B_FDF_Soldier_Mine_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_Mine_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_Mine_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_Mine_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_RadioOperator_F;
    class E22_B_FDF_RadioOperator_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_RadioOperator_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_RadioOperator_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_RadioOperator_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Support_Mortar_F;
    class E22_B_FDF_Support_Mortar_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Support_Mortar_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Support_Mortar_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Support_Mortar_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Support_Mortar_A_F;
    class E22_B_FDF_Support_Mortar_A_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Support_Mortar_A_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Support_Mortar_A_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Support_Mortar_A_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_UAV_F;
    class E22_B_FDF_Soldier_UAV_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_UAV_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_UAV_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_UAV_01_F;
    class E22_B_FDF_Soldier_UAV_01_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_UAV_01_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_UAV_01_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_UAV_01_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_UAV_06_F;
    class E22_B_FDF_Soldier_UAV_06_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_UAV_06_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_UAV_06_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_UAV_06_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_UAV_06_medical_F;
    class E22_B_FDF_Soldier_UAV_06_medical_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_UAV_06_medical_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_UAV_06_medical_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_UAV_06_medical_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_UAV_06_demining_F;
    class E22_B_FDF_Soldier_UAV_06_demining_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_UAV_06_demining_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_UAV_06_demining_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_UAV_06_demining_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_UGV_02_science_F;
    class E22_B_FDF_Soldier_UGV_02_science_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_UGV_02_science_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_UGV_02_science_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_UGV_02_science_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Soldier_UGV_02_demining_F;
    class E22_B_FDF_Soldier_UGV_02_demining_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Soldier_UGV_02_demining_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Soldier_UGV_02_demining_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Soldier_UGV_02_demining_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Recon_F;
    class E22_B_FDF_Recon_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Recon_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Recon_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Recon_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Recon_LAT_F;
    class E22_B_FDF_Recon_LAT_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Recon_LAT_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Recon_LAT_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Recon_LAT_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Recon_EXP_F;
    class E22_B_FDF_Recon_EXP_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Recon_EXP_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Recon_EXP_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Recon_EXP_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Recon_CLS_F;
    class E22_B_FDF_Recon_CLS_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Recon_CLS_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Recon_CLS_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Recon_CLS_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Recon_TL_F;
    class E22_B_FDF_Recon_TL_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Recon_TL_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Recon_TL_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Recon_TL_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Recon_M_F;
    class E22_B_FDF_Recon_M_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Recon_M_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Recon_M_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Recon_M_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class E22_B_FDF_Recon_JTAC_F;
    class E22_B_FDF_Recon_JTAC_F_OCimport_B_FinlandArmy_WDL_01 : E22_B_FDF_Recon_JTAC_F { scope = 0; class EventHandlers; };
    class E22_B_FDF_Recon_JTAC_F_OCimport_B_FinlandArmy_WDL_02 : E22_B_FDF_Recon_JTAC_F_OCimport_B_FinlandArmy_WDL_01 { class EventHandlers; };

    class B_UAV_02_dynamicLoadout_F;
    class B_UAV_02_dynamicLoadout_F_OCimport_B_FinlandArmy_WDL_01 : B_UAV_02_dynamicLoadout_F { scope = 0; class EventHandlers; class Turrets; };
    class B_UAV_02_dynamicLoadout_F_OCimport_B_FinlandArmy_WDL_02 : B_UAV_02_dynamicLoadout_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class B_T_APC_Tracked_01_AA_F;
    class B_T_APC_Tracked_01_AA_F_OCimport_B_FinlandArmy_WDL_01 : B_T_APC_Tracked_01_AA_F { scope = 0; class EventHandlers; class Turrets; };
    class B_T_APC_Tracked_01_AA_F_OCimport_B_FinlandArmy_WDL_02 : B_T_APC_Tracked_01_AA_F_OCimport_B_FinlandArmy_WDL_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };


    class B_FinlandArmy_AR_2Scanner_WDL_01 : E22_B_FDF_UAV_01_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Scanner";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Combat_Boat_Unarmed_WDL_01 : E22_B_FDF_Boat_Combat_01_unarmed_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (Unarmed)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Combat_Boat_HMG_WDL_01 : E22_B_FDF_Boat_Combat_01_HMG_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (HMG)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class mg2_station : mg2_station { gunnerType = ""; };
            class mg3_station : mg3_station { gunnerType = ""; };
            class mg4_station : mg4_station { gunnerType = ""; };
            class mg5_station : mg5_station { gunnerType = ""; };
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

    class B_FinlandArmy_Combat_Boat_AT_WDL_01 : E22_B_FDF_Boat_Combat_01_AT_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (AT)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class mg2_station : mg2_station { gunnerType = ""; };
            class mg3_station : mg3_station { gunnerType = ""; };
            class mg4_station : mg4_station { gunnerType = ""; };
            class mg5_station : mg5_station { gunnerType = ""; };
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

    class B_FinlandArmy_Ram_1500_WDL_01 : E22_B_FDF_Pickup_01_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

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

    class B_FinlandArmy_Ram_1500_Comms_WDL_01 : E22_B_FDF_Pickup_01_comms_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

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

    class B_FinlandArmy_Ram_1500_Fuel_WDL_01 : E22_B_FDF_Pickup_01_fuel_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Fuel)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

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

    class B_FinlandArmy_Ram_1500_MMG_WDL_01 : E22_B_FDF_Pickup_01_MMG_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MMG)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Ram_1500_MRL_WDL_01 : E22_B_FDF_Pickup_01_MRL_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MRL)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Ram_1500_AA_WDL_01 : E22_B_FDF_Pickup_01_AAT_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Ram_1500_RCWS_WDL_01 : E22_B_FDF_Pickup_01_RCWS_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (RCWS)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_RHIB_I_WDL_01 : E22_B_FDF_Boat_Transport_01_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RHIB-I";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

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

    class B_FinlandArmy_RHIB_II_WDL_01 : E22_B_FDF_Boat_Transport_02_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RHIB-II";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
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

    class B_FinlandArmy_ADS_2Skynex_WDL_01 : E22_B_FDF_W_AAA_System_01_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADS-2 Skynex";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_AN_MPQ_64_Sentinel_WDL_01 : E22_B_FDF_W_Radar_system_01_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/MPQ-64 Sentinel";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_ADS_1NASAMS_WDL_01 : E22_B_FDF_W_SAM_system_01_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADS-1 NASAMS";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_AL_6Utility_WDL_01 : E22_B_FDF_UAV_06_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 (Utility)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
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

    class B_FinlandArmy_AL_6Demining_WDL_01 : E22_B_FDF_UAV_06_antimine_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 (Demining)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
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

    class B_FinlandArmy_AL_6Medical_WDL_01 : E22_B_FDF_UAV_06_medical_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 (Medical)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
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

    class B_FinlandArmy_Patria_AMV_Cannon_WDL_01 : E22_B_FDF_APC_Wheeled_01_cannon_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Patria AMV (Cannon)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Patria_AMV_Unarmed_WDL_01 : E22_B_FDF_APC_Wheeled_01_unarmed_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Patria AMV (Unarmed)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Polaris_DAGOR_WDL_01 : E22_B_FDF_LSV_01_unarmed_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
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

    class B_FinlandArmy_Polaris_DAGOR_light_WDL_01 : E22_B_FDF_LSV_01_light_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (light)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
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

    class B_FinlandArmy_Polaris_DAGOR_Mini_Spike_AT_WDL_01 : E22_B_FDF_LSV_01_AT_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (Mini-Spike AT)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class TopTurret : TopTurret { gunnerType = ""; };
            class CodRiverTurret : CodRiverTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Hunter_WDL_01 : E22_B_FDF_MRAP_01_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Hunter_HMG_WDL_01 : E22_B_FDF_MRAP_01_hmg_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter HMG";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Hunter_GMG_WDL_01 : E22_B_FDF_MRAP_01_gmg_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter GMG";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_MATV_FSV_WDL_01 : E22_B_FDF_MRAP_01_FSV_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV FSV";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
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

    class B_FinlandArmy_MATV_LAAD_WDL_01 : E22_B_FDF_MRAP_01_LAAD_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV LAAD";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "B_FinlandArmy_Rifleman_Light_WDL_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FinlandArmy_Rifleman_Light_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "B_FinlandArmy_Team_Leader_WDL_01"; };
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

    class B_FinlandArmy_MATV_AT_WDL_01 : E22_B_FDF_MRAP_01_AT_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV AT";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Quad_Bike_WDL_01 : E22_B_FDF_Quadbike_01_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_HEMTT_Transport_WDL_01 : E22_B_FDF_Truck_01_transport_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

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

    class B_FinlandArmy_HEMTT_Transport_covered_WDL_01 : E22_B_FDF_Truck_01_covered_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

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

    class B_FinlandArmy_HEMTT_WDL_01 : E22_B_FDF_Truck_01_mover_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_HEMTT_Container_WDL_01 : E22_B_FDF_Truck_01_box_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_HEMTT_Repair_WDL_01 : E22_B_FDF_Truck_01_Repair_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_HEMTT_Ammo_WDL_01 : E22_B_FDF_Truck_01_ammo_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_HEMTT_Fuel_WDL_01 : E22_B_FDF_Truck_01_fuel_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_HEMTT_Medical_WDL_01 : E22_B_FDF_Truck_01_medical_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_HEMTT_Flatbed_WDL_01 : E22_B_FDF_Truck_01_flatbed_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Flatbed";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_HEMTT_Cargo_WDL_01 : E22_B_FDF_Truck_01_cargo_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Cargo";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_ED_1E_Roller_WDL_01 : E22_B_FDF_UGV_02_Science_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1E Roller";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_ED_1D_Pelter_WDL_01 : E22_B_FDF_UGV_02_Demining_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Mk6_Mortar_WDL_01 : E22_B_FDF_Mortar_01_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk6 Mortar";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Gripen_WDL_01 : E22_B_FDF_Plane_Fighter_04_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gripen";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_APC_II_WDL_01 : E22_B_FDF_APC_Tracked_03_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "APC-II";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Patria_AMV_Cannon_ATGM_WDL_01 : E22_B_FDF_APC_Wheeled_01_cannon_ATGM_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Patria AMV (Cannon, ATGM)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Patria_AMV_Command_WDL_01 : E22_B_FDF_APC_Wheeled_01_command_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Patria AMV (Command)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Patria_AMV_Mortar_WDL_01 : E22_B_FDF_APC_Wheeled_01_mortar_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Patria AMV (Mortar)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Leopard_2FN_WDL_01 : E22_B_FDF_MBT_03_cannon_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Leopard 2FN";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_M2_HMG_50_WDL_01 : E22_B_FDF_HMG_02_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_M2_HMG_50_Raised_WDL_01 : E22_B_FDF_HMG_02_high_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "E22_B_FDF_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_Rifleman_WDL_01 : E22_B_FDF_Soldier_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_AICO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_AICO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_AICO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_AICO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"SmokeShell",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",3,30},{"SmokeShell",1,1},{"HandGrenade",2,1}}},{},"E22_FDF_H_HelmetHBK_headset_woodland_F","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Rifleman_Light_WDL_01 : E22_B_FDF_Soldier_Light_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_Cap_Military_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_Cap_Military_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30}}},{},"E22_FDF_H_Cap_Military_woodland_F","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Grenadier_WDL_01 : E22_B_FDF_Soldier_GL_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_heavy_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_heavy_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_GL_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_GL_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP","FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP"};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP","FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_GL_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{"FA_1Rnd_40mm_Mk380_NRP",1},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_heavy_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"FA_1Rnd_40mm_Mk380_NRP",3,1}}},{},"E22_FDF_H_HelmetHBK_ear_woodland_F","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Squad_Leader_WDL_01 : E22_B_FDF_Soldier_SL_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_CQB_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_CQB_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_GL_black_AICO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_GL_black_AICO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","UGL_FlareRed_F","FA_JCA_30Rnd_556x45_Green_PMAG ","UGL_FlareRed_F"};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","UGL_FlareRed_F","FA_JCA_30Rnd_556x45_Green_PMAG ","UGL_FlareRed_F"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_GL_black_AICO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_AICO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{"UGL_FlareRed_F",1},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"B_IR_Grenade",2,1}}},{"E22_FDF_V_CarrierRigKBT_01_CQB_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"UGL_FlareRed_F",1,1},{"1Rnd_SmokeRed_Grenade_shell",2,1}}},{},"E22_FDF_H_HelmetHBK_ear_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Team_Leader_WDL_01 : E22_B_FDF_Soldier_TL_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_CQB_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_CQB_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_GL_black_AICO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_GL_black_AICO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP","FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP"};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP","FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_GL_black_AICO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_AICO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{"FA_1Rnd_40mm_Mk380_NRP",1},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"UGL_FlareRed_F",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_CQB_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"UGL_FlareRed_F",1,1},{"FA_1Rnd_40mm_Mk380_NRP",1,1},{"1Rnd_SmokeRed_Grenade_shell",2,1}}},{},"E22_FDF_H_HelmetHBK_ear_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Marksman_WDL_01 : E22_B_FDF_Soldier_M_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_SR10_AFG_black_MRPS_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_SR10_AFG_black_MRPS_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"JCA_20Rnd_762x51_Green_PMAG","JCA_20Rnd_762x51_Green_PMAG"};
        respawnMagazines[] = {"JCA_20Rnd_762x51_Green_PMAG","JCA_20Rnd_762x51_Green_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_SR10_AFG_black_MRPS_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_MRPS_black",{"JCA_20Rnd_762x51_Green_PMAG",20},{},"JCA_bipod_04_black"},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"JCA_20Rnd_762x51_Green_PMAG",2,20},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"JCA_20Rnd_762x51_Green_PMAG",3,20}}},{},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Rifleman_Light_AT_WDL_01 : E22_B_FDF_Soldier_LAT_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","launch_MRAWS_green_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","launch_MRAWS_green_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_kitbag_woodland_LAT";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{"launch_MRAWS_green_F","","","",{},{},""},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"HandGrenade",2,1}}},{"E22_FDF_B_kitbag_woodland_LAT",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HEAT55_F",2,1},{"MRAWS_HE_F",1,1}}},"E22_FDF_H_HelmetHBK_ear_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Combat_Life_Saver_WDL_01 : E22_B_FDF_Soldier_CLS_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_Kitbag_woodland_CLS";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"SmokeShellPurple",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"SmokeShellPurple",1,1}}},{"E22_FDF_B_Kitbag_woodland_CLS",{{"Medikit",1},{"FirstAidKit",10}}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Repair_Specialist_WDL_01 : E22_B_FDF_Soldier_REP_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_Kitbag_woodland_REP";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30}}},{"E22_FDF_B_Kitbag_woodland_REP",{{"ToolKit",1}}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_amber_black_F",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Explosive_Specialist_WDL_01 : E22_B_FDF_Soldier_EXP_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_Kitbag_woodland_EXP";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"SmokeShell",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"SmokeShell",1,1}}},{"E22_FDF_B_Kitbag_woodland_EXP",{{"ToolKit",1},{"MineDetector",1},{"SLAMDirectionalMine_Wire_Mag",2,1},{"DemoCharge_Remote_Mag",2,1}}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_amber_black_F",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Helicopter_Pilot_WDL_01 : E22_B_FDF_Helipilot_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_compact_woodland_F","E22_FDF_H_Helmet_Heli_VisorUp_black_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_compact_woodland_F","E22_FDF_H_Helmet_Heli_VisorUp_black_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_F","","","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"NVGoggles_OPFOR",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_compact_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30}}},{},"E22_FDF_H_Helmet_Heli_VisorUp_black_F","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Helicopter_Crew_WDL_01 : E22_B_FDF_Helicrew_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_compact_woodland_F","E22_FDF_H_Helmet_Heli_crew_black_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_compact_woodland_F","E22_FDF_H_Helmet_Heli_crew_black_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_F","","","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"NVGoggles_OPFOR",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_compact_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30}}},{},"E22_FDF_H_Helmet_Heli_crew_black_F","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Ammo_Bearer_WDL_01 : E22_B_FDF_Soldier_AB_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_Kitbag_woodland_AMO";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"HandGrenade",2,1}}},{"E22_FDF_B_Kitbag_woodland_AMO",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",12,30},{"JCA_20Rnd_762x51_Green_PMAG",8,20}}},"E22_FDF_H_HelmetHBK_headset_woodland_F","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Engineer_WDL_01 : E22_B_FDF_Soldier_ENG_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_Kitbag_woodland_ENG";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"HandGrenade",2,1}}},{"E22_FDF_B_Kitbag_woodland_ENG",{{"ToolKit",1}}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_amber_black_F",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Crewman_WDL_01 : E22_B_FDF_Crewman_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_crew_woodland_F","E22_FDF_H_Beret_01_headset_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_crew_woodland_F","E22_FDF_H_Beret_01_headset_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_crew_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30}}},{},"E22_FDF_H_Beret_01_headset_black_F","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Officer_WDL_01 : E22_B_FDF_Officer_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_holster_woodland_F","E22_FDF_H_Beret_01_black_F","ItemMap","ItemRadio","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_holster_woodland_F","E22_FDF_H_Beret_01_black_F","ItemMap","ItemRadio","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_black_AICO_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_black_AICO_F","JCA_hgun_P226_black_F"};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"",2,0}}},{"E22_FDF_V_CarrierRigKBT_01_holster_woodland_F",{}},{},"E22_FDF_H_Beret_01_black_F","",{},{"ItemMap","","ItemRadio","","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Field_Commander_WDL_01 : E22_B_FDF_Officer_Field_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Field Commander";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_Beret_01_headset_black_F","ItemMap","ItemRadio","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_Beret_01_headset_black_F","ItemMap","ItemRadio","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_black_AICO_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_black_AICO_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_black_AICO_F","","","JCA_optic_AICO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30}}},{},"E22_FDF_H_Beret_01_headset_black_F","",{},{"ItemMap","","ItemRadio","","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Survivor_WDL_01 : E22_B_FDF_Soldier_Survivor_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        weapons[] = {"JCA_arifle_M4A4_VFG_black_AICO_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_black_AICO_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"E22_FDF_U_CombatUniform_01_woodland_F",{}},{},{},"","",{},{"","","","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Mine_Specialist_WDL_01 : E22_B_FDF_Soldier_Mine_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_Kitbag_woodland_MINE";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30}}},{"E22_FDF_B_Kitbag_woodland_MINE",{{"APERSBoundingMine_Range_Mag",4,1},{"APERSMineDispenser_Mag",2,1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"SLAMDirectionalMine_Wire_Mag",2,1}}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Radio_Operator_WDL_01 : E22_B_FDF_RadioOperator_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_RadioBag_woodland";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30}}},{"E22_FDF_B_RadioBag_woodland",{}},"E22_FDF_H_HelmetHBK_headset_woodland_F","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Gunner_Mk6_WDL_01 : E22_B_FDF_Support_Mortar_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_B_FDF_Mortar_01_weapon_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",3,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{}},{"E22_B_FDF_Mortar_01_weapon_F",{}},"E22_FDF_H_HelmetHBK_headset_woodland_F","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Gunner_Mk6_Asst_WDL_01 : E22_B_FDF_Support_Mortar_A_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6, Asst.)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_B_FDF_Mortar_01_support_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",3,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{}},{"E22_B_FDF_Mortar_01_support_F",{}},"E22_FDF_H_HelmetHBK_headset_woodland_F","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_UAV_Specialist_WDL_01 : E22_B_FDF_Soldier_UAV_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Specialist";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"SmokeShell",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"SmokeShell",1,1}}},{},"E22_FDF_H_HelmetHBK_ear_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_UAV_Operator_AR_WDL_01 : E22_B_FDF_Soldier_UAV_01_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AR-2)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_B_FDF_UAV_01_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"SmokeShell",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"SmokeShell",1,1}}},{"E22_B_FDF_UAV_01_backpack_F",{}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_UAV_Operator_AL_WDL_01 : E22_B_FDF_Soldier_UAV_06_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_B_FDF_UAV_06_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"SmokeShell",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"SmokeShell",1,1}}},{"E22_B_FDF_UAV_06_backpack_F",{}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_faded_black_F",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_UAV_Operator_AL_6Medical_WDL_01 : E22_B_FDF_Soldier_UAV_06_medical_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_B_FDF_UAV_06_medical_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"SmokeShell",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"SmokeShell",1,1}}},{"E22_B_FDF_UAV_06_medical_backpack_F",{}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_UAV_Operator_AL_6Demining_WDL_01 : E22_B_FDF_Soldier_UAV_06_demining_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Demining)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_B_FDF_UAV_06_antimine_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"SmokeShell",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"SmokeShell",1,1}}},{"E22_B_FDF_UAV_06_antimine_backpack_F",{}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_UGV_Operator_ED_1E_WDL_01 : E22_B_FDF_Soldier_UGV_02_science_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1E)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_B_FDF_UGV_02_Science_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"SmokeShell",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"SmokeShell",1,1}}},{"E22_B_FDF_UGV_02_Science_backpack_F",{}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_UGV_Operator_ED_1D_WDL_01 : E22_B_FDF_Soldier_UGV_02_demining_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_B_FDF_UGV_02_Demining_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"",4,0},{"SmokeShell",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"SmokeShell",1,1}}},{"E22_B_FDF_UGV_02_Demining_backpack_F",{}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_amber_black_F",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Recon_Scout_WDL_01 : E22_B_FDF_Recon_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_light_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F","JCA_hgun_P226_black_snds_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F","JCA_hgun_P226_black_snds_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_Kitbag_woodland";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F","JCA_muzzle_snds_556_advanced_black","JCA_acc_DualMount_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_snds_F","JCA_muzzle_snds_9MM_tactical_black","","",{},{},""},{"E22_FDF_U_CombatUniform_01_light_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30}}},{"E22_FDF_B_Kitbag_woodland",{}},"E22_FDF_H_HelmetHBK_ear_woodland_F","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Recon_Scout_Anti_Tank_WDL_01 : E22_B_FDF_Recon_LAT_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (Anti-Tank)";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_light_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F","launch_MRAWS_green_F","JCA_hgun_P226_black_snds_F","Binocular"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F","launch_MRAWS_green_F","JCA_hgun_P226_black_snds_F","Binocular"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_kitbag_woodland_LAT";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F","JCA_muzzle_snds_556_advanced_black","JCA_acc_DualMount_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{"launch_MRAWS_green_F","","","",{},{},""},{"JCA_hgun_P226_black_snds_F","JCA_muzzle_snds_9MM_tactical_black","","",{},{},""},{"E22_FDF_U_CombatUniform_01_light_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30}}},{"E22_FDF_B_kitbag_woodland_LAT",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HEAT55_F",2,1},{"MRAWS_HE_F",1,1}}},"E22_FDF_H_HelmetHBK_ear_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Recon_Demo_Specialist_WDL_01 : E22_B_FDF_Recon_EXP_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_light_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F","JCA_hgun_P226_black_snds_F","Binocular"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F","JCA_hgun_P226_black_snds_F","Binocular"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_Kitbag_woodland_EXP";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F","JCA_muzzle_snds_556_advanced_black","JCA_acc_DualMount_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_snds_F","JCA_muzzle_snds_9MM_tactical_black","","",{},{},""},{"E22_FDF_U_CombatUniform_01_light_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30}}},{"E22_FDF_B_Kitbag_woodland_EXP",{{"ToolKit",1},{"MineDetector",1},{"SLAMDirectionalMine_Wire_Mag",2,1},{"DemoCharge_Remote_Mag",2,1}}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_amber_black_F",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Recon_Paramedic_WDL_01 : E22_B_FDF_Recon_CLS_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_light_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_black_AICO_DualMount_snds_F","JCA_hgun_P226_black_snds_F","Binocular"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_black_AICO_DualMount_snds_F","JCA_hgun_P226_black_snds_F","Binocular"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_FDF_B_Kitbag_woodland_CLS";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_black_AICO_DualMount_snds_F","JCA_muzzle_snds_556_advanced_black","JCA_acc_DualMount_black_Pointer","JCA_optic_AICO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_snds_F","JCA_muzzle_snds_9MM_tactical_black","","",{},{},""},{"E22_FDF_U_CombatUniform_01_light_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30}}},{"E22_FDF_B_Kitbag_woodland_CLS",{{"Medikit",1},{"FirstAidKit",10}}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Recon_Team_Leader_WDL_01 : E22_B_FDF_Recon_TL_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_light_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F","JCA_hgun_P226_black_snds_F","Binocular"};
        respawnWeapons[] = {"JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F","JCA_hgun_P226_black_snds_F","Binocular"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP","FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP"};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP","FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP"};

        backpack = "E22_FDF_B_Kitbag_woodland";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F","JCA_muzzle_snds_556_advanced_black","JCA_acc_DualMount_black_Pointer","JCA_optic_AICO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{"FA_1Rnd_40mm_Mk380_NRP",1},""},{},{"JCA_hgun_P226_black_snds_F","JCA_muzzle_snds_9MM_tactical_black","","",{},{},""},{"E22_FDF_U_CombatUniform_01_light_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"FA_1Rnd_40mm_Mk380_NRP",3,1}}},{"E22_FDF_B_Kitbag_woodland",{}},"E22_FDF_H_HelmetHBK_ear_woodland_F","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Recon_Marksman_WDL_01 : E22_B_FDF_Recon_M_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_light_woodland_shortsleeve_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_SR10_AFG_black_MRPS_laserModule_snds_F","JCA_hgun_P226_black_snds_F","Binocular"};
        respawnWeapons[] = {"JCA_arifle_SR10_AFG_black_MRPS_laserModule_snds_F","JCA_hgun_P226_black_snds_F","Binocular"};

        magazines[] = {"JCA_20Rnd_762x51_Green_PMAG","JCA_20Rnd_762x51_Green_PMAG"};
        respawnMagazines[] = {"JCA_20Rnd_762x51_Green_PMAG","JCA_20Rnd_762x51_Green_PMAG"};

        backpack = "E22_FDF_B_Kitbag_woodland";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_SR10_AFG_black_MRPS_laserModule_snds_F","JCA_muzzle_snds_762_tactical_black","JCA_acc_LaserModule_black_Pointer","JCA_optic_MRPS_black",{"JCA_20Rnd_762x51_Green_PMAG",20},{},"JCA_bipod_04_black"},{},{"JCA_hgun_P226_black_snds_F","JCA_muzzle_snds_9MM_tactical_black","","",{},{},""},{"E22_FDF_U_CombatUniform_01_light_woodland_shortsleeve_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"",4,0}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"JCA_20Rnd_762x51_Green_PMAG",5,20}}},{"E22_FDF_B_Kitbag_woodland",{}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Recon_JTAC_WDL_01 : E22_B_FDF_Recon_JTAC_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_light_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_ear_woodland_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F","JCA_hgun_P226_black_snds_F","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F","JCA_hgun_P226_black_snds_F","Laserdesignator_01_khk_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP","Laserbatteries","FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP","Laserbatteries"};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP","Laserbatteries","FA_JCA_30Rnd_556x45_Green_PMAG ","FA_1Rnd_40mm_Mk380_NRP","Laserbatteries"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F","JCA_muzzle_snds_556_advanced_black","JCA_acc_DualMount_black_Pointer","JCA_optic_AICO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{"FA_1Rnd_40mm_Mk380_NRP",1},""},{},{"JCA_hgun_P226_black_snds_F","JCA_muzzle_snds_9MM_tactical_black","","",{},{},""},{"E22_FDF_U_CombatUniform_01_light_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"",4,0},{"SmokeShell",1,1},{"B_IR_Grenade",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"SmokeShellBlue",1,1},{"B_IR_Grenade",1,1},{"FA_1Rnd_40mm_Mk380_NRP",3,1}}},{},"E22_FDF_H_HelmetHBK_ear_woodland_F","JCA_G_Glasses_Tactical_faded_black_F",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FinlandArmy_Yabhon_F3_WDL_01 : B_UAV_02_dynamicLoadout_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Yabhon-F3";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class B_FinlandArmy_UAV_Operator_switchblade_WDL_01 : B_FinlandArmy_UAV_Operator_AR_WDL_01 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator [switchblade]";
        side = 1;
        faction = "B_FinlandArmy_WDL";

        identityTypes[] = {"Head_Enoch","LanguageENGB_F"};

        uniformClass = "E22_FDF_U_CombatUniform_01_woodland_F";

        linkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F","E22_FDF_H_HelmetHBK_headset_woodland_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","JCA_hgun_P226_black_F"};

        magazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};
        respawnMagazines[] = {"FA_JCA_30Rnd_556x45_Green_PMAG ","FA_JCA_30Rnd_556x45_Green_PMAG "};

        backpack = "E22_RAF_B_Carryall_lesnoy";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F","","JCA_acc_LaserModule_black_Pointer","JCA_optic_IHO_black",{"FA_JCA_30Rnd_556x45_Green_PMAG ",30},{},""},{},{"JCA_hgun_P226_black_F","","","",{},{},""},{"E22_FDF_U_CombatUniform_01_woodland_F",{{"FirstAidKit",2},{"acc_flashlight",1},{"FA_JCA_30Rnd_556x45_Green_PMAG ",4,30},{"SmokeShell",1,1}}},{"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",{{"FA_JCA_30Rnd_556x45_Green_PMAG ",1,30},{"SmokeShell",1,1}}},{"E22_RAF_B_Carryall_lesnoy",{{"SwitchBlade_600_Tube_Woodland",1},{"GX_UAVBattery",1},{"SwitchBlade_300_Tube_Woodland",1}}},"E22_FDF_H_HelmetHBK_headset_woodland_F","JCA_G_Glasses_Tactical_clear_black_F",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_BFinlandArmyWDL_Bardelas_01 : B_T_APC_Tracked_01_AA_F_OCimport_B_FinlandArmy_WDL_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bardelas";
        side = 1;
        faction = "B_FinlandArmy_WDL";
        crew = "B_FinlandArmy_Crewman_WDL_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FinlandArmy_Crewman_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_body_olive_co.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_tower_olive_co.paa'];_unit setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

};
