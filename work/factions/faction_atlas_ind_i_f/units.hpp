// Atlas_IND_I_F - ghost_Israel
// 135 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (9) --
//    Atlas_I_I_Heli_Attack_01_dynamicLoadout_F | AH-99 Akav
//    Atlas_I_I_Heli_Light_01_dynamicLoadout_F | AH-9 Pawnee
//    Atlas_I_I_Heli_Light_01_F | MH-9 Hummingbird
//    Atlas_I_I_Heli_Transport_01_F | UH-80 Duchifat
//    Atlas_I_I_Plane_Fighter_05_F | F-35F Adir
//    Atlas_I_I_Plane_Fighter_05_Stealth_F | F-35F Adir (Stealth)
//    Atlas_I_I_VTOL_01_armed_F | AV-44 X Tannin
//    Atlas_I_I_VTOL_01_infantry_F | V-44 X Livyatan (Infantry Transport)
//    Atlas_I_I_VTOL_01_vehicle_F | V-44 X Livyatan (Vehicle Transport)
//
// -- Armored (5) --
//    AddGis_I_I_MBT_02_cannon_F | T100 Black Eagle
//    Atlas_I_I_APC_Tracked_01_AA_F | Tzavoa IFV-6a
//    Atlas_I_I_APC_Tracked_01_rcws_F | Nemmera IFV-6c
//    Atlas_I_I_MBT_01_arty_F | Kela Mk4
//    Atlas_I_I_MBT_01_cannon_F | Mohetz Mk4
//
// -- Autonomous (12) --
//    Atlas_I_I_Radar_System_01_F | AN/MPQ-105 Radar
//    Atlas_I_I_SAM_System_03_F | MIM-104 Patriot
//    Atlas_I_I_UAV_01_F | Naiyana AR-2
//    Atlas_I_I_UAV_02_dynamicLoadout_F | MQ-4A Greyhawk
//    Atlas_I_I_UAV_02_lxWS | Chfrfr AP-5
//    Atlas_I_I_UAV_03_dynamicLoadout_F | MQ-12 Gideon
//    Atlas_I_I_UAV_06_F | Pashosh AL-6
//    Atlas_I_I_UAV_06_medical_F | Pashosh AL-6 (Medical)
//    Atlas_I_I_UGV_01_F | UGV Stomper
//    Atlas_I_I_UGV_01_medical_F | UGV Stomper Medical
//    Atlas_I_I_UGV_01_rcws_F | UGV Stomper RCWS
//    Atlas_I_I_UGV_02_Demining_F | ED-1D Pelter
//
// -- Backpacks (22) --
//    Atlas_I_I_AA_01_weapon_F | Static Titan Launcher (AA) [IDF]
//    Atlas_I_I_AT_01_weapon_F | Static Titan Launcher (AT) [IDF]
//    Atlas_I_I_GMG_01_A_weapon_F | Dismantled Autonomous GMG [IDF]
//    Atlas_I_I_GMG_01_high_weapon_F | Dismantled Mk32 GMG (Raised) [IDF]
//    Atlas_I_I_GMG_01_weapon_F | Dismantled Mk32 GMG [IDF]
//    Atlas_I_I_HMG_01_A_weapon_F | Dismantled Autonomous MG [IDF]
//    Atlas_I_I_HMG_01_high_weapon_F | Dismantled Mk30 HMG (Raised) [IDF]
//    Atlas_I_I_HMG_01_support_F | Folded Tripod [IDF]
//    Atlas_I_I_HMG_01_support_high_F | Folded Tripod (Raised) [IDF]
//    Atlas_I_I_HMG_01_weapon_F | Dismantled Mk30 HMG [IDF]
//    Atlas_I_I_HMG_02_high_weapon_F | Dismantled M2 HMG .50 (Raised) [IDF]
//    Atlas_I_I_HMG_02_support_F | Folded Tripod M2 HMG .50 [IDF]
//    Atlas_I_I_HMG_02_support_high_F | Folded Tripod M2 HMG .50 (Raised) [IDF]
//    Atlas_I_I_HMG_02_weapon_F | Dismantled M2 HMG .50 [IDF]
//    Atlas_I_I_Mortar_01_support_F | Folded Mk6 Mortar Bipod [IDF]
//    Atlas_I_I_Mortar_01_weapon_F | Folded Mk6 Mortar Tube [IDF]
//    Atlas_I_I_Static_Designator_01_weapon_F | Remote Designator Bag [IDF]
//    Atlas_I_I_UAV_01_backpack_F | UAV Bag (AR-2) [IDF]
//    Atlas_I_I_UAV_02_backpack_lxWS | UAV Bag (AP-5) [IDF]
//    Atlas_I_I_UAV_06_backpack_F | UAV Bag (AL-6) [IDF]
//    Atlas_I_I_UAV_06_medical_backpack_F | UAV Bag (AL-6, Medical) [IDF]
//    Atlas_I_I_UGV_02_Demining_backpack_F | UGV Bag (ED-1D) [IDF]
//
// -- Car (15) --
//    Atlas_I_I_MRAP_01_F | Goliath
//    Atlas_I_I_MRAP_01_gmg_F | Goliath GMG
//    Atlas_I_I_MRAP_01_hmg_F | Goliath HMG
//    Atlas_I_I_Pickup_aat_F | Ram 1500 (AA)
//    Atlas_I_I_Pickup_AT_F | Pickup (AT)
//    Atlas_I_I_Pickup_Comms_F | Ram 1500 (Comms)
//    Atlas_I_I_Pickup_F | Ram 1500
//    Atlas_I_I_Pickup_HMG_F | Ram 1500 (HMG)
//    Atlas_I_I_Quadbike_01_F | Quad Bike
//    Atlas_I_I_Truck_01_box_F | HEMTT Container
//    Atlas_I_I_Truck_01_cargo_F | HEMTT Cargo
//    Atlas_I_I_Truck_01_covered_F | HEMTT Transport (covered)
//    Atlas_I_I_Truck_01_flatbed_F | HEMTT Flatbed
//    Atlas_I_I_Truck_01_mover_F | HEMTT
//    Atlas_I_I_Truck_01_transport_F | HEMTT Transport
//
// -- Men (41) --
//    Atlas_I_I_crew_F | Crewman
//    Atlas_I_I_engineer_F | Engineer
//    Atlas_I_I_Fighter_Pilot_F | Fighter Pilot
//    Atlas_I_I_helicrew_F | Helicopter Crew
//    Atlas_I_I_helipilot_F | Helicopter Pilot
//    Atlas_I_I_medic_F | Combat Life Saver
//    Atlas_I_I_officer_F | Officer
//    Atlas_I_I_Pilot_F | Pilot
//    Atlas_I_I_RadioOperator_F | Radio Operator
//    Atlas_I_I_Sharpshooter_F | Sharpshooter
//    Atlas_I_I_Soldier_A_F | Ammo Bearer
//    Atlas_I_I_soldier_AA_F | Missile Specialist (AA)
//    Atlas_I_I_soldier_AAA_F | Asst. Missile Specialist (AA)
//    Atlas_I_I_soldier_AAR_F | Asst. Autorifleman
//    Atlas_I_I_soldier_AAT_F | Asst. Missile Specialist (AT)
//    Atlas_I_I_Soldier_AR_F | Autorifleman
//    Atlas_I_I_soldier_AT_F | Missile Specialist (AT)
//    Atlas_I_I_Soldier_CBRN_F | CBRN Specialist
//    Atlas_I_I_Soldier_CQ_F | Rifleman (Shotgun)
//    Atlas_I_I_soldier_exp_F | Explosive Specialist
//    Atlas_I_I_Soldier_F | Rifleman
//    Atlas_I_I_Soldier_GL_F | Grenadier
//    Atlas_I_I_Soldier_LAT_F | Rifleman (AT)
//    Atlas_I_I_Soldier_lite_F | Rifleman (Light)
//    Atlas_I_I_soldier_M_F | Marksman
//    Atlas_I_I_soldier_mine_F | Mine Specialist
//    Atlas_I_I_Soldier_repair_F | Repair Specialist
//    Atlas_I_I_Soldier_SL_F | Squad Leader
//    Atlas_I_I_Soldier_TL_F | Team Leader
//    Atlas_I_I_soldier_UAV_02_lxWS_F | UAV Operator (AP-5)
//    Atlas_I_I_soldier_UAV_06_F | UAV Operator (AL-6)
//    Atlas_I_I_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    Atlas_I_I_Soldier_UAV_F | UAV Operator
//    Atlas_I_I_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    Atlas_I_I_Soldier_unarmed_F | Rifleman (Unarmed)
//    Atlas_I_I_support_AMG_F | Asst. Gunner (HMG/GMG)
//    Atlas_I_I_support_AMort_F | Asst. Gunner (Mk6)
//    Atlas_I_I_support_GMG_F | Gunner (GMG)
//    Atlas_I_I_support_MG_F | Gunner (HMG)
//    Atlas_I_I_support_Mort_F | Gunner (Mk6)
//    Atlas_I_I_Survivor_F | Survivor
//
// -- MenDiver (3) --
//    Atlas_I_I_diver_exp_F | Diver Explosive Specialist
//    Atlas_I_I_diver_F | Assault Diver
//    Atlas_I_I_diver_TL_F | Diver Team Leader
//
// -- MenRecon (9) --
//    Atlas_I_I_recon_AR_F | Recon Autorifleman
//    Atlas_I_I_recon_exp_F | Recon Demo Specialist
//    Atlas_I_I_recon_F | Recon Scout
//    Atlas_I_I_recon_GL_F | Recon Grenadier
//    Atlas_I_I_recon_JTAC_F | Recon JTAC
//    Atlas_I_I_recon_LAT_F | Recon Scout (AT)
//    Atlas_I_I_recon_M_F | Recon Marksman
//    Atlas_I_I_recon_medic_F | Recon Paramedic
//    Atlas_I_I_recon_TL_F | Recon Team Leader
//
// -- MenSniper (2) --
//    Atlas_I_I_sniper_F | Sniper
//    Atlas_I_I_spotter_F | Spotter
//
// -- Static (12) --
//    Atlas_I_I_GMG_01_A_F | XM307A
//    Atlas_I_I_GMG_01_F | XM307
//    Atlas_I_I_GMG_01_high_F | XM307 (High)
//    Atlas_I_I_HMG_01_A_F | XM312A
//    Atlas_I_I_HMG_01_F | XM312
//    Atlas_I_I_HMG_01_high_F | XM312 (High)
//    Atlas_I_I_HMG_02_F | M2 HMG .50
//    Atlas_I_I_HMG_02_high_F | M2 HMG .50 (Raised)
//    Atlas_I_I_Mortar_01_F | Mk6 Mortar
//    Atlas_I_I_Static_AA_F | Static Titan Launcher (AA)
//    Atlas_I_I_Static_AT_F | Static Titan Launcher (AT)
//    Atlas_I_I_Static_Designator_01_F | Remote Designator
//
// -- Support (5) --
//    Atlas_I_I_APC_Tracked_01_CRV_F | Nemia CRV-6e
//    Atlas_I_I_Truck_01_ammo_F | HEMTT Ammo
//    Atlas_I_I_Truck_01_fuel_F | HEMTT Fuel
//    Atlas_I_I_Truck_01_medical_F | HEMTT Medical
//    Atlas_I_I_Truck_01_Repair_F | HEMTT Repair
//
