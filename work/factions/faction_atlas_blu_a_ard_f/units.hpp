// Atlas_BLU_A_ard_F - ghost_ADF (Arid)
// 84 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier 2 / strength 3 / shape balanced / flavor west
//   ADF arid
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (4) --
//    Atlas_B_A_Heli_Attack_03_ard_F | AH-64E Guardian
//    Atlas_B_A_Heli_Transport_01_ard_F | UH-80 Ghost Hawk
//    Atlas_B_A_Plane_Fighter_05_ard_F | F-35F Peregrine
//    Atlas_B_A_Plane_Fighter_05_Stealth_ard_F | F-35F Peregrine (Stealth)
//
// -- Armored (3) --
//    Atlas_B_A_APC_Wheeled_01_atgm_ard_v2 | AMV-7 Marshall (ATGM)
//    Atlas_B_A_APC_Wheeled_01_cannon_v2_ard_F | AMV-7 Marshall
//    Atlas_B_A_MBT_03_cannon_ard_F | Luchs AS3
//
// -- Autonomous (1) --
//    Atlas_B_A_UAV_02_ard_lxWS | AP-5 Bustard
//
// -- Car (9) --
//    Atlas_B_A_MRAP_03_ard_F | Strider
//    Atlas_B_A_MRAP_03_gmg_ard_F | Strider GMG
//    Atlas_B_A_MRAP_03_hmg_ard_F | Strider HMG
//    Atlas_B_A_Truck_01_box_ard_F | HEMTT Container
//    Atlas_B_A_Truck_01_cargo_ard_F | HEMTT Cargo
//    Atlas_B_A_Truck_01_covered_ard_F | HEMTT Transport (covered)
//    Atlas_B_A_Truck_01_flatbed_ard_F | HEMTT Flatbed
//    Atlas_B_A_Truck_01_mover_ard_F | HEMTT
//    Atlas_B_A_Truck_01_transport_ard_F | HEMTT Transport
//
// -- Men (39) --
//    Atlas_B_A_Crew_ard_F | Crewman
//    Atlas_B_A_Engineer_ard_F | Engineer
//    Atlas_B_A_Helicrew_ard_F | Helicopter Crew
//    Atlas_B_A_Helipilot_ard_F | Helicopter Pilot
//    Atlas_B_A_Medic_ard_F | Combat Life Saver
//    Atlas_B_A_Officer_ard_F | Officer
//    Atlas_B_A_RadioOperator_ard_F | Radio Operator
//    Atlas_B_A_Soldier_A_ard_F | Ammo Bearer
//    Atlas_B_A_Soldier_AA_ard_F | Missile Specialist (AA)
//    Atlas_B_A_Soldier_AAA_ard_F | Asst. Missile Specialist (AA)
//    Atlas_B_A_Soldier_AAR_ard_F | Asst. Autorifleman
//    Atlas_B_A_Soldier_AAT_ard_F | Asst. Missile Specialist (AT)
//    Atlas_B_A_Soldier_AR_ard_F | Autorifleman
//    Atlas_B_A_Soldier_ard_F | Rifleman
//    Atlas_B_A_Soldier_AT_ard_F | Missile Specialist (AT)
//    Atlas_B_A_Soldier_CBRN_ard_F | CBRN Specialist
//    Atlas_B_A_Soldier_Exp_ard_F | Explosive Specialist
//    Atlas_B_A_Soldier_GL_ard_F | Grenadier
//    Atlas_B_A_Soldier_LAT_ard_F | Rifleman (AT)
//    Atlas_B_A_Soldier_lite_ard_F | Rifleman (Light)
//    Atlas_B_A_soldier_M_ard_F | Marksman
//    Atlas_B_A_soldier_Mine_ard_F | Mine Specialist
//    Atlas_B_A_Soldier_PG_ard_F | Para Trooper
//    Atlas_B_A_Soldier_Repair_ard_F | Repair Specialist
//    Atlas_B_A_Soldier_SL_ard_F | Squad Leader
//    Atlas_B_A_Soldier_TL_ard_F | Team Leader
//    Atlas_B_A_soldier_UAV_02_ard_lxWS_F | UAV Operator (AP-5)
//    Atlas_B_A_soldier_UAV_06_ard_F | UAV Operator (AL-6)
//    Atlas_B_A_soldier_UAV_06_medical_ard_F | UAV Operator (AL-6, Medical)
//    Atlas_B_A_Soldier_UAV_ard_F | UAV Operator
//    Atlas_B_A_soldier_UGV_02_Demining_ard_F | UGV Operator (ED-1D)
//    Atlas_B_A_Soldier_unarmed_ard_F | Rifleman (Unarmed)
//    Atlas_B_A_Support_AMG_ard_F | Asst. Gunner (HMG/GMG)
//    Atlas_B_A_Support_AMort_ard_F | Asst. Gunner (Mk6)
//    Atlas_B_A_support_CMort_ard_RF | Gunner (Light Mortar)
//    Atlas_B_A_Support_GMG_ard_F | Gunner (GMG)
//    Atlas_B_A_Support_MG_ard_F | Gunner (HMG)
//    Atlas_B_A_Support_Mort_ard_F | Gunner (Mk6)
//    Atlas_B_A_Survivor_ard_F | Survivor
//
// -- MenRecon (10) --
//    Atlas_B_A_Recon_AR_ard_F | Recon Autorifleman
//    Atlas_B_A_Recon_ard_F | Recon Scout
//    Atlas_B_A_Recon_AT_ard_F | Recon Scout (AT)
//    Atlas_B_A_Recon_Exp_ard_F | Recon Demo Specialist
//    Atlas_B_A_Recon_GL_ard_F | Recon Grenadier
//    Atlas_B_A_Recon_JTAC_ard_F | Recon JTAC
//    Atlas_B_A_Recon_LAT_ard_F | Recon Scout (LAT)
//    Atlas_B_A_Recon_M_ard_F | Recon Marksman
//    Atlas_B_A_Recon_Medic_ard_F | Recon Paramedic
//    Atlas_B_A_Recon_TL_ard_F | Recon Team Leader
//
// -- MenSniper (2) --
//    Atlas_B_A_sniper_ard_F | Sniper
//    Atlas_B_A_spotter_ard_F | Spotter
//
// -- Static (12) --
//    Atlas_B_A_CommandoMortar_ard_RF | RSG60
//    Atlas_B_A_GMG_01_A_ard_F | XM307A
//    Atlas_B_A_GMG_01_ard_F | XM307
//    Atlas_B_A_GMG_01_high_ard_F | XM307 (High)
//    Atlas_B_A_HMG_01_A_ard_F | XM312A
//    Atlas_B_A_HMG_01_ard_F | XM312
//    Atlas_B_A_HMG_01_high_ard_F | XM312 (High)
//    Atlas_B_A_HMG_02_ard_F | M2 HMG .50
//    Atlas_B_A_HMG_02_high_ard_F | M2 HMG .50 (Raised)
//    Atlas_B_A_Mortar_01_ard_F | Mk6 Mortar
//    Atlas_B_A_Static_AA_ard_F | Mini-Spike Launcher (AA)
//    Atlas_B_A_Static_AT_ard_F | Mini-Spike Launcher (AT)
//
// -- Support (4) --
//    Atlas_B_A_Truck_01_ammo_ard_F | HEMTT Ammo
//    Atlas_B_A_Truck_01_fuel_ard_F | HEMTT Fuel
//    Atlas_B_A_Truck_01_medical_ard_F | HEMTT Medical
//    Atlas_B_A_Truck_01_Repair_ard_F | HEMTT Repair
//
