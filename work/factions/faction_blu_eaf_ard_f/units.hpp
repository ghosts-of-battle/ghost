// BLU_EAF_ard_F - ghost_LDF (Arid)
// 91 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier 2 / strength 3 / shape balanced / flavor west
//   LDF arid
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- Air (8) --
//    Aegis_B_E_Heli_EC_01A_military_RF_ard | H215 Super Puma (Unarmed)
//    Aegis_B_E_Heli_Light_03_dynamicLoadout_ard_F | AW159 Wildcat
//    Aegis_B_E_Heli_Light_03_dynamicloadout_ard_FR | AW159 Wildcat ASW
//    Aegis_B_E_Heli_Light_03_unarmed_ard_F | AW159 Wildcat (unarmed)
//    Aegis_B_E_Heli_Light_03_unarmed_ard_RF | AW159 Wildcat ASW (Unarmed)
//    Aegis_B_E_Plane_Fighter_04_ard_F | A-149 Orzeł
//    Aegis_B_E_UAV_07_ard_F | MQ-9A Kruk
//    Aegis_B_EAF_Heli_Attack_04_ard_F | Mi-35 Sokół
//
// -- Armored (6) --
//    Aegis_B_E_APC_tracked_03_cannon_v2_ard_F | FV-720 Odyniec
//    Aegis_B_E_APC_Wheeled_01_atgm_v2_ard | KTO Borsuk (ATGM)
//    Aegis_B_E_APC_Wheeled_01_cannon_v2_ard_F | KTO Borsuk
//    Aegis_B_E_APC_Wheeled_01_medical_ard_F | KTO Borsuk (Medical)
//    Aegis_B_E_APC_Wheeled_01_mortar_ard_lxWS | KTO Borsuk (Mortar)
//    Aegis_B_E_MBT_03_cannon_ard_F | MBT-52 Niedźwiedź
//
// -- Autonomous (4) --
//    Aegis_B_E_TwinMortar_ard_RF | AMOS Container
//    Aegis_B_E_UGV_01_ard_F | UGV Stomper
//    Aegis_B_E_UGV_01_medical_ard_F | UGV Stomper Medical
//    Aegis_B_E_UGV_01_RCWS_ard_F | UGV Stomper RCWS
//
// -- Car (18) --
//    Aegis_B_E_Offroad_01_ard_F | Offroad
//    Aegis_B_E_Offroad_01_armed_ard_F | Offroad (HMG)
//    Aegis_B_E_Offroad_01_comms_ard_F | Offroad (Comms)
//    Aegis_B_E_Offroad_01_covered_ard_F | Offroad (Covered)
//    Aegis_B_E_Pickup_AAT_ard_RF | Ram 1500 (AA)
//    Aegis_B_E_Pickup_ard_RF | Ram 1500
//    Aegis_B_E_Pickup_AT_ard_RF | Pickup (AT)
//    Aegis_B_E_Pickup_Comms_ard_RF | Ram 1500 (Comms)
//    Aegis_B_E_Pickup_Covered_ard_RF | Ram 1500 (Covered)
//    Aegis_B_E_Pickup_HMG_ard_RF | Ram 1500 (HMG)
//    Aegis_B_E_Truck_02_ard_F | KamAZ Transport (covered)
//    Aegis_B_E_Truck_02_cargo_ard_F | KamAZ Cargo
//    Aegis_B_E_Truck_02_flatbed_ard_F | KamAZ Flatbed
//    Aegis_B_E_Truck_02_MRL_ard_F | KamAZ MRL
//    Aegis_B_E_Truck_02_transport_ard_F | KamAZ Transport
//    Aegis_B_E_Van_02_medevac_ard_F | Van (Ambulance)
//    Aegis_B_E_Van_02_transport_ard_F | Van Transport
//    Aegis_B_E_Van_02_Vehicle_ard_F | Van (Cargo)
//
// -- Men (41) --
//    Aegis_B_E_Crew_ard_F | Crewman
//    Aegis_B_E_Engineer_ard_F | Engineer
//    Aegis_B_E_Fighter_Pilot_ard_F | Fighter Pilot
//    Aegis_B_E_Helicrew_ard_F | Helicopter Crew
//    Aegis_B_E_Helipilot_ard_F | Helicopter Pilot
//    Aegis_B_E_Medic_ard_F | Combat Life Saver
//    Aegis_B_E_Officer_ard_F | Officer
//    Aegis_B_E_Pilot_ard_F | Pilot
//    Aegis_B_E_RadioOperator_ard_F | Radio Operator
//    Aegis_B_E_Soldier_A_ard_F | Ammo Bearer
//    Aegis_B_E_Soldier_AA_ard_F | Missile Specialist (AA)
//    Aegis_B_E_Soldier_AAA_ard_F | Asst. Missile Specialist (AA)
//    Aegis_B_E_Soldier_AAR_ard_F | Asst. Autorifleman
//    Aegis_B_E_Soldier_AAT_ard_F | Asst. Missile Specialist (AT)
//    Aegis_B_E_Soldier_AR_ard_F | Autorifleman
//    Aegis_B_E_Soldier_ard_F | Rifleman
//    Aegis_B_E_Soldier_AT_ard_F | Missile Specialist (AT)
//    Aegis_B_E_Soldier_CQ_ard_F | Rifleman (Shotgun)
//    Aegis_B_E_Soldier_Exp_ard_F | Explosive Specialist
//    Aegis_B_E_Soldier_GL_ard_F | Grenadier
//    Aegis_B_E_Soldier_LAT2_ard_F | Rifleman (Light AT)
//    Aegis_B_E_Soldier_LAT_ard_F | Rifleman (AT)
//    Aegis_B_E_Soldier_lite_ard_F | Rifleman (Light)
//    Aegis_B_E_Soldier_M_ard_F | Marksman
//    Aegis_B_E_Soldier_Mine_ard_F | Mine Specialist
//    Aegis_B_E_Soldier_Repair_ard_F | Repair Specialist
//    Aegis_B_E_Soldier_SL_ard_F | Squad Leader
//    Aegis_B_E_Soldier_TL_ard_F | Team Leader
//    Aegis_B_E_Soldier_UAV_02_lxWS_ard_F | UAV Operator (AP-5)
//    Aegis_B_E_Soldier_UAV_06_ard_F | UAV Operator (AL-6)
//    Aegis_B_E_Soldier_UAV_06_medical_ard_F | UAV Operator (AL-6, Medical)
//    Aegis_B_E_Soldier_UAV_ard_F | UAV Operator
//    Aegis_B_E_Soldier_UGV_02_Demining_ard_F | UGV Operator (ED-1D)
//    Aegis_B_E_Soldier_UGV_02_Science_ard_F | UGV Operator (ED-1E)
//    Aegis_B_E_Soldier_unarmed_ard_F | Rifleman (Unarmed)
//    Aegis_B_E_Support_AMG_ard_F | Asst. Gunner (HMG/GMG)
//    Aegis_B_E_Support_AMort_ard_F | Asst. Gunner (Mk6)
//    Aegis_B_E_Support_CMort_ard_RF | Gunner (Light Mortar)
//    Aegis_B_E_Support_GMG_ard_F | Gunner (GMG)
//    Aegis_B_E_Support_MG_ard_F | Gunner (HMG)
//    Aegis_B_E_Support_Mort_ard_F | Gunner (Mk6)
//
// -- MenRecon (9) --
//    Aegis_B_E_Recon_AR_ard_F | Recon Autorifleman
//    Aegis_B_E_Recon_ard_F | Recon Scout
//    Aegis_B_E_Recon_exp_ard_F | Recon Demo Specialist
//    Aegis_B_E_Recon_GL_ard_F | Recon Grenadier
//    Aegis_B_E_Recon_JTAC_ard_F | Recon JTAC
//    Aegis_B_E_Recon_LAT_ard_F | Recon Scout (AT)
//    Aegis_B_E_Recon_M_ard_F | Recon Marksman
//    Aegis_B_E_Recon_Medic_ard_F | Recon Paramedic
//    Aegis_B_E_Recon_TL_ard_F | Recon Team Leader
//
// -- Static (1) --
//    Aegis_B_E_CommandoMortar_ard_RF | RSG60
//
// -- Support (4) --
//    Aegis_B_E_Truck_02_ammo_ard_F | KamAZ Ammo
//    Aegis_B_E_Truck_02_box_ard_F | KamAZ Repair
//    Aegis_B_E_Truck_02_fuel_ard_F | KamAZ Fuel
//    Aegis_B_E_Truck_02_medical_ard_F | KamAZ Medical
//
