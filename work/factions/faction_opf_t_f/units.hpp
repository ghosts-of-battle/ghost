// OPF_T_F - ghost_China
// 183 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (18) --
//    O_T_Heli_Attack_02_dynamicLoadout_F | Mi-48 Kajman
//    O_T_Heli_Light_02_dynamicLoadout_ghex_F | Ka-60 Kasatka
//    O_T_Heli_Light_02_unarmed_F | Ka-60 Kasatka (unarmed)
//    O_T_Heli_Transport_04_ammo_F | Mi-290 Taru (Ammo)
//    O_T_Heli_Transport_04_bench_F | Mi-290 Taru (Bench)
//    O_T_Heli_Transport_04_box_F | Mi-290 Taru (Cargo)
//    O_T_Heli_Transport_04_covered_F | Mi-290 Taru (Transport)
//    O_T_Heli_Transport_04_F | Mi-290 Taru
//    O_T_Heli_Transport_04_fuel_F | Mi-290 Taru (Fuel)
//    O_T_Heli_Transport_04_medevac_F | Mi-290 Taru (Medical)
//    O_T_Heli_Transport_04_repair_F | Mi-290 Taru (Repair)
//    O_T_Plane_CAS_02_dynamicLoadout_ghex_F | Yak-130
//    O_T_Plane_Fighter_02_ghex_F | To-201 Shikra
//    O_T_Plane_Fighter_02_Stealth_ghex_F | To-201 Shikra (Stealth)
//    O_T_Plane_Transport_01_infantry_ghex_F | Iran-150 (Infantry Transport)
//    O_T_Plane_Transport_01_vehicle_ghex_F | Iran-150 (Vehicle Transport)
//    O_T_VTOL_02_infantry_dynamicLoadout_F | Y-32 Xi'an (Infantry Transport)
//    O_T_VTOL_02_vehicle_dynamicLoadout_F | Y-32 Xi'an (Vehicle Transport)
//
// -- Armored (16) --
//    EF_O_Gyra_Antiair_OPF_T | Gyra AA
//    EF_O_Gyra_Armed_OPF_T | Gyra IFV
//    EF_O_Gyra_HMG_OPF_T | Gyra HMG
//    EF_O_Gyra_Mortar_OPF_T | Gyra Mortar
//    EF_O_Gyra_OPF_T | Gyra
//    O_T_APC_Tracked_02_30mm_lxWS | BM-2T Stalker (Bumerang-BM)
//    O_T_APC_Tracked_02_AA_ghex_F | ZSU-35 Tigris
//    O_T_APC_Tracked_02_cannon_ghex_F | BM-2T Stalker
//    O_T_APC_Wheeled_02_hmg_lxWS | Otokar ARMA (HMG)
//    O_T_APC_Wheeled_02_rcws_v2_ghex_F | Otokar ARMA
//    O_T_APC_Wheeled_02_unarmed_lxWS | Otokar ARMA (Unarmed)
//    O_T_MBT_02_arty_ghex_F | 2S9 Sochor
//    O_T_MBT_02_cannon_ghex_F | T100 Black Eagle
//    O_T_MBT_02_railgun_ghex_F | T-100X Futura
//    O_T_MBT_04_cannon_F | T-14 Armata
//    O_T_MBT_04_command_F | T-14K Armata
//
// -- Autonomous (12) --
//    Aegis_O_T_UAV_02_lxWS | Roshanak AP-5
//    O_T_Radar_System_02_F | R-750 Cronus Radar
//    O_T_SAM_System_04_F | S-400
//    O_T_UAV_01_F | Tayran AR-2
//    O_T_UAV_04_CAS_F | Burraq UCAV
//    O_T_UAV_06_F | Jinaah AL-6
//    O_T_UAV_06_medical_F | Jinaah AL-6 (Medical)
//    O_T_UGV_01_ghex_F | UGV Saif
//    O_T_UGV_01_medical_ghex_F | UGV Saif Medical
//    O_T_UGV_01_rcws_ghex_F | UGV Saif RCWS
//    O_T_UGV_02_Demining_F | Akinaka ED-1D
//    rksla3_aeroshark_opfor | Aeroshark Mini UAV
//
// -- Backpacks (1) --
//    O_T_Static_Designator_02_weapon_F | Remote Designator Bag (Green Hex) [CSAT]
//
// -- Car (19) --
//    O_T_LSV_02_armed_F | LSV Mk. II (M134)
//    O_T_LSV_02_AT_F | LSV Mk. II (Metis-M)
//    O_T_LSV_02_unarmed_F | LSV Mk. II
//    O_T_MRAP_02_ghex_F | Karatel
//    O_T_MRAP_02_gmg_ghex_F | Karatel (GMG)
//    O_T_MRAP_02_hmg_ghex_F | Karatel (HMG)
//    O_T_Pickup_Comms_rf | Ram 1500 (Comms)
//    O_T_Pickup_rcws_rf | Ram 1500 (RCWS)
//    O_T_Pickup_rf | Ram 1500
//    O_T_Quadbike_01_ghex_F | Quad Bike
//    O_T_Truck_02_cargo_lxWS | KamAZ Cargo
//    O_T_Truck_02_F | Zamak Transport (Covered)
//    O_T_Truck_02_flatbed_lxWS | KamAZ Flatbed
//    O_T_Truck_02_MRL_F | Zamak MRL
//    O_T_Truck_02_transport_F | Zamak Transport
//    O_T_Truck_03_cargo_RF | Typhoon Cargo
//    O_T_Truck_03_covered_ghex_F | Typhoon Transport (covered)
//    O_T_Truck_03_device_ghex_F | Typhoon Device
//    O_T_Truck_03_transport_ghex_F | Typhoon Transport
//
// -- Men (54) --
//    Aegis_O_T_BoatCrew_EF | Boat Crewman
//    Atlas_O_C_Marine_A_F | Ammo Bearer
//    Atlas_O_C_Marine_AA_F | Missile Specialist (AA)
//    Atlas_O_C_Marine_AR_F | Autorifleman
//    Atlas_O_C_Marine_AT_F | Missile Specialist (AT)
//    Atlas_O_C_Marine_Crew_F | Crewman
//    Atlas_O_C_Marine_Engineer_F | Engineer
//    Atlas_O_C_Marine_Exp_F | Explosive Specialist
//    Atlas_O_C_Marine_F | Rifleman
//    Atlas_O_C_Marine_GL_F | Grenadier
//    Atlas_O_C_Marine_HG_F | Heavy Gunner
//    Atlas_O_C_Marine_LAT_F | Rifleman (AT)
//    Atlas_O_C_Marine_M_F | Marksman
//    Atlas_O_C_Marine_Medic_F | Combat Life Saver
//    Atlas_O_C_Marine_RadioOp_F | Radio Operator
//    Atlas_O_C_Marine_SL_F | Squad Leader
//    Atlas_O_C_Marine_TL_F | Team Leader
//    Atlas_O_C_Marine_UAV_F | UAV Operator
//    O_T_Crew_F | Crewman
//    O_T_Engineer_F | Engineer
//    O_T_Fighter_Pilot_F | Fighter Pilot
//    O_T_HeavyGunner_F | Heavy Gunner
//    O_T_Helicrew_F | Helicopter Crew
//    O_T_Helipilot_F | Helicopter Pilot
//    O_T_Medic_F | Combat Life Saver
//    O_T_Officer_F | Officer
//    O_T_Pilot_F | Pilot
//    O_T_RadioOperator_F | Radio Operator
//    O_T_Sharpshooter_F | Sharpshooter
//    O_T_Soldier_A_F | Ammo Bearer
//    O_T_Soldier_AA_F | Missile Specialist (AA)
//    O_T_Soldier_AR_F | Autorifleman
//    O_T_Soldier_AT_F | Missile Specialist (AT)
//    O_T_Soldier_CBRN_F | CBRN Specialist
//    O_T_Soldier_CQ_F | Rifleman (Shotgun)
//    O_T_Soldier_Exp_F | Explosive Specialist
//    O_T_Soldier_F | Rifleman
//    O_T_Soldier_GL_F | Grenadier
//    O_T_Soldier_HAT_F | Rifleman (Heavy AT)
//    O_T_Soldier_LAT_F | Rifleman (AT)
//    O_T_Soldier_Lite_F | Rifleman (Light)
//    O_T_Soldier_M_F | Marksman
//    O_T_soldier_mine_F | Mine Specialist
//    O_T_Soldier_PG_F | Para Trooper
//    O_T_Soldier_Repair_F | Repair Specialist
//    O_T_Soldier_SL_F | Squad Leader
//    O_T_Soldier_TL_F | Team Leader
//    O_T_Soldier_UAV_02_lxWS_F | UAV Operator (AP-5)
//    O_T_soldier_UAV_06_F | UAV Operator (AL-6)
//    O_T_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    O_T_Soldier_UAV_F | UAV Operator
//    O_T_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    O_T_Soldier_unarmed_F | Rifleman (Unarmed)
//    O_T_Survivor_F | Survivor
//
// -- MenDiver (3) --
//    O_T_Diver_Exp_F | Diver Explosive Specialist
//    O_T_Diver_F | Assault Diver
//    O_T_Diver_TL_F | Diver Team Leader
//
// -- MenRecon (11) --
//    O_T_Pathfinder_F | Recon Pathfinder
//    O_T_Recon_AR_F | Recon Autorifleman
//    O_T_Recon_CQ_F | Recon Scout (Shotgun)
//    O_T_Recon_Exp_F | Recon Demo Specialist
//    O_T_Recon_F | Recon Scout
//    O_T_Recon_GL_F | Recon Grenadier
//    O_T_Recon_JTAC_F | Recon JTAC
//    O_T_Recon_LAT_F | Recon Scout (AT)
//    O_T_Recon_M_F | Recon Marksman
//    O_T_Recon_Medic_F | Recon Paramedic
//    O_T_Recon_TL_F | Recon Team Leader
//
// -- MenSniper (4) --
//    O_T_ghillie_spotter_tna_F | Spotter (Jungle)
//    O_T_ghillie_tna_F | Sniper (Jungle)
//    O_T_Sniper_F | Sniper
//    O_T_Spotter_F | Spotter
//
// -- MenSupport (9) --
//    O_T_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    O_T_Soldier_AAR_F | Asst. Autorifleman
//    O_T_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    O_T_Soldier_AHAT_F | Asst. Heavy AT
//    O_T_Support_AMG_F | Asst. Gunner (HMG/GMG)
//    O_T_Support_AMort_F | Asst. Gunner (Mk6)
//    O_T_Support_GMG_F | Gunner (GMG)
//    O_T_Support_MG_F | Gunner (HMG)
//    O_T_Support_Mort_F | Gunner (Mk6)
//
// -- Ship (6) --
//    EF_O_CombatBoat_AT_OPF_T | Combat Boat (AT)
//    EF_O_CombatBoat_HMG_OPF_T | Combat Boat (HMG)
//    EF_O_CombatBoat_Unarmed_OPF_T | Combat Boat (Unarmed)
//    O_T_Boat_Armed_01_hmg_F | Speedboat HMG
//    O_T_Boat_Transport_01_F | Assault Boat
//    O_T_Lifeboat | Rescue Boat
//
// -- Static (11) --
//    ACE_O_T_SpottingScope | Spotting Scope
//    O_T_GMG_01_A_F | XM307A
//    O_T_GMG_01_F | XM307
//    O_T_GMG_01_high_F | XM307 (High)
//    O_T_HMG_01_A_F | XM312A
//    O_T_HMG_01_F | XM312
//    O_T_HMG_01_high_F | XM312 (High)
//    O_T_Mortar_01_F | Mk6 Mortar
//    O_T_Static_AA_F | Mini-Spike Launcher (AA)
//    O_T_Static_AT_F | Mini-Spike Launcher (AT)
//    O_T_Static_Designator_02_F | Remote Designator
//
// -- Structures_Military (3) --
//    CamoNet_ghex_big_F | Camouflage Vehicle Cover (Green Hex)
//    CamoNet_ghex_F | Camouflage Net (Green Hex)
//    CamoNet_ghex_open_F | Camouflage Net (Open, Green Hex)
//
// -- Submarine (1) --
//    O_T_SDV_01_F | SDV
//
// -- Support (15) --
//    Land_Pod_Heli_Transport_04_ammo_ghex_F | Taru Ammo Pod
//    Land_Pod_Heli_Transport_04_bench_ghex_F | Taru Bench Pod
//    Land_Pod_Heli_Transport_04_box_ghex_F | Taru Cargo Pod
//    Land_Pod_Heli_Transport_04_covered_ghex_F | Taru Transport Pod
//    Land_Pod_Heli_Transport_04_fuel_ghex_F | Taru Fuel Pod
//    Land_Pod_Heli_Transport_04_medevac_ghex_F | Taru Medical Pod
//    Land_Pod_Heli_Transport_04_repair_ghex_F | Taru Repair Pod
//    O_T_Truck_02_Ammo_F | Zamak Ammo
//    O_T_Truck_02_Box_F | Zamak Repair
//    O_T_Truck_02_fuel_F | Zamak Fuel
//    O_T_Truck_02_Medical_F | Zamak Medical
//    O_T_Truck_03_ammo_ghex_F | Typhoon Ammo
//    O_T_Truck_03_fuel_ghex_F | Typhoon Fuel
//    O_T_Truck_03_medical_ghex_F | Typhoon Medical
//    O_T_Truck_03_repair_ghex_F | Typhoon Repair
//
