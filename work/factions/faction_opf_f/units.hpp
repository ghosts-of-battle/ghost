// OPF_F - ghost_Iran
// 330 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (18) --
//    O_Heli_Attack_02_dynamicLoadout_F | Mi-48 Kajman
//    O_Heli_Light_02_dynamicLoadout_F | Ka-60 Kasatka
//    O_Heli_Light_02_unarmed_F | Ka-60 Kasatka (unarmed)
//    O_Heli_Transport_04_ammo_F | Mi-290 Taru (Ammo)
//    O_Heli_Transport_04_bench_F | Mi-290 Taru (Bench)
//    O_Heli_Transport_04_box_F | Mi-290 Taru (Cargo)
//    O_Heli_Transport_04_covered_F | Mi-290 Taru (Transport)
//    O_Heli_Transport_04_F | Mi-290 Taru
//    O_Heli_Transport_04_fuel_F | Mi-290 Taru (Fuel)
//    O_Heli_Transport_04_medevac_F | Mi-290 Taru (Medical)
//    O_Heli_Transport_04_repair_F | Mi-290 Taru (Repair)
//    O_Plane_CAS_02_dynamicLoadout_F | Yak-130
//    O_Plane_Fighter_02_F | To-201 Shikra
//    O_Plane_Fighter_02_Stealth_F | To-201 Shikra (Stealth)
//    O_Plane_Transport_01_infantry_F | Iran-150 (Infantry Transport)
//    O_Plane_Transport_01_vehicle_F | Iran-150 (Vehicle Transport)
//    O_VTOL_02_infantry_dynamicLoadout_F | Y-32 Xi'an (Infantry Transport)
//    O_VTOL_02_vehicle_dynamicLoadout_F | Y-32 Xi'an (Vehicle Transport)
//
// -- Armored (16) --
//    EF_O_Gyra_Antiair_OPF | Gyra AA
//    EF_O_Gyra_Armed_OPF | Gyra IFV
//    EF_O_Gyra_HMG_OPF | Gyra HMG
//    EF_O_Gyra_Mortar_OPF | Gyra Mortar
//    EF_O_Gyra_OPF | Gyra
//    O_APC_Tracked_02_30mm_lxWS | BM-2T Stalker (Bumerang-BM)
//    O_APC_Tracked_02_AA_F | ZSU-35 Tigris
//    O_APC_Tracked_02_cannon_F | BM-2T Stalker
//    O_APC_Wheeled_02_hmg_lxWS | Otokar ARMA (HMG)
//    O_APC_Wheeled_02_rcws_v2_F | Otokar ARMA
//    O_APC_Wheeled_02_unarmed_lxWS | Otokar ARMA (Unarmed)
//    O_MBT_02_arty_F | 2S9 Sochor
//    O_MBT_02_cannon_F | T100 Black Eagle
//    O_MBT_02_railgun_F | T-100X Futura
//    O_MBT_04_cannon_F | T-14 Armata
//    O_MBT_04_command_F | T-14K Armata
//
// -- Autonomous (68) --
//    GX_O_BLACKHORNET_UAV | Black Hornet 4
//    GX_O_DRONE40_UAV_HE | Drone40 HE
//    GX_O_DRONE40_UAV_RECON | Drone40 Recon
//    GX_O_DRONE40_UAV_SMOKE_BLUE | Drone40 Smoke (Blue)
//    GX_O_DRONE40_UAV_SMOKE_GREEN | Drone40 Smoke (Green)
//    GX_O_DRONE40_UAV_SMOKE_ORANGE | Drone40 Smoke (Orange)
//    GX_O_DRONE40_UAV_SMOKE_PURPLE | Drone40 Smoke (Purple)
//    GX_O_DRONE40_UAV_SMOKE_RED | Drone40 Smoke (Red)
//    GX_O_DRONE40_UAV_SMOKE_WHITE | Drone40 Smoke (White)
//    GX_O_DRONE40_UAV_SMOKE_YELLOW | Drone40 Smoke (Yellow)
//    GX_O_HONEYBADGER_UGV_AT_BLACK | Honeybadger (AT) (Black)
//    GX_O_HONEYBADGER_UGV_AT_DESERT | Honeybadger (AT) (Desert)
//    GX_O_HONEYBADGER_UGV_AT_GREEN | Honeybadger (AT) (Green)
//    GX_O_HONEYBADGER_UGV_AT_HEX | Honeybadger (AT) (Hex)
//    GX_O_HUNTER_SP_UAV | Hunter-SP
//    GX_O_MAGURA_V5_USV | MAGURA V5
//    GX_O_MQ8B_UAV_ARMED | MQ-8B Fire Scout (Armed)
//    GX_O_MQ8B_UAV_RECON | MQ-8B Fire Scout (Recon)
//    GX_O_MQ8B_UAV_RECON_SEATED | MQ-8B Fire Scout (Recon) (Seated)
//    GX_O_RQ11B_UAV | RQ-11B Raven
//    GX_O_RWS_DEFNDER_MEDIUM | DeFNder Medium
//    GX_O_THEMIS_UGV_CARGO | THeMIS (Cargo)
//    GX_O_THEMIS_UGV_DEFNDER_MEDIUM | THeMIS (DeFNder Medium)
//    GX_O_THEMIS_UGV_HUNTER_LAUNCHER | THeMIS (Hunter-SP Launcher)
//    JK_O_76n6_ClamShell_F | 76n6 Clam Shell
//    JK_O_76n6_ClamShell_Lower_F | 76n6 Clam Shell (Artillery Radar)
//    O_AAA_System_01_F | Praetorian 1C
//    O_Crocus_AP | Crocus AP
//    O_Crocus_AP_TI | Crocus AP TI
//    O_Crocus_AT | Crocus AT
//    O_Crocus_AT_TI | Crocus AT TI
//    O_KVN_AP | KVN AP
//    O_KVN_AP_TI | KVN AP TI
//    O_KVN_AT | KVN AT
//    O_KVN_AT_TI | KVN AT TI
//    O_Radar_System_02_F | R-750 Cronus Radar
//    O_Rev_Bustard | Deployable AP-5 Roshanak
//    O_Rev_Darter | Deployable AR-2 Tayran
//    O_Rev_Demine | Deployable Demining Drone
//    O_Rev_Pelican | Deployable AL-6 Jinaah
//    O_Rev_Pelter | Deployable ED-1D Akinaka
//    O_Rev_Roller | Deployable ED-1D Sayyah
//    O_SAM_System_01_F | Mk49 Spartan
//    O_SAM_System_02_F | Mk-29 ESSM
//    O_SAM_System_04_F | S-400
//    O_UAV_01_F | Tayran AR-2
//    O_UAV_02_dynamicLoadout_F | YABHON-R3
//    O_UAV_02_lxWS | Roshanak AP-5
//    O_UAV_06_F | Jinaah AL-6
//    O_UAV_06_medical_F | Jinaah AL-6 (Medical)
//    O_UAV_RC40_HE_RF | Drone40 HE
//    O_UAV_RC40_SENSOR_RF | Drone40 Scout
//    O_UAV_RC40_SmokeBlue_RF | Drone40 Smoke (Blue)
//    O_UAV_RC40_SmokeGreen_RF | Drone40 Smoke (Green)
//    O_UAV_RC40_SmokeOrange_RF | Drone40 Smoke (Orange)
//    O_UAV_RC40_SmokeRed_RF | Drone40 Smoke (Red)
//    O_UAV_RC40_SmokeWhite_RF | Drone40 Smoke (White)
//    O_UGV_01_F | UGV Saif
//    O_UGV_01_medical_F | UGV Saif Medical
//    O_UGV_01_rcws_F | UGV Saif RCWS
//    O_UGV_02_Demining_F | Akinaka ED-1D
//    O_UGV_02_Science_F | Sayyah ED-1E
//    orion_F_KAB20_OPF | Orion KAB-20
//    orion_F_KAB50_OPF | Orion KAB-50
//    orion_F_KORNET_OPF | Orion Kornet-D (ATGM)
//    orion_F_OPF | Orion
//    orlan_F_OPF | Orlan-30
//    rksla3_uav_h450_2 | Hermes 450
//
// -- Backpacks (34) --
//    O_AA_01_weapon_F | Static Titan Launcher (AA) [CSAT]
//    O_AT_01_weapon_F | Static Titan Launcher (AT) [CSAT]
//    O_CommandoMortar_weapon_RF | Folded Commando Mortar (Tan)
//    O_Crocus_AP_Bag | Crocus AP Bag OPFOR
//    O_Crocus_AP_TI_Bag | Crocus AP TI Bag OPFOR
//    O_Crocus_AT_Bag | Crocus AT Bag OPFOR
//    O_Crocus_AT_TI_Bag | Crocus AT TI Bag OPFOR
//    O_GMG_01_A_weapon_F | Dismantled Autonomous GMG [CSAT]
//    O_GMG_01_high_weapon_F | Dismantled Mk32 GMG (Raised) [CSAT]
//    O_GMG_01_weapon_F | Dismantled Mk32 GMG [CSAT]
//    O_HMG_01_A_weapon_F | Dismantled Autonomous MG [CSAT]
//    O_HMG_01_high_weapon_F | Dismantled Mk30 HMG (Raised) [CSAT]
//    O_HMG_01_support_F | Folded Tripod [CSAT]
//    O_HMG_01_support_high_F | Folded Tripod (Raised) [CSAT]
//    O_HMG_01_weapon_F | Dismantled Mk30 HMG [CSAT]
//    O_HMG_02_high_weapon_F | Dismantled M2 HMG .50 (Raised) [CSAT]
//    O_HMG_02_support_F | Folded Tripod M2 HMG .50 [CSAT]
//    O_HMG_02_support_high_F | Folded Tripod M2 HMG .50 (Raised) [CSAT]
//    O_HMG_02_weapon_F | Dismantled M2 HMG .50 [CSAT]
//    O_KVN_AP_Bag | KVN AP Bag OPFOR
//    O_KVN_AP_TI_Bag | KVN AP TI Bag OPFOR
//    O_KVN_AT_Bag | KVN AT Bag OPFOR
//    O_KVN_AT_TI_Bag | KVN AT TI Bag OPFOR
//    O_Mortar_01_support_F | Folded Mk6 Mortar Bipod [CSAT]
//    O_Mortar_01_weapon_F | Folded Mk6 Mortar Tube [CSAT]
//    O_shield_backpack_GHEX_lxWS | Portable Shield Bag (Green Hex)
//    O_shield_backpack_lxWS | Portable Shield Bag (Hex)
//    O_Static_Designator_02_weapon_F | Remote Designator Bag [CSAT]
//    O_UAV_01_backpack_F | UAV Bag (AR-2) [CSAT]
//    O_UAV_02_backpack_lxWS | UAV Bag (AP-5) [CSAT]
//    O_UAV_06_backpack_F | UAV Bag (AL-6) [CSAT]
//    O_UAV_06_medical_backpack_F | UAV Bag (AL-6, Medical) [CSAT]
//    O_UGV_02_Demining_backpack_F | UGV Bag (ED-1D) [CSAT]
//    O_UGV_02_Science_backpack_F | UGV Bag (ED-1E) [CSAT]
//
// -- Car (20) --
//    O_LSV_02_armed_F | LSV Mk. II (M134)
//    O_LSV_02_AT_F | LSV Mk. II (Metis-M)
//    O_LSV_02_unarmed_F | LSV Mk. II
//    O_MRAP_02_F | Karatel
//    O_MRAP_02_gmg_F | Karatel (GMG)
//    O_MRAP_02_hmg_F | Karatel (HMG)
//    O_Pickup_Comms_rf | Ram 1500 (Comms)
//    O_Pickup_rcws_rf | Ram 1500 (RCWS)
//    O_Pickup_rf | Ram 1500
//    O_Quadbike_01_F | Quad Bike
//    O_Quadbike_ALIVE | Quadbike (Light)
//    O_Truck_02_cargo_lxWS | KamAZ Cargo
//    O_Truck_02_covered_F | KamAZ Transport (covered)
//    O_Truck_02_flatbed_lxWS | KamAZ Flatbed
//    O_Truck_02_MRL_F | Zamak MRL
//    O_Truck_02_transport_F | KamAZ Transport
//    O_Truck_03_cargo_RF | Typhoon Cargo
//    O_Truck_03_covered_F | Typhoon Transport (covered)
//    O_Truck_03_device_F | Typhoon Device
//    O_Truck_03_transport_F | Typhoon Transport
//
// -- Items (1) --
//    Item_O_UavTerminal | UAV Terminal [OPFOR]
//
// -- Men (64) --
//    Aegis_O_BoatCrew_EF | Boat Crewman
//    Atlas_O_Crew_R_F | Crewman
//    Atlas_O_Soldier_R_A_F | Ammo Bearer
//    Atlas_O_Soldier_R_AA_F | Missile Specialist (AA)
//    Atlas_O_Soldier_R_AR_F | Autorifleman
//    Atlas_O_Soldier_R_AT_F | Missile Specialist (AT)
//    Atlas_O_Soldier_R_Engineer_F | Engineer
//    Atlas_O_Soldier_R_Exp_F | Explosive Specialist
//    Atlas_O_Soldier_R_F | Rifleman
//    Atlas_O_Soldier_R_GL_F | Grenadier
//    Atlas_O_Soldier_R_HG_F | Heavy Gunner
//    Atlas_O_Soldier_R_LAT_F | Rifleman (AT)
//    Atlas_O_Soldier_R_M_F | Marksman
//    Atlas_O_Soldier_R_Medic_F | Combat Life Saver
//    Atlas_O_Soldier_R_RadioOp_F | Radio Operator
//    Atlas_O_Soldier_R_SL_F | Squad Leader
//    Atlas_O_Soldier_R_TL_F | Team Leader
//    Atlas_O_Soldier_R_UAV_F | UAV Operator
//    O_crew_F | Crewman
//    O_engineer_F | Engineer
//    O_Fighter_Pilot_F | Fighter Pilot
//    O_HeavyGunner_F | Heavy Gunner
//    O_helicrew_F | Helicopter Crew
//    O_helipilot_F | Helicopter Pilot
//    O_medic_F | Combat Life Saver
//    O_officer_F | Officer
//    O_Officer_Parade_F | Officer (Parade Dress)
//    O_Officer_Parade_Veteran_F | Officer (Veteran, Parade Dress)
//    O_Pilot_F | Pilot
//    O_QRF_medic_RF | Combat Life Saver
//    O_QRF_Soldier_AR_RF | Autorifleman
//    O_QRF_Soldier_GL_RF | Grenadier
//    O_QRF_Soldier_HAT_RF | Rifleman (Heavy AT)
//    O_QRF_soldier_M_RF | Sharpshooter
//    O_QRF_Soldier_RF | Rifleman
//    O_QRF_Soldier_SL_RF | Squad Leader
//    O_QRF_Soldier_UAV_RF | UAV Specialist
//    O_RadioOperator_F | Radio Operator
//    O_Sharpshooter_F | Sharpshooter
//    O_Soldier_A_F | Ammo Bearer
//    O_Soldier_AA_F | Missile Specialist (AA)
//    O_Soldier_AR_F | Autorifleman
//    O_Soldier_AT_F | Missile Specialist (AT)
//    O_Soldier_CBRN_F | CBRN Specialist
//    O_Soldier_CQ_F | Rifleman (Shotgun)
//    O_soldier_exp_F | Explosive Specialist
//    O_soldier_F | Rifleman
//    O_Soldier_GL_F | Grenadier
//    O_Soldier_HAT_F | Rifleman (Heavy AT)
//    O_Soldier_LAT_F | Rifleman (AT)
//    O_Soldier_lite_F | Rifleman (Light)
//    O_soldier_M_F | Marksman
//    O_soldier_mine_F | Mine Specialist
//    O_soldier_PG_F | Para Trooper
//    O_soldier_repair_F | Repair Specialist
//    O_Soldier_SL_F | Squad Leader
//    O_Soldier_TL_F | Team Leader
//    O_soldier_UAV_06_F | UAV Operator (AL-6)
//    O_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    O_soldier_UAV_F | UAV Operator
//    O_soldier_UAV_lxWS | UAV Operator (AP-5)
//    O_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    O_Soldier_unarmed_F | Rifleman (Unarmed)
//    O_Survivor_F | Survivor
//
// -- MenDiver (3) --
//    O_diver_exp_F | Diver Explosive Specialist
//    O_diver_F | Assault Diver
//    O_diver_TL_F | Diver Team Leader
//
// -- MenRecon (11) --
//    O_Pathfinder_F | Recon Pathfinder
//    O_recon_AR_F | Recon Autorifleman
//    O_recon_CQ_F | Recon Scout (Shotgun)
//    O_recon_exp_F | Recon Demo Specialist
//    O_recon_F | Recon Scout
//    O_recon_GL_F | Recon Grenadier
//    O_recon_JTAC_F | Recon JTAC
//    O_recon_LAT_F | Recon Scout (AT)
//    O_recon_M_F | Recon Marksman
//    O_recon_medic_F | Recon Paramedic
//    O_recon_TL_F | Recon Team Leader
//
// -- MenSniper (8) --
//    O_ghillie_ard_F | Sniper (Arid)
//    O_ghillie_lsh_F | Sniper (Lush)
//    O_ghillie_sard_F | Sniper (Semi-Arid)
//    O_ghillie_spotter_ard_F | Spotter (Arid)
//    O_ghillie_spotter_lsh_F | Spotter (Lush)
//    O_ghillie_spotter_sard_F | Spotter (Semi-Arid)
//    O_sniper_F | Sniper
//    O_spotter_F | Spotter
//
// -- MenSupport (10) --
//    O_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    O_Soldier_AAR_F | Asst. Autorifleman
//    O_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    O_Soldier_AHAT_F | Asst. Heavy AT
//    O_support_AMG_F | Asst. Gunner (HMG/GMG)
//    O_support_AMort_F | Asst. Gunner (Mk6)
//    O_support_CMort_RF | Gunner (Light Mortar)
//    O_support_GMG_F | Gunner (GMG)
//    O_support_MG_F | Gunner (HMG)
//    O_support_Mort_F | Gunner (Mk6)
//
// -- MenUrban (24) --
//    EF_O_crewU_F | Crewman
//    O_engineer_U_F | Engineer
//    O_soldierU_A_F | Ammo Bearer
//    O_soldierU_AA_F | Missile Specialist (AA)
//    O_soldierU_AAA_F | Asst. Missile Specialist (AA)
//    O_soldierU_AAR_F | Asst. Autorifleman
//    O_soldierU_AAT_F | Asst. Missile Specialist (AT)
//    O_soldierU_AR_F | Autorifleman
//    O_soldierU_AT_F | Missile Specialist (AT)
//    O_soldierU_CBRN_F | CBRN Specialist
//    O_soldierU_CQ_F | Rifleman (Shotgun)
//    O_soldierU_exp_F | Explosive Specialist
//    O_soldierU_F | Rifleman
//    O_SoldierU_GL_F | Grenadier
//    O_soldierU_LAT_F | Rifleman (AT)
//    O_soldierU_M_F | Marksman
//    O_soldierU_medic_F | Combat Life Saver
//    O_soldierU_repair_F | Repair Specialist
//    O_SoldierU_SL_F | Squad Leader
//    O_soldierU_TL_F | Team Leader
//    O_SoldierU_unarmed_F | Rifleman (Unarmed)
//    O_Urban_HeavyGunner_F | Heavy Gunner
//    O_Urban_RadioOperator_F | Radio Operator
//    O_Urban_Sharpshooter_F | Sharpshooter
//
// -- MenVR (2) --
//    O_Protagonist_VR_F | VR Soldier
//    O_Soldier_VR_F | VR Entity
//
// -- Ship (6) --
//    EF_O_CombatBoat_AT_OPF | Combat Boat (AT)
//    EF_O_CombatBoat_HMG_OPF | Combat Boat (HMG)
//    EF_O_CombatBoat_Unarmed_OPF | Combat Boat (Unarmed)
//    O_Boat_Armed_01_hmg_F | Speedboat HMG
//    O_Boat_Transport_01_F | Assault Boat
//    O_Lifeboat | Rescue Boat
//
// -- Static (19) --
//    ACE_O_SpottingScope | Spotting Scope
//    ghost_antiship_launcher | 3K72 Burevestnik (Anti-Ship)
//    ghost_antiship_radar | Surface Search Radar
//    GX_O_HUNTER_SP_LAUNCHER | Hunter-SP Launcher
//    O_CommandoMortar_RF | RSG60
//    O_GMG_01_A_F | XM307A
//    O_GMG_01_F | XM307
//    O_GMG_01_high_F | XM307 (High)
//    O_HMG_01_A_F | XM312A
//    O_HMG_01_F | XM312
//    O_HMG_01_high_F | XM312 (High)
//    O_HMG_02_F | M2 HMG .50
//    O_HMG_02_high_F | M2 HMG .50 (Raised)
//    O_Mortar_01_F | Mk6 Mortar
//    O_Rev_Designator | Deployable Designator [CSAT]
//    O_static_AA_F | Mini-Spike Launcher (AA)
//    O_static_AT_F | Mini-Spike Launcher (AT)
//    O_Static_Designator_02_F | Remote Designator
//    orlan_tripod_launcher_OPF | Orlan Tripod Launcher
//
// -- Structures_Military (3) --
//    CamoNet_OPFOR_big_F | Camouflage Vehicle Cover (Hex)
//    CamoNet_OPFOR_F | Camouflage Net (Hex)
//    CamoNet_OPFOR_open_F | Camouflage Net (Open, Hex)
//
// -- Structures_Walls (2) --
//    O_shield_GHEX_lxWS | Portable Shield (Green Hex)
//    O_shield_lxWS | Portable Shield (Hex)
//
// -- Submarine (1) --
//    O_SDV_01_F | SDV
//
// -- Support (15) --
//    Land_Pod_Heli_Transport_04_ammo_F | Taru Ammo Pod
//    Land_Pod_Heli_Transport_04_bench_F | Taru Bench Pod
//    Land_Pod_Heli_Transport_04_box_F | Taru Cargo Pod
//    Land_Pod_Heli_Transport_04_covered_F | Taru Transport Pod
//    Land_Pod_Heli_Transport_04_fuel_F | Taru Fuel Pod
//    Land_Pod_Heli_Transport_04_medevac_F | Taru Medical Pod
//    Land_Pod_Heli_Transport_04_repair_F | Taru Repair Pod
//    O_Truck_02_Ammo_F | KamAZ Ammo
//    O_Truck_02_box_F | KamAZ Repair
//    O_Truck_02_fuel_F | KamAZ Fuel
//    O_Truck_02_medical_F | KamAZ Medical
//    O_Truck_03_ammo_F | Typhoon Ammo
//    O_Truck_03_fuel_F | Typhoon Fuel
//    O_Truck_03_medical_F | Typhoon Medical
//    O_Truck_03_repair_F | Typhoon Repair
//
// -- Training (3) --
//    CBA_O_InvisibleTarget | Invisible Target Soldier
//    CBA_O_InvisibleTargetAir | Invisible Target Airplane
//    CBA_O_InvisibleTargetVehicle | Invisible Target Vehicle
//
// -- WeaponsSecondary (2) --
//    Weapon_launch_O_Titan_F | Titan MPRL (Hex)
//    Weapon_launch_O_Titan_short_F | Titan MPRL Compact (Coyote)
//
