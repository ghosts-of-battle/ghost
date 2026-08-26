// Atlas_BLU_G_F - ghost_Bundeswehr
// 105 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier 3 / strength 3 / shape balanced / flavor west
//   Bundeswehr - G36/G433 is the t3 lane in the pools doc
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (4) --
//    Atlas_B_G_Heli_Transport_02_F | CH-49 Mohawk
//    Atlas_B_G_Plane_Fighter_01_F | F/A-181 Black Wasp II
//    Atlas_B_G_Plane_Fighter_01_Stealth_F | F/A-181 Black Wasp II (Stealth)
//    Atlas_B_G_UAV_07_F | MQ-9A Reaper
//
// -- Armored (6) --
//    Atlas_B_G_APC_Wheeled_03_cannon_F | Pandur II
//    Atlas_B_G_LT_01_AA_F | AWC 302 Nyx (AA)
//    Atlas_B_G_LT_01_AT_F | AWC 301 Nyx (AT)
//    Atlas_B_G_LT_01_cannon_F | AWC 304 Nyx (Autocannon)
//    Atlas_B_G_LT_01_scout_F | AWC 303 Nyx (Recon)
//    Atlas_B_G_MBT_03_cannon_F | Luchs 3A5
//
// -- Autonomous (10) --
//    Atlas_B_G_Radar_System_01_F | AN/MPQ-105 Radar
//    Atlas_B_G_SAM_System_03_F | MIM-104 Patriot
//    Atlas_B_G_UAV_01_F | AR-2 Darter
//    Atlas_B_G_UAV_02_dynamicLoadout_F | YABHON-R3
//    Atlas_B_G_UAV_06_F | AL-6 Pelican
//    Atlas_B_G_UAV_06_medical_F | AL-6 Pelican (Medical)
//    Atlas_B_G_UGV_01_F | UGV Stomper
//    Atlas_B_G_UGV_01_medical_F | UGV Stomper Medical
//    Atlas_B_G_UGV_01_rcws_F | UGV Stomper RCWS
//    Atlas_B_G_UGV_02_Demining_F | ED-1D Pelter
//
// -- Car (16) --
//    Atlas_B_G_MRAP_03_F | Strider
//    Atlas_B_G_MRAP_03_gmg_F | Strider GMG
//    Atlas_B_G_MRAP_03_hmg_F | Strider HMG
//    Atlas_B_G_Pickup_aat_F | Ram 1500 (AA)
//    Atlas_B_G_Pickup_AT_F | Pickup (AT)
//    Atlas_B_G_Pickup_Comms_F | Ram 1500 (Comms)
//    Atlas_B_G_Pickup_covered_MP_rf | Pickup (MP)
//    Atlas_B_G_Pickup_F | Ram 1500
//    Atlas_B_G_Pickup_HMG_F | Ram 1500 (HMG)
//    Atlas_B_G_Quadbike_01_F | Quad Bike
//    Atlas_B_G_Truck_01_box_F | HEMTT Container
//    Atlas_B_G_Truck_01_cargo_F | HEMTT Cargo
//    Atlas_B_G_Truck_01_covered_F | HEMTT Transport (covered)
//    Atlas_B_G_Truck_01_flatbed_F | HEMTT Flatbed
//    Atlas_B_G_Truck_01_mover_F | HEMTT
//    Atlas_B_G_Truck_01_transport_F | HEMTT Transport
//
// -- Men (33) --
//    Atlas_B_G_Crew_F | Crewman
//    Atlas_B_G_Engineer_F | Engineer
//    Atlas_B_G_Fighter_Pilot_F | Fighter Pilot
//    Atlas_B_G_HeavyGunner_F | Heavy Gunner
//    Atlas_B_G_Helicrew_F | Helicopter Crew
//    Atlas_B_G_Helipilot_F | Helicopter Pilot
//    Atlas_B_G_Medic_F | Combat Life Saver
//    Atlas_B_G_Officer_F | Officer
//    Atlas_B_G_RadioOperator_F | Radio Operator
//    Atlas_B_G_Soldier_A_F | Ammo Bearer
//    Atlas_B_G_Soldier_AA_F | Missile Specialist (AA)
//    Atlas_B_G_Soldier_AR_F | Autorifleman
//    Atlas_B_G_Soldier_AT_F | Missile Specialist (AT)
//    Atlas_B_G_Soldier_CBRN_F | CBRN Specialist
//    Atlas_B_G_Soldier_CQ_F | Rifleman (Shotgun)
//    Atlas_B_G_Soldier_Exp_F | Explosive Specialist
//    Atlas_B_G_Soldier_F | Rifleman
//    Atlas_B_G_Soldier_GL_F | Grenadier
//    Atlas_B_G_Soldier_LAT_F | Rifleman (AT)
//    Atlas_B_G_Soldier_Lite_F | Rifleman (Light)
//    Atlas_B_G_soldier_M_F | Marksman
//    Atlas_B_G_soldier_mine_F | Mine Specialist
//    Atlas_B_G_Soldier_MP_F | Military Police Officer
//    Atlas_B_G_Soldier_PG_F | Para Trooper
//    Atlas_B_G_Soldier_Repair_F | Repair Specialist
//    Atlas_B_G_Soldier_SL_F | Squad Leader
//    Atlas_B_G_Soldier_TL_F | Team Leader
//    Atlas_B_G_soldier_UAV_06_F | UAV Operator (AL-6)
//    Atlas_B_G_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    Atlas_B_G_Soldier_UAV_F | UAV Operator
//    Atlas_B_G_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    Atlas_B_G_Soldier_unarmed_F | Rifleman (Unarmed)
//    Atlas_B_G_Survivor_F | Survivor
//
// -- MenRecon (10) --
//    Atlas_B_G_Recon_AR_F | Recon Autorifleman
//    Atlas_B_G_Recon_Exp_F | Recon Demo Specialist
//    Atlas_B_G_Recon_F | Recon Scout
//    Atlas_B_G_Recon_GL_F | Recon Grenadier
//    Atlas_B_G_Recon_JTAC_F | Recon JTAC
//    Atlas_B_G_Recon_LAT_F | Recon Scout (AT)
//    Atlas_B_G_Recon_M_F | Recon Marksman
//    Atlas_B_G_Recon_Medic_F | Recon Paramedic
//    Atlas_B_G_Recon_MG_F | Recon Gunner
//    Atlas_B_G_Recon_TL_F | Recon Team Leader
//
// -- MenSupport (9) --
//    Atlas_B_G_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    Atlas_B_G_Soldier_AAR_F | Asst. Autorifleman
//    Atlas_B_G_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    Atlas_B_G_Support_AMG_F | Asst. Gunner (HMG/GMG)
//    Atlas_B_G_Support_AMort_F | Asst. Gunner (Mk6)
//    Atlas_B_G_support_CMort_RF | Gunner (Light Mortar)
//    Atlas_B_G_Support_GMG_F | Gunner (GMG)
//    Atlas_B_G_Support_MG_F | Gunner (HMG)
//    Atlas_B_G_Support_Mort_F | Gunner (Mk6)
//
// -- Static (13) --
//    Atlas_B_G_CommandoMortar_RF | RSG60
//    Atlas_B_G_GMG_01_A_F | XM307A
//    Atlas_B_G_GMG_01_F | XM307
//    Atlas_B_G_GMG_01_high_F | XM307 (High)
//    Atlas_B_G_HMG_01_A_F | XM312A
//    Atlas_B_G_HMG_01_F | XM312
//    Atlas_B_G_HMG_01_high_F | XM312 (High)
//    Atlas_B_G_HMG_02_F | M2 HMG .50
//    Atlas_B_G_HMG_02_high_F | M2 HMG .50 (Raised)
//    Atlas_B_G_Mortar_01_F | Mk6 Mortar
//    Atlas_B_G_Static_AA_F | Mini-Spike Launcher (AA)
//    Atlas_B_G_Static_AT_F | Mini-Spike Launcher (AT)
//    Atlas_B_G_Static_Designator_01_F | Remote Designator
//
// -- Support (4) --
//    Atlas_B_G_Truck_01_ammo_F | HEMTT Ammo
//    Atlas_B_G_Truck_01_fuel_F | HEMTT Fuel
//    Atlas_B_G_Truck_01_medical_F | HEMTT Medical
//    Atlas_B_G_Truck_01_Repair_F | HEMTT Repair
//
