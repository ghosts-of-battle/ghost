// Aegis_CIV_MA_F - ghost_Civilians (Malden)
// 89 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (10) --
//    Aegis_C_Heli_EC_01_civ_RF_Malden | H225 Super Puma (Civilian)
//    Aegis_C_Heli_EC_01A_civ_RF_Malden | H215 Super Puma (Civilian)
//    Aegis_C_Heli_EC_04_Rescue_RF_Malden | H225 Super Puma SAR
//    Aegis_C_Heli_Light_01_Civil_F_malden | MD 500
//    Aegis_C_Heli_Light_02_civil_F_Malden | PO-30
//    Aegis_C_Heli_Transport_02_civil_F_malden | EH-302
//    Aegis_C_Heli_Transport_02_VIP_F_Malden | EH-302 (Executive Transport)
//    Aegis_C_Plane_Civil_01_F_malden | Cessna TTx
//    Aegis_C_Plane_Civil_01_racing_F_malden | Cessna TTx (Racing)
//    Aegis_C_Plane_Transport_01_civil_F_Malden | L-192
//
// -- Car (20) --
//    Aegis_C_Hatchback_01_Malden_F | Hatchback
//    Aegis_C_Hatchback_01_sport_Malden_F | Hatchback (Sport)
//    Aegis_C_Offroad_01_comms_F_Malden | Offroad (Comms)
//    Aegis_C_Offroad_01_covered_F_Malden | Offroad (Covered)
//    Aegis_C_Offroad_01_F_Malden | Offroad
//    Aegis_C_Offroad_02_F_Malden | Jeep Wrangler
//    Aegis_C_Pickup_Covered_RF_Malden | Ram 1500 (Covered)
//    Aegis_C_Pickup_RF_Malden | Ram 1500
//    Aegis_C_Quadbike_01_F_Malden | Quad Bike
//    Aegis_C_SUV_01_F_Malden | SUV
//    Aegis_C_Truck_02_cargo_Malden_F | KamAZ Cargo
//    Aegis_C_Truck_02_covered_Malden_F | KamAZ Transport (covered)
//    Aegis_C_Truck_02_flatbed_Malden_F | KamAZ Flatbed
//    Aegis_C_Truck_02_transport_Malden_F | KamAZ Transport
//    Aegis_C_Van_01_box_Malden_F | Truck Boxer
//    Aegis_C_Van_01_transport_Malden_F | Truck
//    Aegis_C_Van_02_medevac_Malden_F | Van (Ambulance)
//    Aegis_C_Van_02_minibus_Malden_F | Van (Bus)
//    Aegis_C_Van_02_service_Malden_F | Van (Services)
//    Aegis_C_Van_02_transport_Malden_F | Van Transport
//
// -- Men (48) --
//    Aegis_C_Farmer_01_malden_F | Farmer
//    Aegis_C_Journalist_F_malden | Journalist
//    Aegis_C_Man_BusDriver_F_malden | Bus Driver
//    Aegis_C_Man_CargoPilot_malden_F | Cargo Pilot
//    Aegis_C_Man_casual_1_F_malden | Civilian (Casual) 1
//    Aegis_C_Man_casual_2_F_malden | Civilian (Casual) 2
//    Aegis_C_Man_casual_3_F_malden | Civilian (Casual) 3
//    Aegis_C_Man_casual_4_F_malden | Civilian (Summer) 1
//    Aegis_C_Man_casual_4_v2_F_malden | Civilian (Casual) 4
//    Aegis_C_Man_casual_5_F_malden | Civilian (Summer) 2
//    Aegis_C_Man_casual_5_v2_F_malden | Civilian (Casual) 5
//    Aegis_C_Man_casual_6_F_malden | Civilian (Summer) 3
//    Aegis_C_Man_casual_6_v2_F_malden | Civilian (Casual) 6
//    Aegis_C_Man_casual_7_F_malden | Civilian (Casual) 4
//    Aegis_C_Man_casual_8_F_malden | Civilian (Casual) 5
//    Aegis_C_Man_casual_9_F_malden | Civilian (Casual) 6
//    Aegis_C_Man_ConstructionWorker_01_Black_F_malden | Construction Worker (Black)
//    Aegis_C_Man_ConstructionWorker_01_Blue_F_malden | Construction Worker (Blue)
//    Aegis_C_Man_ConstructionWorker_01_Red_F_malden | Construction Worker (Red)
//    Aegis_C_Man_ConstructionWorker_01_Vrana_F_malden | Construction Worker (Vrana)
//    Aegis_C_Man_Firefighter_RF_malden | Firefighter (Wildland)
//    Aegis_C_Man_Fisherman_01_F_malden | Fisherman
//    Aegis_C_Man_formal_1_F_malden | Civilian (Formal) 1
//    Aegis_C_Man_formal_2_F_malden | Civilian (Formal) 2
//    Aegis_C_Man_formal_3_F_malden | Civilian (Formal) 3
//    Aegis_C_Man_formal_4_F_malden | Civilian (Formal) 4
//    Aegis_C_Man_Messenger_01_F_Malden | Messenger
//    Aegis_C_man_p_beggar_F_malden | Beggar
//    Aegis_C_man_p_fugitive_F_malden | Fugitive
//    Aegis_C_Man_Paramedic_01_F_malden | Paramedic
//    Aegis_C_Man_Pilot_F_malden | Pilot
//    Aegis_C_man_polo_1_F_malden | Civilian 1
//    Aegis_C_man_polo_2_F_malden | Civilian 2
//    Aegis_C_man_polo_3_F_malden | Civilian 3
//    Aegis_C_man_polo_4_F_malden | Civilian 4
//    Aegis_C_man_polo_5_F_malden | Civilian 5
//    Aegis_C_man_polo_6_F_malden | Civilian 6
//    Aegis_C_Man_smart_casual_1_F_malden | Civilian (Smart Casual) 1
//    Aegis_C_Man_smart_casual_2_F_malden | Civilian (Smart Casual) 2
//    Aegis_C_Man_Sport_1_F_malden | Civilian (Sport) 1
//    Aegis_C_Man_Sport_2_F_malden | Civilian (Sport) 2
//    Aegis_C_Man_Sport_3_F_malden | Civilian (Sport) 3
//    Aegis_C_Man_UAV_01_F_malden | UAV Operator (Drone)
//    Aegis_C_Man_UAV_06_F_malden | UAV Operator (Utility)
//    Aegis_C_Man_UAV_06_medical_F_malden | UAV Operator (Utility, Medical)
//    Aegis_C_Man_UtilityWorker_01_F_malden | Utility Worker
//    Aegis_C_Pilot_Rescue_RF_malden | Helicopter Pilot (SAR)
//    Aegis_C_Pilot_RF_malden | Helicopter Pilot
//
// -- Ship (6) --
//    Aegis_C_Boat_Civil_01_F_Malden | Motorboat
//    Aegis_C_Boat_Civil_01_Rescue_F_Malden | Motorboat (Rescue)
//    Aegis_C_Boat_Civil_02_F_Malden | Small Boat
//    Aegis_C_Boat_Transport_02_F_Malden | RHIB
//    Aegis_C_Rubberboat_F_Malden | Rescue Boat
//    Aegis_C_Scooter_Transport_01_F_Malden | Water Scooter
//
// -- Support (5) --
//    Aegis_C_Offroad_01_repair_F_Malden | Offroad (Services)
//    Aegis_C_Pickup_Repair_RF_Malden | Ram 1500 (Repair)
//    Aegis_C_Truck_02_box_Malden_F | KamAZ Repair
//    Aegis_C_Truck_02_fuel_Malden_F | KamAZ Fuel
//    Aegis_C_Van_01_fuel_Malden_F | Fuel Truck
//
