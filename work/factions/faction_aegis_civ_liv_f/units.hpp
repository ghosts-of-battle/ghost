// Aegis_CIV_LIV_F - ghost_Civilians (Livonia)
// 77 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (8) --
//    Aegis_C_Heli_EC_01_civ_RF_Enoch | H225 Super Puma (Civilian)
//    Aegis_C_Heli_EC_01A_civ_RF_Enoch | H215 Super Puma (Civilian)
//    Aegis_C_Heli_EC_04_Rescue_RF_Enoch | H225 Super Puma SAR
//    Aegis_C_Heli_Light_01_Civil_F_Enoch | MD 500
//    Aegis_C_Heli_Light_02_civil_F_Enoch | PO-30
//    Aegis_C_Plane_Civil_01_F_Enoch | Cessna TTx
//    Aegis_C_Plane_Civil_01_racing_F_Enoch | Cessna TTx (Racing)
//    Aegis_C_Plane_Transport_01_civil_F_Enoch | L-192
//
// -- Car (19) --
//    Aegis_C_Hatchback_01_Enoch_F | Hatchback
//    Aegis_C_Hatchback_01_sport_Enoch_F | Hatchback (Sport)
//    Aegis_C_Offroad_01_comms_F_Enoch | Offroad (Comms)
//    Aegis_C_Offroad_01_covered_F_Enoch | Offroad (Covered)
//    Aegis_C_Offroad_01_F_Enoch | Offroad
//    Aegis_C_Pickup_Covered_RF_Enoch | Ram 1500 (Covered)
//    Aegis_C_Pickup_RF_Enoch | Ram 1500
//    Aegis_C_Quadbike_01_F_Enoch | Quad Bike
//    Aegis_C_SUV_01_F_Enoch | SUV
//    Aegis_C_Truck_02_cargo_Enoch_F | KamAZ Cargo
//    Aegis_C_Truck_02_covered_Enoch_F | KamAZ Transport (covered)
//    Aegis_C_Truck_02_flatbed_Enoch_F | KamAZ Flatbed
//    Aegis_C_Truck_02_transport_Enoch_F | KamAZ Transport
//    Aegis_C_Van_01_box_Enoch_F | Truck Boxer
//    Aegis_C_Van_01_transport_Enoch_F | Truck
//    Aegis_C_Van_02_medevac_Livonia_F | Van (Ambulance)
//    Aegis_C_Van_02_Service_Enoch_F | Van (Services)
//    Aegis_C_Van_02_transport_Enoch_F | Van Transport
//    Aegis_C_Van_02_vehicle_Enoch_F | Van (Cargo)
//
// -- Men (45) --
//    Aegis_C_Journalist_F_Enoch | Journalist
//    Aegis_C_Man_CargoPilot_enoch_F | Cargo Pilot
//    Aegis_C_Man_casual_1_F_Enoch | Civilian (Casual) 1
//    Aegis_C_Man_casual_2_F_Enoch | Civilian (Casual) 2
//    Aegis_C_Man_casual_3_F_Enoch | Civilian (Casual) 3
//    Aegis_C_Man_casual_4_v2_F_Enoch | Civilian (Casual) 4
//    Aegis_C_Man_casual_5_v2_F_Enoch | Civilian (Casual) 5
//    Aegis_C_Man_casual_6_v2_F_Enoch | Civilian (Casual) 6
//    Aegis_C_Man_casual_7_F_Enoch | Civilian (Casual) 4
//    Aegis_C_Man_casual_8_F_Enoch | Civilian (Casual) 5
//    Aegis_C_Man_casual_9_F_Enoch | Civilian (Casual) 6
//    Aegis_C_Man_ConstructionWorker_01_Black_F_Enoch | Construction Worker (Black)
//    Aegis_C_Man_ConstructionWorker_01_Blue_F_Enoch | Construction Worker (Blue)
//    Aegis_C_Man_ConstructionWorker_01_Red_F_Enoch | Construction Worker (Red)
//    Aegis_C_Man_ConstructionWorker_01_Vrana_F_Enoch | Construction Worker (Vrana)
//    Aegis_C_Man_Firefighter_RF_Enoch | Firefighter (Wildland)
//    Aegis_C_Man_Fisherman_01_F_Enoch | Fisherman
//    Aegis_C_Man_formal_1_F_Enoch | Civilian (Formal) 1
//    Aegis_C_Man_formal_2_F_Enoch | Civilian (Formal) 2
//    Aegis_C_Man_formal_3_F_Enoch | Civilian (Formal) 3
//    Aegis_C_Man_formal_4_F_Enoch | Civilian (Formal) 4
//    Aegis_C_Man_Hunter_1_F_Enoch | Hunter
//    Aegis_C_Man_Messenger_01_F_Enoch | Messenger
//    Aegis_C_man_p_beggar_F_Enoch | Beggar
//    Aegis_C_man_p_fugitive_F_Enoch | Fugitive
//    Aegis_C_Man_Paramedic_01_F_Enoch | Paramedic
//    Aegis_C_Man_Pilot_F_Enoch | Pilot
//    Aegis_C_Man_smart_casual_1_F_Enoch | Civilian (Smart Casual) 1
//    Aegis_C_Man_smart_casual_2_F_Enoch | Civilian (Smart Casual) 2
//    Aegis_C_Man_Sport_1_F_Enoch | Civilian (Sport) 1
//    Aegis_C_Man_Sport_2_F_Enoch | Civilian (Sport) 2
//    Aegis_C_Man_Sport_3_F_Enoch | Civilian (Sport) 3
//    Aegis_C_Man_UAV_01_F_Enoch | UAV Operator (Drone)
//    Aegis_C_Man_UAV_06_F_Enoch | UAV Operator (Utility)
//    Aegis_C_Man_UAV_06_medical_F_Enoch | UAV Operator (Utility, Medical)
//    Aegis_C_Man_UtilityWorker_01_F_Enoch | Utility Worker
//    Aegis_C_Pilot_Rescue_RF_Enoch | Helicopter Pilot (SAR)
//    Aegis_C_Pilot_RF_Enoch | Helicopter Pilot
//    C_Farmer_01_enoch_F | Farmer
//    C_Man_1_enoch_F | Civilian 1
//    C_Man_2_enoch_F | Civilian 2
//    C_Man_3_enoch_F | Civilian 3
//    C_Man_4_enoch_F | Civilian 4
//    C_Man_5_enoch_F | Civilian 5
//    C_Man_6_enoch_F | Civilian 6
//
// -- Support (5) --
//    Aegis_C_Pickup_Repair_RF_Enoch | Ram 1500 (Repair)
//    Aegis_C_Truck_02_box_Enoch_F | KamAZ Repair
//    Aegis_C_Truck_02_fuel_Enoch_F | KamAZ Fuel
//    Aegis_C_Truck_02_racing_Enoch_F | KamAZ Racing
//    Aegis_C_Van_01_fuel_Enoch_F | Fuel Truck
//
