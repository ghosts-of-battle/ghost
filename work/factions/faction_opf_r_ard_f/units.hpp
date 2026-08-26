// OPF_R_ard_F - ghost_Russia (Arid)
// 183 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (17) --
//    AddGis_O_R_ard_Heli_EC_01A_military_F | Mi-33 Sova (Unarmed)
//    AddGis_O_R_ard_Heli_EC_02_F | Mi-33 Sova
//    Aegis_O_R_Heli_Attack_04_ard_F | Mi-35 Krokodil
//    O_R_Heli_Attack_02_dynamicLoadout_ard_F | Mi-48 Kajman
//    O_R_Heli_Light_02_dynamicLoadout_ard_F | Ka-60 Kasatka
//    O_R_Heli_Light_02_unarmed_ard_F | Ka-60 Kasatka (unarmed)
//    O_R_Heli_Transport_04_ammo_ard_F | Mi-290 Tuskar (Ammo)
//    O_R_Heli_Transport_04_ard_F | Mi-290 Tuskar
//    O_R_Heli_Transport_04_bench_ard_F | Mi-290 Tuskar (Bench)
//    O_R_Heli_Transport_04_box_ard_F | Mi-290 Tuskar (Cargo)
//    O_R_Heli_Transport_04_covered_ard_F | Mi-290 Tuskar (Transport)
//    O_R_Heli_Transport_04_fuel_ard_F | Mi-290 Tuskar (Fuel)
//    O_R_Heli_Transport_04_medevac_ard_F | Mi-290 Tuskar (Medical)
//    O_R_Heli_Transport_04_repair_ard_F | Mi-290 Tuskar (Repair)
//    O_R_Plane_CAS_02_dynamicLoadout_ard_F | Yak-130
//    O_R_Plane_Fighter_02_ard_F | To-201 Shikra
//    O_R_Plane_Fighter_02_Stealth_ard_F | To-201 Shikra (Stealth)
//
// -- Armored (10) --
//    Aegis_O_R_APC_Tracked_02_30mm_ard_lxWS | BTR-T Okhotnik
//    Aegis_O_R_MBT_02_Railgun_ard_F | T-100X Futura
//    O_R_APC_Tracked_02_AA_ard_F | ZSU-35 Tigris
//    O_R_APC_Tracked_02_medical_ard_F | BM-2T Stalker (Medical)
//    O_R_APC_Wheeled_04_cannon_ard_F | BTR-100 Bogatyr
//    O_R_APC_Wheeled_04_cannon_v2_ard_F | 2S90M Nosorog
//    O_R_MBT_02_arty_ard_F | 2S9 Sochor
//    O_R_MBT_02_cannon_ard_F | T100 Black Eagle
//    O_R_MBT_04_cannon_ard_F | T-140 Angara
//    O_R_MBT_04_command_ard_F | T-140K Angara
//
// -- Autonomous (11) --
//    Aegis_O_R_UAV_02_ard_lxWS | Drofa AP-5
//    O_R_Radar_System_02_ard_F | R-750 Cronus Radar
//    O_R_SAM_System_04_ard_F | S-400
//    O_R_UAV_01_ard_F | Shukhov AR-2
//    O_R_UAV_02_dynamicLoadout_ard_F | Sokol 3T
//    O_R_UAV_06_ard_F | Katun AL-6
//    O_R_UAV_06_medical_ard_F | Katun AL-6 (Medical)
//    O_R_UGV_01_ard_F | UGV Uran
//    O_R_UGV_01_medical_ard_F | UGV Uran Medical
//    O_R_UGV_01_rcws_ard_F | UGV Uran RCWS
//    O_R_UGV_02_Demining_ard_F | Gremlin ED-1D
//
// -- Car (15) --
//    Aegis_O_R_Truck_02_aa_ard_F | KamAZ (Zu-23-2)
//    O_R_LSV_02_armed_ard_F | Takhion (Minigun)
//    O_R_LSV_02_AT_ard_F | Takhion (AT)
//    O_R_LSV_02_unarmed_ard_F | Takhion (Unarmed)
//    O_R_MRAP_02_ard_F | Galkin
//    O_R_MRAP_02_gmg_ard_F | Galkin GMG
//    O_R_MRAP_02_hmg_ard_F | Galkin HMG
//    O_R_Quadbike_01_ard_F | Quad Bike
//    O_R_Truck_02_ard_F | KamAZ Transport (covered)
//    O_R_Truck_02_cargo_ard_F | KamAZ Cargo
//    O_R_Truck_02_flatbed_ard_F | KamAZ Flatbed
//    O_R_Truck_02_MRL_ard_F | Zamak MRL
//    O_R_Truck_02_transport_ard_F | KamAZ Transport
//    O_R_Truck_03_covered_ard_F | Typhoon Transport (covered)
//    O_R_Truck_03_transport_ard_F | Typhoon Transport
//
// -- Men (87) --
//    Addgis_O_R_VDV_engineer_Ard_F | Engineer
//    Addgis_O_R_VDV_medic_Ard_F | Combat Life Saver
//    Addgis_O_R_VDV_officer_Ard_F | Officer
//    Addgis_O_R_VDV_RadioOperator_Ard_F | Radio Operator
//    Addgis_O_R_VDV_Sharpshooter_Ard_F | Sharpshooter
//    Addgis_O_R_VDV_Soldier_Ard_A_F | Ammo Bearer
//    Addgis_O_R_VDV_Soldier_Ard_AA_F | Missile Specialist (AA)
//    Addgis_O_R_VDV_Soldier_Ard_AAA_F | Asst. Missile Specialist (AA)
//    Addgis_O_R_VDV_Soldier_Ard_AAR_F | Asst. Autorifleman
//    Addgis_O_R_VDV_Soldier_Ard_AAT_F | Asst. Missile Specialist (AT)
//    Addgis_O_R_VDV_Soldier_Ard_AHAT_F | Asst. Heavy AT
//    Addgis_O_R_VDV_Soldier_Ard_AR_F | Autorifleman
//    Addgis_O_R_VDV_Soldier_Ard_AT_F | Missile Specialist (AT)
//    Addgis_O_R_VDV_Soldier_Ard_exp_F | Explosive Specialist
//    Addgis_O_R_VDV_Soldier_Ard_F | Rifleman
//    Addgis_O_R_VDV_Soldier_Ard_GL_F | Grenadier
//    Addgis_O_R_VDV_Soldier_Ard_HAT_F | Rifleman (Heavy AT)
//    Addgis_O_R_VDV_Soldier_Ard_LAT_F | Rifleman (AT)
//    Addgis_O_R_VDV_Soldier_Ard_lite_F | Rifleman (Light)
//    Addgis_O_R_VDV_Soldier_Ard_M_F | Marksman
//    Addgis_O_R_VDV_Soldier_Ard_mine_F | Mine Specialist
//    Addgis_O_R_VDV_Soldier_Ard_PG_F | Para Trooper
//    Addgis_O_R_VDV_Soldier_Ard_repair_F | Repair Specialist
//    Addgis_O_R_VDV_Soldier_Ard_SL_F | Squad Leader
//    Addgis_O_R_VDV_Soldier_Ard_TL_F | Team Leader
//    Addgis_O_R_VDV_Soldier_Ard_UAV_02_lxWS_F | UAV Operator (AP-5)
//    Addgis_O_R_VDV_Soldier_Ard_UAV_06_F | UAV Operator (AL-6)
//    Addgis_O_R_VDV_Soldier_Ard_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    Addgis_O_R_VDV_Soldier_Ard_UAV_F | UAV Operator
//    Addgis_O_R_VDV_Soldier_Ard_UGV_02_Demining_F | UGV Operator (ED-1D)
//    Addgis_O_R_VDV_support_Ard_AMG_F | Asst. Gunner (HMG/GMG)
//    Addgis_O_R_VDV_support_Ard_AMort_F | Asst. Gunner (Mk6)
//    Addgis_O_R_VDV_support_Ard_GMG_F | Gunner (GMG)
//    Addgis_O_R_VDV_support_Ard_MG_F | Gunner (HMG)
//    Addgis_O_R_VDV_support_Ard_Mort_F | Gunner (Mk6)
//    Aegis_O_R_Conscript_AR_ard_F | Autorifleman
//    Aegis_O_R_Conscript_ard_F | Rifleman
//    Aegis_O_R_Conscript_AT_ard_F | Rifleman (AT)
//    Aegis_O_R_Conscript_GL_ard_F | Grenadier
//    Aegis_O_R_Conscript_M_ard_F | Marksman
//    Aegis_O_R_Conscript_Medic_ard_F | Combat Life Saver
//    Aegis_O_R_Conscript_Repair_ard_F | Pioneer
//    Aegis_O_R_Conscript_SL_ard_F | Squad Leader
//    Aegis_O_R_Conscript_TL_ard_F | Team Leader
//    Aegis_O_R_Sharpshooter_ard_F | Sharpshooter
//    O_R_crew_ard_F | Crewman
//    O_R_engineer_ard_F | Engineer
//    O_R_Fighter_Pilot_ard_F | Fighter Pilot
//    O_R_helicrew_ard_F | Helicopter Crew
//    O_R_helipilot_ard_F | Helicopter Pilot
//    O_R_medic_ard_F | Combat Life Saver
//    O_R_officer_ard_F | Officer
//    O_R_RadioOperator_ard_F | Radio Operator
//    O_R_Soldier_A_ard_F | Ammo Bearer
//    O_R_soldier_AA_ard_F | Missile Specialist (AA)
//    O_R_Soldier_AAA_ard_F | Asst. Missile Specialist (AA)
//    O_R_Soldier_AAR_ard_F | Asst. Autorifleman
//    O_R_Soldier_AAT_ard_F | Asst. Missile Specialist (AT)
//    O_R_Soldier_AHAT_ard_F | Asst. Heavy AT
//    O_R_soldier_AR_ard_F | Autorifleman
//    O_R_Soldier_ard_F | Rifleman
//    O_R_soldier_AT_ard_F | Missile Specialist (AT)
//    O_R_Soldier_CBRN_ard_F | CBRN Specialist
//    O_R_Soldier_CQ_ard_F | Rifleman (Shotgun)
//    O_R_soldier_exp_ard_F | Explosive Specialist
//    O_R_Soldier_GL_ard_F | Grenadier
//    O_R_Soldier_HAT_ard_F | Rifleman (Heavy AT)
//    O_R_Soldier_LAT_ard_F | Rifleman (AT)
//    O_R_Soldier_lite_ard_F | Rifleman (Light)
//    O_R_soldier_M_ard_F | Marksman
//    O_R_soldier_mine_ard_F | Mine Specialist
//    O_R_Soldier_PG_ard_F | Para Trooper
//    O_R_soldier_repair_ard_F | Repair Specialist
//    O_R_Soldier_SL_ard_F | Squad Leader
//    O_R_Soldier_TL_ard_F | Team Leader
//    O_R_soldier_UAV_02_ard_lxWS_F | UAV Operator (AP-5)
//    O_R_soldier_UAV_06_ard_F | UAV Operator (AL-6)
//    O_R_soldier_UAV_06_medical_ard_F | UAV Operator (AL-6, Medical)
//    O_R_soldier_UAV_ard_F | UAV Operator
//    O_R_soldier_UGV_02_Demining_ard_F | UGV Operator (ED-1D)
//    O_R_Soldier_unarmed_ard_F | Rifleman (Unarmed)
//    O_R_support_AMG_ard_F | Asst. Gunner (HMG/GMG)
//    O_R_support_AMort_ard_F | Asst. Gunner (Mk6)
//    O_R_support_GMG_ard_F | Gunner (GMG)
//    O_R_support_MG_ard_F | Gunner (HMG)
//    O_R_support_Mort_ard_F | Gunner (Mk6)
//    O_R_Survivor_ard_F | Survivor
//
// -- MenDiver (3) --
//    O_R_diver_ard_F | Assault Diver
//    O_R_diver_exp_ard_F | Diver Explosive Specialist
//    O_R_diver_TL_ard_F | Diver Team Leader
//
// -- MenRecon (10) --
//    O_R_recon_AR_ard_F | Recon Autorifleman
//    O_R_recon_ard_F | Recon Scout
//    O_R_recon_CQ_ard_F | Recon Scout (Shotgun)
//    O_R_recon_exp_ard_F | Recon Demo Specialist
//    O_R_recon_GL_ard_F | Recon Grenadier
//    O_R_recon_JTAC_ard_F | Recon JTAC
//    O_R_recon_LAT_ard_F | Recon Scout (AT)
//    O_R_recon_M_ard_F | Recon Marksman
//    O_R_recon_medic_ard_F | Recon Paramedic
//    O_R_recon_TL_ard_F | Recon Team Leader
//
// -- MenSniper (8) --
//    O_R_ghillie_ard_F | Sniper (Arid)
//    O_R_ghillie_lsh_F | Sniper (Lush)
//    O_R_ghillie_sard_F | Sniper (Semi-Arid)
//    O_R_ghillie_spotter_ard_F | Spotter (Arid)
//    O_R_ghillie_spotter_lsh_F | Spotter (Lush)
//    O_R_ghillie_spotter_sard_F | Spotter (Semi-Arid)
//    O_R_sniper_ard_F | Sniper
//    O_R_spotter_ard_F | Spotter
//
// -- Ship (3) --
//    O_R_Boat_Armed_01_hmg_ard_F | Speedboat HMG
//    O_R_Boat_Transport_01_ard_F | Assault Boat
//    O_R_Lifeboat_ard_F | Rescue Boat
//
// -- Static (10) --
//    O_R_GMG_01_A_ard_F | XM307A
//    O_R_GMG_01_ard_F | XM307
//    O_R_GMG_01_high_ard_F | XM307 (High)
//    O_R_HMG_01_A_ard_F | XM312A
//    O_R_HMG_01_ard_F | XM312
//    O_R_HMG_01_high_ard_F | XM312 (High)
//    O_R_Mortar_01_ard_F | Mk6 Mortar
//    O_R_Static_AA_ard_F | Static Titan Launcher (AA)
//    O_R_Static_AT_ard_F | Static Titan Launcher (AT)
//    O_R_Static_Designator_02_ard_F | Remote Designator
//
// -- Submarine (1) --
//    O_R_SDV_01_ard_F | SDV
//
// -- Support (8) --
//    O_R_Truck_02_Ammo_ard_F | KamAZ Ammo
//    O_R_Truck_02_box_ard_F | KamAZ Repair
//    O_R_Truck_02_fuel_ard_F | KamAZ Fuel
//    O_R_Truck_02_medical_ard_F | KamAZ Medical
//    O_R_Truck_03_ammo_ard_F | Typhoon Ammo
//    O_R_Truck_03_fuel_ard_F | Typhoon Fuel
//    O_R_Truck_03_medical_ard_F | Typhoon Medical
//    O_R_Truck_03_repair_ard_F | Typhoon Repair
//
