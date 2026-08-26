// BLU_A_tna_F - ghost_BAF (Pacific)
// 127 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier 3 / strength 2 / shape balanced / flavor west
//   BAF pacific
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (13) --
//    Aegis_B_A_Heli_Attack_03_tna_F | Navajo AH1
//    Aegis_B_A_Heli_light_03_dynamicLoadout_tna_RF | AW159 Wildcat ASW
//    Aegis_B_A_Heli_Light_03_unarmed_tna_RF | AW159 Wildcat ASW (Unarmed)
//    Aegis_B_A_Heli_Transport_02_tna_F | Merlin HC5
//    Aegis_B_A_UAV_07_tna_F | MQ-9A Albatross
//    B_A_Heli_light_03_dynamicLoadout_tna_F | AH-11A Hellcat
//    B_A_Heli_light_03_unarmed_tna_F | AH-11A Hellcat (Unarmed)
//    B_A_Plane_Fighter_05_Stealth_tna_F | F-35F Peregrine (Stealth)
//    B_A_Plane_Fighter_05_tna_F | F-35F Peregrine
//    B_A_Plane_Transport_01_infantry_tna_F | C-192 Samson (Infantry Transport)
//    B_A_Plane_Transport_01_vehicle_tna_F | C-192 Samson (Vehicle Transport)
//    B_A_VTOL_01_infantry_tna_F | V-44 X Blackfish (Infantry Transport)
//    B_A_VTOL_01_vehicle_tna_F | V-44 X Blackfish (Vehicle Transport)
//
// -- Armored (1) --
//    B_A_APC_tracked_03_cannon_v2_tna_F | FV510 Warrior
//
// -- Autonomous (12) --
//    Aegis_B_A_TwinMortar_tna_RF | AMOS Container
//    Aegis_B_A_UAV_02_tna_lxWS | AP-5 Bustard
//    B_A_Radar_System_01_tna_F | AN/MPQ-105 Radar
//    B_A_SAM_System_03_tna_F | MIM-104 Patriot
//    B_A_UAV_01_tna_F | AR-2 Darter
//    B_A_UAV_02_dynamicLoadout_tna_F | YABHON-R3
//    B_A_UAV_06_medical_tna_F | AL-6 Pelican (Medical)
//    B_A_UAV_06_tna_F | AL-6 Pelican
//    B_A_UGV_01_medical_tna_F | UGV Stomper Medical
//    B_A_UGV_01_rcws_tna_F | UGV Stomper RCWS
//    B_A_UGV_01_tna_F | UGV Stomper
//    B_A_UGV_02_Demining_tna_F | ED-1D Pelter
//
// -- Car (14) --
//    B_A_LSV_01_armed_tna_F | Polaris DAGOR (XM312)
//    B_A_LSV_01_AT_tna_F | Polaris DAGOR (Mini-Spike AT)
//    B_A_LSV_01_light_tna_F | Polaris DAGOR (light)
//    B_A_LSV_01_unarmed_tna_F | Polaris DAGOR
//    B_A_MRAP_03_gmg_tna_F | Fennek (GMG)
//    B_A_MRAP_03_hmg_tna_F | Fennek (HMG)
//    B_A_MRAP_03_tna_F | Fennek
//    B_A_Quadbike_01_tna_F | Quad Bike
//    B_A_Truck_01_box_tna_F | HEMTT Container
//    B_A_Truck_01_cargo_tna_F | HEMTT Cargo
//    B_A_Truck_01_covered_tna_F | HEMTT Transport (covered)
//    B_A_Truck_01_flatbed_tna_F | HEMTT Flatbed
//    B_A_Truck_01_mover_tna_F | HEMTT
//    B_A_Truck_01_transport_tna_F | HEMTT Transport
//
// -- Men (35) --
//    B_A_Crew_tna_F | Crewman
//    B_A_Engineer_tna_F | Engineer
//    B_A_Fighter_Pilot_tna_F | Fighter Pilot
//    B_A_HeavyGunner_tna_F | Heavy Gunner
//    B_A_Helicrew_tna_F | Helicopter Crew
//    B_A_Helipilot_tna_F | Helicopter Pilot
//    B_A_Medic_tna_F | Combat Life Saver
//    B_A_Officer_tna_F | Officer
//    B_A_Pilot_tna_F | Pilot
//    B_A_RadioOperator_tna_F | Radio Operator
//    B_A_Sharpshooter_tna_F | Sharpshooter
//    B_A_Soldier_A_tna_F | Ammo Bearer
//    B_A_Soldier_AA_tna_F | Missile Specialist (AA)
//    B_A_Soldier_AR_tna_F | Autorifleman
//    B_A_Soldier_AT_tna_F | Missile Specialist (AT)
//    B_A_Soldier_CBRN_tna_F | CBRN Specialist
//    B_A_Soldier_CQ_tna_F | Rifleman (Shotgun)
//    B_A_Soldier_Exp_tna_F | Explosive Specialist
//    B_A_Soldier_GL_tna_F | Grenadier
//    B_A_Soldier_LAT_tna_F | Rifleman (AT)
//    B_A_Soldier_Lite_tna_F | Rifleman (Light)
//    B_A_soldier_M_tna_F | Marksman
//    B_A_soldier_mine_tna_F | Mine Specialist
//    B_A_Soldier_PG_tna_F | Para Trooper
//    B_A_Soldier_Repair_tna_F | Repair Specialist
//    B_A_Soldier_SL_tna_F | Section Leader
//    B_A_Soldier_TL_tna_F | Team Leader
//    B_A_Soldier_tna_F | Rifleman
//    B_A_soldier_UAV_02_tna_LxWS_F | UAV Operator (AP-5)
//    B_A_soldier_UAV_06_medical_tna_F | UAV Operator (AL-6, Medical)
//    B_A_soldier_UAV_06_tna_F | UAV Operator (AL-6)
//    B_A_Soldier_UAV_tna_F | UAV Operator
//    B_A_soldier_UGV_02_Demining_tna_F | UGV Operator (ED-1D)
//    B_A_Soldier_unarmed_tna_F | Rifleman (Unarmed)
//    B_A_Survivor_tna_F | Survivor
//
// -- MenDiver (3) --
//    B_A_Diver_Exp_tna_F | Diver Explosive Specialist
//    B_A_Diver_TL_tna_F | Diver Team Leader
//    B_A_Diver_tna_F | Assault Diver
//
// -- MenRecon (12) --
//    B_A_Recon_AR_tna_F | Recon Autorifleman
//    B_A_Recon_CQ_tna_F | Recon Scout (Shotgun)
//    B_A_Recon_Exp_tna_F | Recon Demo Specialist
//    B_A_Recon_GL_tna_F | Recon Grenadier
//    B_A_Recon_JTAC_tna_F | Recon JTAC
//    B_A_Recon_LAT_tna_F | Recon Scout (AT)
//    B_A_Recon_M_tna_F | Recon Marksman
//    B_A_Recon_Medic_tna_F | Recon Paramedic
//    B_A_Recon_MG_tna_F | Recon Gunner
//    B_A_Recon_Sharpshooter_tna_F | Recon Sharpshooter
//    B_A_Recon_TL_tna_F | Recon Team Leader
//    B_A_Recon_tna_F | Recon Scout
//
// -- MenSniper (2) --
//    B_A_ghillie_spotter_tna_F | Spotter (Jungle)
//    B_A_ghillie_tna_F | Sniper (Jungle)
//
// -- MenSupport (9) --
//    Aegis_B_A_Support_CMort_tna_RF | Gunner (Light Mortar)
//    B_A_Soldier_AAA_tna_F | Asst. Missile Specialist (AA)
//    B_A_Soldier_AAR_tna_F | Asst. Autorifleman
//    B_A_Soldier_AAT_tna_F | Asst. Missile Specialist (AT)
//    B_A_Support_AMG_tna_F | Asst. Gunner (HMG/GMG)
//    B_A_Support_AMort_tna_F | Asst. Gunner (Mk6)
//    B_A_Support_GMG_tna_F | Gunner (GMG)
//    B_A_Support_MG_tna_F | Gunner (HMG)
//    B_A_Support_Mort_tna_F | Gunner (Mk6)
//
// -- Ship (8) --
//    Aegis_B_A_CombatBoat_AT_tna_EF | Combat Boat (AT)
//    Aegis_B_A_CombatBoat_HMG_tna_EF | Combat Boat (HMG)
//    Aegis_B_A_CombatBoat_Unarmed_tna_EF | Combat Boat (Unarmed)
//    Aegis_B_A_LCC_01_SideLoad_tna_EF | LCC-1 (Side Load)
//    Aegis_B_A_LCC_01_tna_EF | LCC-1
//    B_A_Boat_Armed_01_hmg_tna_F | Speedboat HMG
//    B_A_Boat_Transport_01_tna_F | Assault Boat
//    B_A_Lifeboat_tna_F | Rescue Boat
//
// -- Static (13) --
//    Aegis_B_A_CommandoMortar_tna_RF | RSG60
//    B_A_GMG_01_A_tna_F | XM307A
//    B_A_GMG_01_high_tna_F | XM307 (High)
//    B_A_GMG_01_tna_F | XM307
//    B_A_HMG_01_A_tna_F | XM312A
//    B_A_HMG_01_high_tna_F | XM312 (High)
//    B_A_HMG_01_tna_F | XM312
//    B_A_HMG_02_high_tna_F | M2 HMG .50 (Raised)
//    B_A_HMG_02_tna_F | M2 HMG .50
//    B_A_Mortar_01_tna_F | Mk6 Mortar
//    B_A_Static_AA_tna_F | Mini-Spike Launcher (AA)
//    B_A_Static_AT_tna_F | Mini-Spike Launcher (AT)
//    B_A_Static_Designator_01_tna_F | Remote Designator
//
// -- Submarine (1) --
//    B_A_SDV_01_tna_F | SDV
//
// -- Support (4) --
//    B_A_Truck_01_ammo_tna_F | HEMTT Ammo
//    B_A_Truck_01_fuel_tna_F | HEMTT Fuel
//    B_A_Truck_01_medical_tna_F | HEMTT Medical
//    B_A_Truck_01_Repair_tna_F | HEMTT Repair
//
