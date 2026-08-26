// BLU_A_wdl_F - ghost_BAF (Woodland)
// 120 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier 3 / strength 2 / shape balanced / flavor west
//   BAF woodland
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (13) --
//    Aegis_B_A_Heli_light_03_dynamicLoadout_wdl_RF | AW159 Wildcat ASW
//    Aegis_B_A_Heli_Light_03_unarmed_wdl_RF | AW159 Wildcat ASW (Unarmed)
//    Aegis_B_A_Heli_Transport_02_wdl_F | Merlin HC5
//    Aegis_B_A_UAV_07_wdl_F | MQ-9A Albatross
//    B_A_Heli_Attack_03_wdl_F | Navajo AH1
//    B_A_Heli_light_03_dynamicLoadout_wdl_F | AH-11A Hellcat
//    B_A_Heli_light_03_unarmed_wdl_F | AH-11A Hellcat (Unarmed)
//    B_A_Plane_Fighter_05_Stealth_wdl_F | F-35F Peregrine (Stealth)
//    B_A_Plane_Fighter_05_wdl_F | F-35F Peregrine
//    B_A_Plane_Transport_01_infantry_wdl_F | C-192 Samson (Infantry Transport)
//    B_A_Plane_Transport_01_vehicle_wdl_F | C-192 Samson (Vehicle Transport)
//    B_A_VTOL_01_infantry_wdl_F | V-44 X Blackfish (Infantry Transport)
//    B_A_VTOL_01_vehicle_wdl_F | V-44 X Blackfish (Vehicle Transport)
//
// -- Armored (1) --
//    B_A_APC_tracked_03_cannon_v2_wdl_F | FV510 Warrior
//
// -- Autonomous (12) --
//    Aegis_B_A_TwinMortar_wdl_RF | AMOS Container
//    Aegis_B_A_UAV_02_wdl_lxWS | AP-5 Bustard
//    B_A_Radar_System_01_wdl_F | AN/MPQ-105 Radar
//    B_A_SAM_System_03_wdl_F | MIM-104 Patriot
//    B_A_UAV_01_wdl_F | AR-2 Darter
//    B_A_UAV_02_dynamicLoadout_wdl_F | YABHON-R3
//    B_A_UAV_06_medical_wdl_F | AL-6 Pelican (Medical)
//    B_A_UAV_06_wdl_F | AL-6 Pelican
//    B_A_UGV_01_medical_wdl_F | UGV Stomper Medical
//    B_A_UGV_01_rcws_wdl_F | UGV Stomper RCWS
//    B_A_UGV_01_wdl_F | UGV Stomper
//    B_A_UGV_02_Demining_wdl_F | ED-1D Pelter
//
// -- Car (14) --
//    B_A_LSV_01_armed_wdl_F | Polaris DAGOR (XM312)
//    B_A_LSV_01_AT_wdl_F | Polaris DAGOR (Mini-Spike AT)
//    B_A_LSV_01_light_wdl_F | Polaris DAGOR (light)
//    B_A_LSV_01_unarmed_wdl_F | Polaris DAGOR
//    B_A_MRAP_03_gmg_wdl_F | Fennek (GMG)
//    B_A_MRAP_03_hmg_wdl_F | Fennek (HMG)
//    B_A_MRAP_03_wdl_F | Fennek
//    B_A_Quadbike_01_wdl_F | Quad Bike
//    B_A_Truck_01_box_wdl_F | HEMTT Container
//    B_A_Truck_01_cargo_wdl_F | HEMTT Cargo
//    B_A_Truck_01_covered_wdl_F | HEMTT Transport (covered)
//    B_A_Truck_01_flatbed_wdl_F | HEMTT Flatbed
//    B_A_Truck_01_mover_wdl_F | HEMTT
//    B_A_Truck_01_transport_wdl_F | HEMTT Transport
//
// -- Men (35) --
//    B_A_Crew_wdl_F | Crewman
//    B_A_Engineer_wdl_F | Engineer
//    B_A_Fighter_Pilot_wdl_F | Fighter Pilot
//    B_A_HeavyGunner_wdl_F | Heavy Gunner
//    B_A_Helicrew_wdl_F | Helicopter Crew
//    B_A_Helipilot_wdl_F | Helicopter Pilot
//    B_A_Medic_wdl_F | Combat Life Saver
//    B_A_Officer_wdl_F | Officer
//    B_A_Pilot_wdl_F | Pilot
//    B_A_RadioOperator_wdl_F | Radio Operator
//    B_A_Sharpshooter_wdl_F | Sharpshooter
//    B_A_Soldier_A_wdl_F | Ammo Bearer
//    B_A_Soldier_AA_wdl_F | Missile Specialist (AA)
//    B_A_Soldier_AR_wdl_F | Autorifleman
//    B_A_Soldier_AT_wdl_F | Missile Specialist (AT)
//    B_A_Soldier_CBRN_wdl_F | CBRN Specialist
//    B_A_Soldier_CQ_wdl_F | Rifleman (Shotgun)
//    B_A_Soldier_Exp_wdl_F | Explosive Specialist
//    B_A_Soldier_GL_wdl_F | Grenadier
//    B_A_Soldier_LAT_wdl_F | Rifleman (AT)
//    B_A_Soldier_Lite_wdl_F | Rifleman (Light)
//    B_A_soldier_M_wdl_F | Marksman
//    B_A_soldier_mine_wdl_F | Mine Specialist
//    B_A_Soldier_PG_wdl_F | Para Trooper
//    B_A_Soldier_Repair_wdl_F | Repair Specialist
//    B_A_Soldier_SL_wdl_F | Section Leader
//    B_A_Soldier_TL_wdl_F | Team Leader
//    B_A_soldier_UAV_02_wdl_LxWS_F | UAV Operator (AP-5)
//    B_A_soldier_UAV_06_medical_wdl_F | UAV Operator (AL-6, Medical)
//    B_A_soldier_UAV_06_wdl_F | UAV Operator (AL-6)
//    B_A_Soldier_UAV_wdl_F | UAV Operator
//    B_A_soldier_UGV_02_Demining_wdl_F | UGV Operator (ED-1D)
//    B_A_Soldier_unarmed_wdl_F | Rifleman (Unarmed)
//    B_A_Soldier_wdl_F | Rifleman
//    B_A_Survivor_wdl_F | Survivor
//
// -- MenRecon (12) --
//    B_A_Recon_AR_wdl_F | Recon Autorifleman
//    B_A_Recon_CQ_wdl_F | Recon Scout (Shotgun)
//    B_A_Recon_Exp_wdl_F | Recon Demo Specialist
//    B_A_Recon_GL_wdl_F | Recon Grenadier
//    B_A_Recon_JTAC_wdl_F | Recon JTAC
//    B_A_Recon_LAT_wdl_F | Recon Scout (AT)
//    B_A_Recon_M_wdl_F | Recon Marksman
//    B_A_Recon_Medic_wdl_F | Recon Paramedic
//    B_A_Recon_MG_wdl_F | Recon Gunner
//    B_A_Recon_Sharpshooter_wdl_F | Recon Sharpshooter
//    B_A_Recon_TL_wdl_F | Recon Team Leader
//    B_A_Recon_wdl_F | Recon Scout
//
// -- MenSniper (2) --
//    B_A_ghillie_spotter_wdl_F | Spotter (Woodland)
//    B_A_ghillie_wdl_F | Sniper (Woodland)
//
// -- MenSupport (9) --
//    Aegis_B_A_Support_CMort_wdl_RF | Gunner (Light Mortar)
//    B_A_Soldier_AAA_wdl_F | Asst. Missile Specialist (AA)
//    B_A_Soldier_AAR_wdl_F | Asst. Autorifleman
//    B_A_Soldier_AAT_wdl_F | Asst. Missile Specialist (AT)
//    B_A_Support_AMG_wdl_F | Asst. Gunner (HMG/GMG)
//    B_A_Support_AMort_wdl_F | Asst. Gunner (Mk6)
//    B_A_Support_GMG_wdl_F | Gunner (GMG)
//    B_A_Support_MG_wdl_F | Gunner (HMG)
//    B_A_Support_Mort_wdl_F | Gunner (Mk6)
//
// -- Ship (5) --
//    Aegis_B_A_CombatBoat_AT_wdl_EF | Combat Boat (AT)
//    Aegis_B_A_CombatBoat_HMG_wdl_EF | Combat Boat (HMG)
//    Aegis_B_A_CombatBoat_Unarmed_wdl_EF | Combat Boat (Unarmed)
//    Aegis_B_A_LCC_01_SideLoad_wdl_EF | LCC-1 (Side Load)
//    Aegis_B_A_LCC_01_wdl_EF | LCC-1
//
// -- Static (13) --
//    Aegis_B_A_CommandoMortar_wdl_RF | RSG60
//    B_A_GMG_01_A_wdl_F | XM307A
//    B_A_GMG_01_high_wdl_F | XM307 (High)
//    B_A_GMG_01_wdl_F | XM307
//    B_A_HMG_01_A_wdl_F | XM312A
//    B_A_HMG_01_high_wdl_F | XM312 (High)
//    B_A_HMG_01_wdl_F | XM312
//    B_A_HMG_02_high_wdl_F | M2 HMG .50 (Raised)
//    B_A_HMG_02_wdl_F | M2 HMG .50
//    B_A_Mortar_01_wdl_F | Mk6 Mortar
//    B_A_Static_AA_wdl_F | Mini-Spike Launcher (AA)
//    B_A_Static_AT_wdl_F | Mini-Spike Launcher (AT)
//    B_A_Static_Designator_01_wdl_F | Remote Designator
//
// -- Support (4) --
//    B_A_Truck_01_ammo_wdl_F | HEMTT Ammo
//    B_A_Truck_01_fuel_wdl_F | HEMTT Fuel
//    B_A_Truck_01_medical_wdl_F | HEMTT Medical
//    B_A_Truck_01_Repair_wdl_F | HEMTT Repair
//
