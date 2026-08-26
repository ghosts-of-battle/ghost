// AddGis_IND_I_A_F - ghost_Israel (Arid)
// 90 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (9) --
//    AddGis_I_I_A_Heli_Attack_01_dynamicLoadout_F | AH-99 Akav
//    AddGis_I_I_A_Heli_Light_01_dynamicLoadout_F | AH-9 Pawnee
//    AddGis_I_I_A_Heli_Light_01_F | MH-9 Hummingbird
//    AddGis_I_I_A_Heli_Transport_01_F | UH-80 Duchifat
//    AddGis_I_I_A_Plane_Fighter_05_F | F-35F Adir
//    AddGis_I_I_A_Plane_Fighter_05_Stealth_F | F-35F Adir (Stealth)
//    AddGis_I_I_A_VTOL_01_armed_F | AV-44 X Tannin
//    AddGis_I_I_A_VTOL_01_infantry_F | V-44 X Livyatan (Infantry Transport)
//    AddGis_I_I_A_VTOL_01_vehicle_F | V-44 X Livyatan (Vehicle Transport)
//
// -- Armored (5) --
//    AddGis_I_I_A_APC_Tracked_01_AA_F | Tzavoa IFV-6a
//    AddGis_I_I_A_APC_Tracked_01_rcws_F | Nemmera IFV-6c
//    AddGis_I_I_A_MBT_01_arty_F | Kela Mk4
//    AddGis_I_I_A_MBT_01_cannon_F | Mohetz Mk4
//    AddGis_I_I_A_MBT_02_cannon_F | T100 Black Eagle
//
// -- Autonomous (12) --
//    AddGis_I_I_A_Radar_System_01_F | AN/MPQ-105 Radar
//    AddGis_I_I_A_SAM_System_03_F | MIM-104 Patriot
//    AddGis_I_I_A_UAV_01_F | Naiyana AR-2
//    AddGis_I_I_A_UAV_02_dynamicLoadout_F | MQ-4A Greyhawk
//    AddGis_I_I_A_UAV_02_lxws_F | Chfrfr AP-5
//    AddGis_I_I_A_UAV_03_dynamicLoadout_F | MQ-12 Gideon
//    AddGis_I_I_A_UAV_06_F | Pashosh AL-6
//    AddGis_I_I_A_UAV_06_medical_F | Pashosh AL-6 (Medical)
//    AddGis_I_I_A_UGV_01_F | UGV Stomper
//    AddGis_I_I_A_UGV_01_medical_F | UGV Stomper Medical
//    AddGis_I_I_A_UGV_01_rcws_F | UGV Stomper RCWS
//    AddGis_I_I_A_UGV_02_Demining_F | ED-1D Pelter
//
// -- Car (15) --
//    AddGis_I_I_A_MRAP_01_F | Goliath
//    AddGis_I_I_A_MRAP_01_gmg_F | Goliath GMG
//    AddGis_I_I_A_MRAP_01_hmg_F | Goliath HMG
//    AddGis_I_I_A_Pickup_aat_F | Ram 1500 (AA)
//    AddGis_I_I_A_Pickup_AT_F | Pickup (AT)
//    AddGis_I_I_A_Pickup_Comms_F | Ram 1500 (Comms)
//    AddGis_I_I_A_Pickup_F | Ram 1500
//    AddGis_I_I_A_Pickup_HMG_F | Ram 1500 (HMG)
//    AddGis_I_I_A_Quadbike_01_F | Quad Bike
//    AddGis_I_I_A_Truck_01_box_F | HEMTT Container
//    AddGis_I_I_A_Truck_01_cargo_F | HEMTT Cargo
//    AddGis_I_I_A_Truck_01_covered_F | HEMTT Transport (covered)
//    AddGis_I_I_A_Truck_01_flatbed_F | HEMTT Flatbed
//    AddGis_I_I_A_Truck_01_mover_F | HEMTT
//    AddGis_I_I_A_Truck_01_transport_F | HEMTT Transport
//
// -- Men (33) --
//    AddGis_I_I_A_engineer_F | Engineer
//    AddGis_I_I_A_medic_F | Combat Life Saver
//    AddGis_I_I_A_RadioOperator_F | Radio Operator
//    AddGis_I_I_A_Soldier_A_F | Ammo Bearer
//    AddGis_I_I_A_Soldier_AA_F | Missile Specialist (AA)
//    AddGis_I_I_A_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    AddGis_I_I_A_Soldier_AAR_F | Asst. Autorifleman
//    AddGis_I_I_A_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    AddGis_I_I_A_Soldier_AR_F | Autorifleman
//    AddGis_I_I_A_Soldier_AT_F | Missile Specialist (AT)
//    AddGis_I_I_A_Soldier_CQ_F | Rifleman (Shotgun)
//    AddGis_I_I_A_Soldier_exp_F | Explosive Specialist
//    AddGis_I_I_A_Soldier_F | Rifleman
//    AddGis_I_I_A_Soldier_GL_F | Grenadier
//    AddGis_I_I_A_Soldier_LAT_F | Rifleman (AT)
//    AddGis_I_I_A_Soldier_Lite_F | Rifleman (Light)
//    AddGis_I_I_A_Soldier_M_F | Marksman
//    AddGis_I_I_A_Soldier_Mine_F | Mine Specialist
//    AddGis_I_I_A_Soldier_Repair_F | Repair Specialist
//    AddGis_I_I_A_Soldier_SL_F | Squad Leader
//    AddGis_I_I_A_Soldier_TL_F | Team Leader
//    AddGis_I_I_A_Soldier_UAV_02_lxWS_F | UAV Operator (AP-5)
//    AddGis_I_I_A_Soldier_UAV_06_F | UAV Operator (AL-6)
//    AddGis_I_I_A_Soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    AddGis_I_I_A_Soldier_UAV_F | UAV Operator
//    AddGis_I_I_A_Soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    AddGis_I_I_A_Soldier_Unarmed_F | Rifleman (Unarmed)
//    AddGis_I_I_A_support_AMG_F | Asst. Gunner (HMG/GMG)
//    AddGis_I_I_A_support_AMort_F | Asst. Gunner (Mk6)
//    AddGis_I_I_A_Support_GMG_F | Gunner (GMG)
//    AddGis_I_I_A_Support_MG_F | Gunner (HMG)
//    AddGis_I_I_A_Support_Mort_F | Gunner (Mk6)
//    AddGis_I_I_A_Survivor_F | Survivor
//
// -- Static (11) --
//    AddGis_I_I_A_GMG_01_A_F | XM307A
//    AddGis_I_I_A_GMG_01_F | XM307
//    AddGis_I_I_A_GMG_01_high_F | XM307 (High)
//    AddGis_I_I_A_HMG_01_A_F | XM312A
//    AddGis_I_I_A_HMG_01_F | XM312
//    AddGis_I_I_A_HMG_01_high_F | XM312 (High)
//    AddGis_I_I_A_HMG_02_F | M2 HMG .50
//    AddGis_I_I_A_HMG_02_high_F | M2 HMG .50 (Raised)
//    AddGis_I_I_A_Mortar_01_F | Mk6 Mortar
//    AddGis_I_I_A_Static_AA_F | Static Titan Launcher (AA)
//    AddGis_I_I_A_Static_AT_F | Static Titan Launcher (AT)
//
// -- Support (5) --
//    AddGis_I_I_A_APC_Tracked_01_CRV_F | Nemia CRV-6e
//    AddGis_I_I_A_Truck_01_ammo_F | HEMTT Ammo
//    AddGis_I_I_A_Truck_01_fuel_F | HEMTT Fuel
//    AddGis_I_I_A_Truck_01_medical_F | HEMTT Medical
//    AddGis_I_I_A_Truck_01_repair_F | HEMTT Repair
//
