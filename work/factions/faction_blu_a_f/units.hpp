// BLU_A_F - ghost_BAF
// 138 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier 3 / strength 2 / shape balanced / flavor west
//   BAF - peer ally
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (13) --
//    Aegis_B_A_Heli_Attack_03_F | Navajo AH1
//    Aegis_B_A_Heli_Transport_02_F | Merlin HC5
//    Aegis_B_A_UAV_07_F | MQ-9A Albatross
//    B_A_Heli_light_03_dynamicLoadout_F | AH-11A Hellcat
//    B_A_Heli_light_03_unarmed_F | AH-11A Hellcat (Unarmed)
//    B_A_Plane_Fighter_05_F | F-35F Peregrine
//    B_A_Plane_Fighter_05_Stealth_F | F-35F Peregrine (Stealth)
//    B_A_Plane_Transport_01_infantry_F | C-192 Samson (Infantry Transport)
//    B_A_Plane_Transport_01_vehicle_F | C-192 Samson (Vehicle Transport)
//    B_A_VTOL_01_infantry_F | V-44 X Blackfish (Infantry Transport)
//    B_A_VTOL_01_vehicle_F | V-44 X Blackfish (Vehicle Transport)
//    B_Heli_light_03_dynamicLoadout_RF | AW159 Wildcat ASW
//    B_Heli_light_03_unarmed_RF | AW159 Wildcat ASW (Unarmed)
//
// -- Armored (1) --
//    B_A_APC_tracked_03_cannon_v2_F | FV510 Warrior
//
// -- Autonomous (17) --
//    Aegis_B_A_TwinMortar_RF | AMOS Container
//    Aegis_B_A_UAV_02_lxWS | AP-5 Bustard
//    Atlas_B_AAA_System_dark_01_F | Praetorian 1C
//    Atlas_B_SAM_System_dark_02_F | Mk-29 ESSM
//    Atlas_B_Ship_Gun_dark_01_F | Mk45 Hammer
//    Atlas_B_Ship_MRLS_dark_01_F | Mk41 VLS
//    B_A_Radar_System_01_F | AN/MPQ-105 Radar
//    B_A_SAM_System_03_F | MIM-104 Patriot
//    B_A_UAV_01_F | AR-2 Darter
//    B_A_UAV_02_dynamicLoadout_F | YABHON-R3
//    B_A_UAV_06_F | AL-6 Pelican
//    B_A_UAV_06_medical_F | AL-6 Pelican (Medical)
//    B_A_UGV_01_F | UGV Stomper
//    B_A_UGV_01_medical_F | UGV Stomper Medical
//    B_A_UGV_01_rcws_F | UGV Stomper RCWS
//    B_A_UGV_02_Demining_F | ED-1D Pelter
//    B_SAM_System_dark_01_F | Mk49 Spartan
//
// -- Backpacks (2) --
//    Aegis_B_A_UAV_02_backpack_lxWS | UAV Bag (AP-5) [BAF]
//    Atlas_B_A_UAV_01_backpack_F | UAV Bag (AR2) [ADF]
//
// -- Car (14) --
//    B_A_LSV_01_armed_F | Polaris DAGOR (XM312)
//    B_A_LSV_01_AT_F | Polaris DAGOR (Mini-Spike AT)
//    B_A_LSV_01_light_F | Polaris DAGOR (light)
//    B_A_LSV_01_unarmed_F | Polaris DAGOR
//    B_A_MRAP_03_F | Fennek
//    B_A_MRAP_03_gmg_F | Fennek (GMG)
//    B_A_MRAP_03_hmg_F | Fennek (HMG)
//    B_A_Quadbike_01_F | Quad Bike
//    B_A_Truck_01_box_F | HEMTT Container
//    B_A_Truck_01_cargo_F | HEMTT Cargo
//    B_A_Truck_01_covered_F | HEMTT Transport (covered)
//    B_A_Truck_01_flatbed_F | HEMTT Flatbed
//    B_A_Truck_01_mover_F | HEMTT
//    B_A_Truck_01_transport_F | HEMTT Transport
//
// -- Men (35) --
//    B_A_Crew_F | Crewman
//    B_A_Engineer_F | Engineer
//    B_A_Fighter_Pilot_F | Fighter Pilot
//    B_A_HeavyGunner_F | Heavy Gunner
//    B_A_Helicrew_F | Helicopter Crew
//    B_A_Helipilot_F | Helicopter Pilot
//    B_A_Medic_F | Combat Life Saver
//    B_A_Officer_F | Officer
//    B_A_Pilot_F | Pilot
//    B_A_RadioOperator_F | Radio Operator
//    B_A_Sharpshooter_F | Sharpshooter
//    B_A_Soldier_A_F | Ammo Bearer
//    B_A_Soldier_AA_F | Missile Specialist (AA)
//    B_A_Soldier_AR_F | Autorifleman
//    B_A_Soldier_AT_F | Missile Specialist (AT)
//    B_A_Soldier_CBRN_F | CBRN Specialist
//    B_A_Soldier_CQ_F | Rifleman (Shotgun)
//    B_A_Soldier_Exp_F | Explosive Specialist
//    B_A_Soldier_F | Rifleman
//    B_A_Soldier_GL_F | Grenadier
//    B_A_Soldier_LAT_F | Rifleman (AT)
//    B_A_Soldier_Lite_F | Rifleman (Light)
//    B_A_soldier_M_F | Marksman
//    B_A_soldier_mine_F | Mine Specialist
//    B_A_Soldier_PG_F | Para Trooper
//    B_A_Soldier_Repair_F | Repair Specialist
//    B_A_Soldier_SL_F | Section Leader
//    B_A_Soldier_TL_F | Team Leader
//    B_A_soldier_UAV_02_LxWS_F | UAV Operator (AP-5)
//    B_A_soldier_UAV_06_F | UAV Operator (AL-6)
//    B_A_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    B_A_Soldier_UAV_F | UAV Operator
//    B_A_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    B_A_Soldier_unarmed_F | Rifleman (Unarmed)
//    B_A_Survivor_F | Survivor
//
// -- MenDiver (3) --
//    B_A_Diver_Exp_F | Diver Explosive Specialist
//    B_A_Diver_F | Assault Diver
//    B_A_Diver_TL_F | Diver Team Leader
//
// -- MenRecon (12) --
//    B_A_Recon_AR_F | Recon Autorifleman
//    B_A_Recon_CQ_F | Recon Scout (Shotgun)
//    B_A_Recon_Exp_F | Recon Demo Specialist
//    B_A_Recon_F | Recon Scout
//    B_A_Recon_GL_F | Recon Grenadier
//    B_A_Recon_JTAC_F | Recon JTAC
//    B_A_Recon_LAT_F | Recon Scout (AT)
//    B_A_Recon_M_F | Recon Marksman
//    B_A_Recon_Medic_F | Recon Paramedic
//    B_A_Recon_MG_F | Recon Gunner
//    B_A_Recon_Sharpshooter_F | Recon Sharpshooter
//    B_A_Recon_TL_F | Recon Team Leader
//
// -- MenSniper (6) --
//    B_A_ghillie_ard_F | Sniper (Arid)
//    B_A_ghillie_lsh_F | Sniper (Lush)
//    B_A_ghillie_sard_F | Sniper (Semi-Arid)
//    B_A_ghillie_spotter_ard_F | Spotter (Arid)
//    B_A_ghillie_spotter_lsh_F | Spotter (Lush)
//    B_A_ghillie_spotter_sard_F | Spotter (Semi-Arid)
//
// -- MenSupport (9) --
//    Aegis_B_A_Support_CMort_RF | Gunner (Light Mortar)
//    B_A_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    B_A_Soldier_AAR_F | Asst. Autorifleman
//    B_A_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    B_A_Support_AMG_F | Asst. Gunner (HMG/GMG)
//    B_A_Support_AMort_F | Asst. Gunner (Mk6)
//    B_A_Support_GMG_F | Gunner (GMG)
//    B_A_Support_MG_F | Gunner (HMG)
//    B_A_Support_Mort_F | Gunner (Mk6)
//
// -- Ship (8) --
//    Aegis_B_A_CombatBoat_AT_EF | Combat Boat (AT)
//    Aegis_B_A_CombatBoat_HMG_EF | Combat Boat (HMG)
//    Aegis_B_A_CombatBoat_Unarmed_EF | Combat Boat (Unarmed)
//    Aegis_B_A_LCC_01_EF | LCC-1
//    Aegis_B_A_LCC_01_SideLoad_EF | LCC-1 (Side Load)
//    B_A_Boat_Armed_01_hmg_F | Speedboat HMG
//    B_A_Boat_Transport_01_F | Assault Boat
//    B_A_Lifeboat | Rescue Boat
//
// -- Static (13) --
//    Aegis_B_A_CommandoMortar_RF | RSG60
//    B_A_GMG_01_A_F | XM307A
//    B_A_GMG_01_F | XM307
//    B_A_GMG_01_high_F | XM307 (High)
//    B_A_HMG_01_A_F | XM312A
//    B_A_HMG_01_F | XM312
//    B_A_HMG_01_high_F | XM312 (High)
//    B_A_HMG_02_F | M2 HMG .50
//    B_A_HMG_02_high_F | M2 HMG .50 (Raised)
//    B_A_Mortar_01_F | Mk6 Mortar
//    B_A_Static_AA_F | Mini-Spike Launcher (AA)
//    B_A_Static_AT_F | Mini-Spike Launcher (AT)
//    B_A_Static_Designator_01_F | Remote Designator
//
// -- Submarine (1) --
//    B_A_SDV_01_F | SDV
//
// -- Support (4) --
//    B_A_Truck_01_ammo_F | HEMTT Ammo
//    B_A_Truck_01_fuel_F | HEMTT Fuel
//    B_A_Truck_01_medical_F | HEMTT Medical
//    B_A_Truck_01_Repair_F | HEMTT Repair
//
