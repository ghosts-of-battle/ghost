// Atlas_BLU_A_F - ghost_ADF
// 99 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier 2 / strength 3 / shape balanced / flavor west
//   ADF - near-peer
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (6) --
//    Atlas_B_A_Heli_Attack_03_F | AH-64E Guardian
//    Atlas_B_A_Heli_Transport_01_F | UH-80 Ghost Hawk
//    Atlas_B_A_Plane_Fighter_05_F | F-35F Peregrine
//    Atlas_B_A_Plane_Fighter_05_Stealth_F | F-35F Peregrine (Stealth)
//    Atlas_B_A_Plane_Transport_01_infantry_F | C-192 Samson (Infantry Transport)
//    Atlas_B_A_Plane_Transport_01_vehicle_F | C-192 Samson (Vehicle Transport)
//
// -- Armored (3) --
//    Atlas_B_A_APC_Wheeled_01_atgm_v2 | AMV-7 Marshall (ATGM)
//    Atlas_B_A_APC_Wheeled_01_cannon_v2_F | AMV-7 Marshall
//    Atlas_B_A_MBT_03_cannon_F | Luchs AS3
//
// -- Autonomous (5) --
//    Atlas_B_A_UAV_01_F | AR-2 Darter
//    Atlas_B_A_UAV_02_lxWS | AP-5 Bustard
//    Atlas_B_A_UAV_06_F | AL-6 Pelican
//    Atlas_B_A_UAV_06_medical_F | AL-6 Pelican (Medical)
//    Atlas_B_A_UGV_02_Demining_F | ED-1D Pelter
//
// -- Backpacks (3) --
//    Atlas_B_A_UAV_02_backpack_lxWS | UAV Bag (AP-5) [ADF]
//    Atlas_B_A_UAV_06_backpack_F | UAV Bag (AL-6) [ADF]
//    Atlas_B_A_UAV_06_medical_backpack_F | UAV Bag (AL-6, Medical) [ADF]
//
// -- Car (9) --
//    Atlas_B_A_MRAP_03_F | Strider
//    Atlas_B_A_MRAP_03_gmg_F | Strider GMG
//    Atlas_B_A_MRAP_03_hmg_F | Strider HMG
//    Atlas_B_A_Truck_01_box_F | HEMTT Container
//    Atlas_B_A_Truck_01_cargo_F | HEMTT Cargo
//    Atlas_B_A_Truck_01_covered_F | HEMTT Transport (covered)
//    Atlas_B_A_Truck_01_flatbed_F | HEMTT Flatbed
//    Atlas_B_A_Truck_01_mover_F | HEMTT
//    Atlas_B_A_Truck_01_transport_F | HEMTT Transport
//
// -- Men (41) --
//    Atlas_B_A_Crew_F | Crewman
//    Atlas_B_A_Engineer_F | Engineer
//    Atlas_B_A_Fighter_Pilot_F | Fighter Pilot
//    Atlas_B_A_Helicrew_F | Helicopter Crew
//    Atlas_B_A_Helipilot_F | Helicopter Pilot
//    Atlas_B_A_Medic_F | Combat Life Saver
//    Atlas_B_A_Officer_F | Officer
//    Atlas_B_A_Pilot_F | Pilot
//    Atlas_B_A_RadioOperator_F | Radio Operator
//    Atlas_B_A_Soldier_A_F | Ammo Bearer
//    Atlas_B_A_Soldier_AA_F | Missile Specialist (AA)
//    Atlas_B_A_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    Atlas_B_A_Soldier_AAR_F | Asst. Autorifleman
//    Atlas_B_A_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    Atlas_B_A_Soldier_AR_F | Autorifleman
//    Atlas_B_A_Soldier_AT_F | Missile Specialist (AT)
//    Atlas_B_A_Soldier_CBRN_F | CBRN Specialist
//    Atlas_B_A_Soldier_Exp_F | Explosive Specialist
//    Atlas_B_A_Soldier_F | Rifleman
//    Atlas_B_A_Soldier_GL_F | Grenadier
//    Atlas_B_A_Soldier_LAT_F | Rifleman (AT)
//    Atlas_B_A_Soldier_lite_F | Rifleman (Light)
//    Atlas_B_A_soldier_M_F | Marksman
//    Atlas_B_A_soldier_Mine_F | Mine Specialist
//    Atlas_B_A_Soldier_PG_F | Para Trooper
//    Atlas_B_A_Soldier_Repair_F | Repair Specialist
//    Atlas_B_A_Soldier_SL_F | Squad Leader
//    Atlas_B_A_Soldier_TL_F | Team Leader
//    Atlas_B_A_soldier_UAV_02_lxWS_F | UAV Operator (AP-5)
//    Atlas_B_A_soldier_UAV_06_F | UAV Operator (AL-6)
//    Atlas_B_A_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    Atlas_B_A_Soldier_UAV_F | UAV Operator
//    Atlas_B_A_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    Atlas_B_A_Soldier_unarmed_F | Rifleman (Unarmed)
//    Atlas_B_A_Support_AMG_F | Asst. Gunner (HMG/GMG)
//    Atlas_B_A_Support_AMort_F | Asst. Gunner (Mk6)
//    Atlas_B_A_support_CMort_RF | Gunner (Light Mortar)
//    Atlas_B_A_Support_GMG_F | Gunner (GMG)
//    Atlas_B_A_Support_MG_F | Gunner (HMG)
//    Atlas_B_A_Support_Mort_F | Gunner (Mk6)
//    Atlas_B_A_Survivor_F | Survivor
//
// -- MenDiver (3) --
//    Atlas_B_A_diver_exp_F | Diver Explosive Specialist
//    Atlas_B_A_diver_F | Assault Diver
//    Atlas_B_A_diver_TL_F | Diver Team Leader
//
// -- MenRecon (10) --
//    Atlas_B_A_Recon_AR_F | Recon Autorifleman
//    Atlas_B_A_Recon_AT_F | Recon Scout (AT)
//    Atlas_B_A_Recon_Exp_F | Recon Demo Specialist
//    Atlas_B_A_Recon_F | Recon Scout
//    Atlas_B_A_Recon_GL_F | Recon Grenadier
//    Atlas_B_A_Recon_JTAC_F | Recon JTAC
//    Atlas_B_A_Recon_LAT_F | Recon Scout (LAT)
//    Atlas_B_A_Recon_M_F | Recon Marksman
//    Atlas_B_A_Recon_Medic_F | Recon Paramedic
//    Atlas_B_A_Recon_TL_F | Recon Team Leader
//
// -- MenSniper (2) --
//    Atlas_B_A_sniper_F | Sniper
//    Atlas_B_A_spotter_F | Spotter
//
// -- Static (13) --
//    Atlas_B_A_CommandoMortar_RF | RSG60
//    Atlas_B_A_GMG_01_A_F | XM307A
//    Atlas_B_A_GMG_01_F | XM307
//    Atlas_B_A_GMG_01_high_F | XM307 (High)
//    Atlas_B_A_HMG_01_A_F | XM312A
//    Atlas_B_A_HMG_01_F | XM312
//    Atlas_B_A_HMG_01_high_F | XM312 (High)
//    Atlas_B_A_HMG_02_F | M2 HMG .50
//    Atlas_B_A_HMG_02_high_F | M2 HMG .50 (Raised)
//    Atlas_B_A_Mortar_01_F | Mk6 Mortar
//    Atlas_B_A_Static_AA_F | Mini-Spike Launcher (AA)
//    Atlas_B_A_Static_AT_F | Mini-Spike Launcher (AT)
//    Atlas_B_A_Static_Designator_01_F | Remote Designator
//
// -- Support (4) --
//    Atlas_B_A_Truck_01_ammo_F | HEMTT Ammo
//    Atlas_B_A_Truck_01_fuel_F | HEMTT Fuel
//    Atlas_B_A_Truck_01_medical_F | HEMTT Medical
//    Atlas_B_A_Truck_01_Repair_F | HEMTT Repair
//
