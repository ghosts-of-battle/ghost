// CIV_F - ghost_Civilians (Altis)
// 128 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (10) --
//    Aegis_C_Heli_Transport_02_VIP_F | EH-302 (Executive Transport)
//    Aegis_C_Plane_Transport_01_civil_F | L-192
//    C_Heli_EC_01_civ_RF | H225 Super Puma (Civilian)
//    C_Heli_EC_01A_civ_RF | H215 Super Puma (Civilian)
//    C_Heli_EC_04_rescue_RF | H225 Super Puma SAR
//    C_Heli_Light_01_civil_F | MD 500
//    C_Heli_Light_02_civil_F | PO-30
//    C_Heli_Transport_02_civil_F | EH-302
//    C_Plane_Civil_01_F | Cessna TTx
//    C_Plane_Civil_01_racing_F | Cessna TTx (Racing)
//
// -- Autonomous (4) --
//    C_Rev_UAV_IED | Deployable IED UAV
//    C_UAV_06_F | Utility Drone
//    C_UAV_06_medical_F | Utility Drone (Medical)
//    CIV_UAV_01_lxWS | Drone
//
// -- Backpacks (3) --
//    C_UAV_06_backpack_F | UAV Bag (Utility)
//    C_UAV_06_medical_backpack_F | UAV Bag (Utility, Medical)
//    CIV_UAV_01_backpack_lxWS | UAV Bag (Yellow)
//
// -- Car (27) --
//    C_Hatchback_01_F | Hatchback
//    C_Hatchback_01_sport_F | Hatchback (Sport)
//    C_Kart_01_Blu_F | Kart (Bluking)
//    C_Kart_01_F | Kart
//    C_Kart_01_Fuel_F | Kart (Fuel)
//    C_Kart_01_Red_F | Kart (Redstone)
//    C_Kart_01_Vrana_F | Kart (Vrana)
//    C_Offroad_01_comms_F | Offroad (Comms)
//    C_Offroad_01_covered_F | Offroad (Covered)
//    C_Offroad_01_F | Offroad
//    C_Offroad_02_unarmed_F | Jeep Wrangler
//    C_Offroad_lxWS | Offroad (Desert)
//    C_Pickup_covered_rf | Ram 1500 (Covered)
//    C_Pickup_rf | Ram 1500
//    C_Quadbike_01_F | Quad Bike
//    C_SUV_01_F | SUV
//    C_Tractor_01_F | Tractor
//    C_Truck_02_cargo_lxWS | KamAZ Cargo
//    C_Truck_02_covered_F | KamAZ Transport (covered)
//    C_Truck_02_flatbed_lxWS | KamAZ Flatbed
//    C_Truck_02_transport_F | KamAZ Transport
//    C_Van_01_box_F | Truck Boxer
//    C_Van_01_transport_F | Truck
//    C_Van_02_medevac_F | Van (Ambulance)
//    C_Van_02_service_F | Van (Services)
//    C_Van_02_transport_F | Van Transport
//    C_Van_02_vehicle_F | Van (Cargo)
//
// -- Items (1) --
//    Item_C_UavTerminal | UAV Terminal [Civilians]
//
// -- Men (60) --
//    Aegis_C_Man_CargoPilot_F | Cargo Pilot
//    C_Driver_1_F | Driver (Fuel)
//    C_Driver_2_F | Driver (Bluking)
//    C_Driver_3_F | Driver (Redstone)
//    C_Driver_4_F | Driver (Vrana)
//    C_Journalist_01_War_F | Journalist (War)
//    C_journalist_F | Journalist
//    C_man_1 | Civilian
//    C_man_1_1_F | Commoner 1
//    C_man_1_2_F | Commoner 2
//    C_man_1_3_F | Commoner 3
//    C_Man_casual_1_F | Civilian (Casual) 1
//    C_Man_casual_2_F | Civilian (Casual) 2
//    C_Man_casual_3_F | Civilian (Casual) 3
//    C_Man_casual_4_F | Civilian (Summer) 1
//    C_Man_casual_4_v2_F | Civilian (Casual) 4
//    C_Man_casual_5_F | Civilian (Summer) 2
//    C_Man_casual_5_v2_F | Civilian (Casual) 5
//    C_Man_casual_6_F | Civilian (Summer) 3
//    C_Man_casual_6_v2_F | Civilian (Casual) 6
//    C_Man_casual_7_F | Civilian (Casual) 4
//    C_Man_casual_8_F | Civilian (Casual) 5
//    C_Man_casual_9_F | Civilian (Casual) 6
//    C_Man_ConstructionWorker_01_Black_F | Construction Worker (Black)
//    C_Man_ConstructionWorker_01_Blue_F | Construction Worker (Blue)
//    C_Man_ConstructionWorker_01_Red_F | Construction Worker (Red)
//    C_Man_ConstructionWorker_01_Vrana_F | Construction Worker (Vrana)
//    C_man_firefighter_RF | Firefighter (Wildland)
//    C_Man_Fisherman_01_F | Fisherman
//    C_Man_formal_1_F | Civilian (Formal) 1
//    C_Man_formal_2_F | Civilian (Formal) 2
//    C_Man_formal_3_F | Civilian (Formal) 3
//    C_Man_formal_4_F | Civilian (Formal) 4
//    C_man_hunter_1_F | Hunter
//    C_Man_Messenger_01_F | Messenger
//    C_man_p_beggar_F | Beggar
//    C_man_p_fugitive_F | Fugitive
//    C_Man_Paramedic_01_F | Paramedic
//    C_man_pilot_F | Pilot
//    C_man_polo_1_F | Civilian 1
//    C_man_polo_2_F | Civilian 2
//    C_man_polo_3_F | Civilian 3
//    C_man_polo_4_F | Civilian 4
//    C_man_polo_5_F | Civilian 5
//    C_man_polo_6_F | Civilian 6
//    C_man_priest_F | Priest
//    C_Man_smart_casual_1_F | Civilian (Smart Casual) 1
//    C_Man_smart_casual_2_F | Civilian (Smart Casual) 2
//    C_man_sport_1_F | Civilian (Sport) 1
//    C_man_sport_2_F | Civilian (Sport) 2
//    C_man_sport_3_F | Civilian (Sport) 3
//    C_Man_UAV_01_lxWS | UAV Operator (Drone)
//    C_Man_UAV_06_F | UAV Operator (Utility)
//    C_Man_UAV_06_medical_F | UAV Operator (Utility, Medical)
//    C_Man_UtilityWorker_01_F | Utility Worker
//    C_man_w_worker_F | Worker
//    C_Marshal_F | Marshal
//    C_pilot_rescue_RF | Helicopter Pilot (SAR)
//    C_pilot_RF | Helicopter Pilot
//    C_scientist_F | Scientist
//
// -- MenStory (7) --
//    C_Journalist_lxWS | Michael Sully
//    C_Nikos | Nikos
//    C_Nikos_aged | Nikos (Formal)
//    C_Orestes | Orestes
//    C_pilot2_story_RF | Mark Williams
//    C_pilot_story_RF | Barry Williams
//    C_Story_Mechanic_01_F | Markos Kouris
//
// -- MenVR (2) --
//    C_Protagonist_VR_F | VR Man
//    C_Soldier_VR_F | VR Entity
//
// -- Ship (6) --
//    C_Boat_Civil_01_F | Motorboat
//    C_Boat_Civil_01_rescue_F | Motorboat (Rescue)
//    C_Boat_Civil_02_F | Small Boat
//    C_Boat_Transport_02_F | RHIB
//    C_Rubberboat | Rescue Boat
//    C_Scooter_Transport_01_F | Water Scooter
//
// -- Support (8) --
//    C_Offroad_01_repair_F | Offroad (Services)
//    C_Pickup_repair_rf | Ram 1500 (Repair)
//    C_Truck_01_FFT_rf | HEMTT Fire Truck
//    C_Truck_02_box_F | KamAZ Repair
//    C_Truck_02_fuel_F | KamAZ Fuel
//    C_Truck_02_racing_lxWS | KamAZ Racing
//    C_Truck_03_water_rf | Typhoon Water
//    C_Van_01_fuel_F | Fuel Truck
//
