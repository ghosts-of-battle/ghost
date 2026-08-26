// AddGis_BLU_G_D_F - ghost_Bundeswehr (Desert)
// 88 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier 3 / strength 3 / shape balanced / flavor west
//   Bundeswehr desert
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (4) --
//    AddGis_B_G_D_Heli_Transport_02_F | CH-49 Mohawk
//    AddGis_B_G_D_Plane_Fighter_01_F | F/A-181 Black Wasp II
//    AddGis_B_G_D_Plane_Fighter_01_Stealth_F | F/A-181 Black Wasp II (Stealth)
//    AddGis_B_G_D_UAV_07_F | MQ-9A Reaper
//
// -- Armored (6) --
//    AddGis_B_G_D_APC_Wheeled_03_cannon_F | Pandur II
//    AddGis_B_G_D_LT_01_AA_F | AWC 302 Nyx (AA)
//    AddGis_B_G_D_LT_01_AT_F | AWC 301 Nyx (AT)
//    AddGis_B_G_D_LT_01_cannon_F | AWC 304 Nyx (Autocannon)
//    AddGis_B_G_D_LT_01_scout_F | AWC 303 Nyx (Recon)
//    AddGis_B_G_D_MBT_03_cannon_F | Luchs 3A5
//
// -- Autonomous (10) --
//    AddGis_B_G_D_Radar_System_01_F | AN/MPQ-105 Radar
//    AddGis_B_G_D_SAM_System_03_F | MIM-104 Patriot
//    AddGis_B_G_D_UAV_01_F | AR-2 Darter
//    AddGis_B_G_D_UAV_02_dynamicLoadout_F | YABHON-R3
//    AddGis_B_G_D_UAV_06_F | AL-6 Pelican
//    AddGis_B_G_D_UAV_06_medical_F | AL-6 Pelican (Medical)
//    AddGis_B_G_D_UGV_01_F | UGV Stomper
//    AddGis_B_G_D_UGV_01_medical_F | UGV Stomper Medical
//    AddGis_B_G_D_UGV_01_rcws_F | UGV Stomper RCWS
//    AddGis_B_G_D_UGV_02_Demining_ard_F | ED-1D Pelter
//
// -- Car (8) --
//    AddGis_B_G_D_MRAP_03_F | Strider
//    AddGis_B_G_D_MRAP_03_gmg_F | Strider GMG
//    AddGis_B_G_D_MRAP_03_hmg_F | Strider HMG
//    AddGis_B_G_D_Pickup_aat_F | Ram 1500 (AA)
//    AddGis_B_G_D_Pickup_AT_F | Pickup (AT)
//    AddGis_B_G_D_Pickup_Comms_F | Ram 1500 (Comms)
//    AddGis_B_G_D_Pickup_F | Ram 1500
//    AddGis_B_G_D_Pickup_HMG_F | Ram 1500 (HMG)
//
// -- Men (31) --
//    Addgis_B_G_D_Crew_F | Crewman
//    Addgis_B_G_D_Engineer_F | Engineer
//    Addgis_B_G_D_Fighter_Pilot_F | Fighter Pilot
//    Addgis_B_G_D_HeavyGunner_F | Heavy Gunner
//    Addgis_B_G_D_Helicrew_F | Helicopter Crew
//    Addgis_B_G_D_Helipilot_F | Helicopter Pilot
//    Addgis_B_G_D_Medic_F | Combat Life Saver
//    Addgis_B_G_D_Officer_F | Officer
//    Addgis_B_G_D_RadioOperator_F | Radio Operator
//    Addgis_B_G_D_Soldier_A_F | Ammo Bearer
//    Addgis_B_G_D_Soldier_AA_F | Missile Specialist (AA)
//    Addgis_B_G_D_Soldier_AR_F | Autorifleman
//    Addgis_B_G_D_Soldier_AT_F | Missile Specialist (AT)
//    Addgis_B_G_D_Soldier_CQ_F | Rifleman (Shotgun)
//    Addgis_B_G_D_Soldier_Exp_F | Explosive Specialist
//    Addgis_B_G_D_Soldier_F | Rifleman
//    Addgis_B_G_D_Soldier_GL_F | Grenadier
//    Addgis_B_G_D_Soldier_LAT_F | Rifleman (AT)
//    Addgis_B_G_D_Soldier_Lite_F | Rifleman (Light)
//    Addgis_B_G_D_soldier_M_F | Marksman
//    Addgis_B_G_D_soldier_mine_F | Mine Specialist
//    Addgis_B_G_D_Soldier_PG_F | Para Trooper
//    Addgis_B_G_D_Soldier_Repair_F | Repair Specialist
//    Addgis_B_G_D_Soldier_SL_F | Squad Leader
//    Addgis_B_G_D_Soldier_TL_F | Team Leader
//    Addgis_B_G_D_soldier_UAV_06_F | UAV Operator (AL-6)
//    Addgis_B_G_D_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    Addgis_B_G_D_Soldier_UAV_F | UAV Operator
//    Addgis_B_G_D_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    Addgis_B_G_D_Soldier_unarmed_F | Rifleman (Unarmed)
//    Addgis_B_G_D_Survivor_F | Survivor
//
// -- MenRecon (10) --
//    Addgis_B_G_D_Recon_AR_F | Recon Autorifleman
//    Addgis_B_G_D_Recon_Exp_F | Recon Demo Specialist
//    Addgis_B_G_D_Recon_F | Recon Scout
//    Addgis_B_G_D_Recon_GL_F | Recon Grenadier
//    Addgis_B_G_D_Recon_JTAC_F | Recon JTAC
//    Addgis_B_G_D_Recon_LAT_F | Recon Scout (AT)
//    Addgis_B_G_D_Recon_M_F | Recon Marksman
//    Addgis_B_G_D_Recon_Medic_F | Recon Paramedic
//    Addgis_B_G_D_Recon_MG_F | Recon Gunner
//    Addgis_B_G_D_Recon_TL_F | Recon Team Leader
//
// -- MenSupport (8) --
//    Addgis_B_G_D_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    Addgis_B_G_D_Soldier_AAR_F | Asst. Autorifleman
//    Addgis_B_G_D_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    Addgis_B_G_D_Support_AMG_F | Asst. Gunner (HMG/GMG)
//    Addgis_B_G_D_Support_AMort_F | Asst. Gunner (Mk6)
//    Addgis_B_G_D_Support_GMG_F | Gunner (GMG)
//    Addgis_B_G_D_Support_MG_F | Gunner (HMG)
//    Addgis_B_G_D_Support_Mort_F | Gunner (Mk6)
//
// -- Static (11) --
//    AddGis_B_G_D_GMG_01_A_F | XM307A
//    AddGis_B_G_D_GMG_01_F | XM307
//    AddGis_B_G_D_GMG_01_high_F | XM307 (High)
//    AddGis_B_G_D_HMG_01_A_F | XM312A
//    AddGis_B_G_D_HMG_01_F | XM312
//    AddGis_B_G_D_HMG_01_high_F | XM312 (High)
//    AddGis_B_G_D_HMG_02_F | M2 HMG .50
//    AddGis_B_G_D_HMG_02_high_F | M2 HMG .50 (Raised)
//    AddGis_B_G_D_Mortar_01_F | Mk6 Mortar
//    AddGis_B_G_D_Static_AA_F | Mini-Spike Launcher (AA)
//    AddGis_B_G_Static_AT_F | Mini-Spike Launcher (AT)
//
