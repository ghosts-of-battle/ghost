// IND_E_F - ghost_LDF
// 161 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (11) --
//    Aegis_I_E_Plane_Transport_01_infantry_F | C-192 Samson (Infantry Transport)
//    Aegis_I_E_Plane_Transport_01_vehicle_F | C-192 Samson (Vehicle Transport)
//    Aegis_I_E_UAV_07_F | MQ-9A Kruk
//    Aegis_I_EAF_Heli_Attack_04_F | Mi-35 Sokół
//    I_E_EC_02_RF | H225M Super Cougar SOCAT
//    I_E_Heli_EC_01A_military_RF | H215 Super Puma (Unarmed)
//    I_E_Heli_light_03_dynamicLoadout_F | AW159 Wildcat
//    I_E_Heli_light_03_dynamicLoadout_RF | AW159 Wildcat ASW
//    I_E_Heli_light_03_unarmed_F | AW159 Wildcat (unarmed)
//    I_E_Heli_light_03_unarmed_RF | AW159 Wildcat ASW (Unarmed)
//    I_E_Plane_Fighter_04_F | A-149 Orzeł
//
// -- Armored (6) --
//    Aegis_I_E_APC_Wheeled_01_atgm_v2 | KTO Borsuk (ATGM)
//    Aegis_I_E_APC_Wheeled_01_cannon_v2_F | KTO Borsuk
//    Aegis_I_E_APC_Wheeled_01_medical_F | KTO Borsuk (Medical)
//    Aegis_I_E_APC_Wheeled_01_mortar_lxWS | KTO Borsuk (Mortar)
//    Aegis_I_E_MBT_03_cannon_F | MBT-52 Niedźwiedź
//    I_E_APC_tracked_03_cannon_v2_F | FV-720 Odyniec
//
// -- Autonomous (13) --
//    Aegis_I_E_TwinMortar_RF | AMOS Container
//    Aegis_I_E_UAV_02_lxWS | AP-5 Bustard
//    I_E_Radar_System_01_F | AN/MPQ-105 Radar
//    I_E_SAM_System_03_F | MIM-104 Patriot
//    I_E_UAV_01_F | AR-2 Darter
//    I_E_UAV_06_F | AL-6 Pelican
//    I_E_UAV_06_medical_F | AL-6 Pelican (Medical)
//    I_E_UGV_01_F | UGV Stomper
//    I_E_UGV_01_medical_F | UGV Stomper Medical
//    I_E_UGV_01_rcws_F | UGV Stomper RCWS
//    I_E_UGV_02_Demining_F | ED-1D Pelter
//    I_E_UGV_02_Science_F | ED-1E Roller
//    qav_i_e_ripsaw_Mk44 | M6A Ripsaw (Mk44)
//
// -- Backpacks (23) --
//    Aegis_I_E_UAV_02_backpack_lxWS | UAV Bag (AP-5) [LDF-I]
//    I_E_AA_01_weapon_F | Static Titan Launcher (AA) [LDF]
//    I_E_AT_01_weapon_F | Static Titan Launcher (AT) [LDF]
//    I_E_CommandoMortar_weapon_RF | Folded Commando Mortar [LDF]
//    I_E_GMG_01_A_Weapon_F | Dismantled Autonomous GMG [LDF]
//    I_E_GMG_01_high_Weapon_F | Dismantled Mk32 GMG (Raised) [LDF]
//    I_E_GMG_01_Weapon_F | Dismantled Mk32 GMG [LDF]
//    I_E_HMG_01_A_Weapon_F | Dismantled Autonomous MG [LDF]
//    I_E_HMG_01_high_Weapon_F | Dismantled Mk30 HMG (Raised) [LDF]
//    I_E_HMG_01_support_F | Folded Tripod [LDF]
//    I_E_HMG_01_support_high_F | Folded Tripod (Raised) [LDF]
//    I_E_HMG_01_Weapon_F | Dismantled Mk30 HMG [LDF]
//    I_E_HMG_02_high_weapon_F | Dismantled M2 HMG .50 (Raised) [LDF]
//    I_E_HMG_02_support_F | Folded Tripod M2 HMG .50 [LDF]
//    I_E_HMG_02_support_high_F | Folded Tripod M2 HMG .50 (Raised) [LDF]
//    I_E_HMG_02_weapon_F | Dismantled M2 HMG .50 [LDF]
//    I_E_Mortar_01_support_F | Folded Mk6 Mortar Bipod [LDF]
//    I_E_Mortar_01_Weapon_F | Folded Mk6 Mortar Tube [LDF]
//    I_E_Static_Designator_01_weapon_F | Remote Designator Bag [LDF]
//    I_E_UAV_01_backpack_F | UAV Bag (AR-2) [LDF]
//    I_E_UAV_06_backpack_F | UAV Bag (AL-6) [LDF]
//    I_E_UAV_06_medical_backpack_F | UAV Bag (AL-6, Medical) [LDF]
//    I_E_UGV_02_Demining_backpack_F | UGV Bag (ED-1D) [LDF]
//
// -- Car (21) --
//    Aegis_I_E_Pickup_AAT_RF | Ram 1500 (AA)
//    Aegis_I_E_Pickup_AT_RF | Pickup (AT)
//    Aegis_I_E_Pickup_HMG_RF | Ram 1500 (HMG)
//    I_E_Offroad_01_armed_F | Offroad (HMG)
//    I_E_Offroad_01_comms_F | Offroad (Comms)
//    I_E_Offroad_01_covered_F | Offroad (Covered)
//    I_E_Offroad_01_F | Offroad
//    I_E_Pickup_aat_rf | Ram 1500 (AA)
//    I_E_Pickup_Comms_rf | Ram 1500 (Comms)
//    I_E_Pickup_Covered_rf | Ram 1500 (Covered)
//    I_E_Pickup_rf | Ram 1500
//    I_E_Quadbike_01_F | Quad Bike
//    I_E_Truck_02_cargo_lxWS | KamAZ Cargo
//    I_E_Truck_02_F | KamAZ Transport (covered)
//    I_E_Truck_02_flatbed_lxWS | KamAZ Flatbed
//    I_E_Truck_02_MRL_F | KamAZ MRL
//    I_E_Truck_02_transport_F | KamAZ Transport
//    I_E_Van_02_medevac_F | Van (Ambulance)
//    I_E_Van_02_transport_F | Van Transport
//    I_E_Van_02_transport_MP_F | Van Transport (MP)
//    I_E_Van_02_vehicle_F | Van (Cargo)
//
// -- Men (59) --
//    Aegis_I_E_Pilot_F | Pilot
//    Atlas_I_E_Reservist_A_F | Ammo Bearer
//    Atlas_I_E_Reservist_AR_F | Autorifleman
//    Atlas_I_E_Reservist_AT_F | Rifleman (AT)
//    Atlas_I_E_Reservist_F | Rifleman
//    Atlas_I_E_Reservist_GL_F | Grenadier
//    Atlas_I_E_Reservist_M_F | Marksman
//    Atlas_I_E_Reservist_Medic_F | Combat Life Saver
//    Atlas_I_E_Reservist_Repair_F | Pioneer
//    Atlas_I_E_Reservist_SL_F | Squad Leader
//    Atlas_I_E_Reservist_TL_F | Team Leader
//    I_E_Crew_F | Crewman
//    I_E_Engineer_F | Engineer
//    I_E_Fighter_Pilot_F | Fighter Pilot
//    I_E_Helicrew_F | Helicopter Crew
//    I_E_Helipilot_F | Helicopter Pilot
//    I_E_Medic_F | Combat Life Saver
//    I_E_Officer_F | Officer
//    I_E_Officer_Parade_F | Officer (Parade Dress)
//    I_E_Officer_Parade_Veteran_F | Officer (Veteran, Parade Dress)
//    I_E_RadioOperator_F | Radio Operator
//    I_E_Scientist_F | Military Scientist
//    I_E_Scientist_Unarmed_F | Military Scientist (Unarmed)
//    I_E_Soldier_A_F | Ammo Bearer
//    I_E_Soldier_AA_F | Missile Specialist (AA)
//    I_E_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    I_E_Soldier_AAR_F | Asst. Autorifleman
//    I_E_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    I_E_Soldier_AR_F | Autorifleman
//    I_E_Soldier_AT_F | Missile Specialist (AT)
//    I_E_Soldier_CBRN_F | CBRN Specialist
//    I_E_Soldier_CQ_F | Rifleman (Shotgun)
//    I_E_Soldier_Exp_F | Explosive Specialist
//    I_E_Soldier_F | Rifleman
//    I_E_Soldier_GL_F | Grenadier
//    I_E_Soldier_LAT2_F | Rifleman (Light AT)
//    I_E_Soldier_LAT_F | Rifleman (AT)
//    I_E_Soldier_LAT_RF | Rifleman (AT)
//    I_E_Soldier_lite_F | Rifleman (Light)
//    I_E_soldier_M_F | Marksman
//    I_E_soldier_Mine_F | Mine Specialist
//    I_E_Soldier_MP_F | Military Police Officer
//    I_E_Soldier_Repair_F | Repair Specialist
//    I_E_Soldier_SL_F | Squad Leader
//    I_E_Soldier_TL_F | Team Leader
//    I_E_soldier_UAV_02_lxWS_F | UAV Operator (AP-5)
//    I_E_soldier_UAV_06_F | UAV Operator (AL-6)
//    I_E_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    I_E_Soldier_UAV_F | UAV Operator
//    I_E_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    I_E_soldier_UGV_02_Science_F | UGV Operator (ED-1E)
//    I_E_Soldier_unarmed_F | Rifleman (Unarmed)
//    I_E_Support_AMG_F | Asst. Gunner (HMG/GMG)
//    I_E_Support_AMort_F | Asst. Gunner (Mk6)
//    I_E_support_CMort_RF | Gunner (Light Mortar)
//    I_E_Support_GMG_F | Gunner (GMG)
//    I_E_Support_MG_F | Gunner (HMG)
//    I_E_Support_Mort_F | Gunner (Mk6)
//    I_E_Survivor_F | Survivor
//
// -- MenRecon (9) --
//    I_E_recon_AR_F | Recon Autorifleman
//    I_E_recon_exp_F | Recon Demo Specialist
//    I_E_recon_F | Recon Scout
//    I_E_recon_GL_F | Recon Grenadier
//    I_E_recon_JTAC_F | Recon JTAC
//    I_E_recon_LAT_F | Recon Scout (AT)
//    I_E_recon_M_F | Recon Marksman
//    I_E_recon_medic_F | Recon Paramedic
//    I_E_recon_TL_F | Recon Team Leader
//
// -- MenSniper (2) --
//    I_E_ghillie_spotter_wdl_F | Spotter (Woodland)
//    I_E_ghillie_wdl_F | Sniper (Woodland)
//
// -- Static (13) --
//    I_E_CommandoMortar_RF | RSG60
//    I_E_GMG_01_A_F | XM307A
//    I_E_GMG_01_F | XM307
//    I_E_GMG_01_high_F | XM307 (High)
//    I_E_HMG_01_A_F | XM312A
//    I_E_HMG_01_F | XM312
//    I_E_HMG_01_high_F | XM312 (High)
//    I_E_HMG_02_F | M2 HMG .50
//    I_E_HMG_02_high_F | M2 HMG .50 (Raised)
//    I_E_Mortar_01_F | Mk6 Mortar
//    I_E_Static_AA_F | Mini-Spike Launcher (AA)
//    I_E_Static_AT_F | Mini-Spike Launcher (AT)
//    I_E_Static_Designator_01_F | Remote Designator
//
// -- Support (4) --
//    I_E_Truck_02_Ammo_F | KamAZ Ammo
//    I_E_Truck_02_Box_F | KamAZ Repair
//    I_E_Truck_02_fuel_F | KamAZ Fuel
//    I_E_Truck_02_Medical_F | KamAZ Medical
//
