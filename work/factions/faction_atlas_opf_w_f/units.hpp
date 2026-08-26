// Atlas_OPF_W_F - ghost_Belarus
// 91 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (4) --
//    Atlas_O_W_Heli_Attack_04_F | Mi-35 Krokodil
//    Atlas_O_W_Heli_Light_02_dynamicLoadout_F | Ka-60 Kasatka
//    Atlas_O_W_Heli_Light_02_unarmed_F | Ka-60 Kasatka (unarmed)
//    Atlas_O_W_Plane_CAS_02_dynamicLoadout_ghex_F | Yak-130
//
// -- Armored (6) --
//    Atlas_O_W_APC_Tracked_02_30mm_lxWS | BTR-T Okhotnik
//    Atlas_O_W_APC_Tracked_02_AA_F | ZSU-35 Tigris
//    Atlas_O_W_APC_Tracked_02_medical_F | BTR-K Medical
//    Atlas_O_W_APC_Wheeled_02_rcws_v2_ghex_F | 3-M Kazak
//    Atlas_O_W_APC_Wheeled_02_unarmed_lxWS | 3-M Kazak (Unarmed)
//    Atlas_O_W_MBT_02_cannon_ghex_F | T100 Black Eagle
//
// -- Autonomous (3) --
//    Atlas_O_W_UGV_01_F | UGV Uran
//    Atlas_O_W_UGV_01_medical_F | UGV Uran Medical
//    Atlas_O_W_UGV_01_rcws_F | UGV Uran RCWS
//
// -- Car (14) --
//    Atlas_O_W_LSV_02_armed_F | Takhion (Minigun)
//    Atlas_O_W_LSV_02_AT_F | Takhion (AT)
//    Atlas_O_W_LSV_02_unarmed_F | Takhion (Unarmed)
//    Atlas_O_W_MRAP_02_F | Galkin
//    Atlas_O_W_MRAP_02_gmg_F | Galkin GMG
//    Atlas_O_W_MRAP_02_hmg_F | Galkin HMG
//    Atlas_O_W_Quadbike_01_F | Quad Bike
//    Atlas_O_W_Truck_02_cargo_F | Zamak Cargo
//    Atlas_O_W_Truck_02_F | KamAZ Transport (covered)
//    Atlas_O_W_Truck_02_flatbed_F | Zamak Flatbed
//    Atlas_O_W_Truck_02_MRL_F | Zamak MRL
//    Atlas_O_W_Truck_02_transport_F | KamAZ Transport
//    Atlas_O_W_Truck_03_covered_ghex_F | Typhoon Transport (covered)
//    Atlas_O_W_Truck_03_transport_ghex_F | Typhoon Transport
//
// -- Men (40) --
//    Atlas_O_W_Crew_F | Crewman
//    Atlas_O_W_Engineer_F | Engineer
//    Atlas_O_W_Fighter_Pilot_F | Fighter Pilot
//    Atlas_O_W_Helicrew_F | Helicopter Crew
//    Atlas_O_W_Helipilot_F | Helicopter Pilot
//    Atlas_O_W_Medic_F | Combat Life Saver
//    Atlas_O_W_Officer_F | Officer
//    Atlas_O_W_RadioOperator_F | Radio Operator
//    Atlas_O_W_Recon_AR_F | Recon Autorifleman
//    Atlas_O_W_Recon_CQ_F | Recon Scout (Shotgun)
//    Atlas_O_W_Recon_exp_F | Recon Demo Specialist
//    Atlas_O_W_Recon_F | Recon Scout
//    Atlas_O_W_recon_GL_F | Recon Grenadier
//    Atlas_O_W_recon_JTAC_F | Recon JTAC
//    Atlas_O_W_Recon_LAT_F | Recon Scout (AT)
//    Atlas_O_W_Recon_M_F | Recon Marksman
//    Atlas_O_W_Recon_medic_F | Recon Paramedic
//    Atlas_O_W_Recon_TL_F | Recon Team Leader
//    Atlas_O_W_Soldier_A_F | Ammo Bearer
//    Atlas_O_W_Soldier_AA_F | Missile Specialist (AA)
//    Atlas_O_W_Soldier_AR_F | Autorifleman
//    Atlas_O_W_Soldier_AT_F | Missile Specialist (AT)
//    Atlas_O_W_Soldier_Exp_F | Explosive Specialist
//    Atlas_O_W_Soldier_F | Rifleman
//    Atlas_O_W_Soldier_GL_F | Grenadier
//    Atlas_O_W_Soldier_HAT_F | Rifleman (Heavy AT)
//    Atlas_O_W_Soldier_LAT_F | Rifleman (AT)
//    Atlas_O_W_Soldier_Lite_F | Rifleman (Light)
//    Atlas_O_W_soldier_M_F | Marksman
//    Atlas_O_W_soldier_mine_F | Mine Specialist
//    Atlas_O_W_Soldier_PG_F | Para Trooper
//    Atlas_O_W_Soldier_Repair_F | Repair Specialist
//    Atlas_O_W_Soldier_SL_F | Squad Leader
//    Atlas_O_W_Soldier_TL_F | Team Leader
//    Atlas_O_W_soldier_UAV_06_F | UAV Operator (AL-6)
//    Atlas_O_W_soldier_UAV_06_medical_F | UAV Operator (AL-6, Medical)
//    Atlas_O_W_Soldier_UAV_F | UAV Operator
//    Atlas_O_W_soldier_UGV_02_Demining_F | UGV Operator (ED-1D)
//    Atlas_O_W_Soldier_unarmed_F | Rifleman (Unarmed)
//    Atlas_O_W_Survivor_F | Survivor
//
// -- MenSupport (9) --
//    Atlas_O_W_Soldier_AAA_F | Asst. Missile Specialist (AA)
//    Atlas_O_W_Soldier_AAR_F | Asst. Autorifleman
//    Atlas_O_W_Soldier_AAT_F | Asst. Missile Specialist (AT)
//    Atlas_O_W_Soldier_AHAT_F | Asst. Heavy AT
//    Atlas_O_W_Support_AMG_F | Asst. Gunner (HMG/GMG)
//    Atlas_O_W_Support_AMort_F | Asst. Gunner (Mk6)
//    Atlas_O_W_Support_GMG_F | Gunner (GMG)
//    Atlas_O_W_Support_MG_F | Gunner (HMG)
//    Atlas_O_W_Support_Mort_F | Gunner (Mk6)
//
// -- Static (7) --
//    Atlas_O_W_GMG_01_F | XM307
//    Atlas_O_W_GMG_01_high_F | XM307 (High)
//    Atlas_O_W_HMG_01_F | XM312
//    Atlas_O_W_HMG_01_high_F | XM312 (High)
//    Atlas_O_W_Mortar_01_F | Mk6 Mortar
//    Atlas_O_W_Static_AA_F | Mini-Spike Launcher (AA)
//    Atlas_O_W_Static_AT_F | Mini-Spike Launcher (AT)
//
// -- Support (8) --
//    Atlas_O_W_Truck_02_Ammo_F | KamAZ Ammo
//    Atlas_O_W_Truck_02_box_F | KamAZ Repair
//    Atlas_O_W_Truck_02_fuel_F | KamAZ Fuel
//    Atlas_O_W_Truck_02_medical_F | KamAZ Medical
//    Atlas_O_W_Truck_03_ammo_ghex_F | Typhoon Ammo
//    Atlas_O_W_Truck_03_fuel_ghex_F | Typhoon Fuel
//    Atlas_O_W_Truck_03_medical_ghex_F | Typhoon Medical
//    Atlas_O_W_Truck_03_repair_ghex_F | Typhoon Repair
//
