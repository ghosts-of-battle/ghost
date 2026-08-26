// OPF_R_F - ghost_Russia
// 232 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (17) --
//    AddGis_O_R_Heli_EC_01A_military_F | Mi-33 Sova (Unarmed)
//    AddGis_O_R_Heli_EC_02_F | Mi-33 Sova
//    Aegis_O_R_Heli_Attack_04_F | Mi-35 Krokodil
//    O_R_Heli_Attack_02_dynamicLoadout_F | Mi-48 Kajman
//    O_R_Heli_Light_02_dynamicLoadout_F | Ka-60 Kasatka
//    O_R_Heli_Light_02_unarmed_F | Ka-60 Kasatka (unarmed)
//    O_R_Heli_Transport_04_ammo_F | Mi-290 Tuskar (Ammo)
//    O_R_Heli_Transport_04_bench_F | Mi-290 Tuskar (Bench)
//    O_R_Heli_Transport_04_box_F | Mi-290 Tuskar (Cargo)
//    O_R_Heli_Transport_04_covered_F | Mi-290 Tuskar (Transport)
//    O_R_Heli_Transport_04_F | Mi-290 Tuskar
//    O_R_Heli_Transport_04_fuel_F | Mi-290 Tuskar (Fuel)
//    O_R_Heli_Transport_04_medevac_F | Mi-290 Tuskar (Medical)
//    O_R_Heli_Transport_04_repair_F | Mi-290 Tuskar (Repair)
//    O_R_Plane_CAS_02_dynamicLoadout_F | Yak-130
//    O_R_Plane_Fighter_02_F | To-201 Shikra
//    O_R_Plane_Fighter_02_Stealth_F | To-201 Shikra (Stealth)
//
// -- Armored (10) --
//    Aegis_O_R_APC_Tracked_02_30mm_lxWS | BTR-T Okhotnik
//    Aegis_O_R_MBT_02_Railgun_F | T-100X Futura
//    O_R_APC_Tracked_02_AA_F | ZSU-35 Tigris
//    O_R_APC_Tracked_02_medical_F | BM-2T Stalker (Medical)
//    O_R_APC_Wheeled_04_cannon_F | BTR-100 Bogatyr
//    O_R_APC_Wheeled_04_cannon_v2_F | 2S90M Nosorog
//    O_R_MBT_02_arty_F | 2S9 Sochor
//    O_R_MBT_02_cannon_F | T100 Black Eagle
//    O_R_MBT_04_cannon_F | T-140 Angara
//    O_R_MBT_04_command_F | T-140K Angara
//
// -- Autonomous (11) --
//    Aegis_O_R_UAV_02_lxWS | Drofa AP-5
//    O_R_Radar_System_02_F | R-750 Cronus Radar
//    O_R_SAM_System_04_F | S-400
//    O_R_UAV_01_F | Shukhov AR-2
//    O_R_UAV_02_dynamicLoadout_F | Sokol 3T
//    O_R_UAV_06_F | Katun AL-6
//    O_R_UAV_06_medical_F | Katun AL-6 (Medical)
//    O_R_UGV_01_F | UGV Uran
//    O_R_UGV_01_medical_F | UGV Uran Medical
//    O_R_UGV_01_rcws_F | UGV Uran RCWS
//    O_R_UGV_02_Demining_F | Gremlin ED-1D
//
// -- Backpacks (18) --
//    Aegis_O_R_UAV_02_backpack_lxWS | UAV Bag (AP-5) [Russia]
//    O_R_AA_01_weapon_F | Static Titan Launcher (AA) [Russia]
//    O_R_AT_01_weapon_F | Static Titan Launcher (AT) [Russia]
//    O_R_GMG_01_A_Weapon_F | Dismantled Autonomous GMG [Russia]
//    O_R_GMG_01_high_Weapon_F | Dismantled Mk32 GMG (Raised) [Russia]
//    O_R_GMG_01_Weapon_F | Dismantled Mk32 GMG [Russia]
//    O_R_HMG_01_A_Weapon_F | Dismantled Autonomous MG [Russia]
//    O_R_HMG_01_high_Weapon_F | Dismantled Mk30 HMG (Raised) [Russia]
//    O_R_HMG_01_support_F | Folded Tripod [Russia]
//    O_R_HMG_01_support_high_F | Folded Tripod (Raised) [Russia]
//    O_R_HMG_01_Weapon_F | Dismantled Mk30 HMG [Russia]
//    O_R_Mortar_01_support_F | Folded Mk6 Mortar Bipod [Russia]
//    O_R_Mortar_01_Weapon_F | Folded Mk6 Mortar Tube [Russia]
//    O_R_Static_Designator_02_weapon_F | Remote Designator Bag [Russia]
//    O_R_UAV_01_backpack_F | UAV Bag (AR-2) [RU]
//    O_R_UAV_06_backpack_F | UAV Bag (AL-6) [Russia]
//    O_R_UAV_06_medical_backpack_F | UAV Bag (AL-6, Medical) [Russia]
//    O_R_UGV_02_Demining_backpack_F | UGV Bag (ED-1D) [Russia]
//
// -- Car (15) --
//    Aegis_O_R_Truck_02_aa_F | KamAZ (Zu-23-2)
//    O_R_LSV_02_armed_F | Takhion (Minigun)
//    O_R_LSV_02_AT_F | Takhion (AT)
//    O_R_LSV_02_unarmed_F | Takhion (Unarmed)
//    O_R_MRAP_02_F | Galkin
//    O_R_MRAP_02_gmg_F | Galkin GMG
//    O_R_MRAP_02_hmg_F | Galkin HMG
//    O_R_Quadbike_01_F | Quad Bike
//    O_R_Truck_02_cargo_F | KamAZ Cargo
//    O_R_Truck_02_F | KamAZ Transport (covered)
//    O_R_Truck_02_flatbed_F | KamAZ Flatbed
//    O_R_Truck_02_MRL_F | Zamak MRL
//    O_R_Truck_02_transport_F | KamAZ Transport
//    O_R_Truck_03_covered_F | Typhoon Transport (covered)
//    O_R_Truck_03_transport_F | Typhoon Transport
//
// -- Men (98) --
//    Addgis_O_R_VDV_engineer_F | Engineer
//    Addgis_O_R_VDV_medic_F | Combat Life Saver
//    Addgis_O_R_VDV_officer_F | Officer
//    Addgis_O_R_VDV_RadioOperator_F | Radio Operator
//    Addgis_O_R_VDV_Sharpshooter_F | Sharpshooter
//    Addgis_O_R_VDV_Soldier_A_F | Ammo Bearer
//    Addgis_O_R_VDV_soldier_AA_F | Missile Specialist (AA)
//    Addgis_O_R_VDV_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    Addgis_O_R_VDV_Soldier_AAR_F | Asst. Autorifleman
//    Addgis_O_R_VDV_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    Addgis_O_R_VDV_Soldier_AHAT_F | Asst. Heavy AT
//    Addgis_O_R_VDV_Soldier_AR_F | Autorifleman
//    Addgis_O_R_VDV_soldier_AT_F | Missile Specialist (AT)
//    Addgis_O_R_VDV_soldier_exp_F | Explosive Specialist
//    Addgis_O_R_VDV_Soldier_F | Rifleman
//    Addgis_O_R_VDV_Soldier_GL_F | Grenadier
//    Addgis_O_R_VDV_Soldier_HAT_F | Rifleman (Heavy AT)
//    Addgis_O_R_VDV_Soldier_LAT_F | Rifleman (AT)
//    Addgis_O_R_VDV_Soldier_lite_F | Rifleman (Light)
//    Addgis_O_R_VDV_soldier_M_F | Marksman
//    Addgis_O_R_VDV_soldier_mine_F | Mine Specialist
//    Addgis_O_R_VDV_Soldier_PG_F | Para Trooper
//    Addgis_O_R_VDV_soldier_repair_F | Repair Specialist
//    Addgis_O_R_VDV_Soldier_SL_F | Squad Leader
//    Addgis_O_R_VDV_Soldier_TL_F | Team Leader
//    Addgis_O_R_VDV_soldier_UAV_02_lxWS_F | UAV Operator (AP-5)
//    Addgis_O_R_VDV_soldier_UAV_06_F | UAV Operator (AL-6)
//    Addgis_O_R_VDV_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    Addgis_O_R_VDV_soldier_UAV_F | UAV Operator
//    Addgis_O_R_VDV_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    Addgis_O_R_VDV_support_AMG_F | Asst. Gunner (HMG/GMG)
//    Addgis_O_R_VDV_support_AMort_F | Asst. Gunner (Mk6)
//    Addgis_O_R_VDV_support_GMG_F | Gunner (GMG)
//    Addgis_O_R_VDV_support_MG_F | Gunner (HMG)
//    Addgis_O_R_VDV_support_Mort_F | Gunner (Mk6)
//    Aegis_O_R_BoatCrew_EF | Boat Crewman
//    Aegis_O_R_Conscript_AR_F | Autorifleman
//    Aegis_O_R_Conscript_AT_F | Rifleman (AT)
//    Aegis_O_R_Conscript_F | Rifleman
//    Aegis_O_R_Conscript_GL_F | Grenadier
//    Aegis_O_R_Conscript_M_F | Marksman
//    Aegis_O_R_Conscript_Medic_F | Combat Life Saver
//    Aegis_O_R_Conscript_Repair_F | Pioneer
//    Aegis_O_R_Conscript_SL_F | Squad Leader
//    Aegis_O_R_Conscript_TL_F | Team Leader
//    Aegis_O_R_Sharpshooter_F | Sharpshooter
//    O_R_crew_F | Crewman
//    O_R_engineer_F | Engineer
//    O_R_Fighter_Pilot_F | Fighter Pilot
//    O_R_helicrew_F | Helicopter Crew
//    O_R_helipilot_F | Helicopter Pilot
//    O_R_medic_F | Combat Life Saver
//    O_R_officer_F | Officer
//    O_R_Patrol_Soldier_A_F | Ammo Bearer
//    O_R_Patrol_Soldier_AR2_F | Autorifleman
//    O_R_Patrol_Soldier_AR_F | Autorifleman
//    O_R_Patrol_Soldier_Engineer_F | Engineer
//    O_R_Patrol_Soldier_GL_F | Grenadier
//    O_R_Patrol_Soldier_LAT_F | Rifleman (AT)
//    O_R_Patrol_Soldier_M2_F | Marksman
//    O_R_Patrol_Soldier_M_F | Sharpshooter
//    O_R_Patrol_Soldier_Medic | Combat Life Saver
//    O_R_Patrol_Soldier_TL_F | Team Leader
//    O_R_RadioOperator_F | Radio Operator
//    O_R_Soldier_A_F | Ammo Bearer
//    O_R_soldier_AA_F | Missile Specialist (AA)
//    O_R_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    O_R_Soldier_AAR_F | Asst. Autorifleman
//    O_R_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    O_R_Soldier_AHAT_F | Asst. Heavy AT
//    O_R_Soldier_AR_F | Autorifleman
//    O_R_soldier_AT_F | Missile Specialist (AT)
//    O_R_Soldier_CBRN_F | CBRN Specialist
//    O_R_Soldier_CQ_F | Rifleman (Shotgun)
//    O_R_soldier_exp_F | Explosive Specialist
//    O_R_Soldier_F | Rifleman
//    O_R_Soldier_GL_F | Grenadier
//    O_R_Soldier_HAT_F | Rifleman (Heavy AT)
//    O_R_Soldier_LAT_F | Rifleman (AT)
//    O_R_Soldier_lite_F | Rifleman (Light)
//    O_R_soldier_M_F | Marksman
//    O_R_soldier_mine_F | Mine Specialist
//    O_R_Soldier_PG_F | Para Trooper
//    O_R_soldier_repair_F | Repair Specialist
//    O_R_Soldier_SL_F | Squad Leader
//    O_R_Soldier_TL_F | Team Leader
//    O_R_soldier_UAV_02_lxWS_F | UAV Operator (AP-5)
//    O_R_soldier_UAV_06_F | UAV Operator (AL-6)
//    O_R_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    O_R_soldier_UAV_F | UAV Operator
//    O_R_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    O_R_Soldier_unarmed_F | Rifleman (Unarmed)
//    O_R_support_AMG_F | Asst. Gunner (HMG/GMG)
//    O_R_support_AMort_F | Asst. Gunner (Mk6)
//    O_R_support_GMG_F | Gunner (GMG)
//    O_R_support_MG_F | Gunner (HMG)
//    O_R_support_Mort_F | Gunner (Mk6)
//    O_R_Survivor_F | Survivor
//
// -- MenDiver (3) --
//    O_R_diver_exp_F | Diver Explosive Specialist
//    O_R_diver_F | Assault Diver
//    O_R_diver_TL_F | Diver Team Leader
//
// -- MenRecon (10) --
//    O_R_recon_AR_F | Recon Autorifleman
//    O_R_recon_CQ_F | Recon Scout (Shotgun)
//    O_R_recon_exp_F | Recon Demo Specialist
//    O_R_recon_F | Recon Scout
//    O_R_recon_GL_F | Recon Grenadier
//    O_R_recon_JTAC_F | Recon JTAC
//    O_R_recon_LAT_F | Recon Scout (AT)
//    O_R_recon_M_F | Recon Marksman
//    O_R_recon_medic_F | Recon Paramedic
//    O_R_recon_TL_F | Recon Team Leader
//
// -- MenSniper (4) --
//    O_R_ghillie_spotter_wdl_F | Spotter (Woodland)
//    O_R_ghillie_wdl_F | Sniper (Woodland)
//    O_R_sniper_F | Sniper
//    O_R_spotter_F | Spotter
//
// -- MenUrban (21) --
//    Aegis_O_R_engineerU_F | Engineer
//    Aegis_O_R_medicU_F | Combat Life Saver
//    Aegis_O_R_RadioOperatorU_F | Radio Operator
//    Aegis_O_R_SharpshooterU_F | Sharpshooter
//    Aegis_O_R_SoldierU_A_F | Ammo Bearer
//    Aegis_O_R_soldierU_AA_F | Missile Specialist (AA)
//    Aegis_O_R_SoldierU_AAA_F | Asst. Missile Specialist (AA)
//    Aegis_O_R_SoldierU_AAR_F | Asst. Autorifleman
//    Aegis_O_R_SoldierU_AHAT_F | Asst. Heavy AT
//    Aegis_O_R_SoldierU_AR_F | Autorifleman
//    Aegis_O_R_SoldierU_CQ_F | Rifleman (Shotgun)
//    Aegis_O_R_soldierU_exp_F | Explosive Specialist
//    Aegis_O_R_SoldierU_F | Rifleman
//    Aegis_O_R_SoldierU_GL_F | Grenadier
//    Aegis_O_R_SoldierU_HAT_F | Rifleman (Heavy AT)
//    Aegis_O_R_SoldierU_LAT_F | Rifleman (AT)
//    Aegis_O_R_SoldierU_Lite_F | Rifleman (Light)
//    Aegis_O_R_SoldierU_M_F | Marksman
//    Aegis_O_R_SoldierU_SL_F | Squad Leader
//    Aegis_O_R_SoldierU_TL_F | Team Leader
//    Aegis_O_R_SoldierU_unarmed_F | Rifleman (Unarmed)
//
// -- Ship (3) --
//    EF_O_CombatBoat_AT_OPF_R | Combat Boat (AT)
//    EF_O_CombatBoat_HMG_OPF_R | Combat Boat (HMG)
//    EF_O_CombatBoat_Unarmed_OPF_R | Combat Boat (Unarmed)
//
// -- Static (10) --
//    O_R_GMG_01_A_F | XM307A
//    O_R_GMG_01_F | XM307
//    O_R_GMG_01_high_F | XM307 (High)
//    O_R_HMG_01_A_F | XM312A
//    O_R_HMG_01_F | XM312
//    O_R_HMG_01_high_F | XM312 (High)
//    O_R_Mortar_01_F | Mk6 Mortar
//    O_R_Static_AA_F | Static Titan Launcher (AA)
//    O_R_Static_AT_F | Static Titan Launcher (AT)
//    O_R_Static_Designator_02_F | Remote Designator
//
// -- Structures_Military (3) --
//    CamoNet_East_big_F | Camouflage Vehicle Cover (Taiga)
//    CamoNet_East_F | Camouflage Net (Taiga)
//    CamoNet_East_open_F | Camouflage Net (Open, Taiga)
//
// -- Submarine (1) --
//    O_R_SDV_01_F | SDV
//
// -- Support (8) --
//    O_R_Truck_02_Ammo_F | KamAZ Ammo
//    O_R_Truck_02_box_F | KamAZ Repair
//    O_R_Truck_02_fuel_F | KamAZ Fuel
//    O_R_Truck_02_medical_F | KamAZ Medical
//    O_R_Truck_03_ammo_F | Typhoon Ammo
//    O_R_Truck_03_fuel_F | Typhoon Fuel
//    O_R_Truck_03_medical_F | Typhoon Medical
//    O_R_Truck_03_repair_F | Typhoon Repair
//
