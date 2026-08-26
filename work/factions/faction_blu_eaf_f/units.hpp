// BLU_EAF_F - ghost_LDF
// 132 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier 2 / strength 3 / shape balanced / flavor west
//   LDF - national defence force, near-peer
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (10) --
//    Aegis_B_E_Heli_EC_01A_military_RF | H215 Super Puma (Unarmed)
//    Aegis_B_E_Heli_Light_03_dynamicLoadout_F | AW159 Wildcat
//    Aegis_B_E_Heli_Light_03_dynamicLoadout_RF | AW159 Wildcat ASW
//    Aegis_B_E_Heli_Light_03_unarmed_F | AW159 Wildcat (unarmed)
//    Aegis_B_E_Heli_Light_03_unarmed_RF | AW159 Wildcat ASW (Unarmed)
//    Aegis_B_E_Plane_Fighter_04_F | A-149 Orzeł
//    Aegis_B_E_Plane_Transport_01_infantry_F | C-192 Samson (Infantry Transport)
//    Aegis_B_E_Plane_Transport_01_vehicle_F | C-192 Samson (Vehicle Transport)
//    Aegis_B_E_UAV_07_F | MQ-9A Kruk
//    Aegis_B_EAF_Heli_Attack_04_F | Mi-35 Sokół
//
// -- Armored (6) --
//    Aegis_B_E_APC_tracked_03_cannon_v2_F | FV-720 Odyniec
//    Aegis_B_E_APC_Wheeled_01_atgm_v2 | KTO Borsuk (ATGM)
//    Aegis_B_E_APC_Wheeled_01_cannon_v2_F | KTO Borsuk
//    Aegis_B_E_APC_Wheeled_01_medical_F | KTO Borsuk (Medical)
//    Aegis_B_E_APC_Wheeled_01_mortar_lxWS | KTO Borsuk (Mortar)
//    Aegis_B_E_MBT_03_cannon_F | MBT-52 Niedźwiedź
//
// -- Autonomous (12) --
//    Aegis_B_E_Radar_System_01_F | AN/MPQ-105 Radar
//    Aegis_B_E_SAM_System_03_F | MIM-104 Patriot
//    Aegis_B_E_TwinMortar_RF | AMOS Container
//    Aegis_B_E_UAV_01_F | AR-2 Darter
//    Aegis_B_E_UAV_02_lxWS | AP-5 Bustard
//    Aegis_B_E_UAV_06_F | AL-6 Pelican
//    Aegis_B_E_UAV_06_medical_F | AL-6 Pelican (Medical)
//    Aegis_B_E_UGV_01_F | UGV Stomper
//    Aegis_B_E_UGV_01_medical_F | UGV Stomper Medical
//    Aegis_B_E_UGV_01_RCWS_F | UGV Stomper RCWS
//    Aegis_B_E_UGV_02_Demining_F | ED-1D Pelter
//    Aegis_B_E_UGV_02_Science_F | ED-1E Roller
//
// -- Backpacks (1) --
//    Aegis_B_E_UAV_02_backpack_lxWS | UAV Bag (AP-5) [LDF-B]
//
// -- Car (20) --
//    Aegis_B_E_Offroad_01_armed_F | Offroad (HMG)
//    Aegis_B_E_Offroad_01_comms_F | Offroad (Comms)
//    Aegis_B_E_Offroad_01_covered_F | Offroad (Covered)
//    Aegis_B_E_Offroad_01_F | Offroad
//    Aegis_B_E_Pickup_AAT_RF | Ram 1500 (AA)
//    Aegis_B_E_Pickup_AT_RF | Pickup (AT)
//    Aegis_B_E_Pickup_Comms_RF | Ram 1500 (Comms)
//    Aegis_B_E_Pickup_Covered_RF | Ram 1500 (Covered)
//    Aegis_B_E_Pickup_HMG_RF | Ram 1500 (HMG)
//    Aegis_B_E_Pickup_RF | Ram 1500
//    Aegis_B_E_Quadbike_01_F | Quad Bike
//    Aegis_B_E_Truck_02_cargo_lxWS | KamAZ Cargo
//    Aegis_B_E_Truck_02_F | KamAZ Transport (covered)
//    Aegis_B_E_Truck_02_flatbed_lxWS | KamAZ Flatbed
//    Aegis_B_E_Truck_02_MRL_F | KamAZ MRL
//    Aegis_B_E_Truck_02_transport_F | KamAZ Transport
//    Aegis_B_E_Van_02_medevac_F | Van (Ambulance)
//    Aegis_B_E_Van_02_MP_F | Van Transport (MP)
//    Aegis_B_E_Van_02_transport_F | Van Transport
//    Aegis_B_E_Van_02_Vehicle_F | Van (Cargo)
//
// -- Men (55) --
//    Aegis_B_E_Crew_F | Crewman
//    Aegis_B_E_Engineer_F | Engineer
//    Aegis_B_E_Fighter_Pilot_F | Fighter Pilot
//    Aegis_B_E_Helicrew_F | Helicopter Crew
//    Aegis_B_E_Helipilot_F | Helicopter Pilot
//    Aegis_B_E_Medic_F | Combat Life Saver
//    Aegis_B_E_Officer_F | Officer
//    Aegis_B_E_Pilot_F | Pilot
//    Aegis_B_E_RadioOperator_F | Radio Operator
//    Aegis_B_E_Scientist_F | Military Scientist
//    Aegis_B_E_Scientist_Unarmed_F | Military Scientist (Unarmed)
//    Aegis_B_E_Soldier_A_F | Ammo Bearer
//    Aegis_B_E_Soldier_AA_F | Missile Specialist (AA)
//    Aegis_B_E_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    Aegis_B_E_Soldier_AAR_F | Asst. Autorifleman
//    Aegis_B_E_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    Aegis_B_E_Soldier_AR_F | Autorifleman
//    Aegis_B_E_Soldier_AT_F | Missile Specialist (AT)
//    Aegis_B_E_Soldier_CBRN_F | CBRN Specialist
//    Aegis_B_E_Soldier_CQ_F | Rifleman (Shotgun)
//    Aegis_B_E_Soldier_Exp_F | Explosive Specialist
//    Aegis_B_E_Soldier_F | Rifleman
//    Aegis_B_E_Soldier_GL_F | Grenadier
//    Aegis_B_E_Soldier_LAT2_F | Rifleman (Light AT)
//    Aegis_B_E_Soldier_LAT_F | Rifleman (AT)
//    Aegis_B_E_Soldier_lite_F | Rifleman (Light)
//    Aegis_B_E_Soldier_M_F | Marksman
//    Aegis_B_E_Soldier_Mine_F | Mine Specialist
//    Aegis_B_E_Soldier_MP_F | Military Police Officer
//    Aegis_B_E_Soldier_Repair_F | Repair Specialist
//    Aegis_B_E_Soldier_SL_F | Squad Leader
//    Aegis_B_E_Soldier_TL_F | Team Leader
//    Aegis_B_E_Soldier_UAV_02_lxWS_F | UAV Operator (AP-5)
//    Aegis_B_E_Soldier_UAV_06_F | UAV Operator (AL-6)
//    Aegis_B_E_Soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    Aegis_B_E_Soldier_UAV_F | UAV Operator
//    Aegis_B_E_Soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    Aegis_B_E_Soldier_UGV_02_Science_F | UGV Operator (ED-1E)
//    Aegis_B_E_Soldier_unarmed_F | Rifleman (Unarmed)
//    Aegis_B_E_Support_AMG_F | Asst. Gunner (HMG/GMG)
//    Aegis_B_E_Support_AMort_F | Asst. Gunner (Mk6)
//    Aegis_B_E_Support_CMort_RF | Gunner (Light Mortar)
//    Aegis_B_E_Support_GMG_F | Gunner (GMG)
//    Aegis_B_E_Support_MG_F | Gunner (HMG)
//    Aegis_B_E_Support_Mort_F | Gunner (Mk6)
//    Atlas_B_E_Reservist_A_F | Ammo Bearer
//    Atlas_B_E_Reservist_AR_F | Autorifleman
//    Atlas_B_E_Reservist_AT_F | Rifleman (AT)
//    Atlas_B_E_Reservist_F | Rifleman
//    Atlas_B_E_Reservist_GL_F | Grenadier
//    Atlas_B_E_Reservist_M_F | Marksman
//    Atlas_B_E_Reservist_Medic_F | Combat Life Saver
//    Atlas_B_E_Reservist_Repair_F | Pioneer
//    Atlas_B_E_Reservist_SL_F | Squad Leader
//    Atlas_B_E_Reservist_TL_F | Team Leader
//
// -- MenRecon (9) --
//    Aegis_B_E_Recon_AR_F | Recon Autorifleman
//    Aegis_B_E_Recon_Exp_F | Recon Demo Specialist
//    Aegis_B_E_Recon_F | Recon Scout
//    Aegis_B_E_Recon_GL_F | Recon Grenadier
//    Aegis_B_E_Recon_JTAC_F | Recon JTAC
//    Aegis_B_E_Recon_LAT_F | Recon Scout (AT)
//    Aegis_B_E_Recon_M_F | Recon Marksman
//    Aegis_B_E_Recon_Medic_F | Recon Paramedic
//    Aegis_B_E_Recon_TL_F | Recon Team Leader
//
// -- MenSniper (2) --
//    Aegis_B_E_Sniper_wdl_F | Sniper (Woodland)
//    Aegis_B_E_Spotter_wdl_F | Spotter (Woodland)
//
// -- Static (13) --
//    Aegis_B_E_CommandoMortar_RF | RSG60
//    Aegis_B_E_GMG_01_A_F | XM307A
//    Aegis_B_E_GMG_01_F | XM307
//    Aegis_B_E_GMG_01_high_F | XM307 (High)
//    Aegis_B_E_HMG_01_A_F | XM312A
//    Aegis_B_E_HMG_01_F | XM312
//    Aegis_B_E_HMG_01_high_F | XM312 (High)
//    Aegis_B_E_HMG_02_F | M2 HMG .50
//    Aegis_B_E_HMG_02_high_F | M2 HMG .50 (Raised)
//    Aegis_B_E_Mortar_01_F | Mk6 Mortar
//    Aegis_B_E_Static_AA_F | Mini-Spike Launcher (AA)
//    Aegis_B_E_Static_AT_F | Mini-Spike Launcher (AT)
//    Aegis_B_E_Static_Designator_01_F | Remote Designator
//
// -- Support (4) --
//    Aegis_B_E_Truck_02_ammo_F | KamAZ Ammo
//    Aegis_B_E_Truck_02_box_F | KamAZ Repair
//    Aegis_B_E_Truck_02_fuel_F | KamAZ Fuel
//    Aegis_B_E_Truck_02_medical_F | KamAZ Medical
//
