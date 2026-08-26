// IND_F - ghost_AAF
// 266 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (14) --
//    Aegis_I_Heli_Transport_02_Heavy_F | CH-49E Mohawk
//    Aegis_I_UAV_07_F | MQ-9A Albatross
//    I_Heli_Attack_03_F | AH-1 Navajo
//    I_Heli_EC_01A_military_RF | H215 Super Puma (Unarmed)
//    I_Heli_EC_02_RF | H225M Super Cougar SOCAT
//    I_Heli_Light_01_dynamicLoadout_F | AH-6 Little Bird
//    I_Heli_Light_01_F | MH-6 Little Bird
//    I_Heli_light_03_dynamicLoadout_F | AW159 Wildcat
//    I_Heli_light_03_unarmed_F | AW159 Wildcat (unarmed)
//    I_Heli_Transport_02_F | AW101 Merlin
//    I_Plane_Fighter_03_dynamicLoadout_F | L-159 ALCA
//    I_Plane_Fighter_04_F | JAS 39 Gripen
//    I_Plane_Transport_01_infantry_F | C-192 Samson (Infantry Transport)
//    I_Plane_Transport_01_vehicle_F | C-192 Samson (Vehicle Transport)
//
// -- Armored (7) --
//    I_APC_tracked_03_cannon_v2_F | FV-720 Mora
//    I_APC_Wheeled_03_cannon_F | Pandur II
//    I_LT_01_AA_F | Wiesel 2 Ozelot (AA)
//    I_LT_01_AT_F | Wiesel 2 (ATGM)
//    I_LT_01_cannon_F | Wiesel 2 (MK20)
//    I_LT_01_scout_F | Wiesel 2 RFCV (Radar)
//    I_MBT_03_cannon_F | Leopard 2SG
//
// -- Autonomous (68) --
//    GX_I_BLACKHORNET_UAV | Black Hornet 4
//    GX_I_DRONE40_UAV_HE | Drone40 HE
//    GX_I_DRONE40_UAV_RECON | Drone40 Recon
//    GX_I_DRONE40_UAV_SMOKE_BLUE | Drone40 Smoke (Blue)
//    GX_I_DRONE40_UAV_SMOKE_GREEN | Drone40 Smoke (Green)
//    GX_I_DRONE40_UAV_SMOKE_ORANGE | Drone40 Smoke (Orange)
//    GX_I_DRONE40_UAV_SMOKE_PURPLE | Drone40 Smoke (Purple)
//    GX_I_DRONE40_UAV_SMOKE_RED | Drone40 Smoke (Red)
//    GX_I_DRONE40_UAV_SMOKE_WHITE | Drone40 Smoke (White)
//    GX_I_DRONE40_UAV_SMOKE_YELLOW | Drone40 Smoke (Yellow)
//    GX_I_HONEYBADGER_UGV_AT_BLACK | Honeybadger (AT) (Black)
//    GX_I_HONEYBADGER_UGV_AT_DESERT | Honeybadger (AT) (Desert)
//    GX_I_HONEYBADGER_UGV_AT_GREEN | Honeybadger (AT) (Green)
//    GX_I_HONEYBADGER_UGV_AT_HEX | Honeybadger (AT) (Hex)
//    GX_I_HUNTER_SP_UAV | Hunter-SP
//    GX_I_MAGURA_V5_USV | MAGURA V5
//    GX_I_MQ8B_UAV_ARMED | MQ-8B Fire Scout (Armed)
//    GX_I_MQ8B_UAV_RECON | MQ-8B Fire Scout (Recon)
//    GX_I_MQ8B_UAV_RECON_SEATED | MQ-8B Fire Scout (Recon) (Seated)
//    GX_I_RQ11B_UAV | RQ-11B Raven
//    GX_I_RWS_DEFNDER_MEDIUM | DeFNder Medium
//    GX_I_THEMIS_UGV_CARGO | THeMIS (Cargo)
//    GX_I_THEMIS_UGV_DEFNDER_MEDIUM | THeMIS (DeFNder Medium)
//    GX_I_THEMIS_UGV_HUNTER_LAUNCHER | THeMIS (Hunter-SP Launcher)
//    I_Crocus_AP | Crocus AP
//    I_Crocus_AP_TI | Crocus AP TI
//    I_Crocus_AT | Crocus AT
//    I_Crocus_AT_TI | Crocus AT TI
//    I_KVN_AP | KVN AP
//    I_KVN_AP_TI | KVN AP TI
//    I_KVN_AT | KVN AT
//    I_KVN_AT_TI | KVN AT TI
//    I_Rev_Bustard | Deployable AP-5 Bustard
//    I_Rev_Darter | Deployable AR-2 Darter
//    I_Rev_Demine | Deployable Demining Drone
//    I_Rev_Pelican | Deployable AL-6 Pelican
//    I_Rev_Pelter | Deployable ED-1D Pelter
//    I_Rev_Roller | Deployable ED-1E Roller
//    I_SwitchBlade_300 | SwitchBlade 300
//    I_SwitchBlade_600 | SwitchBlade 600
//    I_TwinMortar_RF | AMOS Container
//    I_UAV_01_F | AR-2 Darter
//    I_UAV_02_dynamicLoadout_F | YABHON-R3
//    I_UAV_02_lxWS | AP-5 Bustard
//    I_UAV_06_F | AL-6 Pelican
//    I_UAV_06_medical_F | AL-6 Pelican (Medical)
//    I_UAV_RC40_HE_RF | Drone40 HE
//    I_UAV_RC40_SENSOR_RF | Drone40 Scout
//    I_UAV_RC40_SmokeBlue_RF | Drone40 Smoke (Blue)
//    I_UAV_RC40_SmokeGreen_RF | Drone40 Smoke (Green)
//    I_UAV_RC40_SmokeOrange_RF | Drone40 Smoke (Orange)
//    I_UAV_RC40_SmokeRed_RF | Drone40 Smoke (Red)
//    I_UAV_RC40_SmokeWhite_RF | Drone40 Smoke (White)
//    I_UGV_01_F | UGV Stomper
//    I_UGV_01_medical_F | UGV Stomper Medical
//    I_UGV_01_rcws_F | UGV Stomper RCWS
//    I_UGV_02_Demining_F | ED-1D Pelter
//    I_UGV_02_Science_F | ED-1E Roller
//    JK_I_76n6_ClamShell_F | 76n6 Clam Shell
//    JK_I_76n6_ClamShell_Lower_F | 76n6 Clam Shell (Artillery Radar)
//    orion_F_IND | Orion-E
//    orion_F_KAB20_IND | Orion KAB-20
//    orion_F_KAB50_IND | Orion KAB-50
//    orion_F_KORNET_IND | Orion Kornet-D (ATGM)
//    orlan_F_IND | Orlan-30
//    qav_i_f_ripsaw_Mk44 | M6A Ripsaw (Mk44)
//    rksla3_aeroshark_infor | Aeroshark Mini UAV
//    rksla3_uav_h450_3 | Hermes 450
//
// -- Backpacks (34) --
//    I_AA_01_weapon_F | Static Titan Launcher (AA) [AAF]
//    I_AT_01_weapon_F | Static Titan Launcher (AT) [AAF]
//    I_CommandoMortar_weapon_RF | Folded Commando Mortar [AAF]
//    I_Crocus_AP_Bag | Crocus AP Bag IND
//    I_Crocus_AP_TI_Bag | Crocus AP TI Bag IND
//    I_Crocus_AT_Bag | Crocus AT Bag IND
//    I_Crocus_AT_TI_Bag | Crocus AT TI Bag IND
//    I_E_UGV_02_Science_backpack_F | UGV Bag (ED-1E) [LDF]
//    I_GMG_01_A_weapon_F | Dismantled Autonomous GMG [AAF]
//    I_GMG_01_high_weapon_F | Dismantled Mk32 GMG (Raised) [AAF]
//    I_GMG_01_weapon_F | Dismantled Mk32 GMG [AAF]
//    I_HMG_01_A_weapon_F | Dismantled Autonomous MG [AAF]
//    I_HMG_01_high_weapon_F | Dismantled Mk30 HMG (Raised) [AAF]
//    I_HMG_01_support_F | Folded Tripod [AAF]
//    I_HMG_01_support_high_F | Folded Tripod (Raised) [AAF]
//    I_HMG_01_weapon_F | Dismantled Mk30 HMG [AAF]
//    I_HMG_02_high_weapon_F | Dismantled M2 HMG .50 (Raised) [AAF]
//    I_HMG_02_support_F | Folded Tripod M2 HMG .50 [AAF]
//    I_HMG_02_support_high_F | Folded Tripod M2 HMG .50 (Raised) [AAF]
//    I_HMG_02_weapon_F | Dismantled M2 HMG .50 [AAF]
//    I_KVN_AP_Bag | KVN AP Bag IND
//    I_KVN_AP_TI_Bag | KVN AP TI Bag IND
//    I_KVN_AT_Bag | KVN AT Bag IND
//    I_KVN_AT_TI_Bag | KVN AT TI Bag IND
//    I_Mortar_01_support_F | Folded Mk6 Mortar Bipod [AAF]
//    I_Mortar_01_weapon_F | Folded Mk6 Mortar Tube [AAF]
//    I_shield_backpack_lxWS | Portable Shield Bag (AAF)
//    I_Static_Designator_01_weapon_F | Remote Designator Bag [AAF]
//    I_UAV_01_backpack_F | UAV Bag (AR-2) [AAF]
//    I_UAV_02_backpack_lxWS | UAV Bag (AP-5) [AAF]
//    I_UAV_06_backpack_F | UAV Bag (AL-6) [AAF]
//    I_UAV_06_medical_backpack_F | UAV Bag (AL-6, Medical) [AAF]
//    I_UGV_02_Demining_backpack_F | UGV Bag (ED-1D) [AAF]
//    I_UGV_02_Science_backpack_F | UGV Bag (ED-1E) [AAF]
//
// -- Car (15) --
//    I_A_Truck_02_aa_lxWS | KamAZ (Zu-23-2)
//    I_MRAP_03_F | Fennek
//    I_MRAP_03_gmg_F | Fennek (GMG)
//    I_MRAP_03_hmg_F | Fennek (HMG)
//    I_Pickup_aat_rf | Ram 1500 (AA)
//    I_Pickup_Comms_rf | Ram 1500 (Comms)
//    I_Pickup_hmg_rf | Ram 1500 (HMG)
//    I_Pickup_rcws_rf | Ram 1500 (RCWS)
//    I_Pickup_rf | Ram 1500
//    I_Quadbike_01_F | Quad Bike
//    I_Truck_02_cargo_lxWS | KamAZ Cargo
//    I_Truck_02_covered_F | KamAZ Transport (covered)
//    I_Truck_02_flatbed_lxWS | KamAZ Flatbed
//    I_Truck_02_MRL_F | KamAZ MRL
//    I_Truck_02_transport_F | KamAZ Transport
//
// -- Items (1) --
//    Item_I_UavTerminal | UAV Terminal [Independent]
//
// -- Men (39) --
//    Aegis_I_HeavyGunner_F | Heavy Gunner
//    Aegis_I_Soldier_MG_F | Machine Gunner
//    EF_I_Soldier_MP | Military Police Officer
//    I_crew_F | Crewman
//    I_engineer_F | Engineer
//    I_Fighter_Pilot_F | Fighter Pilot
//    I_helicrew_F | Helicopter Crew
//    I_helipilot_F | Helicopter Pilot
//    I_medic_F | Combat Life Saver
//    I_officer_F | Officer
//    I_Officer_Parade_F | Officer (Parade Dress)
//    I_Officer_Parade_Veteran_F | Officer (Veteran, Parade Dress)
//    I_pilot_F | Pilot
//    I_RadioOperator_F | Radio Operator
//    I_Soldier_A_F | Ammo Bearer
//    I_Soldier_AA_F | Missile Specialist (AA)
//    I_Soldier_AR_F | Autorifleman
//    I_Soldier_AT_F | Missile Specialist (AT)
//    I_Soldier_CBRN_F | CBRN Specialist
//    I_Soldier_CQ_F | Rifleman (Shotgun)
//    I_Soldier_exp_F | Explosive Specialist
//    I_soldier_F | Rifleman
//    I_Soldier_GL_F | Grenadier
//    I_Soldier_LAT2_F | Rifleman (Light AT)
//    I_Soldier_LAT_F | Rifleman (AT)
//    I_Soldier_LAT_RF | Rifleman (Launcher)
//    I_Soldier_lite_F | Rifleman (Light)
//    I_Soldier_M_F | Marksman
//    I_soldier_mine_F | Mine Specialist
//    I_Soldier_repair_F | Repair Specialist
//    I_Soldier_SL_F | Squad Leader
//    I_Soldier_TL_F | Team Leader
//    I_soldier_UAV_06_F | UAV Operator (AL-6)
//    I_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    I_soldier_UAV_F | UAV Operator
//    I_soldier_UAV_lxWS | UAV Operator (AP-5)
//    I_Soldier_unarmed_F | Rifleman (Unarmed)
//    I_Story_Crew_F | Kyros Kalogeros
//    I_Survivor_F | Survivor
//
// -- MenDiver (3) --
//    I_diver_exp_F | Diver Explosive Specialist
//    I_diver_F | Assault Diver
//    I_diver_TL_F | Diver Team Leader
//
// -- MenRecon (21) --
//    Aegis_I_recon_AR_F | Recon Autorifleman
//    Aegis_I_recon_exp_F | Recon Demo Specialist
//    Aegis_I_recon_F | Recon Scout
//    Aegis_I_recon_GL_F | Recon Grenadier
//    Aegis_I_recon_JTAC_F | Recon JTAC
//    Aegis_I_recon_LAT_F | Recon Scout (AT)
//    Aegis_I_recon_M_F | Recon Marksman
//    Aegis_I_recon_medic_F | Recon Paramedic
//    Aegis_I_recon_TL_F | Recon Team Leader
//    Atlas_I_Pathfinder_AR_F | Autorifleman
//    Atlas_I_Pathfinder_AT_F | Rifleman (AT)
//    Atlas_I_Pathfinder_CMort_F | Gunner (Light Mortar)
//    Atlas_I_Pathfinder_Exp_F | Explosive Specialist
//    Atlas_I_Pathfinder_F | Rifleman
//    Atlas_I_Pathfinder_GL_F | Grenadier
//    Atlas_I_Pathfinder_M_F | Marksman
//    Atlas_I_Pathfinder_Medic_F | Combat Life Saver
//    Atlas_I_Pathfinder_RadioOperator_F | Radio Operator
//    Atlas_I_Pathfinder_SL_F | Squad Leader
//    Atlas_I_Pathfinder_TL_F | Team Leader
//    Atlas_I_Pathfinder_UAV_RF_F | UAV Operator
//
// -- MenSniper (8) --
//    I_ghillie_ard_F | Sniper (Arid)
//    I_ghillie_lsh_F | Sniper (Lush)
//    I_ghillie_sard_F | Sniper (Semi-Arid)
//    I_ghillie_spotter_ard_F | Spotter (Arid)
//    I_ghillie_spotter_lsh_F | Spotter (Lush)
//    I_ghillie_spotter_sard_F | Spotter (Semi-Arid)
//    I_Sniper_F | Sniper
//    I_Spotter_F | Spotter
//
// -- MenStory (3) --
//    I_Captain_Hladas_F | Dr. Hladík
//    I_Story_Colonel_F | Akhanteros
//    I_Story_Officer_01_F | Major Gavras
//
// -- MenSupport (9) --
//    I_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    I_Soldier_AAR_F | Asst. Autorifleman
//    I_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    I_support_AMG_F | Asst. Gunner (HMG/GMG)
//    I_support_AMort_F | Asst. Gunner (Mk6)
//    I_support_CMort_RF | Gunner (Light Mortar)
//    I_support_GMG_F | Gunner (GMG)
//    I_support_MG_F | Gunner (HMG)
//    I_support_Mort_F | Gunner (Mk6)
//
// -- MenVR (2) --
//    I_Protagonist_VR_F | VR Soldier
//    I_Soldier_VR_F | VR Entity
//
// -- Ship (7) --
//    EF_I_CombatBoat_AT_AAF | Combat Boat (AT)
//    EF_I_CombatBoat_HMG_AAF | Combat Boat (HMG)
//    EF_I_CombatBoat_Unarmed_AAF | Combat Boat (Unarmed)
//    EF_I_LCC_AAF | LCC-1
//    EF_I_LCC_SideLoad_AAF | LCC-1 (Side Load)
//    I_Boat_Armed_01_minigun_F | Speedboat Minigun
//    I_Boat_Transport_01_F | Assault Boat
//
// -- Static (21) --
//    ACE_I_SpottingScope | Spotting Scope
//    GX_I_HUNTER_SP_LAUNCHER | Hunter-SP Launcher
//    I_CommandoMortar_RF | RSG60
//    I_GMG_01_A_F | XM307A
//    I_GMG_01_F | XM307
//    I_GMG_01_high_F | XM307 (High)
//    I_HMG_01_A_F | XM312A
//    I_HMG_01_F | XM312
//    I_HMG_01_high_F | XM312 (High)
//    I_HMG_02_F | M2 HMG .50
//    I_HMG_02_high_F | M2 HMG .50 (Raised)
//    I_Mortar_01_F | Mk6 Mortar
//    I_Rev_Designator | Deployable Designator [AAF]
//    I_static_AA_F | Mini-Spike Launcher (AA)
//    I_static_AT_F | Mini-Spike Launcher (AT)
//    I_Static_Designator_01_F | Remote Designator
//    I_SwitchBlade_300_LaunchTube_Desert | SwitchBlade 300 Launch Tube (Desert)
//    I_SwitchBlade_300_LaunchTube_Woodland | SwitchBlade 300 Launch Tube (Woodland)
//    I_SwitchBlade_600_LaunchTube_Desert | SwitchBlade 600 Launch Tube (Desert)
//    I_SwitchBlade_600_LaunchTube_Woodland | SwitchBlade 600 Launch Tube (Woodland)
//    orlan_tripod_launcher_IND | Orlan Tripod Launcher
//
// -- Structures_Military (3) --
//    CamoNet_INDP_big_F | Camouflage Vehicle Cover (Digital)
//    CamoNet_INDP_F | Camouflage Net (Digital)
//    CamoNet_INDP_open_F | Camouflage Net (Open, Digital)
//
// -- Structures_Walls (1) --
//    I_shield_lxWS | Portable Shield (AAF)
//
// -- Submarine (1) --
//    I_SDV_01_F | SDV
//
// -- Support (4) --
//    I_Truck_02_ammo_F | KamAZ Ammo
//    I_Truck_02_box_F | KamAZ Repair
//    I_Truck_02_fuel_F | KamAZ Fuel
//    I_Truck_02_medical_F | KamAZ Medical
//
// -- Training (3) --
//    CBA_I_InvisibleTarget | Invisible Target Soldier
//    CBA_I_InvisibleTargetAir | Invisible Target Airplane
//    CBA_I_InvisibleTargetVehicle | Invisible Target Vehicle
//
// -- WeaponsSecondary (2) --
//    Weapon_launch_I_Titan_F | Titan MPRL (Digital)
//    Weapon_launch_I_Titan_short_F | Titan MPRL Compact (Olive)
//
