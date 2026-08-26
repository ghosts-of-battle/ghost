// Default - ghost_Other
// 8968 unit(s), read from a live ORBAT dump.
//
// TO BUILD, against docs/faction_builder_handoff.md:
//   tier None / strength None / shape None / flavor None
//   UNASSIGNED - needs a tier call
//
// Nothing is overridden yet - this addon renames the faction and does not
// touch a single unit. The roster below is what there is to work with.

// -- ACE_Logistics_Items (3) --
//    ACE_SandbagObject | Sandbag
//    ACE_Track | Spare Track
//    ACE_Wheel | Spare Wheel
//
// -- Ammo (1212) --
//    ACE_Box_82mm_Mo_Combo | [ACE] 82mm Default Loadout Box
//    ACE_Box_82mm_Mo_HE | [ACE] 82mm HE Rounds Box
//    ACE_Box_82mm_Mo_Illum | [ACE] 82mm Illumination Rounds Box
//    ACE_Box_82mm_Mo_Smoke | [ACE] 82mm Smoke Rounds Box
//    ACE_Box_Ammo | [ACE] Ammo Supply Crate
//    ACE_Box_Chemlights | [ACE] Chemlights
//    ACE_Box_Misc | [ACE] Miscellaneous Items
//    ACE_fastropingSupplyCrate | [ACE] Ropes Supply crate
//    ACE_medicalSupplyCrate | [ACE] Medical Supply Crate (Basic)
//    ACE_medicalSupplyCrate_advanced | [ACE] Medical Supply Crate (Advanced)
//    ACRE_RadioSupplyCrate | [ACRE] Radio Supply Crate
//    ALiVE_Humanitarian_Crates | ALiVE Humanitarian Crate
//    Atlas_B_A_supplyCrate_F | Supply Box [ADF]
//    Atlas_B_G_supplyCrate_F | Supply Box [NATO German]
//    Atlas_B_M_supplyCrate_F | Supply Box [Marar]
//    Atlas_I_I_supplyCrate_F | Supply Box [IDF]
//    Atlas_I_UNO_supplyCrate_F | Supply Box [UNO Sahrani]
//    Atlas_I_UNO_wdl_supplyCrate_F | Supply Box [UNO Chernarus]
//    Atlas_O_T_supplyCrate_F | Supply Box [Takistan]
//    Atlas_O_W_supplyCrate_F | Supply Box [CSAT Woodland]
//    B_A_CargoNet_01_ammo_F | Cargo Net [BAF]
//    B_A_CargoNet_01_ammo_tropic_F | Cargo Net [NATO Pacific British]
//    B_A_CargoNet_01_ammo_wdl_F | Cargo Net [NATO Woodland British]
//    B_A_supplyCrate_F | Supply Box [BAF]
//    B_A_supplyCrate_tropic_F | Supply Box [NATO Pacific British]
//    B_A_supplyCrate_wdl_F | Supply Box [NATO Woodland British]
//    B_CargoNet_01_ammo_F | Cargo Net [NATO]
//    B_supplyCrate_F | Supply Box [NATO]
//    B_T_CargoNet_01_ammo_F | Cargo Net [NATO Pacific]
//    B_T_supplyCrate_F | Supply Box [NATO Pacific]
//    B_W_CargoNet_01_ammo_F | Cargo Net [NATO Woodland]
//    B_W_supplyCrate_F | Supply Box [NATO Woodland]
//    Box_A_East_Ammo_F | Basic Ammo [CSAT African]
//    Box_A_East_Wps_F | Basic Weapons [CSAT African]
//    Box_A_East_WpsLaunch_F | Launchers [CSAT African]
//    Box_A_NATO_Ammo_F | Basic Ammo [BAF]
//    Box_A_NATO_Ammo_tropic_F | Basic Ammo [NATO Pacific British]
//    Box_A_NATO_Ammo_wdl_F | Basic Ammo [NATO Woodland British]
//    Box_A_NATO_Equip_F | Equipment Box [BAF]
//    Box_A_NATO_Equip_tropic_F | Equipment Box [NATO Pacific British]
//    Box_A_NATO_Equip_wdl_F | Equipment Box [NATO Woodland British]
//    Box_A_NATO_Uniforms_F | Uniforms Box [BAF]
//    Box_A_NATO_Uniforms_tropic_F | Uniforms Box [NATO Pacific British]
//    Box_A_NATO_Uniforms_wdl_F | Uniforms Box [NATO Woodland British]
//    Box_A_NATO_Wps_F | Basic Weapons [BAF]
//    Box_A_NATO_Wps_tropic_F | Basic Weapons [NATO Pacific British]
//    Box_A_NATO_Wps_wdl_F | Basic Weapons [NATO Woodland British]
//    Box_A_NATO_WpsSpecial_F | Special Weapons [BAF]
//    Box_A_NATO_WpsSpecial_tropic_F | Special Weapons [NATO Pacific British]
//    Box_A_NATO_WpsSpecial_wdl_F | Special Weapons [NATO Woodland British]
//    Box_AAF_Equip_F | Equipment Box [AAF]
//    Box_AAF_Uniforms_F | Uniforms Box [AAF]
//    Box_ADF_Ammo_F | Basic Ammo [ADF]
//    Box_ADF_Wps_F | Basic Weapons [ADF]
//    Box_ADF_WpsLaunch_F | Launchers [ADF]
//    Box_Cargo_Blue_RF | Cargo Box (Blue)
//    Box_Cargo_Green_RF | Cargo Box (Military Green)
//    Box_Cargo_Grey_RF | Cargo Box (Grey)
//    Box_Cargo_IDAP_RF | Cargo Box (IDAP)
//    Box_Cargo_LightGreen_RF | Cargo Box (Light Green)
//    Box_Cargo_Medical_RF | Cargo Box (Medical)
//    Box_Cargo_Orange_RF | Cargo Box (Orange)
//    Box_Cargo_Red_RF | Cargo Box (Red)
//    Box_Cargo_Sand_RF | Cargo Box (Sand)
//    Box_Cargo_Science_RF | Cargo Box (Science)
//    Box_Cargo_VR_RF | Cargo Box (VR)
//    Box_Cargo_White_RF | Cargo Box (White)
//    Box_Cargo_Yellow_RF | Cargo Box (Yellow)
//    Box_ChDKZ_Ammo_F | Basic Ammo [Separatists]
//    Box_ChDKZ_Wps_F | Basic Weapons [Separatists]
//    Box_ChDKZ_WpsLaunch_F | Launchers [Separatists]
//    Box_CSAT_Equip_F | Equipment Box [CSAT]
//    Box_CSAT_Uniforms_F | Uniforms Box [CSAT]
//    Box_EAF_Ammo_F | Basic Ammo [LDF]
//    Box_EAF_AmmoOrd_F | Explosives [LDF]
//    Box_EAF_AmmoVeh_F | Vehicle Ammo [LDF]
//    Box_EAF_Equip_F | Equipment Box [LDF]
//    Box_EAF_Grenades_F | Grenades [LDF]
//    Box_EAF_Support_F | Support [LDF]
//    Box_EAF_Uniforms_F | Uniforms Box [LDF]
//    Box_EAF_Wps_F | Basic Weapons [LDF]
//    Box_EAF_WpsLaunch_F | Launchers [LDF]
//    Box_EAF_WpsSpecial_F | Special Weapons [LDF]
//    Box_East_Ammo_F | Basic Ammo [CSAT]
//    Box_East_AmmoOrd_F | Explosives [CSAT]
//    Box_East_AmmoVeh_F | Vehicle Ammo [CSAT]
//    Box_East_Grenades_F | Grenades [CSAT]
//    Box_East_Support_F | Support [CSAT]
//    Box_East_Wps_F | Basic Weapons [CSAT]
//    Box_East_WpsLaunch_F | Launchers [CSAT]
//    Box_East_WpsSpecial_F | Special Weapons [CSAT]
//    Box_FIA_Ammo_F | FIA Ammo Cache
//    Box_FIA_Support_F | FIA Equipment Cache
//    Box_FIA_Wps_F | FIA Weapon Cache
//    Box_GEN_Equip_F | Supply Box [Gendarmerie]
//    Box_IDAP_AmmoOrd_F | Explosives [IDAP]
//    Box_IDAP_Equip_F | Equipment Box [IDAP]
//    Box_IDAP_Uniforms_F | Uniforms Box [IDAP]
//    Box_IED_Exp_F | Explosives (IED)
//    Box_Import_Accessories_RF | Import Accessories
//    Box_Import_Ammo_RF | Import Ammo
//    Box_Import_Wps_RF | Import Weapons
//    Box_IND_Ammo_F | Basic Ammo [AAF]
//    Box_IND_AmmoOrd_F | Explosives [AAF]
//    Box_IND_AmmoVeh_F | Vehicle Ammo [AAF]
//    Box_IND_Grenades_F | Grenades [AAF]
//    Box_IND_Support_F | Support [AAF]
//    Box_IND_Wps_F | Basic Weapons [AAF]
//    Box_IND_WpsLaunch_F | Launchers [AAF]
//    Box_IND_WpsSpecial_F | Special Weapons [AAF]
//    Box_ION_Equip_F | Supply Box [ION]
//    Box_Marar_Ammo_F | Basic Ammo [Marar]
//    Box_Marar_Wps_F | Basic Weapons [Marar]
//    Box_Marar_WpsLaunch_F | Launchers [Marar]
//    Box_NATO_Ammo_F | Basic Ammo [NATO]
//    Box_NATO_AmmoOrd_F | Explosives [NATO]
//    Box_NATO_AmmoVeh_F | Vehicle Ammo [NATO]
//    Box_NATO_Equip_F | Equipment Box [NATO]
//    Box_NATO_Grenades_F | Grenades [NATO]
//    Box_NATO_Support_F | Support [NATO]
//    Box_NATO_Uniforms_F | Uniforms Box [NATO]
//    Box_NATO_Wps_F | Basic Weapons [NATO]
//    Box_NATO_WpsLaunch_F | Launchers [NATO]
//    Box_NATO_WpsSpecial_F | Special Weapons [NATO]
//    Box_Para_Ammo_F | Basic Ammo [Paramilitary]
//    Box_Para_Wps_F | Basic Weapons [Paramilitary]
//    Box_Para_WpsLaunch_F | Launchers [Paramilitary]
//    Box_POLICE_Equip_F | Supply Box [Police]
//    Box_RUS_Ammo_F | Basic Ammo [Russia]
//    Box_RUS_AmmoOrd_F | Explosives [Russia]
//    Box_RUS_AmmoVeh_F | Vehicle Ammo [Russia]
//    Box_RUS_Equip_arid_F | Equipment Box [Russia Arid]
//    Box_RUS_Equip_F | Equipment Box [Russia]
//    Box_RUS_Grenades_F | Grenades [Russia]
//    Box_RUS_Support_arid_F | Support [Russia Arid]
//    Box_RUS_Support_F | Support [Russia]
//    Box_RUS_Uniforms_arid_F | Uniforms Box [Russia Arid]
//    Box_RUS_Uniforms_F | Uniforms Box [Russia]
//    Box_RUS_Wps_F | Basic Weapons [Russia]
//    Box_RUS_WpsLaunch_F | Launchers [Russia]
//    Box_RUS_WpsSpecial_arid_F | Special Weapons [Russia Arid]
//    Box_RUS_WpsSpecial_F | Special Weapons [Russia]
//    Box_Syndicate_Ammo_F | Basic Ammo [Syndikat]
//    Box_Syndicate_Wps_F | Basic Weapons [Syndikat]
//    Box_Syndicate_WpsLaunch_F | Launchers [Syndikat]
//    Box_T_CSAT_Equip_F | Equipment Box [CSAT Pacific]
//    Box_T_CSAT_Uniforms_F | Uniforms Box [CSAT Pacific]
//    Box_T_East_Ammo_F | Basic Ammo [CSAT Pacific]
//    Box_T_East_AmmoOrd_F | Explosives [CSAT Pacific]
//    Box_T_East_AmmoVeh_F | Vehicle Ammo [CSAT Pacific]
//    Box_T_East_Grenades_F | Grenades [CSAT Pacific]
//    Box_T_East_Support_F | Support [CSAT Pacific]
//    Box_T_East_Wps_F | Basic Weapons [CSAT Pacific]
//    Box_T_East_WpsLaunch_F | Launchers [CSAT Pacific]
//    Box_T_East_WpsSpecial_F | Special Weapons [CSAT Pacific]
//    Box_T_NATO_Ammo_F | Basic Ammo [NATO Pacific]
//    Box_T_NATO_AmmoOrd_F | Explosives [NATO Pacific]
//    Box_T_NATO_AmmoVeh_F | Vehicle Ammo [NATO Pacific]
//    Box_T_NATO_Equip_F | Equipment Box [NATO Pacific]
//    Box_T_NATO_Grenades_F | Grenades [NATO Pacific]
//    Box_T_NATO_Support_F | Support [NATO Pacific]
//    Box_T_NATO_Uniforms_F | Uniforms Box [NATO Pacific]
//    Box_T_NATO_Wps_F | Basic Weapons [NATO Pacific]
//    Box_T_NATO_WpsLaunch_F | Launchers [NATO Pacific]
//    Box_T_NATO_WpsSpecial_F | Special Weapons [NATO Pacific]
//    Box_Tanoan_Ammo_F | Basic Ammo [HIMF]
//    Box_Tanoan_Wps_F | Basic Weapons [HIMF]
//    Box_Tanoan_WpsLaunch_F | Launchers [HIMF]
//    Box_TKA_Ammo_F | Basic Ammo [Takistan]
//    Box_TKA_Wps_F | Basic Weapons [Takistan]
//    Box_TKA_WpsLaunch_F | Launchers [Takistan]
//    Box_TKM_Ammo_F | Basic Ammo [Insurgent]
//    Box_TKM_Wps_F | Basic Weapons [Insurgent]
//    Box_TKM_WpsLaunch_F | Launchers [Insurgent]
//    Box_W_NATO_Ammo_F | Basic Ammo [NATO Woodland]
//    Box_W_NATO_Equip_F | Equipment Box [NATO Woodland]
//    Box_W_NATO_Support_F | Support [NATO Woodland]
//    Box_W_NATO_Uniforms_F | Uniforms Box [NATO Woodland]
//    Box_W_NATO_Wps_F | Basic Weapons [NATO Woodland]
//    Box_W_NATO_WpsLaunch_F | Launchers [NATO Woodland]
//    Box_W_NATO_WpsSpecial_F | Special Weapons [NATO Woodland]
//    C_IDAP_supplyCrate_F | Supply Box [IDAP]
//    C_supplyCrate_F | Supply Box [CTRG]
//    C_T_supplyCrate_F | Supply Box [CTRG Pacific]
//    EF_B_supplyCrate_MJTF | Supply Box [MJTF]
//    H_supplyCrate_F | Supply Box [HIMF]
//    I_CargoNet_01_ammo_F | Cargo Net [AAF]
//    I_E_CargoNet_01_ammo_F | Cargo Net [LDF]
//    I_EAF_supplyCrate_F | Supply Box [LDF]
//    I_supplyCrate_F | Supply Box [AAF]
//    IG_supplyCrate_F | Supply Box [FIA]
//    ION_Box_Wps_lxWS | ION Weapon Cache
//    kedr_box | Elka AntiUAV box Kinetic
//    kedr_box_char | Elka AntiUAV box(Proximity)
//    L_supplyCrate_F | Supply Box [Legionnaires]
//    Land_RepairDepot_01_civ_F | Repair depot (Civilian)
//    Land_RepairDepot_01_green_F | Repair depot (Green)
//    Land_RepairDepot_01_tan_F | Repair depot (Tan)
//    MRL_Magazine_transport_RF | MRL Magazine (Transport)
//    O_A_supplyCrate_F | Supply Box [CSAT African]
//    O_CargoNet_01_ammo_F | Cargo Net [CSAT]
//    O_R_CargoNet_01_ammo_arid_F | Cargo Net [Russia Arid]
//    O_R_CargoNet_01_ammo_F | Cargo Net [Russia]
//    O_R_supplyCrate_F | Supply Box [Russia]
//    O_supplyCrate_F | Supply Box [CSAT]
//    O_T_CargoNet_01_ammo_F | Cargo Net [CSAT Pacific]
//    O_T_supplyCrate_F | Supply Box [CSAT Pacific]
//    Opf_Box_Partisan_Ammo_F | Basic Ammo [Partisans]
//    Opf_Box_Partisan_Wps_F | Basic Weapons [Partisans]
//    Opf_Box_Partisan_WpsLaunch_F | Launchers [Partisans]
//    orlan_reloadBox | Orlan Box
//    SFIA_Box_Ammo_lxWS | SFIA Ammo Cache
//    SFIA_Box_Support_lxWS | SFIA Equipment Cache
//    SFIA_Box_Wps_lxWS | SFIA Weapon Cache
//    V_supplyCrate_F | Supply Box [Viper]
//    V_T_supplyCrate_F | Supply Box [Viper Pacific]
//    VirtualReammoBox_camonet_F | Ammo Cache (Empty)
//    VirtualReammoBox_F | Vehicle Ammo (Empty, Virtual)
//    VirtualReammoBox_small_F | Basic Ammo (Empty, Virtual)
//    Weapon_JCA_arifle_HK433_black_F | HK433 5.56 mm (Black)
//    Weapon_JCA_arifle_HK433_black_IHO_F | HK433 5.56 mm (Black, IHO)
//    Weapon_JCA_arifle_HK433_black_IHO_flashlight_F | HK433 5.56 mm (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_HK433_black_IHO_flashlight_snds_F | HK433 5.56 mm (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_black_IHO_laserModule_F | HK433 5.56 mm (Black, IHO, Laser)
//    Weapon_JCA_arifle_HK433_black_IHO_laserModule_snds_F | HK433 5.56 mm (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_black_IHO_snds_F | HK433 5.56 mm (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_HK433_black_MRCS_F | HK433 5.56 mm (Black, MRCS)
//    Weapon_JCA_arifle_HK433_black_MRCS_flashlight_F | HK433 5.56 mm (Black, MRCS, Flashlight)
//    Weapon_JCA_arifle_HK433_black_MRCS_flashlight_snds_F | HK433 5.56 mm (Black, MRCS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_black_MRCS_laserModule_F | HK433 5.56 mm (Black, MRCS, Laser)
//    Weapon_JCA_arifle_HK433_black_MRCS_laserModule_snds_F | HK433 5.56 mm (Black, MRCS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_black_MRCS_snds_F | HK433 5.56 mm (Black, MRCS, Suppressor)
//    Weapon_JCA_arifle_HK433_olive_F | HK433 5.56 mm (Olive)
//    Weapon_JCA_arifle_HK433_olive_IHO_F | HK433 5.56 mm (Olive, IHO)
//    Weapon_JCA_arifle_HK433_olive_IHO_flashlight_F | HK433 5.56 mm (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_HK433_olive_IHO_flashlight_snds_F | HK433 5.56 mm (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_olive_IHO_laserModule_F | HK433 5.56 mm (Olive, IHO, Laser)
//    Weapon_JCA_arifle_HK433_olive_IHO_laserModule_snds_F | HK433 5.56 mm (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_olive_IHO_snds_F | HK433 5.56 mm (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_HK433_olive_MRCS_F | HK433 5.56 mm (Olive, MRCS)
//    Weapon_JCA_arifle_HK433_olive_MRCS_flashlight_F | HK433 5.56 mm (Olive, MRCS, Flashlight)
//    Weapon_JCA_arifle_HK433_olive_MRCS_flashlight_snds_F | HK433 5.56 mm (Olive, MRCS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_olive_MRCS_laserModule_F | HK433 5.56 mm (Olive, MRCS, Laser)
//    Weapon_JCA_arifle_HK433_olive_MRCS_laserModule_snds_F | HK433 5.56 mm (Olive, MRCS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_olive_MRCS_snds_F | HK433 5.56 mm (Olive, MRCS, Suppressor)
//    Weapon_JCA_arifle_HK433_sand_F | HK433 5.56 mm (Sand)
//    Weapon_JCA_arifle_HK433_sand_IHO_F | HK433 5.56 mm (Sand, IHO)
//    Weapon_JCA_arifle_HK433_sand_IHO_flashlight_F | HK433 5.56 mm (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_HK433_sand_IHO_flashlight_snds_F | HK433 5.56 mm (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_sand_IHO_laserModule_F | HK433 5.56 mm (Sand, IHO, Laser)
//    Weapon_JCA_arifle_HK433_sand_IHO_laserModule_snds_F | HK433 5.56 mm (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_sand_IHO_snds_F | HK433 5.56 mm (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_HK433_sand_MRCS_F | HK433 5.56 mm (Sand, MRCS)
//    Weapon_JCA_arifle_HK433_sand_MRCS_flashlight_F | HK433 5.56 mm (Sand, MRCS, Flashlight)
//    Weapon_JCA_arifle_HK433_sand_MRCS_flashlight_snds_F | HK433 5.56 mm (Sand, MRCS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_sand_MRCS_laserModule_F | HK433 5.56 mm (Sand, MRCS, Laser)
//    Weapon_JCA_arifle_HK433_sand_MRCS_laserModule_snds_F | HK433 5.56 mm (Sand, MRCS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_sand_MRCS_snds_F | HK433 5.56 mm (Sand, MRCS, Suppressor)
//    Weapon_JCA_arifle_HK433_short_black_F | HK433 5.56 mm CQB (Black)
//    Weapon_JCA_arifle_HK433_short_black_IHO_F | HK433 5.56 mm CQB (Black, IHO)
//    Weapon_JCA_arifle_HK433_short_black_IHO_flashlight_F | HK433 5.56 mm CQB (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_HK433_short_black_IHO_flashlight_snds_F | HK433 5.56 mm CQB (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_short_black_IHO_laserModule_F | HK433 5.56 mm CQB (Black, IHO, Laser)
//    Weapon_JCA_arifle_HK433_short_black_IHO_laserModule_snds_F | HK433 5.56 mm CQB (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_short_black_IHO_snds_F | HK433 5.56 mm CQB (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_HK433_short_black_MRCS_F | HK433 5.56 mm CQB (Black, MRCS)
//    Weapon_JCA_arifle_HK433_short_black_MRCS_flashlight_F | HK433 5.56 mm CQB (Black, MRCS, Flashlight)
//    Weapon_JCA_arifle_HK433_short_black_MRCS_flashlight_snds_F | HK433 5.56 mm CQB (Black, MRCS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_short_black_MRCS_laserModule_F | HK433 5.56 mm CQB (Black, MRCS, Laser)
//    Weapon_JCA_arifle_HK433_short_black_MRCS_laserModule_snds_F | HK433 5.56 mm CQB (Black, MRCS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_short_black_MRCS_snds_F | HK433 5.56 mm CQB (Black, MRCS, Suppressor)
//    Weapon_JCA_arifle_HK433_short_olive_F | HK433 5.56 mm CQB (Olive)
//    Weapon_JCA_arifle_HK433_short_olive_IHO_F | HK433 5.56 mm CQB (Olive, IHO)
//    Weapon_JCA_arifle_HK433_short_olive_IHO_flashlight_F | HK433 5.56 mm CQB (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_HK433_short_olive_IHO_flashlight_snds_F | HK433 5.56 mm CQB (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_short_olive_IHO_laserModule_F | HK433 5.56 mm CQB (Olive, IHO, Laser)
//    Weapon_JCA_arifle_HK433_short_olive_IHO_laserModule_snds_F | HK433 5.56 mm CQB (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_short_olive_IHO_snds_F | HK433 5.56 mm CQB (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_HK433_short_olive_MRCS_F | HK433 5.56 mm CQB (Olive, MRCS)
//    Weapon_JCA_arifle_HK433_short_olive_MRCS_flashlight_F | HK433 5.56 mm CQB (Olive, MRCS, Flashlight)
//    Weapon_JCA_arifle_HK433_short_olive_MRCS_flashlight_snds_F | HK433 5.56 mm CQB (Olive, MRCS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_short_olive_MRCS_laserModule_F | HK433 5.56 mm CQB (Olive, MRCS, Laser)
//    Weapon_JCA_arifle_HK433_short_olive_MRCS_laserModule_snds_F | HK433 5.56 mm CQB (Olive, MRCS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_short_olive_MRCS_snds_F | HK433 5.56 mm CQB (Olive, MRCS, Suppressor)
//    Weapon_JCA_arifle_HK433_short_sand_F | HK433 5.56 mm CQB (Sand)
//    Weapon_JCA_arifle_HK433_short_sand_IHO_F | HK433 5.56 mm CQB (Sand, IHO)
//    Weapon_JCA_arifle_HK433_short_sand_IHO_flashlight_F | HK433 5.56 mm CQB (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_HK433_short_sand_IHO_flashlight_snds_F | HK433 5.56 mm CQB (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_short_sand_IHO_laserModule_F | HK433 5.56 mm CQB (Sand, IHO, Laser)
//    Weapon_JCA_arifle_HK433_short_sand_IHO_laserModule_snds_F | HK433 5.56 mm CQB (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_short_sand_IHO_snds_F | HK433 5.56 mm CQB (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_HK433_short_sand_MRCS_F | HK433 5.56 mm CQB (Sand, MRCS)
//    Weapon_JCA_arifle_HK433_short_sand_MRCS_flashlight_F | HK433 5.56 mm CQB (Sand, MRCS, Flashlight)
//    Weapon_JCA_arifle_HK433_short_sand_MRCS_flashlight_snds_F | HK433 5.56 mm CQB (Sand, MRCS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK433_short_sand_MRCS_laserModule_F | HK433 5.56 mm CQB (Sand, MRCS, Laser)
//    Weapon_JCA_arifle_HK433_short_sand_MRCS_laserModule_snds_F | HK433 5.56 mm CQB (Sand, MRCS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK433_short_sand_MRCS_snds_F | HK433 5.56 mm CQB (Sand, MRCS, Suppressor)
//    Weapon_JCA_arifle_HK437_AFG_black_ARS_F | HK437 .300 BLK AFG (Black, ARS)
//    Weapon_JCA_arifle_HK437_AFG_black_ARS_flashlight_F | HK437 .300 BLK AFG (Black, ARS, Flashlight)
//    Weapon_JCA_arifle_HK437_AFG_black_ARS_flashlight_snds_F | HK437 .300 BLK AFG (Black, ARS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK437_AFG_black_ARS_laserModule_F | HK437 .300 BLK AFG (Black, ARS, Laser)
//    Weapon_JCA_arifle_HK437_AFG_black_ARS_laserModule_snds_F | HK437 .300 BLK AFG (Black, ARS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK437_AFG_black_ARS_snds_F | HK437 .300 BLK AFG (Black, ARS, Suppressor)
//    Weapon_JCA_arifle_HK437_AFG_black_F | HK437 .300 BLK AFG (Black)
//    Weapon_JCA_arifle_HK437_AFG_olive_ARS_F | HK437 .300 BLK AFG (Olive, ARS)
//    Weapon_JCA_arifle_HK437_AFG_olive_ARS_flashlight_F | HK437 .300 BLK AFG (Olive, ARS, Flashlight)
//    Weapon_JCA_arifle_HK437_AFG_olive_ARS_flashlight_snds_F | HK437 .300 BLK AFG (Olive, ARS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK437_AFG_olive_ARS_laserModule_F | HK437 .300 BLK AFG (Olive, ARS, Laser)
//    Weapon_JCA_arifle_HK437_AFG_olive_ARS_laserModule_snds_F | HK437 .300 BLK AFG (Olive, ARS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK437_AFG_olive_ARS_snds_F | HK437 .300 BLK AFG (Olive, ARS, Suppressor)
//    Weapon_JCA_arifle_HK437_AFG_olive_F | HK437 .300 BLK AFG (Olive)
//    Weapon_JCA_arifle_HK437_AFG_sand_ARS_F | HK437 .300 BLK AFG (Sand, ARS)
//    Weapon_JCA_arifle_HK437_AFG_sand_ARS_flashlight_F | HK437 .300 BLK AFG (Sand, ARS, Flashlight)
//    Weapon_JCA_arifle_HK437_AFG_sand_ARS_flashlight_snds_F | HK437 .300 BLK AFG (Sand, ARS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK437_AFG_sand_ARS_laserModule_F | HK437 .300 BLK AFG (Sand, ARS, Laser)
//    Weapon_JCA_arifle_HK437_AFG_sand_ARS_laserModule_snds_F | HK437 .300 BLK AFG (Sand, ARS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK437_AFG_sand_ARS_snds_F | HK437 .300 BLK AFG (Sand, ARS, Suppressor)
//    Weapon_JCA_arifle_HK437_AFG_sand_F | HK437 .300 BLK AFG (Sand)
//    Weapon_JCA_arifle_HK437_VFG_black_ARS_F | HK437 .300 BLK VFG (Black, ARS)
//    Weapon_JCA_arifle_HK437_VFG_black_ARS_flashlight_F | HK437 .300 BLK VFG (Black, ARS, Flashlight)
//    Weapon_JCA_arifle_HK437_VFG_black_ARS_flashlight_snds_F | HK437 .300 BLK VFG (Black, ARS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK437_VFG_black_ARS_laserModule_F | HK437 .300 BLK VFG (Black, ARS, Laser)
//    Weapon_JCA_arifle_HK437_VFG_black_ARS_laserModule_snds_F | HK437 .300 BLK VFG (Black, ARS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK437_VFG_black_ARS_snds_F | HK437 .300 BLK VFG (Black, ARS, Suppressor)
//    Weapon_JCA_arifle_HK437_VFG_black_F | HK437 .300 BLK VFG (Black)
//    Weapon_JCA_arifle_HK437_VFG_olive_ARS_F | HK437 .300 BLK VFG (Olive, ARS)
//    Weapon_JCA_arifle_HK437_VFG_olive_ARS_flashlight_F | HK437 .300 BLK VFG (Olive, ARS, Flashlight)
//    Weapon_JCA_arifle_HK437_VFG_olive_ARS_flashlight_snds_F | HK437 .300 BLK VFG (Olive, ARS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK437_VFG_olive_ARS_laserModule_F | HK437 .300 BLK VFG (Olive, ARS, Laser)
//    Weapon_JCA_arifle_HK437_VFG_olive_ARS_laserModule_snds_F | HK437 .300 BLK VFG (Olive, ARS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK437_VFG_olive_ARS_snds_F | HK437 .300 BLK VFG (Olive, ARS, Suppressor)
//    Weapon_JCA_arifle_HK437_VFG_olive_F | HK437 .300 BLK VFG (Olive)
//    Weapon_JCA_arifle_HK437_VFG_sand_ARS_F | HK437 .300 BLK VFG (Sand, ARS)
//    Weapon_JCA_arifle_HK437_VFG_sand_ARS_flashlight_F | HK437 .300 BLK VFG (Sand, ARS, Flashlight)
//    Weapon_JCA_arifle_HK437_VFG_sand_ARS_flashlight_snds_F | HK437 .300 BLK VFG (Sand, ARS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_HK437_VFG_sand_ARS_laserModule_F | HK437 .300 BLK VFG (Sand, ARS, Laser)
//    Weapon_JCA_arifle_HK437_VFG_sand_ARS_laserModule_snds_F | HK437 .300 BLK VFG (Sand, ARS, Laser, Suppressor)
//    Weapon_JCA_arifle_HK437_VFG_sand_ARS_snds_F | HK437 .300 BLK VFG (Sand, ARS, Suppressor)
//    Weapon_JCA_arifle_HK437_VFG_sand_F | HK437 .300 BLK VFG (Sand)
//    Weapon_JCA_arifle_M4A1_black_ACOG_F | M4A1 5.56 mm (Black, ACOG)
//    Weapon_JCA_arifle_M4A1_black_ACOG_flashlight_F | M4A1 5.56 mm (Black, ACOG, Flashlight)
//    Weapon_JCA_arifle_M4A1_black_ACOG_flashlight_snds_F | M4A1 5.56 mm (Black, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_black_ACOG_laserModule_F | M4A1 5.56 mm (Black, ACOG, Laser)
//    Weapon_JCA_arifle_M4A1_black_ACOG_laserModule_snds_F | M4A1 5.56 mm (Black, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_black_ACOG_snds_F | M4A1 5.56 mm (Black, ACOG, Suppressor)
//    Weapon_JCA_arifle_M4A1_black_F | M4A1 5.56 mm (Black)
//    Weapon_JCA_arifle_M4A1_black_ICO_F | M4A1 5.56 mm (Black, ICO)
//    Weapon_JCA_arifle_M4A1_black_ICO_flashlight_F | M4A1 5.56 mm (Black, ICO, Flashlight)
//    Weapon_JCA_arifle_M4A1_black_ICO_flashlight_snds_F | M4A1 5.56 mm (Black, ICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_black_ICO_laserModule_F | M4A1 5.56 mm (Black, ICO, Laser)
//    Weapon_JCA_arifle_M4A1_black_ICO_laserModule_snds_F | M4A1 5.56 mm (Black, ICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_black_ICO_snds_F | M4A1 5.56 mm (Black, ICO, Suppressor)
//    Weapon_JCA_arifle_M4A1_black_IHO_F | M4A1 5.56 mm (Black, IHO)
//    Weapon_JCA_arifle_M4A1_black_IHO_flashlight_F | M4A1 5.56 mm (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A1_black_IHO_flashlight_snds_F | M4A1 5.56 mm (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_black_IHO_laserModule_F | M4A1 5.56 mm (Black, IHO, Laser)
//    Weapon_JCA_arifle_M4A1_black_IHO_laserModule_snds_F | M4A1 5.56 mm (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_black_IHO_snds_F | M4A1 5.56 mm (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_black_ACOG_F | M4A1 5.56 mm GL (Black, ACOG)
//    Weapon_JCA_arifle_M4A1_GL_black_ACOG_flashlight_F | M4A1 5.56 mm GL (Black, ACOG, Flashlight)
//    Weapon_JCA_arifle_M4A1_GL_black_ACOG_flashlight_snds_F | M4A1 5.56 mm GL (Black, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_black_ACOG_laserModule_F | M4A1 5.56 mm GL (Black, ACOG, Laser)
//    Weapon_JCA_arifle_M4A1_GL_black_ACOG_laserModule_snds_F | M4A1 5.56 mm GL (Black, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_black_ACOG_snds_F | M4A1 5.56 mm GL (Black, ACOG, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_black_F | M4A1 5.56 mm GL (Black)
//    Weapon_JCA_arifle_M4A1_GL_black_ICO_F | M4A1 5.56 mm GL (Black, ICO)
//    Weapon_JCA_arifle_M4A1_GL_black_ICO_flashlight_F | M4A1 5.56 mm GL (Black, ICO, Flashlight)
//    Weapon_JCA_arifle_M4A1_GL_black_ICO_flashlight_snds_F | M4A1 5.56 mm GL (Black, ICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_black_ICO_laserModule_F | M4A1 5.56 mm GL (Black, ICO, Laser)
//    Weapon_JCA_arifle_M4A1_GL_black_ICO_laserModule_snds_F | M4A1 5.56 mm GL (Black, ICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_black_ICO_snds_F | M4A1 5.56 mm GL (Black, ICO, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_black_IHO_F | M4A1 5.56 mm GL (Black, IHO)
//    Weapon_JCA_arifle_M4A1_GL_black_IHO_flashlight_F | M4A1 5.56 mm GL (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A1_GL_black_IHO_flashlight_snds_F | M4A1 5.56 mm GL (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_black_IHO_laserModule_F | M4A1 5.56 mm GL (Black, IHO, Laser)
//    Weapon_JCA_arifle_M4A1_GL_black_IHO_laserModule_snds_F | M4A1 5.56 mm GL (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_black_IHO_snds_F | M4A1 5.56 mm GL (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_olive_ACOG_F | M4A1 5.56 mm GL (Olive, ACOG)
//    Weapon_JCA_arifle_M4A1_GL_olive_ACOG_flashlight_F | M4A1 5.56 mm GL (Olive, ACOG, Flashlight)
//    Weapon_JCA_arifle_M4A1_GL_olive_ACOG_flashlight_snds_F | M4A1 5.56 mm GL (Olive, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_olive_ACOG_laserModule_F | M4A1 5.56 mm GL (Olive, ACOG, Laser)
//    Weapon_JCA_arifle_M4A1_GL_olive_ACOG_laserModule_snds_F | M4A1 5.56 mm GL (Olive, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_olive_ACOG_snds_F | M4A1 5.56 mm GL (Olive, ACOG, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_olive_F | M4A1 5.56 mm GL (Olive)
//    Weapon_JCA_arifle_M4A1_GL_olive_ICO_F | M4A1 5.56 mm GL (Olive, ICO)
//    Weapon_JCA_arifle_M4A1_GL_olive_ICO_flashlight_F | M4A1 5.56 mm GL (Olive, ICO, Flashlight)
//    Weapon_JCA_arifle_M4A1_GL_olive_ICO_flashlight_snds_F | M4A1 5.56 mm GL (Olive, ICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_olive_ICO_laserModule_F | M4A1 5.56 mm GL (Olive, ICO, Laser)
//    Weapon_JCA_arifle_M4A1_GL_olive_ICO_laserModule_snds_F | M4A1 5.56 mm GL (Olive, ICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_olive_ICO_snds_F | M4A1 5.56 mm GL (Olive, ICO, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_olive_IHO_F | M4A1 5.56 mm GL (Olive, IHO)
//    Weapon_JCA_arifle_M4A1_GL_olive_IHO_flashlight_F | M4A1 5.56 mm GL (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A1_GL_olive_IHO_flashlight_snds_F | M4A1 5.56 mm GL (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_olive_IHO_laserModule_F | M4A1 5.56 mm GL (Olive, IHO, Laser)
//    Weapon_JCA_arifle_M4A1_GL_olive_IHO_laserModule_snds_F | M4A1 5.56 mm GL (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_olive_IHO_snds_F | M4A1 5.56 mm GL (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_sand_ACOG_F | M4A1 5.56 mm GL (Sand, ACOG)
//    Weapon_JCA_arifle_M4A1_GL_sand_ACOG_flashlight_F | M4A1 5.56 mm GL (Sand, ACOG, Flashlight)
//    Weapon_JCA_arifle_M4A1_GL_sand_ACOG_flashlight_snds_F | M4A1 5.56 mm GL (Sand, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_sand_ACOG_laserModule_F | M4A1 5.56 mm GL (Sand, ACOG, Laser)
//    Weapon_JCA_arifle_M4A1_GL_sand_ACOG_laserModule_snds_F | M4A1 5.56 mm GL (Sand, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_sand_ACOG_snds_F | M4A1 5.56 mm GL (Sand, ACOG, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_sand_F | M4A1 5.56 mm GL (Sand)
//    Weapon_JCA_arifle_M4A1_GL_sand_ICO_F | M4A1 5.56 mm GL (Sand, ICO)
//    Weapon_JCA_arifle_M4A1_GL_sand_ICO_flashlight_F | M4A1 5.56 mm GL (Sand, ICO, Flashlight)
//    Weapon_JCA_arifle_M4A1_GL_sand_ICO_flashlight_snds_F | M4A1 5.56 mm GL (Sand, ICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_sand_ICO_laserModule_F | M4A1 5.56 mm GL (Sand, ICO, Laser)
//    Weapon_JCA_arifle_M4A1_GL_sand_ICO_laserModule_snds_F | M4A1 5.56 mm GL (Sand, ICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_sand_ICO_snds_F | M4A1 5.56 mm GL (Sand, ICO, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_sand_IHO_F | M4A1 5.56 mm GL (Sand, IHO)
//    Weapon_JCA_arifle_M4A1_GL_sand_IHO_flashlight_F | M4A1 5.56 mm GL (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A1_GL_sand_IHO_flashlight_snds_F | M4A1 5.56 mm GL (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_sand_IHO_laserModule_F | M4A1 5.56 mm GL (Sand, IHO, Laser)
//    Weapon_JCA_arifle_M4A1_GL_sand_IHO_laserModule_snds_F | M4A1 5.56 mm GL (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_GL_sand_IHO_snds_F | M4A1 5.56 mm GL (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A1_olive_ACOG_F | M4A1 5.56 mm (Olive, ACOG)
//    Weapon_JCA_arifle_M4A1_olive_ACOG_flashlight_F | M4A1 5.56 mm (Olive, ACOG, Flashlight)
//    Weapon_JCA_arifle_M4A1_olive_ACOG_flashlight_snds_F | M4A1 5.56 mm (Olive, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_olive_ACOG_laserModule_F | M4A1 5.56 mm (Olive, ACOG, Laser)
//    Weapon_JCA_arifle_M4A1_olive_ACOG_laserModule_snds_F | M4A1 5.56 mm (Olive, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_olive_ACOG_snds_F | M4A1 5.56 mm (Olive, ACOG, Suppressor)
//    Weapon_JCA_arifle_M4A1_olive_F | M4A1 5.56 mm (Olive)
//    Weapon_JCA_arifle_M4A1_olive_ICO_F | M4A1 5.56 mm (Olive, ICO)
//    Weapon_JCA_arifle_M4A1_olive_ICO_flashlight_F | M4A1 5.56 mm (Olive, ICO, Flashlight)
//    Weapon_JCA_arifle_M4A1_olive_ICO_flashlight_snds_F | M4A1 5.56 mm (Olive, ICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_olive_ICO_laserModule_F | M4A1 5.56 mm (Olive, ICO, Laser)
//    Weapon_JCA_arifle_M4A1_olive_ICO_laserModule_snds_F | M4A1 5.56 mm (Olive, ICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_olive_ICO_snds_F | M4A1 5.56 mm (Olive, ICO, Suppressor)
//    Weapon_JCA_arifle_M4A1_olive_IHO_F | M4A1 5.56 mm (Olive, IHO)
//    Weapon_JCA_arifle_M4A1_olive_IHO_flashlight_F | M4A1 5.56 mm (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A1_olive_IHO_flashlight_snds_F | M4A1 5.56 mm (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_olive_IHO_laserModule_F | M4A1 5.56 mm (Olive, IHO, Laser)
//    Weapon_JCA_arifle_M4A1_olive_IHO_laserModule_snds_F | M4A1 5.56 mm (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_olive_IHO_snds_F | M4A1 5.56 mm (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A1_sand_ACOG_F | M4A1 5.56 mm (Sand, ACOG)
//    Weapon_JCA_arifle_M4A1_sand_ACOG_flashlight_F | M4A1 5.56 mm (Sand, ACOG, Flashlight)
//    Weapon_JCA_arifle_M4A1_sand_ACOG_flashlight_snds_F | M4A1 5.56 mm (Sand, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_sand_ACOG_laserModule_F | M4A1 5.56 mm (Sand, ACOG, Laser)
//    Weapon_JCA_arifle_M4A1_sand_ACOG_laserModule_snds_F | M4A1 5.56 mm (Sand, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_sand_ACOG_snds_F | M4A1 5.56 mm (Sand, ACOG, Suppressor)
//    Weapon_JCA_arifle_M4A1_sand_F | M4A1 5.56 mm (Sand)
//    Weapon_JCA_arifle_M4A1_sand_ICO_F | M4A1 5.56 mm (Sand, ICO)
//    Weapon_JCA_arifle_M4A1_sand_ICO_flashlight_F | M4A1 5.56 mm (Sand, ICO, Flashlight)
//    Weapon_JCA_arifle_M4A1_sand_ICO_flashlight_snds_F | M4A1 5.56 mm (Sand, ICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_sand_ICO_laserModule_F | M4A1 5.56 mm (Sand, ICO, Laser)
//    Weapon_JCA_arifle_M4A1_sand_ICO_laserModule_snds_F | M4A1 5.56 mm (Sand, ICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_sand_ICO_snds_F | M4A1 5.56 mm (Sand, ICO, Suppressor)
//    Weapon_JCA_arifle_M4A1_sand_IHO_F | M4A1 5.56 mm (Sand, IHO)
//    Weapon_JCA_arifle_M4A1_sand_IHO_flashlight_F | M4A1 5.56 mm (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A1_sand_IHO_flashlight_snds_F | M4A1 5.56 mm (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_sand_IHO_laserModule_F | M4A1 5.56 mm (Sand, IHO, Laser)
//    Weapon_JCA_arifle_M4A1_sand_IHO_laserModule_snds_F | M4A1 5.56 mm (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_sand_IHO_snds_F | M4A1 5.56 mm (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_black_ACOG_F | M4A1 5.56 mm CQB (Black, ACOG)
//    Weapon_JCA_arifle_M4A1_short_black_ACOG_flashlight_F | M4A1 5.56 mm CQB (Black, ACOG, Flashlight)
//    Weapon_JCA_arifle_M4A1_short_black_ACOG_flashlight_snds_F | M4A1 5.56 mm CQB (Black, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_black_ACOG_laserModule_F | M4A1 5.56 mm CQB (Black, ACOG, Laser)
//    Weapon_JCA_arifle_M4A1_short_black_ACOG_laserModule_snds_F | M4A1 5.56 mm CQB (Black, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_black_ACOG_snds_F | M4A1 5.56 mm CQB (Black, ACOG, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_black_F | M4A1 5.56 mm CQB (Black)
//    Weapon_JCA_arifle_M4A1_short_black_ICO_F | M4A1 5.56 mm CQB (Black, ICO)
//    Weapon_JCA_arifle_M4A1_short_black_ICO_flashlight_F | M4A1 5.56 mm CQB (Black, ICO, Flashlight)
//    Weapon_JCA_arifle_M4A1_short_black_ICO_flashlight_snds_F | M4A1 5.56 mm CQB (Black, ICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_black_ICO_laserModule_F | M4A1 5.56 mm CQB (Black, ICO, Laser)
//    Weapon_JCA_arifle_M4A1_short_black_ICO_laserModule_snds_F | M4A1 5.56 mm CQB (Black, ICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_black_ICO_snds_F | M4A1 5.56 mm CQB (Black, ICO, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_black_IHO_F | M4A1 5.56 mm CQB (Black, IHO)
//    Weapon_JCA_arifle_M4A1_short_black_IHO_flashlight_F | M4A1 5.56 mm CQB (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A1_short_black_IHO_flashlight_snds_F | M4A1 5.56 mm CQB (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_black_IHO_laserModule_F | M4A1 5.56 mm CQB (Black, IHO, Laser)
//    Weapon_JCA_arifle_M4A1_short_black_IHO_laserModule_snds_F | M4A1 5.56 mm CQB (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_black_IHO_snds_F | M4A1 5.56 mm CQB (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_olive_ACOG_F | M4A1 5.56 mm CQB (Olive, ACOG)
//    Weapon_JCA_arifle_M4A1_short_olive_ACOG_flashlight_F | M4A1 5.56 mm CQB (Olive, ACOG, Flashlight)
//    Weapon_JCA_arifle_M4A1_short_olive_ACOG_flashlight_snds_F | M4A1 5.56 mm CQB (Olive, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_olive_ACOG_laserModule_F | M4A1 5.56 mm CQB (Olive, ACOG, Laser)
//    Weapon_JCA_arifle_M4A1_short_olive_ACOG_laserModule_snds_F | M4A1 5.56 mm CQB (Olive, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_olive_ACOG_snds_F | M4A1 5.56 mm CQB (Olive, ACOG, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_olive_F | M4A1 5.56 mm CQB (Olive)
//    Weapon_JCA_arifle_M4A1_short_olive_ICO_F | M4A1 5.56 mm CQB (Olive, ICO)
//    Weapon_JCA_arifle_M4A1_short_olive_ICO_flashlight_F | M4A1 5.56 mm CQB (Olive, ICO, Flashlight)
//    Weapon_JCA_arifle_M4A1_short_olive_ICO_flashlight_snds_F | M4A1 5.56 mm CQB (Olive, ICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_olive_ICO_laserModule_F | M4A1 5.56 mm CQB (Olive, ICO, Laser)
//    Weapon_JCA_arifle_M4A1_short_olive_ICO_laserModule_snds_F | M4A1 5.56 mm CQB (Olive, ICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_olive_ICO_snds_F | M4A1 5.56 mm CQB (Olive, ICO, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_olive_IHO_F | M4A1 5.56 mm CQB (Olive, IHO)
//    Weapon_JCA_arifle_M4A1_short_olive_IHO_flashlight_F | M4A1 5.56 mm CQB (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A1_short_olive_IHO_flashlight_snds_F | M4A1 5.56 mm CQB (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_olive_IHO_laserModule_F | M4A1 5.56 mm CQB (Olive, IHO, Laser)
//    Weapon_JCA_arifle_M4A1_short_olive_IHO_laserModule_snds_F | M4A1 5.56 mm CQB (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_olive_IHO_snds_F | M4A1 5.56 mm CQB (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_sand_ACOG_F | M4A1 5.56 mm CQB (Sand, ACOG)
//    Weapon_JCA_arifle_M4A1_short_sand_ACOG_flashlight_F | M4A1 5.56 mm CQB (Sand, ACOG, Flashlight)
//    Weapon_JCA_arifle_M4A1_short_sand_ACOG_flashlight_snds_F | M4A1 5.56 mm CQB (Sand, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_sand_ACOG_laserModule_F | M4A1 5.56 mm CQB (Sand, ACOG, Laser)
//    Weapon_JCA_arifle_M4A1_short_sand_ACOG_laserModule_snds_F | M4A1 5.56 mm CQB (Sand, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_sand_ACOG_snds_F | M4A1 5.56 mm CQB (Sand, ACOG, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_sand_F | M4A1 5.56 mm CQB (Sand)
//    Weapon_JCA_arifle_M4A1_short_sand_ICO_F | M4A1 5.56 mm CQB (Sand, ICO)
//    Weapon_JCA_arifle_M4A1_short_sand_ICO_flashlight_F | M4A1 5.56 mm CQB (Sand, ICO, Flashlight)
//    Weapon_JCA_arifle_M4A1_short_sand_ICO_flashlight_snds_F | M4A1 5.56 mm CQB (Sand, ICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_sand_ICO_laserModule_F | M4A1 5.56 mm CQB (Sand, ICO, Laser)
//    Weapon_JCA_arifle_M4A1_short_sand_ICO_laserModule_snds_F | M4A1 5.56 mm CQB (Sand, ICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_sand_ICO_snds_F | M4A1 5.56 mm CQB (Sand, ICO, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_sand_IHO_F | M4A1 5.56 mm CQB (Sand, IHO)
//    Weapon_JCA_arifle_M4A1_short_sand_IHO_flashlight_F | M4A1 5.56 mm CQB (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A1_short_sand_IHO_flashlight_snds_F | M4A1 5.56 mm CQB (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_sand_IHO_laserModule_F | M4A1 5.56 mm CQB (Sand, IHO, Laser)
//    Weapon_JCA_arifle_M4A1_short_sand_IHO_laserModule_snds_F | M4A1 5.56 mm CQB (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A1_short_sand_IHO_snds_F | M4A1 5.56 mm CQB (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_AHO_DualMount_F | M4A4 5.56 mm AFG (Black, AHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_AFG_black_AHO_DualMount_snds_F | M4A4 5.56 mm AFG (Black, AHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_AHO_F | M4A4 5.56 mm AFG (Black, AHO)
//    Weapon_JCA_arifle_M4A4_AFG_black_AHO_flashlight_F | M4A4 5.56 mm AFG (Black, AHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_AFG_black_AHO_flashlight_snds_F | M4A4 5.56 mm AFG (Black, AHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_AHO_laserModule_F | M4A4 5.56 mm AFG (Black, AHO, Laser)
//    Weapon_JCA_arifle_M4A4_AFG_black_AHO_laserModule_snds_F | M4A4 5.56 mm AFG (Black, AHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_AHO_snds_F | M4A4 5.56 mm AFG (Black, AHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_AICO_DualMount_F | M4A4 5.56 mm AFG (Black, AICO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_AFG_black_AICO_DualMount_snds_F | M4A4 5.56 mm AFG (Black, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_AICO_F | M4A4 5.56 mm AFG (Black, AICO)
//    Weapon_JCA_arifle_M4A4_AFG_black_AICO_flashlight_F | M4A4 5.56 mm AFG (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_M4A4_AFG_black_AICO_flashlight_snds_F | M4A4 5.56 mm AFG (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_AICO_laserModule_F | M4A4 5.56 mm AFG (Black, AICO, Laser)
//    Weapon_JCA_arifle_M4A4_AFG_black_AICO_laserModule_snds_F | M4A4 5.56 mm AFG (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_AICO_snds_F | M4A4 5.56 mm AFG (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_F | M4A4 5.56 mm AFG (Black)
//    Weapon_JCA_arifle_M4A4_AFG_black_IHO_DualMount_F | M4A4 5.56 mm AFG (Black, IHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F | M4A4 5.56 mm AFG (Black, IHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_IHO_F | M4A4 5.56 mm AFG (Black, IHO)
//    Weapon_JCA_arifle_M4A4_AFG_black_IHO_flashlight_F | M4A4 5.56 mm AFG (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_AFG_black_IHO_flashlight_snds_F | M4A4 5.56 mm AFG (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_IHO_laserModule_F | M4A4 5.56 mm AFG (Black, IHO, Laser)
//    Weapon_JCA_arifle_M4A4_AFG_black_IHO_laserModule_snds_F | M4A4 5.56 mm AFG (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_black_IHO_snds_F | M4A4 5.56 mm AFG (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AHO_DualMount_F | M4A4 5.56 mm AFG (Olive, AHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AHO_DualMount_snds_F | M4A4 5.56 mm AFG (Olive, AHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AHO_F | M4A4 5.56 mm AFG (Olive, AHO)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AHO_flashlight_F | M4A4 5.56 mm AFG (Olive, AHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AHO_flashlight_snds_F | M4A4 5.56 mm AFG (Olive, AHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AHO_laserModule_F | M4A4 5.56 mm AFG (Olive, AHO, Laser)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AHO_laserModule_snds_F | M4A4 5.56 mm AFG (Olive, AHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AHO_snds_F | M4A4 5.56 mm AFG (Olive, AHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AICO_DualMount_F | M4A4 5.56 mm AFG (Olive, AICO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AICO_DualMount_snds_F | M4A4 5.56 mm AFG (Olive, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AICO_F | M4A4 5.56 mm AFG (Olive, AICO)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AICO_flashlight_F | M4A4 5.56 mm AFG (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AICO_flashlight_snds_F | M4A4 5.56 mm AFG (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AICO_laserModule_F | M4A4 5.56 mm AFG (Olive, AICO, Laser)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AICO_laserModule_snds_F | M4A4 5.56 mm AFG (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_AICO_snds_F | M4A4 5.56 mm AFG (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_F | M4A4 5.56 mm AFG (Olive)
//    Weapon_JCA_arifle_M4A4_AFG_olive_IHO_DualMount_F | M4A4 5.56 mm AFG (Olive, IHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_AFG_olive_IHO_DualMount_snds_F | M4A4 5.56 mm AFG (Olive, IHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_IHO_F | M4A4 5.56 mm AFG (Olive, IHO)
//    Weapon_JCA_arifle_M4A4_AFG_olive_IHO_flashlight_F | M4A4 5.56 mm AFG (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_AFG_olive_IHO_flashlight_snds_F | M4A4 5.56 mm AFG (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_IHO_laserModule_F | M4A4 5.56 mm AFG (Olive, IHO, Laser)
//    Weapon_JCA_arifle_M4A4_AFG_olive_IHO_laserModule_snds_F | M4A4 5.56 mm AFG (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_olive_IHO_snds_F | M4A4 5.56 mm AFG (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AHO_DualMount_F | M4A4 5.56 mm AFG (Sand, AHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AHO_DualMount_snds_F | M4A4 5.56 mm AFG (Sand, AHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AHO_F | M4A4 5.56 mm AFG (Sand, AHO)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AHO_flashlight_F | M4A4 5.56 mm AFG (Sand, AHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AHO_flashlight_snds_F | M4A4 5.56 mm AFG (Sand, AHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AHO_laserModule_F | M4A4 5.56 mm AFG (Sand, AHO, Laser)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AHO_laserModule_snds_F | M4A4 5.56 mm AFG (Sand, AHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AHO_snds_F | M4A4 5.56 mm AFG (Sand, AHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AICO_DualMount_F | M4A4 5.56 mm AFG (Sand, AICO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AICO_DualMount_snds_F | M4A4 5.56 mm AFG (Sand, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AICO_F | M4A4 5.56 mm AFG (Sand, AICO)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AICO_flashlight_F | M4A4 5.56 mm AFG (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AICO_flashlight_snds_F | M4A4 5.56 mm AFG (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AICO_laserModule_F | M4A4 5.56 mm AFG (Sand, AICO, Laser)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AICO_laserModule_snds_F | M4A4 5.56 mm AFG (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_AICO_snds_F | M4A4 5.56 mm AFG (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_F | M4A4 5.56 mm AFG (Sand)
//    Weapon_JCA_arifle_M4A4_AFG_sand_IHO_DualMount_F | M4A4 5.56 mm AFG (Sand, IHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_AFG_sand_IHO_DualMount_snds_F | M4A4 5.56 mm AFG (Sand, IHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_IHO_F | M4A4 5.56 mm AFG (Sand, IHO)
//    Weapon_JCA_arifle_M4A4_AFG_sand_IHO_flashlight_F | M4A4 5.56 mm AFG (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_AFG_sand_IHO_flashlight_snds_F | M4A4 5.56 mm AFG (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_IHO_laserModule_F | M4A4 5.56 mm AFG (Sand, IHO, Laser)
//    Weapon_JCA_arifle_M4A4_AFG_sand_IHO_laserModule_snds_F | M4A4 5.56 mm AFG (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_AFG_sand_IHO_snds_F | M4A4 5.56 mm AFG (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_AHO_DualMount_F | M4A4 5.56 mm GL (Black, AHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_GL_black_AHO_DualMount_snds_F | M4A4 5.56 mm GL (Black, AHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_AHO_F | M4A4 5.56 mm GL (Black, AHO)
//    Weapon_JCA_arifle_M4A4_GL_black_AHO_flashlight_F | M4A4 5.56 mm GL (Black, AHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_GL_black_AHO_flashlight_snds_F | M4A4 5.56 mm GL (Black, AHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_AHO_laserModule_F | M4A4 5.56 mm GL (Black, AHO, Laser)
//    Weapon_JCA_arifle_M4A4_GL_black_AHO_laserModule_snds_F | M4A4 5.56 mm GL (Black, AHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_AHO_snds_F | M4A4 5.56 mm GL (Black, AHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_AICO_DualMount_F | M4A4 5.56 mm GL (Black, AICO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F | M4A4 5.56 mm GL (Black, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_AICO_F | M4A4 5.56 mm GL (Black, AICO)
//    Weapon_JCA_arifle_M4A4_GL_black_AICO_flashlight_F | M4A4 5.56 mm GL (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_M4A4_GL_black_AICO_flashlight_snds_F | M4A4 5.56 mm GL (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_AICO_laserModule_F | M4A4 5.56 mm GL (Black, AICO, Laser)
//    Weapon_JCA_arifle_M4A4_GL_black_AICO_laserModule_snds_F | M4A4 5.56 mm GL (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_AICO_snds_F | M4A4 5.56 mm GL (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_F | M4A4 5.56 mm GL (Black)
//    Weapon_JCA_arifle_M4A4_GL_black_IHO_DualMount_F | M4A4 5.56 mm GL (Black, IHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_GL_black_IHO_DualMount_snds_F | M4A4 5.56 mm GL (Black, IHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_IHO_F | M4A4 5.56 mm GL (Black, IHO)
//    Weapon_JCA_arifle_M4A4_GL_black_IHO_flashlight_F | M4A4 5.56 mm GL (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_GL_black_IHO_flashlight_snds_F | M4A4 5.56 mm GL (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_IHO_laserModule_F | M4A4 5.56 mm GL (Black, IHO, Laser)
//    Weapon_JCA_arifle_M4A4_GL_black_IHO_laserModule_snds_F | M4A4 5.56 mm GL (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_black_IHO_snds_F | M4A4 5.56 mm GL (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_AHO_DualMount_F | M4A4 5.56 mm GL (Olive, AHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_GL_olive_AHO_DualMount_snds_F | M4A4 5.56 mm GL (Olive, AHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_AHO_F | M4A4 5.56 mm GL (Olive, AHO)
//    Weapon_JCA_arifle_M4A4_GL_olive_AHO_flashlight_F | M4A4 5.56 mm GL (Olive, AHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_GL_olive_AHO_flashlight_snds_F | M4A4 5.56 mm GL (Olive, AHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_AHO_laserModule_F | M4A4 5.56 mm GL (Olive, AHO, Laser)
//    Weapon_JCA_arifle_M4A4_GL_olive_AHO_laserModule_snds_F | M4A4 5.56 mm GL (Olive, AHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_AHO_snds_F | M4A4 5.56 mm GL (Olive, AHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_AICO_DualMount_F | M4A4 5.56 mm GL (Olive, AICO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_GL_olive_AICO_DualMount_snds_F | M4A4 5.56 mm GL (Olive, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_AICO_F | M4A4 5.56 mm GL (Olive, AICO)
//    Weapon_JCA_arifle_M4A4_GL_olive_AICO_flashlight_F | M4A4 5.56 mm GL (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_M4A4_GL_olive_AICO_flashlight_snds_F | M4A4 5.56 mm GL (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_AICO_laserModule_F | M4A4 5.56 mm GL (Olive, AICO, Laser)
//    Weapon_JCA_arifle_M4A4_GL_olive_AICO_laserModule_snds_F | M4A4 5.56 mm GL (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_AICO_snds_F | M4A4 5.56 mm GL (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_F | M4A4 5.56 mm GL (Olive)
//    Weapon_JCA_arifle_M4A4_GL_olive_IHO_DualMount_F | M4A4 5.56 mm GL (Olive, IHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_GL_olive_IHO_DualMount_snds_F | M4A4 5.56 mm GL (Olive, IHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_IHO_F | M4A4 5.56 mm GL (Olive, IHO)
//    Weapon_JCA_arifle_M4A4_GL_olive_IHO_flashlight_F | M4A4 5.56 mm GL (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_GL_olive_IHO_flashlight_snds_F | M4A4 5.56 mm GL (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_IHO_laserModule_F | M4A4 5.56 mm GL (Olive, IHO, Laser)
//    Weapon_JCA_arifle_M4A4_GL_olive_IHO_laserModule_snds_F | M4A4 5.56 mm GL (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_olive_IHO_snds_F | M4A4 5.56 mm GL (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_AHO_DualMount_F | M4A4 5.56 mm GL (Sand, AHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_GL_sand_AHO_DualMount_snds_F | M4A4 5.56 mm GL (Sand, AHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_AHO_F | M4A4 5.56 mm GL (Sand, AHO)
//    Weapon_JCA_arifle_M4A4_GL_sand_AHO_flashlight_F | M4A4 5.56 mm GL (Sand, AHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_GL_sand_AHO_flashlight_snds_F | M4A4 5.56 mm GL (Sand, AHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_AHO_laserModule_F | M4A4 5.56 mm GL (Sand, AHO, Laser)
//    Weapon_JCA_arifle_M4A4_GL_sand_AHO_laserModule_snds_F | M4A4 5.56 mm GL (Sand, AHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_AHO_snds_F | M4A4 5.56 mm GL (Sand, AHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_AICO_DualMount_F | M4A4 5.56 mm GL (Sand, AICO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_GL_sand_AICO_DualMount_snds_F | M4A4 5.56 mm GL (Sand, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_AICO_F | M4A4 5.56 mm GL (Sand, AICO)
//    Weapon_JCA_arifle_M4A4_GL_sand_AICO_flashlight_F | M4A4 5.56 mm GL (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_M4A4_GL_sand_AICO_flashlight_snds_F | M4A4 5.56 mm GL (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_AICO_laserModule_F | M4A4 5.56 mm GL (Sand, AICO, Laser)
//    Weapon_JCA_arifle_M4A4_GL_sand_AICO_laserModule_snds_F | M4A4 5.56 mm GL (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_AICO_snds_F | M4A4 5.56 mm GL (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_F | M4A4 5.56 mm GL (Sand)
//    Weapon_JCA_arifle_M4A4_GL_sand_IHO_DualMount_F | M4A4 5.56 mm GL (Sand, IHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_GL_sand_IHO_DualMount_snds_F | M4A4 5.56 mm GL (Sand, IHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_IHO_F | M4A4 5.56 mm GL (Sand, IHO)
//    Weapon_JCA_arifle_M4A4_GL_sand_IHO_flashlight_F | M4A4 5.56 mm GL (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_GL_sand_IHO_flashlight_snds_F | M4A4 5.56 mm GL (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_IHO_laserModule_F | M4A4 5.56 mm GL (Sand, IHO, Laser)
//    Weapon_JCA_arifle_M4A4_GL_sand_IHO_laserModule_snds_F | M4A4 5.56 mm GL (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_GL_sand_IHO_snds_F | M4A4 5.56 mm GL (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_AHO_DualMount_F | M4A4 5.56 mm VFG (Black, AHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_VFG_black_AHO_DualMount_snds_F | M4A4 5.56 mm VFG (Black, AHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_AHO_F | M4A4 5.56 mm VFG (Black, AHO)
//    Weapon_JCA_arifle_M4A4_VFG_black_AHO_flashlight_F | M4A4 5.56 mm VFG (Black, AHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_VFG_black_AHO_flashlight_snds_F | M4A4 5.56 mm VFG (Black, AHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_AHO_laserModule_F | M4A4 5.56 mm VFG (Black, AHO, Laser)
//    Weapon_JCA_arifle_M4A4_VFG_black_AHO_laserModule_snds_F | M4A4 5.56 mm VFG (Black, AHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_AHO_snds_F | M4A4 5.56 mm VFG (Black, AHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_AICO_DualMount_F | M4A4 5.56 mm VFG (Black, AICO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_VFG_black_AICO_DualMount_snds_F | M4A4 5.56 mm VFG (Black, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_AICO_F | M4A4 5.56 mm VFG (Black, AICO)
//    Weapon_JCA_arifle_M4A4_VFG_black_AICO_flashlight_F | M4A4 5.56 mm VFG (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_M4A4_VFG_black_AICO_flashlight_snds_F | M4A4 5.56 mm VFG (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_AICO_laserModule_F | M4A4 5.56 mm VFG (Black, AICO, Laser)
//    Weapon_JCA_arifle_M4A4_VFG_black_AICO_laserModule_snds_F | M4A4 5.56 mm VFG (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_AICO_snds_F | M4A4 5.56 mm VFG (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_F | M4A4 5.56 mm VFG (Black)
//    Weapon_JCA_arifle_M4A4_VFG_black_IHO_DualMount_F | M4A4 5.56 mm VFG (Black, IHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_VFG_black_IHO_DualMount_snds_F | M4A4 5.56 mm VFG (Black, IHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_IHO_F | M4A4 5.56 mm VFG (Black, IHO)
//    Weapon_JCA_arifle_M4A4_VFG_black_IHO_flashlight_F | M4A4 5.56 mm VFG (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_VFG_black_IHO_flashlight_snds_F | M4A4 5.56 mm VFG (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_IHO_laserModule_F | M4A4 5.56 mm VFG (Black, IHO, Laser)
//    Weapon_JCA_arifle_M4A4_VFG_black_IHO_laserModule_snds_F | M4A4 5.56 mm VFG (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_black_IHO_snds_F | M4A4 5.56 mm VFG (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AHO_DualMount_F | M4A4 5.56 mm VFG (Olive, AHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AHO_DualMount_snds_F | M4A4 5.56 mm VFG (Olive, AHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AHO_F | M4A4 5.56 mm VFG (Olive, AHO)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AHO_flashlight_F | M4A4 5.56 mm VFG (Olive, AHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AHO_flashlight_snds_F | M4A4 5.56 mm VFG (Olive, AHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AHO_laserModule_F | M4A4 5.56 mm VFG (Olive, AHO, Laser)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AHO_laserModule_snds_F | M4A4 5.56 mm VFG (Olive, AHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AHO_snds_F | M4A4 5.56 mm VFG (Olive, AHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AICO_DualMount_F | M4A4 5.56 mm VFG (Olive, AICO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AICO_DualMount_snds_F | M4A4 5.56 mm VFG (Olive, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AICO_F | M4A4 5.56 mm VFG (Olive, AICO)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AICO_flashlight_F | M4A4 5.56 mm VFG (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AICO_flashlight_snds_F | M4A4 5.56 mm VFG (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AICO_laserModule_F | M4A4 5.56 mm VFG (Olive, AICO, Laser)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AICO_laserModule_snds_F | M4A4 5.56 mm VFG (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_AICO_snds_F | M4A4 5.56 mm VFG (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_F | M4A4 5.56 mm VFG (Olive)
//    Weapon_JCA_arifle_M4A4_VFG_olive_IHO_DualMount_F | M4A4 5.56 mm VFG (Olive, IHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_VFG_olive_IHO_DualMount_snds_F | M4A4 5.56 mm VFG (Olive, IHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_IHO_F | M4A4 5.56 mm VFG (Olive, IHO)
//    Weapon_JCA_arifle_M4A4_VFG_olive_IHO_flashlight_F | M4A4 5.56 mm VFG (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_VFG_olive_IHO_flashlight_snds_F | M4A4 5.56 mm VFG (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_IHO_laserModule_F | M4A4 5.56 mm VFG (Olive, IHO, Laser)
//    Weapon_JCA_arifle_M4A4_VFG_olive_IHO_laserModule_snds_F | M4A4 5.56 mm VFG (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_olive_IHO_snds_F | M4A4 5.56 mm VFG (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AHO_DualMount_F | M4A4 5.56 mm VFG (Sand, AHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AHO_DualMount_snds_F | M4A4 5.56 mm VFG (Sand, AHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AHO_F | M4A4 5.56 mm VFG (Sand, AHO)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AHO_flashlight_F | M4A4 5.56 mm VFG (Sand, AHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AHO_flashlight_snds_F | M4A4 5.56 mm VFG (Sand, AHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AHO_laserModule_F | M4A4 5.56 mm VFG (Sand, AHO, Laser)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AHO_laserModule_snds_F | M4A4 5.56 mm VFG (Sand, AHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AHO_snds_F | M4A4 5.56 mm VFG (Sand, AHO, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AICO_DualMount_F | M4A4 5.56 mm VFG (Sand, AICO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AICO_DualMount_snds_F | M4A4 5.56 mm VFG (Sand, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AICO_F | M4A4 5.56 mm VFG (Sand, AICO)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AICO_flashlight_F | M4A4 5.56 mm VFG (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AICO_flashlight_snds_F | M4A4 5.56 mm VFG (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AICO_laserModule_F | M4A4 5.56 mm VFG (Sand, AICO, Laser)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AICO_laserModule_snds_F | M4A4 5.56 mm VFG (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_AICO_snds_F | M4A4 5.56 mm VFG (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_F | M4A4 5.56 mm VFG (Sand)
//    Weapon_JCA_arifle_M4A4_VFG_sand_IHO_DualMount_F | M4A4 5.56 mm VFG (Sand, IHO, Dual Mount)
//    Weapon_JCA_arifle_M4A4_VFG_sand_IHO_DualMount_snds_F | M4A4 5.56 mm VFG (Sand, IHO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_IHO_F | M4A4 5.56 mm VFG (Sand, IHO)
//    Weapon_JCA_arifle_M4A4_VFG_sand_IHO_flashlight_F | M4A4 5.56 mm VFG (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_M4A4_VFG_sand_IHO_flashlight_snds_F | M4A4 5.56 mm VFG (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_IHO_laserModule_F | M4A4 5.56 mm VFG (Sand, IHO, Laser)
//    Weapon_JCA_arifle_M4A4_VFG_sand_IHO_laserModule_snds_F | M4A4 5.56 mm VFG (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_M4A4_VFG_sand_IHO_snds_F | M4A4 5.56 mm VFG (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_black_AICO_F | FN SCAR-H 7.62 mm (Black, AICO)
//    Weapon_JCA_arifle_SCAR_H_black_AICO_flashlight_F | FN SCAR-H 7.62 mm (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_black_AICO_flashlight_snds_F | FN SCAR-H 7.62 mm (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_black_AICO_laserModule_F | FN SCAR-H 7.62 mm (Black, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_H_black_AICO_laserModule_snds_F | FN SCAR-H 7.62 mm (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_black_AICO_snds_F | FN SCAR-H 7.62 mm (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_black_CRBS_F | FN SCAR-H 7.62 mm (Black, CRBS)
//    Weapon_JCA_arifle_SCAR_H_black_CRBS_flashlight_F | FN SCAR-H 7.62 mm (Black, CRBS, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_black_CRBS_flashlight_snds_F | FN SCAR-H 7.62 mm (Black, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_black_CRBS_laserModule_F | FN SCAR-H 7.62 mm (Black, CRBS, Laser)
//    Weapon_JCA_arifle_SCAR_H_black_CRBS_laserModule_snds_F | FN SCAR-H 7.62 mm (Black, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_black_CRBS_snds_F | FN SCAR-H 7.62 mm (Black, CRBS, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_black_F | FN SCAR-H 7.62 mm (Black)
//    Weapon_JCA_arifle_SCAR_H_GL_black_AICO_F | FN SCAR-H 7.62 mm GL (Black, AICO)
//    Weapon_JCA_arifle_SCAR_H_GL_black_AICO_flashlight_F | FN SCAR-H 7.62 mm GL (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_GL_black_AICO_flashlight_snds_F | FN SCAR-H 7.62 mm GL (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_black_AICO_laserModule_F | FN SCAR-H 7.62 mm GL (Black, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_H_GL_black_AICO_laserModule_snds_F | FN SCAR-H 7.62 mm GL (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_black_AICO_snds_F | FN SCAR-H 7.62 mm GL (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_black_CRBS_F | FN SCAR-H 7.62 mm GL (Black, CRBS)
//    Weapon_JCA_arifle_SCAR_H_GL_black_CRBS_flashlight_F | FN SCAR-H 7.62 mm GL (Black, CRBS, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_GL_black_CRBS_flashlight_snds_F | FN SCAR-H 7.62 mm GL (Black, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_black_CRBS_laserModule_F | FN SCAR-H 7.62 mm GL (Black, CRBS, Laser)
//    Weapon_JCA_arifle_SCAR_H_GL_black_CRBS_laserModule_snds_F | FN SCAR-H 7.62 mm GL (Black, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_black_CRBS_snds_F | FN SCAR-H 7.62 mm GL (Black, CRBS, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_black_F | FN SCAR-H 7.62 mm GL (Black)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_AICO_F | FN SCAR-H 7.62 mm GL (Olive, AICO)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_AICO_flashlight_F | FN SCAR-H 7.62 mm GL (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_AICO_flashlight_snds_F | FN SCAR-H 7.62 mm GL (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_AICO_laserModule_F | FN SCAR-H 7.62 mm GL (Olive, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_AICO_laserModule_snds_F | FN SCAR-H 7.62 mm GL (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_AICO_snds_F | FN SCAR-H 7.62 mm GL (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_CRBS_F | FN SCAR-H 7.62 mm GL (Olive, CRBS)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_CRBS_flashlight_F | FN SCAR-H 7.62 mm GL (Olive, CRBS, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_CRBS_flashlight_snds_F | FN SCAR-H 7.62 mm GL (Olive, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_CRBS_laserModule_F | FN SCAR-H 7.62 mm GL (Olive, CRBS, Laser)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_CRBS_laserModule_snds_F | FN SCAR-H 7.62 mm GL (Olive, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_CRBS_snds_F | FN SCAR-H 7.62 mm GL (Olive, CRBS, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_olive_F | FN SCAR-H 7.62 mm GL (Olive)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_AICO_F | FN SCAR-H 7.62 mm GL (Sand, AICO)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_AICO_flashlight_F | FN SCAR-H 7.62 mm GL (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_AICO_flashlight_snds_F | FN SCAR-H 7.62 mm GL (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_AICO_laserModule_F | FN SCAR-H 7.62 mm GL (Sand, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_AICO_laserModule_snds_F | FN SCAR-H 7.62 mm GL (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_AICO_snds_F | FN SCAR-H 7.62 mm GL (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_CRBS_F | FN SCAR-H 7.62 mm GL (Sand, CRBS)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_CRBS_flashlight_F | FN SCAR-H 7.62 mm GL (Sand, CRBS, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_CRBS_flashlight_snds_F | FN SCAR-H 7.62 mm GL (Sand, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_CRBS_laserModule_F | FN SCAR-H 7.62 mm GL (Sand, CRBS, Laser)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_CRBS_laserModule_snds_F | FN SCAR-H 7.62 mm GL (Sand, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_CRBS_snds_F | FN SCAR-H 7.62 mm GL (Sand, CRBS, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_GL_sand_F | FN SCAR-H 7.62 mm GL (Sand)
//    Weapon_JCA_arifle_SCAR_H_olive_AICO_F | FN SCAR-H 7.62 mm (Olive, AICO)
//    Weapon_JCA_arifle_SCAR_H_olive_AICO_flashlight_F | FN SCAR-H 7.62 mm (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_olive_AICO_flashlight_snds_F | FN SCAR-H 7.62 mm (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_olive_AICO_laserModule_F | FN SCAR-H 7.62 mm (Olive, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_H_olive_AICO_laserModule_snds_F | FN SCAR-H 7.62 mm (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_olive_AICO_snds_F | FN SCAR-H 7.62 mm (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_olive_CRBS_F | FN SCAR-H 7.62 mm (Olive, CRBS)
//    Weapon_JCA_arifle_SCAR_H_olive_CRBS_flashlight_F | FN SCAR-H 7.62 mm (Olive, CRBS, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_olive_CRBS_flashlight_snds_F | FN SCAR-H 7.62 mm (Olive, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_olive_CRBS_laserModule_F | FN SCAR-H 7.62 mm (Olive, CRBS, Laser)
//    Weapon_JCA_arifle_SCAR_H_olive_CRBS_laserModule_snds_F | FN SCAR-H 7.62 mm (Olive, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_olive_CRBS_snds_F | FN SCAR-H 7.62 mm (Olive, CRBS, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_olive_F | FN SCAR-H 7.62 mm (Olive)
//    Weapon_JCA_arifle_SCAR_H_sand_AICO_F | FN SCAR-H 7.62 mm (Sand, AICO)
//    Weapon_JCA_arifle_SCAR_H_sand_AICO_flashlight_F | FN SCAR-H 7.62 mm (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_sand_AICO_flashlight_snds_F | FN SCAR-H 7.62 mm (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_sand_AICO_laserModule_F | FN SCAR-H 7.62 mm (Sand, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_H_sand_AICO_laserModule_snds_F | FN SCAR-H 7.62 mm (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_sand_AICO_snds_F | FN SCAR-H 7.62 mm (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_sand_CRBS_F | FN SCAR-H 7.62 mm (Sand, CRBS)
//    Weapon_JCA_arifle_SCAR_H_sand_CRBS_flashlight_F | FN SCAR-H 7.62 mm (Sand, CRBS, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_sand_CRBS_flashlight_snds_F | FN SCAR-H 7.62 mm (Sand, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_sand_CRBS_laserModule_F | FN SCAR-H 7.62 mm (Sand, CRBS, Laser)
//    Weapon_JCA_arifle_SCAR_H_sand_CRBS_laserModule_snds_F | FN SCAR-H 7.62 mm (Sand, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_sand_CRBS_snds_F | FN SCAR-H 7.62 mm (Sand, CRBS, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_sand_F | FN SCAR-H 7.62 mm (Sand)
//    Weapon_JCA_arifle_SCAR_H_short_black_AICO_F | FN SCAR-H 7.62 mm CQB (Black, AICO)
//    Weapon_JCA_arifle_SCAR_H_short_black_AICO_flashlight_F | FN SCAR-H 7.62 mm CQB (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_short_black_AICO_flashlight_snds_F | FN SCAR-H 7.62 mm CQB (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_black_AICO_laserModule_F | FN SCAR-H 7.62 mm CQB (Black, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_H_short_black_AICO_laserModule_snds_F | FN SCAR-H 7.62 mm CQB (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_black_AICO_snds_F | FN SCAR-H 7.62 mm CQB (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_black_CRBS_F | FN SCAR-H 7.62 mm CQB (Black, CRBS)
//    Weapon_JCA_arifle_SCAR_H_short_black_CRBS_flashlight_F | FN SCAR-H 7.62 mm CQB (Black, CRBS, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_short_black_CRBS_flashlight_snds_F | FN SCAR-H 7.62 mm CQB (Black, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_black_CRBS_laserModule_F | FN SCAR-H 7.62 mm CQB (Black, CRBS, Laser)
//    Weapon_JCA_arifle_SCAR_H_short_black_CRBS_laserModule_snds_F | FN SCAR-H 7.62 mm CQB (Black, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_black_CRBS_snds_F | FN SCAR-H 7.62 mm CQB (Black, CRBS, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_black_F | FN SCAR-H 7.62 mm CQB (Black)
//    Weapon_JCA_arifle_SCAR_H_short_olive_AICO_F | FN SCAR-H 7.62 mm CQB (Olive, AICO)
//    Weapon_JCA_arifle_SCAR_H_short_olive_AICO_flashlight_F | FN SCAR-H 7.62 mm CQB (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_short_olive_AICO_flashlight_snds_F | FN SCAR-H 7.62 mm CQB (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_olive_AICO_laserModule_F | FN SCAR-H 7.62 mm CQB (Olive, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_H_short_olive_AICO_laserModule_snds_F | FN SCAR-H 7.62 mm CQB (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_olive_AICO_snds_F | FN SCAR-H 7.62 mm CQB (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_olive_CRBS_F | FN SCAR-H 7.62 mm CQB (Olive, CRBS)
//    Weapon_JCA_arifle_SCAR_H_short_olive_CRBS_flashlight_F | FN SCAR-H 7.62 mm CQB (Olive, CRBS, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_short_olive_CRBS_flashlight_snds_F | FN SCAR-H 7.62 mm CQB (Olive, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_olive_CRBS_laserModule_F | FN SCAR-H 7.62 mm CQB (Olive, CRBS, Laser)
//    Weapon_JCA_arifle_SCAR_H_short_olive_CRBS_laserModule_snds_F | FN SCAR-H 7.62 mm CQB (Olive, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_olive_CRBS_snds_F | FN SCAR-H 7.62 mm CQB (Olive, CRBS, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_olive_F | FN SCAR-H 7.62 mm CQB (Olive)
//    Weapon_JCA_arifle_SCAR_H_short_sand_AICO_F | FN SCAR-H 7.62 mm CQB (Sand, AICO)
//    Weapon_JCA_arifle_SCAR_H_short_sand_AICO_flashlight_F | FN SCAR-H 7.62 mm CQB (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_short_sand_AICO_flashlight_snds_F | FN SCAR-H 7.62 mm CQB (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_sand_AICO_laserModule_F | FN SCAR-H 7.62 mm CQB (Sand, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_H_short_sand_AICO_laserModule_snds_F | FN SCAR-H 7.62 mm CQB (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_sand_AICO_snds_F | FN SCAR-H 7.62 mm CQB (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_sand_CRBS_F | FN SCAR-H 7.62 mm CQB (Sand, CRBS)
//    Weapon_JCA_arifle_SCAR_H_short_sand_CRBS_flashlight_F | FN SCAR-H 7.62 mm CQB (Sand, CRBS, Flashlight)
//    Weapon_JCA_arifle_SCAR_H_short_sand_CRBS_flashlight_snds_F | FN SCAR-H 7.62 mm CQB (Sand, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_sand_CRBS_laserModule_F | FN SCAR-H 7.62 mm CQB (Sand, CRBS, Laser)
//    Weapon_JCA_arifle_SCAR_H_short_sand_CRBS_laserModule_snds_F | FN SCAR-H 7.62 mm CQB (Sand, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_sand_CRBS_snds_F | FN SCAR-H 7.62 mm CQB (Sand, CRBS, Suppressor)
//    Weapon_JCA_arifle_SCAR_H_short_sand_F | FN SCAR-H 7.62 mm CQB (Sand)
//    Weapon_JCA_arifle_SCAR_L_black_AICO_F | FN SCAR-L 5.56 mm (Black, AICO)
//    Weapon_JCA_arifle_SCAR_L_black_AICO_flashlight_F | FN SCAR-L 5.56 mm (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_black_AICO_flashlight_snds_F | FN SCAR-L 5.56 mm (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_black_AICO_laserModule_F | FN SCAR-L 5.56 mm (Black, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_L_black_AICO_laserModule_snds_F | FN SCAR-L 5.56 mm (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_black_AICO_snds_F | FN SCAR-L 5.56 mm (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_black_F | FN SCAR-L 5.56 mm (Black)
//    Weapon_JCA_arifle_SCAR_L_black_IHO_F | FN SCAR-L 5.56 mm (Black, IHO)
//    Weapon_JCA_arifle_SCAR_L_black_IHO_flashlight_F | FN SCAR-L 5.56 mm (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_black_IHO_flashlight_snds_F | FN SCAR-L 5.56 mm (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_black_IHO_laserModule_F | FN SCAR-L 5.56 mm (Black, IHO, Laser)
//    Weapon_JCA_arifle_SCAR_L_black_IHO_laserModule_snds_F | FN SCAR-L 5.56 mm (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_black_IHO_snds_F | FN SCAR-L 5.56 mm (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_black_AICO_F | FN SCAR-L 5.56 mm GL (Black, AICO)
//    Weapon_JCA_arifle_SCAR_L_GL_black_AICO_flashlight_F | FN SCAR-L 5.56 mm GL (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_GL_black_AICO_flashlight_snds_F | FN SCAR-L 5.56 mm GL (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_black_AICO_laserModule_F | FN SCAR-L 5.56 mm GL (Black, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_L_GL_black_AICO_laserModule_snds_F | FN SCAR-L 5.56 mm GL (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_black_AICO_snds_F | FN SCAR-L 5.56 mm GL (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_black_F | FN SCAR-L 5.56 mm GL (Black)
//    Weapon_JCA_arifle_SCAR_L_GL_black_IHO_F | FN SCAR-L 5.56 mm GL (Black, IHO)
//    Weapon_JCA_arifle_SCAR_L_GL_black_IHO_flashlight_F | FN SCAR-L 5.56 mm GL (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_GL_black_IHO_flashlight_snds_F | FN SCAR-L 5.56 mm GL (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_black_IHO_laserModule_F | FN SCAR-L 5.56 mm GL (Black, IHO, Laser)
//    Weapon_JCA_arifle_SCAR_L_GL_black_IHO_laserModule_snds_F | FN SCAR-L 5.56 mm GL (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_black_IHO_snds_F | FN SCAR-L 5.56 mm GL (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_AICO_F | FN SCAR-L 5.56 mm GL (Olive, AICO)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_AICO_flashlight_F | FN SCAR-L 5.56 mm GL (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_AICO_flashlight_snds_F | FN SCAR-L 5.56 mm GL (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_AICO_laserModule_F | FN SCAR-L 5.56 mm GL (Olive, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_AICO_laserModule_snds_F | FN SCAR-L 5.56 mm GL (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_AICO_snds_F | FN SCAR-L 5.56 mm GL (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_F | FN SCAR-L 5.56 mm GL (Olive)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_IHO_F | FN SCAR-L 5.56 mm GL (Olive, IHO)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_IHO_flashlight_F | FN SCAR-L 5.56 mm GL (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_IHO_flashlight_snds_F | FN SCAR-L 5.56 mm GL (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_IHO_laserModule_F | FN SCAR-L 5.56 mm GL (Olive, IHO, Laser)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_IHO_laserModule_snds_F | FN SCAR-L 5.56 mm GL (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_olive_IHO_snds_F | FN SCAR-L 5.56 mm GL (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_AICO_F | FN SCAR-L 5.56 mm GL (Sand, AICO)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_AICO_flashlight_F | FN SCAR-L 5.56 mm GL (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_AICO_flashlight_snds_F | FN SCAR-L 5.56 mm GL (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_AICO_laserModule_F | FN SCAR-L 5.56 mm GL (Sand, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_AICO_laserModule_snds_F | FN SCAR-L 5.56 mm GL (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_AICO_snds_F | FN SCAR-L 5.56 mm GL (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_F | FN SCAR-L 5.56 mm GL (Sand)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_IHO_F | FN SCAR-L 5.56 mm GL (Sand, IHO)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_IHO_flashlight_F | FN SCAR-L 5.56 mm GL (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_IHO_flashlight_snds_F | FN SCAR-L 5.56 mm GL (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_IHO_laserModule_F | FN SCAR-L 5.56 mm GL (Sand, IHO, Laser)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_IHO_laserModule_snds_F | FN SCAR-L 5.56 mm GL (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_GL_sand_IHO_snds_F | FN SCAR-L 5.56 mm GL (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_olive_AICO_F | FN SCAR-L 5.56 mm (Olive, AICO)
//    Weapon_JCA_arifle_SCAR_L_olive_AICO_flashlight_F | FN SCAR-L 5.56 mm (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_olive_AICO_flashlight_snds_F | FN SCAR-L 5.56 mm (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_olive_AICO_laserModule_F | FN SCAR-L 5.56 mm (Olive, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_L_olive_AICO_laserModule_snds_F | FN SCAR-L 5.56 mm (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_olive_AICO_snds_F | FN SCAR-L 5.56 mm (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_olive_F | FN SCAR-L 5.56 mm (Olive)
//    Weapon_JCA_arifle_SCAR_L_olive_IHO_F | FN SCAR-L 5.56 mm (Olive, IHO)
//    Weapon_JCA_arifle_SCAR_L_olive_IHO_flashlight_F | FN SCAR-L 5.56 mm (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_olive_IHO_flashlight_snds_F | FN SCAR-L 5.56 mm (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_olive_IHO_laserModule_F | FN SCAR-L 5.56 mm (Olive, IHO, Laser)
//    Weapon_JCA_arifle_SCAR_L_olive_IHO_laserModule_snds_F | FN SCAR-L 5.56 mm (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_olive_IHO_snds_F | FN SCAR-L 5.56 mm (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_sand_AICO_F | FN SCAR-L 5.56 mm (Sand, AICO)
//    Weapon_JCA_arifle_SCAR_L_sand_AICO_flashlight_F | FN SCAR-L 5.56 mm (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_sand_AICO_flashlight_snds_F | FN SCAR-L 5.56 mm (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_sand_AICO_laserModule_F | FN SCAR-L 5.56 mm (Sand, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_L_sand_AICO_laserModule_snds_F | FN SCAR-L 5.56 mm (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_sand_AICO_snds_F | FN SCAR-L 5.56 mm (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_sand_F | FN SCAR-L 5.56 mm (Sand)
//    Weapon_JCA_arifle_SCAR_L_sand_IHO_F | FN SCAR-L 5.56 mm (Sand, IHO)
//    Weapon_JCA_arifle_SCAR_L_sand_IHO_flashlight_F | FN SCAR-L 5.56 mm (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_sand_IHO_flashlight_snds_F | FN SCAR-L 5.56 mm (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_sand_IHO_laserModule_F | FN SCAR-L 5.56 mm (Sand, IHO, Laser)
//    Weapon_JCA_arifle_SCAR_L_sand_IHO_laserModule_snds_F | FN SCAR-L 5.56 mm (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_sand_IHO_snds_F | FN SCAR-L 5.56 mm (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_black_AICO_F | FN SCAR-L 5.56 mm CQB (Black, AICO)
//    Weapon_JCA_arifle_SCAR_L_short_black_AICO_flashlight_F | FN SCAR-L 5.56 mm CQB (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_short_black_AICO_flashlight_snds_F | FN SCAR-L 5.56 mm CQB (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_black_AICO_laserModule_F | FN SCAR-L 5.56 mm CQB (Black, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_L_short_black_AICO_laserModule_snds_F | FN SCAR-L 5.56 mm CQB (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_black_AICO_snds_F | FN SCAR-L 5.56 mm CQB (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_black_F | FN SCAR-L 5.56 mm CQB (Black)
//    Weapon_JCA_arifle_SCAR_L_short_black_IHO_F | FN SCAR-L 5.56 mm CQB (Black, IHO)
//    Weapon_JCA_arifle_SCAR_L_short_black_IHO_flashlight_F | FN SCAR-L 5.56 mm CQB (Black, IHO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_short_black_IHO_flashlight_snds_F | FN SCAR-L 5.56 mm CQB (Black, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_black_IHO_laserModule_F | FN SCAR-L 5.56 mm CQB (Black, IHO, Laser)
//    Weapon_JCA_arifle_SCAR_L_short_black_IHO_laserModule_snds_F | FN SCAR-L 5.56 mm CQB (Black, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_black_IHO_snds_F | FN SCAR-L 5.56 mm CQB (Black, IHO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_olive_AICO_F | FN SCAR-L 5.56 mm CQB (Olive, AICO)
//    Weapon_JCA_arifle_SCAR_L_short_olive_AICO_flashlight_F | FN SCAR-L 5.56 mm CQB (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_short_olive_AICO_flashlight_snds_F | FN SCAR-L 5.56 mm CQB (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_olive_AICO_laserModule_F | FN SCAR-L 5.56 mm CQB (Olive, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_L_short_olive_AICO_laserModule_snds_F | FN SCAR-L 5.56 mm CQB (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_olive_AICO_snds_F | FN SCAR-L 5.56 mm CQB (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_olive_F | FN SCAR-L 5.56 mm CQB (Olive)
//    Weapon_JCA_arifle_SCAR_L_short_olive_IHO_F | FN SCAR-L 5.56 mm CQB (Olive, IHO)
//    Weapon_JCA_arifle_SCAR_L_short_olive_IHO_flashlight_F | FN SCAR-L 5.56 mm CQB (Olive, IHO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_short_olive_IHO_flashlight_snds_F | FN SCAR-L 5.56 mm CQB (Olive, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_olive_IHO_laserModule_F | FN SCAR-L 5.56 mm CQB (Olive, IHO, Laser)
//    Weapon_JCA_arifle_SCAR_L_short_olive_IHO_laserModule_snds_F | FN SCAR-L 5.56 mm CQB (Olive, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_olive_IHO_snds_F | FN SCAR-L 5.56 mm CQB (Olive, IHO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_sand_AICO_F | FN SCAR-L 5.56 mm CQB (Sand, AICO)
//    Weapon_JCA_arifle_SCAR_L_short_sand_AICO_flashlight_F | FN SCAR-L 5.56 mm CQB (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_short_sand_AICO_flashlight_snds_F | FN SCAR-L 5.56 mm CQB (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_sand_AICO_laserModule_F | FN SCAR-L 5.56 mm CQB (Sand, AICO, Laser)
//    Weapon_JCA_arifle_SCAR_L_short_sand_AICO_laserModule_snds_F | FN SCAR-L 5.56 mm CQB (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_sand_AICO_snds_F | FN SCAR-L 5.56 mm CQB (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_sand_F | FN SCAR-L 5.56 mm CQB (Sand)
//    Weapon_JCA_arifle_SCAR_L_short_sand_IHO_F | FN SCAR-L 5.56 mm CQB (Sand, IHO)
//    Weapon_JCA_arifle_SCAR_L_short_sand_IHO_flashlight_F | FN SCAR-L 5.56 mm CQB (Sand, IHO, Flashlight)
//    Weapon_JCA_arifle_SCAR_L_short_sand_IHO_flashlight_snds_F | FN SCAR-L 5.56 mm CQB (Sand, IHO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_sand_IHO_laserModule_F | FN SCAR-L 5.56 mm CQB (Sand, IHO, Laser)
//    Weapon_JCA_arifle_SCAR_L_short_sand_IHO_laserModule_snds_F | FN SCAR-L 5.56 mm CQB (Sand, IHO, Laser, Suppressor)
//    Weapon_JCA_arifle_SCAR_L_short_sand_IHO_snds_F | FN SCAR-L 5.56 mm CQB (Sand, IHO, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_AICO_DualMount_F | SR10 7.62 mm AFG (Black, AICO, Dual Mount)
//    Weapon_JCA_arifle_SR10_AFG_black_AICO_DualMount_snds_F | SR10 7.62 mm AFG (Black, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_AICO_F | SR10 7.62 mm AFG (Black, AICO)
//    Weapon_JCA_arifle_SR10_AFG_black_AICO_flashlight_F | SR10 7.62 mm AFG (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_SR10_AFG_black_AICO_flashlight_snds_F | SR10 7.62 mm AFG (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_AICO_laserModule_F | SR10 7.62 mm AFG (Black, AICO, Laser)
//    Weapon_JCA_arifle_SR10_AFG_black_AICO_laserModule_snds_F | SR10 7.62 mm AFG (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_AICO_snds_F | SR10 7.62 mm AFG (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_CRBS_DualMount_F | SR10 7.62 mm AFG (Black, CRBS, Dual Mount)
//    Weapon_JCA_arifle_SR10_AFG_black_CRBS_DualMount_snds_F | SR10 7.62 mm AFG (Black, CRBS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_CRBS_F | SR10 7.62 mm AFG (Black, CRBS)
//    Weapon_JCA_arifle_SR10_AFG_black_CRBS_flashlight_F | SR10 7.62 mm AFG (Black, CRBS, Flashlight)
//    Weapon_JCA_arifle_SR10_AFG_black_CRBS_flashlight_snds_F | SR10 7.62 mm AFG (Black, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_CRBS_laserModule_F | SR10 7.62 mm AFG (Black, CRBS, Laser)
//    Weapon_JCA_arifle_SR10_AFG_black_CRBS_laserModule_snds_F | SR10 7.62 mm AFG (Black, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_CRBS_snds_F | SR10 7.62 mm AFG (Black, CRBS, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_F | SR10 7.62 mm AFG (Black)
//    Weapon_JCA_arifle_SR10_AFG_black_MRPS_DualMount_F | SR10 7.62 mm AFG (Black, MRPS, Dual Mount)
//    Weapon_JCA_arifle_SR10_AFG_black_MRPS_DualMount_snds_F | SR10 7.62 mm AFG (Black, MRPS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_MRPS_F | SR10 7.62 mm AFG (Black, MRPS)
//    Weapon_JCA_arifle_SR10_AFG_black_MRPS_flashlight_F | SR10 7.62 mm AFG (Black, MRPS, Flashlight)
//    Weapon_JCA_arifle_SR10_AFG_black_MRPS_flashlight_snds_F | SR10 7.62 mm AFG (Black, MRPS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_MRPS_laserModule_F | SR10 7.62 mm AFG (Black, MRPS, Laser)
//    Weapon_JCA_arifle_SR10_AFG_black_MRPS_laserModule_snds_F | SR10 7.62 mm AFG (Black, MRPS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_black_MRPS_snds_F | SR10 7.62 mm AFG (Black, MRPS, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_AICO_DualMount_F | SR10 7.62 mm AFG (Olive, AICO, Dual Mount)
//    Weapon_JCA_arifle_SR10_AFG_olive_AICO_DualMount_snds_F | SR10 7.62 mm AFG (Olive, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_AICO_F | SR10 7.62 mm AFG (Olive, AICO)
//    Weapon_JCA_arifle_SR10_AFG_olive_AICO_flashlight_F | SR10 7.62 mm AFG (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_SR10_AFG_olive_AICO_flashlight_snds_F | SR10 7.62 mm AFG (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_AICO_laserModule_F | SR10 7.62 mm AFG (Olive, AICO, Laser)
//    Weapon_JCA_arifle_SR10_AFG_olive_AICO_laserModule_snds_F | SR10 7.62 mm AFG (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_AICO_snds_F | SR10 7.62 mm AFG (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_CRBS_DualMount_F | SR10 7.62 mm AFG (Olive, CRBS, Dual Mount)
//    Weapon_JCA_arifle_SR10_AFG_olive_CRBS_DualMount_snds_F | SR10 7.62 mm AFG (Olive, CRBS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_CRBS_F | SR10 7.62 mm AFG (Olive, CRBS)
//    Weapon_JCA_arifle_SR10_AFG_olive_CRBS_flashlight_F | SR10 7.62 mm AFG (Olive, CRBS, Flashlight)
//    Weapon_JCA_arifle_SR10_AFG_olive_CRBS_flashlight_snds_F | SR10 7.62 mm AFG (Olive, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_CRBS_laserModule_F | SR10 7.62 mm AFG (Olive, CRBS, Laser)
//    Weapon_JCA_arifle_SR10_AFG_olive_CRBS_laserModule_snds_F | SR10 7.62 mm AFG (Olive, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_CRBS_snds_F | SR10 7.62 mm AFG (Olive, CRBS, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_F | SR10 7.62 mm AFG (Olive)
//    Weapon_JCA_arifle_SR10_AFG_olive_MRPS_DualMount_F | SR10 7.62 mm AFG (Olive, MRPS, Dual Mount)
//    Weapon_JCA_arifle_SR10_AFG_olive_MRPS_DualMount_snds_F | SR10 7.62 mm AFG (Olive, MRPS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_MRPS_F | SR10 7.62 mm AFG (Olive, MRPS)
//    Weapon_JCA_arifle_SR10_AFG_olive_MRPS_flashlight_F | SR10 7.62 mm AFG (Olive, MRPS, Flashlight)
//    Weapon_JCA_arifle_SR10_AFG_olive_MRPS_flashlight_snds_F | SR10 7.62 mm AFG (Olive, MRPS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_MRPS_laserModule_F | SR10 7.62 mm AFG (Olive, MRPS, Laser)
//    Weapon_JCA_arifle_SR10_AFG_olive_MRPS_laserModule_snds_F | SR10 7.62 mm AFG (Olive, MRPS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_olive_MRPS_snds_F | SR10 7.62 mm AFG (Olive, MRPS, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_AICO_DualMount_F | SR10 7.62 mm AFG (Sand, AICO, Dual Mount)
//    Weapon_JCA_arifle_SR10_AFG_sand_AICO_DualMount_snds_F | SR10 7.62 mm AFG (Sand, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_AICO_F | SR10 7.62 mm AFG (Sand, AICO)
//    Weapon_JCA_arifle_SR10_AFG_sand_AICO_flashlight_F | SR10 7.62 mm AFG (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_SR10_AFG_sand_AICO_flashlight_snds_F | SR10 7.62 mm AFG (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_AICO_laserModule_F | SR10 7.62 mm AFG (Sand, AICO, Laser)
//    Weapon_JCA_arifle_SR10_AFG_sand_AICO_laserModule_snds_F | SR10 7.62 mm AFG (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_AICO_snds_F | SR10 7.62 mm AFG (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_CRBS_DualMount_F | SR10 7.62 mm AFG (Sand, CRBS, Dual Mount)
//    Weapon_JCA_arifle_SR10_AFG_sand_CRBS_DualMount_snds_F | SR10 7.62 mm AFG (Sand, CRBS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_CRBS_F | SR10 7.62 mm AFG (Sand, CRBS)
//    Weapon_JCA_arifle_SR10_AFG_sand_CRBS_flashlight_F | SR10 7.62 mm AFG (Sand, CRBS, Flashlight)
//    Weapon_JCA_arifle_SR10_AFG_sand_CRBS_flashlight_snds_F | SR10 7.62 mm AFG (Sand, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_CRBS_laserModule_F | SR10 7.62 mm AFG (Sand, CRBS, Laser)
//    Weapon_JCA_arifle_SR10_AFG_sand_CRBS_laserModule_snds_F | SR10 7.62 mm AFG (Sand, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_CRBS_snds_F | SR10 7.62 mm AFG (Sand, CRBS, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_F | SR10 7.62 mm AFG (Sand)
//    Weapon_JCA_arifle_SR10_AFG_sand_MRPS_DualMount_F | SR10 7.62 mm AFG (Sand, MRPS, Dual Mount)
//    Weapon_JCA_arifle_SR10_AFG_sand_MRPS_DualMount_snds_F | SR10 7.62 mm AFG (Sand, MRPS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_MRPS_F | SR10 7.62 mm AFG (Sand, MRPS)
//    Weapon_JCA_arifle_SR10_AFG_sand_MRPS_flashlight_F | SR10 7.62 mm AFG (Sand, MRPS, Flashlight)
//    Weapon_JCA_arifle_SR10_AFG_sand_MRPS_flashlight_snds_F | SR10 7.62 mm AFG (Sand, MRPS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_MRPS_laserModule_F | SR10 7.62 mm AFG (Sand, MRPS, Laser)
//    Weapon_JCA_arifle_SR10_AFG_sand_MRPS_laserModule_snds_F | SR10 7.62 mm AFG (Sand, MRPS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_AFG_sand_MRPS_snds_F | SR10 7.62 mm AFG (Sand, MRPS, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_AICO_DualMount_F | SR10 7.62 mm VFG (Black, AICO, Dual Mount)
//    Weapon_JCA_arifle_SR10_VFG_black_AICO_DualMount_snds_F | SR10 7.62 mm VFG (Black, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_AICO_F | SR10 7.62 mm VFG (Black, AICO)
//    Weapon_JCA_arifle_SR10_VFG_black_AICO_flashlight_F | SR10 7.62 mm VFG (Black, AICO, Flashlight)
//    Weapon_JCA_arifle_SR10_VFG_black_AICO_flashlight_snds_F | SR10 7.62 mm VFG (Black, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_AICO_laserModule_F | SR10 7.62 mm VFG (Black, AICO, Laser)
//    Weapon_JCA_arifle_SR10_VFG_black_AICO_laserModule_snds_F | SR10 7.62 mm VFG (Black, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_AICO_snds_F | SR10 7.62 mm VFG (Black, AICO, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_CRBS_DualMount_F | SR10 7.62 mm VFG (Black, CRBS, Dual Mount)
//    Weapon_JCA_arifle_SR10_VFG_black_CRBS_DualMount_snds_F | SR10 7.62 mm VFG (Black, CRBS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_CRBS_F | SR10 7.62 mm VFG (Black, CRBS)
//    Weapon_JCA_arifle_SR10_VFG_black_CRBS_flashlight_F | SR10 7.62 mm VFG (Black, CRBS, Flashlight)
//    Weapon_JCA_arifle_SR10_VFG_black_CRBS_flashlight_snds_F | SR10 7.62 mm VFG (Black, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_CRBS_laserModule_F | SR10 7.62 mm VFG (Black, CRBS, Laser)
//    Weapon_JCA_arifle_SR10_VFG_black_CRBS_laserModule_snds_F | SR10 7.62 mm VFG (Black, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_CRBS_snds_F | SR10 7.62 mm VFG (Black, CRBS, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_F | SR10 7.62 mm VFG (Black)
//    Weapon_JCA_arifle_SR10_VFG_black_MRPS_DualMount_F | SR10 7.62 mm VFG (Black, MRPS, Dual Mount)
//    Weapon_JCA_arifle_SR10_VFG_black_MRPS_DualMount_snds_F | SR10 7.62 mm VFG (Black, MRPS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_MRPS_F | SR10 7.62 mm VFG (Black, MRPS)
//    Weapon_JCA_arifle_SR10_VFG_black_MRPS_flashlight_F | SR10 7.62 mm VFG (Black, MRPS, Flashlight)
//    Weapon_JCA_arifle_SR10_VFG_black_MRPS_flashlight_snds_F | SR10 7.62 mm VFG (Black, MRPS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_MRPS_laserModule_F | SR10 7.62 mm VFG (Black, MRPS, Laser)
//    Weapon_JCA_arifle_SR10_VFG_black_MRPS_laserModule_snds_F | SR10 7.62 mm VFG (Black, MRPS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_black_MRPS_snds_F | SR10 7.62 mm VFG (Black, MRPS, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_AICO_DualMount_F | SR10 7.62 mm VFG (Olive, AICO, Dual Mount)
//    Weapon_JCA_arifle_SR10_VFG_olive_AICO_DualMount_snds_F | SR10 7.62 mm VFG (Olive, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_AICO_F | SR10 7.62 mm VFG (Olive, AICO)
//    Weapon_JCA_arifle_SR10_VFG_olive_AICO_flashlight_F | SR10 7.62 mm VFG (Olive, AICO, Flashlight)
//    Weapon_JCA_arifle_SR10_VFG_olive_AICO_flashlight_snds_F | SR10 7.62 mm VFG (Olive, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_AICO_laserModule_F | SR10 7.62 mm VFG (Olive, AICO, Laser)
//    Weapon_JCA_arifle_SR10_VFG_olive_AICO_laserModule_snds_F | SR10 7.62 mm VFG (Olive, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_AICO_snds_F | SR10 7.62 mm VFG (Olive, AICO, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_CRBS_DualMount_F | SR10 7.62 mm VFG (Olive, CRBS, Dual Mount)
//    Weapon_JCA_arifle_SR10_VFG_olive_CRBS_DualMount_snds_F | SR10 7.62 mm VFG (Olive, CRBS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_CRBS_F | SR10 7.62 mm VFG (Olive, CRBS)
//    Weapon_JCA_arifle_SR10_VFG_olive_CRBS_flashlight_F | SR10 7.62 mm VFG (Olive, CRBS, Flashlight)
//    Weapon_JCA_arifle_SR10_VFG_olive_CRBS_flashlight_snds_F | SR10 7.62 mm VFG (Olive, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_CRBS_laserModule_F | SR10 7.62 mm VFG (Olive, CRBS, Laser)
//    Weapon_JCA_arifle_SR10_VFG_olive_CRBS_laserModule_snds_F | SR10 7.62 mm VFG (Olive, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_CRBS_snds_F | SR10 7.62 mm VFG (Olive, CRBS, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_F | SR10 7.62 mm VFG (Olive)
//    Weapon_JCA_arifle_SR10_VFG_olive_MRPS_DualMount_F | SR10 7.62 mm VFG (Olive, MRPS, Dual Mount)
//    Weapon_JCA_arifle_SR10_VFG_olive_MRPS_DualMount_snds_F | SR10 7.62 mm VFG (Olive, MRPS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_MRPS_F | SR10 7.62 mm VFG (Olive, MRPS)
//    Weapon_JCA_arifle_SR10_VFG_olive_MRPS_flashlight_F | SR10 7.62 mm VFG (Olive, MRPS, Flashlight)
//    Weapon_JCA_arifle_SR10_VFG_olive_MRPS_flashlight_snds_F | SR10 7.62 mm VFG (Olive, MRPS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_MRPS_laserModule_F | SR10 7.62 mm VFG (Olive, MRPS, Laser)
//    Weapon_JCA_arifle_SR10_VFG_olive_MRPS_laserModule_snds_F | SR10 7.62 mm VFG (Olive, MRPS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_olive_MRPS_snds_F | SR10 7.62 mm VFG (Olive, MRPS, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_AICO_DualMount_F | SR10 7.62 mm VFG (Sand, AICO, Dual Mount)
//    Weapon_JCA_arifle_SR10_VFG_sand_AICO_DualMount_snds_F | SR10 7.62 mm VFG (Sand, AICO, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_AICO_F | SR10 7.62 mm VFG (Sand, AICO)
//    Weapon_JCA_arifle_SR10_VFG_sand_AICO_flashlight_F | SR10 7.62 mm VFG (Sand, AICO, Flashlight)
//    Weapon_JCA_arifle_SR10_VFG_sand_AICO_flashlight_snds_F | SR10 7.62 mm VFG (Sand, AICO, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_AICO_laserModule_F | SR10 7.62 mm VFG (Sand, AICO, Laser)
//    Weapon_JCA_arifle_SR10_VFG_sand_AICO_laserModule_snds_F | SR10 7.62 mm VFG (Sand, AICO, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_AICO_snds_F | SR10 7.62 mm VFG (Sand, AICO, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_CRBS_DualMount_F | SR10 7.62 mm VFG (Sand, CRBS, Dual Mount)
//    Weapon_JCA_arifle_SR10_VFG_sand_CRBS_DualMount_snds_F | SR10 7.62 mm VFG (Sand, CRBS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_CRBS_F | SR10 7.62 mm VFG (Sand, CRBS)
//    Weapon_JCA_arifle_SR10_VFG_sand_CRBS_flashlight_F | SR10 7.62 mm VFG (Sand, CRBS, Flashlight)
//    Weapon_JCA_arifle_SR10_VFG_sand_CRBS_flashlight_snds_F | SR10 7.62 mm VFG (Sand, CRBS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_CRBS_laserModule_F | SR10 7.62 mm VFG (Sand, CRBS, Laser)
//    Weapon_JCA_arifle_SR10_VFG_sand_CRBS_laserModule_snds_F | SR10 7.62 mm VFG (Sand, CRBS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_CRBS_snds_F | SR10 7.62 mm VFG (Sand, CRBS, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_F | SR10 7.62 mm VFG (Sand)
//    Weapon_JCA_arifle_SR10_VFG_sand_MRPS_DualMount_F | SR10 7.62 mm VFG (Sand, MRPS, Dual Mount)
//    Weapon_JCA_arifle_SR10_VFG_sand_MRPS_DualMount_snds_F | SR10 7.62 mm VFG (Sand, MRPS, Dual Mount, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_MRPS_F | SR10 7.62 mm VFG (Sand, MRPS)
//    Weapon_JCA_arifle_SR10_VFG_sand_MRPS_flashlight_F | SR10 7.62 mm VFG (Sand, MRPS, Flashlight)
//    Weapon_JCA_arifle_SR10_VFG_sand_MRPS_flashlight_snds_F | SR10 7.62 mm VFG (Sand, MRPS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_MRPS_laserModule_F | SR10 7.62 mm VFG (Sand, MRPS, Laser)
//    Weapon_JCA_arifle_SR10_VFG_sand_MRPS_laserModule_snds_F | SR10 7.62 mm VFG (Sand, MRPS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR10_VFG_sand_MRPS_snds_F | SR10 7.62 mm VFG (Sand, MRPS, Suppressor)
//    Weapon_JCA_arifle_SR25_black_ACOG_F | Mk11 7.62 mm (Black, ACOG)
//    Weapon_JCA_arifle_SR25_black_ACOG_flashlight_F | Mk11 7.62 mm (Black, ACOG, Flashlight)
//    Weapon_JCA_arifle_SR25_black_ACOG_flashlight_snds_F | Mk11 7.62 mm (Black, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR25_black_ACOG_laserModule_F | Mk11 7.62 mm (Black, ACOG, Laser)
//    Weapon_JCA_arifle_SR25_black_ACOG_laserModule_snds_F | Mk11 7.62 mm (Black, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_SR25_black_ACOG_snds_F | Mk11 7.62 mm (Black, ACOG, Suppressor)
//    Weapon_JCA_arifle_SR25_black_F | Mk11 7.62 mm (Black)
//    Weapon_JCA_arifle_SR25_black_MRPS_F | Mk11 7.62 mm (Black, MRPS)
//    Weapon_JCA_arifle_SR25_black_MRPS_flashlight_F | Mk11 7.62 mm (Black, MRPS, Flashlight)
//    Weapon_JCA_arifle_SR25_black_MRPS_flashlight_snds_F | Mk11 7.62 mm (Black, MRPS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR25_black_MRPS_laserModule_F | Mk11 7.62 mm (Black, MRPS, Laser)
//    Weapon_JCA_arifle_SR25_black_MRPS_laserModule_snds_F | Mk11 7.62 mm (Black, MRPS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR25_black_MRPS_snds_F | Mk11 7.62 mm (Black, MRPS, Suppressor)
//    Weapon_JCA_arifle_SR25_olive_ACOG_F | Mk11 7.62 mm (Olive, ACOG)
//    Weapon_JCA_arifle_SR25_olive_ACOG_flashlight_F | Mk11 7.62 mm (Olive, ACOG, Flashlight)
//    Weapon_JCA_arifle_SR25_olive_ACOG_flashlight_snds_F | Mk11 7.62 mm (Olive, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR25_olive_ACOG_laserModule_F | Mk11 7.62 mm (Olive, ACOG, Laser)
//    Weapon_JCA_arifle_SR25_olive_ACOG_laserModule_snds_F | Mk11 7.62 mm (Olive, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_SR25_olive_ACOG_snds_F | Mk11 7.62 mm (Olive, ACOG, Suppressor)
//    Weapon_JCA_arifle_SR25_olive_F | Mk11 7.62 mm (Olive)
//    Weapon_JCA_arifle_SR25_olive_MRPS_F | Mk11 7.62 mm (Olive, MRPS)
//    Weapon_JCA_arifle_SR25_olive_MRPS_flashlight_F | Mk11 7.62 mm (Olive, MRPS, Flashlight)
//    Weapon_JCA_arifle_SR25_olive_MRPS_flashlight_snds_F | Mk11 7.62 mm (Olive, MRPS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR25_olive_MRPS_laserModule_F | Mk11 7.62 mm (Olive, MRPS, Laser)
//    Weapon_JCA_arifle_SR25_olive_MRPS_laserModule_snds_F | Mk11 7.62 mm (Olive, MRPS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR25_olive_MRPS_snds_F | Mk11 7.62 mm (Olive, MRPS, Suppressor)
//    Weapon_JCA_arifle_SR25_sand_ACOG_F | Mk11 7.62 mm (Sand, ACOG)
//    Weapon_JCA_arifle_SR25_sand_ACOG_flashlight_F | Mk11 7.62 mm (Sand, ACOG, Flashlight)
//    Weapon_JCA_arifle_SR25_sand_ACOG_flashlight_snds_F | Mk11 7.62 mm (Sand, ACOG, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR25_sand_ACOG_laserModule_F | Mk11 7.62 mm (Sand, ACOG, Laser)
//    Weapon_JCA_arifle_SR25_sand_ACOG_laserModule_snds_F | Mk11 7.62 mm (Sand, ACOG, Laser, Suppressor)
//    Weapon_JCA_arifle_SR25_sand_ACOG_snds_F | Mk11 7.62 mm (Sand, ACOG, Suppressor)
//    Weapon_JCA_arifle_SR25_sand_F | Mk11 7.62 mm (Sand)
//    Weapon_JCA_arifle_SR25_sand_MRPS_F | Mk11 7.62 mm (Sand, MRPS)
//    Weapon_JCA_arifle_SR25_sand_MRPS_flashlight_F | Mk11 7.62 mm (Sand, MRPS, Flashlight)
//    Weapon_JCA_arifle_SR25_sand_MRPS_flashlight_snds_F | Mk11 7.62 mm (Sand, MRPS, Flashlight, Suppressor)
//    Weapon_JCA_arifle_SR25_sand_MRPS_laserModule_F | Mk11 7.62 mm (Sand, MRPS, Laser)
//    Weapon_JCA_arifle_SR25_sand_MRPS_laserModule_snds_F | Mk11 7.62 mm (Sand, MRPS, Laser, Suppressor)
//    Weapon_JCA_arifle_SR25_sand_MRPS_snds_F | Mk11 7.62 mm (Sand, MRPS, Suppressor)
//    Weapon_JCA_smg_MP5_AFG_black_F | MP5A5 9 mm AFG (Black)
//    Weapon_JCA_smg_MP5_AFG_black_ROS_F | MP5A5 9 mm AFG (Black, ROS)
//    Weapon_JCA_smg_MP5_AFG_black_ROS_snds_F | MP5A5 9 mm AFG (Black, ROS, Suppressor)
//    Weapon_JCA_smg_MP5_AFG_olive_F | MP5A5 9 mm AFG (Olive)
//    Weapon_JCA_smg_MP5_AFG_olive_ROS_F | MP5A5 9 mm AFG (Olive, ROS)
//    Weapon_JCA_smg_MP5_AFG_olive_ROS_snds_F | MP5A5 9 mm AFG (Olive, ROS, Suppressor)
//    Weapon_JCA_smg_MP5_AFG_sand_F | MP5A5 9 mm AFG (Sand)
//    Weapon_JCA_smg_MP5_AFG_sand_ROS_F | MP5A5 9 mm AFG (Sand, ROS)
//    Weapon_JCA_smg_MP5_AFG_sand_ROS_snds_F | MP5A5 9 mm AFG (Sand, ROS, Suppressor)
//    Weapon_JCA_smg_MP5_FL_black_F | MP5A5 9 mm (Black)
//    Weapon_JCA_smg_MP5_FL_black_ROS_F | MP5A5 9 mm (Black, ROS)
//    Weapon_JCA_smg_MP5_FL_black_ROS_snds_F | MP5A5 9 mm (Black, ROS, Suppressor)
//    Weapon_JCA_smg_MP5_FL_olive_F | MP5A5 9 mm (Olive)
//    Weapon_JCA_smg_MP5_FL_olive_ROS_F | MP5A5 9 mm (Olive, ROS)
//    Weapon_JCA_smg_MP5_FL_olive_ROS_snds_F | MP5A5 9 mm (Olive, ROS, Suppressor)
//    Weapon_JCA_smg_MP5_FL_sand_F | MP5A5 9 mm (Sand)
//    Weapon_JCA_smg_MP5_FL_sand_ROS_F | MP5A5 9 mm (Sand, ROS)
//    Weapon_JCA_smg_MP5_FL_sand_ROS_snds_F | MP5A5 9 mm (Sand, ROS, Suppressor)
//    Weapon_JCA_smg_MP5_VFG_black_F | MP5A5 9 mm VFG (Black)
//    Weapon_JCA_smg_MP5_VFG_black_ROS_F | MP5A5 9 mm VFG (Black, ROS)
//    Weapon_JCA_smg_MP5_VFG_black_ROS_snds_F | MP5A5 9 mm VFG (Black, ROS, Suppressor)
//    Weapon_JCA_smg_MP5_VFG_olive_F | MP5A5 9 mm VFG (Olive)
//    Weapon_JCA_smg_MP5_VFG_olive_ROS_F | MP5A5 9 mm VFG (Olive, ROS)
//    Weapon_JCA_smg_MP5_VFG_olive_ROS_snds_F | MP5A5 9 mm VFG (Olive, ROS, Suppressor)
//    Weapon_JCA_smg_MP5_VFG_sand_F | MP5A5 9 mm VFG (Sand)
//    Weapon_JCA_smg_MP5_VFG_sand_ROS_F | MP5A5 9 mm VFG (Sand, ROS)
//    Weapon_JCA_smg_MP5_VFG_sand_ROS_snds_F | MP5A5 9 mm VFG (Sand, ROS, Suppressor)
//    Weapon_JCA_smg_UMP_AFG_black_F | UMP .45 ACP AFG (Black)
//    Weapon_JCA_smg_UMP_AFG_black_MROS_F | UMP .45 ACP AFG (Black, MROS)
//    Weapon_JCA_smg_UMP_AFG_black_MROS_snds_F | UMP .45 ACP AFG (Black, MROS, Suppressor)
//    Weapon_JCA_smg_UMP_AFG_olive_F | UMP .45 ACP AFG (Olive)
//    Weapon_JCA_smg_UMP_AFG_olive_MROS_F | UMP .45 ACP AFG (Olive, MROS)
//    Weapon_JCA_smg_UMP_AFG_olive_MROS_snds_F | UMP .45 ACP AFG (Olive, MROS, Suppressor)
//    Weapon_JCA_smg_UMP_AFG_sand_F | UMP .45 ACP AFG (Sand)
//    Weapon_JCA_smg_UMP_AFG_sand_MROS_F | UMP .45 ACP AFG (Sand, MROS)
//    Weapon_JCA_smg_UMP_AFG_sand_MROS_snds_F | UMP .45 ACP AFG (Sand, MROS, Suppressor)
//    Weapon_JCA_smg_UMP_black_F | UMP .45 ACP (Black)
//    Weapon_JCA_smg_UMP_black_MROS_F | UMP .45 ACP (Black, MROS)
//    Weapon_JCA_smg_UMP_black_MROS_snds_F | UMP .45 ACP (Black, MROS, Suppressor)
//    Weapon_JCA_smg_UMP_olive_F | UMP .45 ACP (Olive)
//    Weapon_JCA_smg_UMP_olive_MROS_F | UMP .45 ACP (Olive, MROS)
//    Weapon_JCA_smg_UMP_olive_MROS_snds_F | UMP .45 ACP (Olive, MROS, Suppressor)
//    Weapon_JCA_smg_UMP_sand_F | UMP .45 ACP (Sand)
//    Weapon_JCA_smg_UMP_sand_MROS_F | UMP .45 ACP (Sand, MROS)
//    Weapon_JCA_smg_UMP_sand_MROS_snds_F | UMP .45 ACP (Sand, MROS, Suppressor)
//    Weapon_JCA_smg_UMP_VFG_black_F | UMP .45 ACP VFG (Black)
//    Weapon_JCA_smg_UMP_VFG_black_MROS_F | UMP .45 ACP VFG (Black, MROS)
//    Weapon_JCA_smg_UMP_VFG_black_MROS_snds_F | UMP .45 ACP VFG (Black, MROS, Suppressor)
//    Weapon_JCA_smg_UMP_VFG_olive_F | UMP .45 ACP VFG (Olive)
//    Weapon_JCA_smg_UMP_VFG_olive_MROS_F | UMP .45 ACP VFG (Olive, MROS)
//    Weapon_JCA_smg_UMP_VFG_olive_MROS_snds_F | UMP .45 ACP VFG (Olive, MROS, Suppressor)
//    Weapon_JCA_smg_UMP_VFG_sand_F | UMP .45 ACP VFG (Sand)
//    Weapon_JCA_smg_UMP_VFG_sand_MROS_F | UMP .45 ACP VFG (Sand, MROS)
//    Weapon_JCA_smg_UMP_VFG_sand_MROS_snds_F | UMP .45 ACP VFG (Sand, MROS, Suppressor)
//
// -- Animals (13) --
//    Dromedary_01_lxWS | Dromedary (Brown)
//    Dromedary_01_saddle2_lxWS | Dromedary (Saddle, Brown, v2)
//    Dromedary_01_saddle_lxWS | Dromedary (Saddle, Brown, v1)
//    Dromedary_02_lxWS | Dromedary (White)
//    Dromedary_02_saddle2_lxWS | Dromedary (Saddle, White, v2)
//    Dromedary_02_saddle_lxWS | Dromedary (Saddle, White, v1)
//    Dromedary_03_lxWS | Dromedary (Piebald)
//    Dromedary_03_saddle2_lxWS | Dromedary (Saddle, Piebald, v2)
//    Dromedary_03_saddle_lxWS | Dromedary (Saddle, Piebald, v1)
//    Dromedary_04_lxWS | Dromedary (Dark)
//    Dromedary_04_saddle2_lxWS | Dromedary (Saddle, Dark, v2)
//    Dromedary_04_saddle_lxWS | Dromedary (Saddle, Dark, v1)
//    Rabbit_F | Rabbit
//
// -- Backpacks (265) --
//    ace_gunbag | Gunbag
//    ace_gunbag_Tan | Gunbag (Tan)
//    ACE_NonSteerableParachute | Non-Steerable Parachute
//    ACE_TacticalLadder_Pack | Telescopic Ladder
//    Aegis_B_AssaultPackSpec_des_lxWS | Assault Pack (MCU-D, Enhanced)
//    Aegis_B_patrolBackpack_aaf_F | Patrol Pack [AAF]
//    Aegis_B_patrolBackpack_blk_F | Patrol Pack (Black)
//    Aegis_B_patrolBackpack_cbr_F | Patrol Pack (Coyote)
//    Aegis_B_patrolBackpack_dhex_F | Patrol Pack (Desert Hex)
//    Aegis_B_patrolBackpack_eaf_F | Patrol Pack (Geometric)
//    Aegis_B_patrolBackpack_ghex_F | Patrol Pack (Green Hex)
//    Aegis_B_patrolBackpack_grn_F | Patrol Pack (Green)
//    Aegis_B_patrolBackpack_hex_F | Patrol Pack (Hex)
//    Aegis_B_patrolBackpack_khk_F | Patrol Pack (Khaki)
//    Aegis_B_patrolBackpack_mcamo_F | Patrol Pack (OCP)
//    Aegis_B_patrolBackpack_mcu_F | Patrol Pack (MCU-D)
//    Aegis_B_patrolBackpack_oli_F | Patrol Pack (Olive)
//    Aegis_B_patrolBackpack_RUarid_F | Patrol Pack (Arid)
//    Aegis_B_patrolBackpack_RUtaiga_F | Patrol Pack (Taiga)
//    Aegis_B_patrolBackpack_tna_F | Patrol Pack (MTP-T)
//    Aegis_B_patrolBackpack_uhex_F | Patrol Pack (Urban Hex)
//    Aegis_B_patrolBackpack_wdl_F | Patrol Pack (MTP-W)
//    Aegis_B_RadioBag_01_des_lxWS | Radio Pack (MCU-D)
//    Atlas_B_patrolBackpack_aucamo_F | Patrol Pack [ADF]
//    Atlas_B_patrolBackpack_flk_F | Patrol Pack (Flecktarn)
//    Atlas_B_patrolBackpack_m81_F | Patrol Pack (M81)
//    Atlas_B_patrolBackpack_multitarn_F | Patrol Pack (Multitarn)
//    B_AssaultPack_aucamo_F | Assault Pack [ADF]
//    B_AssaultPack_blk | Assault Pack (Black)
//    B_AssaultPack_cbr | Assault Pack (Coyote)
//    B_AssaultPack_Charms_F | [Patreon] Assault Pack (Charms)
//    B_AssaultPack_desert_lxWS | Assault Pack (MCU-D)
//    B_AssaultPack_dgtl | Assault Pack (Digital)
//    B_AssaultPack_eaf_F | Assault Pack (Geometric)
//    B_AssaultPack_Enh_tna_F | Assault Pack (Tropic, Enhanced)
//    B_AssaultPack_flecktarn | Assault Pack (Flecktarn)
//    B_AssaultPack_GenKong_F | [Patreon] Assault Pack (Kong)
//    B_AssaultPack_ghex_F | Assault Pack (Green Hex)
//    B_AssaultPack_Kerry | US Assault Pack (Kerry)
//    B_AssaultPack_khk | Assault Pack (Khaki)
//    B_AssaultPack_kzg_F | Assault Pack [Karzeghistan]
//    B_AssaultPack_marar | Assault Pack [Marar]
//    B_AssaultPack_mcamo | Assault Pack (OCP)
//    B_AssaultPack_multitarn | Assault Pack (Multitarn)
//    B_AssaultPack_ocamo | Assault Pack (Hex)
//    B_AssaultPack_oicamo | Assault Pack (Desert Hex)
//    B_AssaultPack_rgr | Assault Pack (Green)
//    B_AssaultPack_sgg | Assault Pack (Sage)
//    B_AssaultPack_Spess_F | [Patreon] Assault Pack (Balls10)
//    B_AssaultPack_taiga_F | Assault Pack (Taiga)
//    B_AssaultPack_tan | Assault Pack (Tan)
//    B_AssaultPack_tna_F | Assault Pack (Tropic)
//    B_AssaultPack_wdl_F | Assault Pack (Woodland)
//    B_AssaultPackSpec_blk | Assault Pack (Black, Enhanced)
//    B_AssaultPackSpec_cbr | Assault Pack (Coyote, Enhanced)
//    B_AssaultPackSpec_mcamo | Assault Pack (OCP, Enhanced)
//    B_AssaultPackSpec_rgr | Assault Pack (Green, Enhanced)
//    B_AssaultPackSpec_wdl_F | Assault Pack (Woodland, Enhanced)
//    B_Bergen_dgtl_F | Bergen Backpack (Digital)
//    B_Bergen_eaf_F | Bergen Backpack (Geometric)
//    B_Bergen_ghex_F | Bergen Backpack (Green Hex)
//    B_Bergen_hex_F | Bergen Backpack (Hex)
//    B_Bergen_mcamo_F | Bergen Backpack (OCP)
//    B_Bergen_taiga_F | Bergen Backpack (Taiga)
//    B_Bergen_tna_F | Bergen Backpack (Tropic)
//    B_Bergen_wdl_F | Bergen Backpack (Woodland)
//    B_Carryall_ardi_F | Carryall Pack (VSR)
//    B_Carryall_aucamo | Carryall Backpack [ADF]
//    B_Carryall_blk | Carryall Backpack (Black)
//    B_Carryall_cbr | Carryall Backpack (Coyote)
//    B_Carryall_desert_lxWS | Carryall Backpack (MCU-D)
//    B_Carryall_eaf_F | Carryall Backpack (Geometric)
//    B_Carryall_flecktarn | Carryall Backpack (Flecktarn)
//    B_Carryall_ghex_F | Carryall Backpack (Green Hex)
//    B_Carryall_green_F | Carryall Backpack (Green)
//    B_Carryall_jungle | Carryall Backpack (Jungle)
//    B_Carryall_khk | Carryall Backpack (Khaki)
//    B_Carryall_kzg_F | Carryall Pack [Karzeghistan]
//    B_Carryall_mcamo | Carryall Backpack (OCP)
//    B_Carryall_multitarn | Carryall Backpack (Multitarn)
//    B_Carryall_ocamo | Carryall Backpack (Hex)
//    B_Carryall_oicamo | Carryall Backpack (Desert Hex)
//    B_Carryall_oli | Carryall Backpack (Olive)
//    B_Carryall_oucamo | Carryall Backpack (Urban)
//    B_Carryall_owcamo | Carryall Backpack (Woodland Hex)
//    B_Carryall_semiarid | Carryall Backpack (Semi-Arid)
//    B_Carryall_taiga_F | Carryall Backpack (Taiga)
//    B_Carryall_tna_F | Carryall Backpack (Tropic)
//    B_Carryall_wdl_F | Carryall Backpack (Woodland)
//    B_CivilianBackpack_01_Everyday_Astra_F | Everyday Backpack (Astra)
//    B_CivilianBackpack_01_Everyday_Black_F | Everyday Backpack (Black)
//    B_CivilianBackpack_01_Everyday_IDAP_F | Everyday Backpack [IDAP]
//    B_CivilianBackpack_01_Everyday_Vrana_F | Everyday Backpack (Vrana)
//    B_CivilianBackpack_01_Sport_Blue_F | Sports Backpack (Blue)
//    B_CivilianBackpack_01_Sport_Green_F | Sports Backpack (Green)
//    B_CivilianBackpack_01_Sport_Red_F | Sports Backpack (Red)
//    B_CombinationUnitRespirator_01_F | Combination Unit Respirator
//    B_DuffleBag_Black_NoLogo_RF | Duffel Bag (Black)
//    B_DuffleBag_Black_RF | Sports Duffel Bag (Black)
//    B_DuffleBag_Blue_RF | Sports Duffel Bag (Blue)
//    B_DuffleBag_MTP_RF | Duffel Bag (OCP)
//    B_DuffleBag_Olive_NoLogo_RF | Duffel Bag (Olive)
//    B_DuffleBag_Olive_RF | Sports Duffel Bag (Olive)
//    B_DuffleBag_Red_RF | Sports Duffel Bag (Red)
//    B_DuffleBag_Sand_NoLogo_RF | Duffel Bag (Coyote)
//    B_DuffleBag_Sand_RF | Sports Duffel Bag (Coyote)
//    B_DuffleBag_VRANA_RF | Sports Duffel Bag (Vrana)
//    B_FieldPack_ardi | Field Pack (VSR)
//    B_FieldPack_blk | Field Pack (Black)
//    B_FieldPack_cbr | Field Pack (Coyote)
//    B_FieldPack_ghex_F | Field Pack (Green Hex)
//    B_FieldPack_green_F | Field Pack (Green)
//    B_FieldPack_khk | Field Pack (Khaki)
//    B_FieldPack_ocamo | Field Pack (Hex)
//    B_FieldPack_oicamo | Field Pack (Desert Hex)
//    B_FieldPack_oli | Field Pack (Olive)
//    B_FieldPack_oucamo | Field Pack (Urban)
//    B_FieldPack_owcamo | Field Pack (Woodland Hex)
//    B_FieldPack_semiarid | Field Pack (Semi-Arid)
//    B_FieldPack_taiga_F | Field Pack (Taiga)
//    B_Kitbag_aucamo_F | Kitbag [ADF]
//    B_Kitbag_blk | Kitbag (Black)
//    B_Kitbag_cbr | Kitbag (Coyote)
//    B_Kitbag_desert_lxWS | Kitbag (MCU-D)
//    B_Kitbag_dgtl | Kitbag (Digi)
//    B_Kitbag_eaf_F | Kitbag (Geometric)
//    B_Kitbag_flecktarn | Kitbag (Flecktarn)
//    B_Kitbag_khk | Kitbag (Khaki)
//    B_Kitbag_mcamo | Kitbag (OCP)
//    B_Kitbag_multitarn | Kitbag (Multitarn)
//    B_Kitbag_rgr | Kitbag (Green)
//    B_Kitbag_sgg | Kitbag (Sage)
//    B_Kitbag_tan | Kitbag (Tan)
//    B_Kitbag_tna_F | Kitbag (Tropic)
//    B_Kitbag_wdl_F | Kitbag (Woodland)
//    B_LegStrapBag_black_F | Leg Strap Bag (Black)
//    B_LegStrapBag_coyote_F | Leg Strap Bag (Coyote)
//    B_LegStrapBag_olive_F | Leg Strap Bag (Olive)
//    B_Messenger_Black_F | Messenger Bag (Black)
//    B_Messenger_Coyote_F | Messenger Bag (Coyote)
//    B_Messenger_Gray_F | Messenger Bag (Gray)
//    B_Messenger_IDAP_F | Messenger Bag [IDAP]
//    B_Messenger_Olive_F | Messenger Bag (Olive)
//    B_Parachute | Steerable Parachute
//    B_RadioBag_01_ardi_F | Radio Pack (VSR)
//    B_RadioBag_01_arid_F | Radio Pack [RU] (Arid)
//    B_RadioBag_01_aucamo_F | Radio Pack [ADF]
//    B_RadioBag_01_black_F | Radio Pack (Black)
//    B_RadioBag_01_commando_F | Radio Pack [HIMF-C] (Jungle)
//    B_RadioBag_01_coyote_F | Radio Pack (Coyote)
//    B_RadioBag_01_digi_F | Radio Pack (Digital) [AAF]
//    B_RadioBag_01_eaf_F | Radio Pack (Geometric) [LDF]
//    B_RadioBag_01_flecktarn_F | Radio Pack (Flecktarn)
//    B_RadioBag_01_ghex_F | Radio Pack (Green Hex) [CSAT]
//    B_RadioBag_01_green_F | Radio Pack (Green)
//    B_RadioBag_01_hex_F | Radio Pack (Hex) [CSAT]
//    B_RadioBag_01_jungle_F | Radio Pack [HIMF] (Jungle)
//    B_RadioBag_01_kzg_F | Radio Pack [Karzeghistan]
//    B_RadioBag_01_marar_F | Radio Pack [Marar]
//    B_RadioBag_01_mtp_F | Radio Pack (OCP) [NATO]
//    B_RadioBag_01_multitarn_F | Radio Pack (Multitarn)
//    B_RadioBag_01_oicamo_F | Radio Pack [CSAT] (Desert Hex)
//    B_RadioBag_01_oucamo_F | Radio Pack (Urban) [CSAT]
//    B_RadioBag_01_sage_F | Radio Pack (Sage)
//    B_RadioBag_01_semiarid_F | Radio Pack (Semi-Arid) [CSAT]
//    B_RadioBag_01_taiga_F | Radio Pack [RU] (Taiga)
//    B_RadioBag_01_tropic_F | Radio Pack (Tropic) [NATO]
//    B_RadioBag_01_wdl_F | Radio Pack (Woodland) [NATO]
//    B_RadioBag_01_whex_F | Radio Pack (Woodland Hex) [CSAT]
//    B_SCBA_01_F | Self-Contained Breathing Apparatus
//    B_TacticalPack_blk | Tactical Backpack (Black)
//    B_TacticalPack_eaf_F | Tactical Backpack (Geometric)
//    B_TacticalPack_khk | Tactical Backpack (Khaki)
//    B_TacticalPack_mcamo | Tactical Backpack (OCP)
//    B_TacticalPack_ocamo | Tactical Backpack (Hex)
//    B_TacticalPack_oicamo | Tactical Backpack (Desert Hex)
//    B_TacticalPack_oli | Tactical Backpack (Olive)
//    B_TacticalPack_rgr | Tactical Backpack (Green)
//    B_TacticalPack_sgg | Tactical Backpack (Sage)
//    B_TacticalPack_tna_F | Tactical Backpack (Tropic)
//    B_ViperHarness_blk_F | Viper Harness (Black)
//    B_ViperHarness_ghex_F | Viper Harness (Green Hex)
//    B_ViperHarness_hex_F | Viper Harness (Hex)
//    B_ViperHarness_khk_F | Viper Harness (Khaki)
//    B_ViperHarness_oicamo_F | Viper Harness (Desert Hex)
//    B_ViperHarness_oli_F | Viper Harness (Olive)
//    B_ViperHarness_whex_F | Viper Harness (Woodland Hex)
//    B_ViperLightHarness_blk_F | Viper Light Harness (Black)
//    B_ViperLightHarness_ghex_F | Viper Light Harness (Green Hex)
//    B_ViperLightHarness_hex_F | Viper Light Harness (Hex)
//    B_ViperLightHarness_khk_F | Viper Light Harness (Khaki)
//    B_ViperLightHarness_oicamo_F | Viper Light Harness (Desert Hex)
//    B_ViperLightHarness_oli_F | Viper Light Harness (Olive)
//    B_ViperLightHarness_whex_F | Viper Light Harness (Woodland Hex)
//    C_Parachute_Blue_RF | Steerable Parachute (Blue)
//    C_Parachute_Green_RF | Steerable Parachute (Green)
//    C_Parachute_Orange_RF | Steerable Parachute (Orange)
//    C_Parachute_White_RF | Steerable Parachute (White)
//    C_Parachute_Yellow_RF | Steerable Parachute (Yellow)
//    EF_B_AssaultPack_coy | Assault Pack (Coyote Brown)
//    EF_B_Carryall_coy | Carryall Backpack (Coyote Brown)
//    EF_B_Kitbag_coy | Kitbag (Coyote Brown)
//    EF_B_RaiderPack_black | Raider Pack (Black)
//    EF_B_RaiderPack_coy | Raider Pack (Coyote Brown)
//    EF_B_RaiderPack_olive | Raider Pack (Olive)
//    EF_B_TacticalPack_coy | Tactical Backpack (Coyote Brown)
//    ghost_backpack_AssaultPack_Multicam | [Ghost] Assault Pack
//    ghost_backpack_AssaultPack_Multicam_Snow | [Ghost] Assault Pack
//    ghost_backpack_AssaultPack_Multicam_Woodland | [Ghost] Assault Pack
//    ghost_backpack_AssaultPack_ocp | [Ghost] Assault Pack
//    ghost_backpack_AssaultPack_Solid_CoyoteBrown | [Ghost] Assault Pack
//    ghost_backpack_AssaultPack_Solid_Olive | [Ghost] Assault Pack
//    ghost_backpack_AssaultPack_Solid_Ranger_Green | [Ghost] Assault Pack
//    ghost_backpack_AssaultPack_Solid_White | [Ghost] Assault Pack
//    ghost_backpack_AssaultPackEnhanced_Multicam | [Ghost] Assault Pack (Enhanced)
//    ghost_backpack_AssaultPackEnhanced_Multicam_Snow | [Ghost] Assault Pack (Enhanced)
//    ghost_backpack_AssaultPackEnhanced_Multicam_Woodland | [Ghost] Assault Pack (Enhanced)
//    ghost_backpack_AssaultPackEnhanced_Solid_CoyoteBrown | [Ghost] Assault Pack (Enhanced)
//    ghost_backpack_AssaultPackEnhanced_Solid_Olive | [Ghost] Assault Pack (Enhanced)
//    ghost_backpack_AssaultPackEnhanced_Solid_Ranger_Green | [Ghost] Assault Pack (Enhanced)
//    ghost_backpack_AssaultPackEnhanced_Solid_White | [Ghost] Assault Pack (Enhanced)
//    ghost_backpack_Backpack_Kitbag_Medic_Coyote | [Ghost] Kitbag Medic
//    ghost_backpack_Backpack_Kitbag_Medic_Green | [Ghost] Kitbag Medic
//    ghost_backpack_Backpack_Kitbag_Medic_MTP | [Ghost] Kitbag Medic
//    ghost_backpack_Backpack_Kitbag_Medic_RGR | [Ghost] Kitbag Medic
//    ghost_backpack_Backpack_Kitbag_Medic_Sage | [Ghost] Kitbag Medic
//    ghost_backpack_Backpack_Kitbag_Medic_Tan | [Ghost] Kitbag Medic
//    ghost_backpack_Backpack_Kitbag_Medic_White | [Ghost] Kitbag Medic
//    ghost_backpack_Bergen_Multicam | [Ghost] (Multicam) Bergen Backpack
//    ghost_backpack_Bergen_Multicam_Snow | [Ghost] (Multicam Snow) Bergen Backpack
//    ghost_backpack_Bergen_Multicam_Woodland | [Ghost] (Multicam Woodland) Bergen Backpack
//    ghost_backpack_Carryall_Multicam | [Ghost] Carryall Backpack
//    ghost_backpack_Carryall_Multicam_Snow | [Ghost] Carryall Backpack
//    ghost_backpack_Carryall_Multicam_Woodland | [Ghost] Carryall Backpack
//    ghost_backpack_Carryall_ocp | [Ghost] Carryall
//    ghost_backpack_Carryall_Solid_CoyoteBrown | [Ghost] Carryall Backpack
//    ghost_backpack_Carryall_Solid_Olive | [Ghost] Carryall Backpack
//    ghost_backpack_Carryall_Solid_Ranger_Green | [Ghost] Carryall Backpack
//    ghost_backpack_Carryall_Solid_White | [Ghost] Carryall Backpack
//    ghost_backpack_FieldPack_Multicam | [Ghost] (Multicam) Field Pack
//    ghost_backpack_FieldPack_Multicam_Snow | [Ghost] (Multicam Snow) Field Pack
//    ghost_backpack_FieldPack_Multicam_Woodland | [Ghost] (Multicam Woodland) Field Pack
//    ghost_backpack_Kitbag_Multicam | [Ghost] Kitbag
//    ghost_backpack_Kitbag_Multicam_Snow | [Ghost] Kitbag
//    ghost_backpack_Kitbag_Multicam_Woodland | [Ghost] Kitbag
//    ghost_backpack_Kitbag_ocp | [Ghost] Kitbag
//    ghost_backpack_Kitbag_Solid_CoyoteBrown | [Ghost] Kitbag
//    ghost_backpack_Kitbag_Solid_Olive | [Ghost] Kitbag
//    ghost_backpack_Kitbag_Solid_Ranger_Green | [Ghost] Kitbag
//    ghost_backpack_Kitbag_Solid_White | [Ghost] Kitbag
//    ghost_backpack_TacticalPack_Multicam | [Ghost] Tactical Backpack
//    ghost_backpack_TacticalPack_Multicam_Snow | [Ghost] Tactical Backpack
//    ghost_backpack_TacticalPack_Multicam_Woodland | [Ghost] Tactical Backpack
//    ghost_backpack_TacticalPack_Solid_CoyoteBrown | [Ghost] Tactical Backpack
//    ghost_backpack_TacticalPack_Solid_Olive | [Ghost] Tactical Backpack
//    ghost_backpack_TacticalPack_Solid_Ranger_Green | [Ghost] Tactical Backpack
//    ghost_backpack_TacticalPack_Solid_White | [Ghost] Tactical Backpack
//    J_e_J_backpack_intruder | Parachute Intruder(WIP)
//    J_e_J_backpack_intruder_Blue_AFF | Parachute Intruder Blue AFF(WIP)
//    J_e_J_backpack_mc6 | Parachute MC6
//    J_e_J_backpack_t10_35 | Parachute T-10 (Modern)
//    J_e_J_backpack_t10_Old | Parachute T-10 (Olive)
//    J_e_J_backpack_t11 | Parachute T-11(WIP)
//    kedr_backpack_aa | Elka AntiUAV backpack Kinetic
//    kedr_backpack_aa_char | Elka AntiUAV backpack(Proximity)
//
// -- Cargo (86) --
//    Land_Antimalaricum_01_F | Antimalarial Pills
//    Land_Axe_F | Axe
//    Land_Axe_fire_F | Axe (Firefighter)
//    Land_Brick_01_F | Brick
//    Land_Bricks_V1_F | Stack of Bricks (Full)
//    Land_Bricks_V2_F | Stack of Bricks (Part, v1)
//    Land_Bricks_V3_F | Stack of Bricks (Part, v2)
//    Land_Bricks_V4_F | Stack of Bricks (Part, v3)
//    Land_CinderBlock_01_F | Cinder Block
//    Land_CinderBlocks_01_F | Stack of Cinder Blocks
//    Land_CinderBlocks_F | Cinder Blocks
//    Land_Coil_F | Coil
//    Land_ConcretePipe_F | Concrete Pipe
//    Land_Crane_F | Crane
//    Land_Creditcard_01_F | Bank Card
//    Land_Crowbar_01_F | Crowbar
//    Land_DrillAku_F | Accu-Drill
//    Land_DustMask_F | Dust Mask
//    Land_EngineCrane_01_F | Portable Engine Crane
//    Land_ExtensionCord_F | Extension Cord
//    Land_FieldToilet_F | Field Toilet
//    Land_File_F | File
//    Land_FloodLight_F | Floodlight
//    Land_GasTank_02_F | Welding Tank
//    Land_Gloves_F | Gloves
//    Land_Grinder_F | Grinder
//    Land_Hammer_F | Hammer
//    Land_House_L_9_Stuff_lxWS | Scaffolding
//    Land_IronPipes_F | Iron Pipe
//    Land_Key_01_F | Keys
//    Land_Meter3m_F | Tape Measure
//    Land_Military_ID_Card_01_F | ID Card [CSAT]
//    Land_MobileScafolding_01_F | Wheeled Scaffolding
//    Land_MoneyBills_01_bunch_F | Money (Notes)
//    Land_MoneyBills_01_roll_F | Money (Roll)
//    Land_MoneyBills_01_stack_F | Money (Stack)
//    Land_MultiMeter_F | Multi-meter
//    Land_Pallet_F | Pallet
//    Land_Pallet_vertical_F | Pallet (Vertical)
//    Land_Pallets_F | Pallets
//    Land_Pallets_stack_F | Stack of Pallets
//    Land_Pipes_large_F | Pipes (Large)
//    Land_Pipes_small_F | Pipes (Small)
//    Land_Plank_01_4m_F | Plank (4 m)
//    Land_Plank_01_8m_F | Plank (8 m)
//    Land_Pliers_F | Pliers
//    Land_Portable_generator_F | Portable Generator
//    Land_PortableLight_double_F | Portable Lights (Double)
//    Land_PortableLight_single_F | Portable Lights (Single)
//    Land_Saw_F | Saw
//    Land_Scaffolding_F | Scaffolding
//    Land_Scaffolding_New_F | Scaffolding (New)
//    Land_Screwdriver_V1_F | Screwdriver (Slotted)
//    Land_Screwdriver_V2_F | Screwdriver (Phillips)
//    Land_TimberLog_01_F | Timber Log (v1)
//    Land_TimberLog_02_F | Timber Log (v2)
//    Land_TimberLog_03_F | Timber Log (v3)
//    Land_TimberLog_04_F | Timber Log (v4)
//    Land_TimberLog_05_F | Timber Log (v5)
//    Land_TimberPile_01_F | Timber (Jungle)
//    Land_TimberPile_02_F | Timber Pile (v1)
//    Land_TimberPile_03_F | Timber Pile (v2)
//    Land_TimberPile_04_F | Timber Pile (v3)
//    Land_TimberPile_05_F | Timber Pile (v4)
//    Land_Timbers_F | Timbers
//    Land_ToiletBox_F | Toiletbox
//    Land_ToolTrolley_01_F | Tool Cart (Red)
//    Land_ToolTrolley_02_F | Tool Cart (Blue)
//    Land_USB_Dongle_01_F | Flash Drive
//    Land_WeldingTrolley_01_F | Welding Cart
//    Land_WheelCart_F | Wheel Cart
//    Land_WoodenBox_F | Wooden Box
//    Land_WoodenPlanks_01_F | Stack of Planks (Kauri)
//    Land_WoodenPlanks_01_messy_F | Stack of Planks (Kauri, Unfinished)
//    Land_WoodenPlanks_01_messy_pine_F | Stack of Planks (Pine, Unfinished)
//    Land_WoodenPlanks_01_pine_F | Stack of Planks (Pine)
//    Land_WoodPile_02_F | Woodpile (v2)
//    Land_WoodPile_03_F | Woodpile (v3)
//    Land_WoodPile_04_F | Woodpile (v4)
//    Land_Workbench_01_F | Workbench
//    Land_WorkStand_F | Workstand
//    Land_Wrench_F | Wrench
//    RoadBarrier_F | Road barrier
//    RoadBarrier_small_F | Road Barrier (Small)
//    RoadCone_F | Road Cone
//    RoadCone_L_F | Road Cone (Light)
//
// -- Container (137) --
//    Box_B_A_UAV_06_F | AL-6 Case [IDF]
//    Box_B_A_UAV_06_medical_F | AL-6 Case (Medical) [IDF]
//    Box_B_T_UAV_06_F | AL-6 Case [NATO Pacific]
//    Box_B_T_UAV_06_medical_F | AL-6 Case (Medical) [NATO Pacific]
//    Box_B_UAV_06_F | AL-6 Case [NATO]
//    Box_B_UAV_06_medical_F | AL-6 Case (Medical) [NATO]
//    Box_C_IDAP_UAV_06_F | Utility Drone Case [IDAP]
//    Box_C_IDAP_UAV_06_medical_F | Utility Drone Case (Medical) [IDAP]
//    Box_C_UAV_06_F | Utility Drone Case
//    Box_C_UAV_06_medical_F | Utility Drone Case (Medical)
//    Box_C_UAV_06_Swifd_F | Utility Drone Case (Swifd)
//    Box_I_E_UAV_06_F | AL-6 Case [LDF]
//    Box_I_E_UAV_06_medical_F | AL-6 Case (Medical) [LDF]
//    Box_I_I_UAV_06_F | AL-6 Case [IDF]
//    Box_I_I_UAV_06_medical_F | AL-6 Case (Medical) [IDF]
//    Box_I_Raven_UAV_06_F | AL-6 Case [RU]
//    Box_I_Raven_UAV_06_medical_F | AL-6 Case (Medical) [Russia]
//    Box_I_UAV_06_F | AL-6 Case [AAF]
//    Box_I_UAV_06_medical_F | AL-6 Case (Medical) [AAF]
//    Box_I_UNO_UAV_06_F | AL-6 Case [UNO]
//    Box_I_UNO_UAV_06_medical_F | AL-6 Case (Medical) [UNO]
//    Box_O_R_UAV_06_F | AL-6 Case [RU]
//    Box_O_R_UAV_06_medical_F | AL-6 Case (Medical) [Russia]
//    Box_O_Raven_UAV_06_F | AL-6 Case [RU]
//    Box_O_Raven_UAV_06_medical_F | AL-6 Case (Medical) [Russia]
//    Box_O_T_UAV_06_F | AL-6 Case [CSAT Pacific]
//    Box_O_T_UAV_06_medical_F | AL-6 Case (Medical) [CSAT Pacific]
//    Box_O_UAV_06_F | AL-6 Case [CSAT]
//    Box_O_UAV_06_medical_F | AL-6 Case (Medical) [CSAT]
//    C_IDAP_CargoNet_01_supplies_F | Cargo Net [IDAP]
//    CargoNet_01_barrels_F | Cargo Net (Barrels)
//    CargoNet_01_box_F | Cargo Net (Box)
//    FlexibleTank_01_forest_F | Flexible Fuel Tank (Forest)
//    FlexibleTank_01_sand_F | Flexible Fuel Tank (Sand)
//    Land_BarrelEmpty_F | Plastic Barrel (Empty)
//    Land_BarrelEmpty_grey_F | Plastic Barrel (Empty, Grey)
//    Land_BarrelSand_F | Plastic Barrel (Sand)
//    Land_BarrelSand_grey_F | Plastic Barrel (Sand, Grey)
//    Land_BarrelTrash_F | Plastic Barrel (Trash)
//    Land_BarrelTrash_grey_F | Plastic Barrel (Trash, Grey)
//    Land_BarrelWater_F | Plastic Barrel (Water)
//    Land_BarrelWater_grey_F | Plastic Barrel (Water, Grey)
//    Land_Cargo10_blue_F | Cargo Container (Short, Blue)
//    Land_Cargo10_brick_red_F | Cargo Container (Short, Brick Red)
//    Land_Cargo10_cyan_F | Cargo Container (Short, Cyan)
//    Land_Cargo10_grey_F | Cargo Container (Short, Grey)
//    Land_Cargo10_IDAP_F | Cargo Container (Short) [IDAP]
//    Land_Cargo10_light_blue_F | Cargo Container (Short, Light Blue)
//    Land_Cargo10_light_green_F | Cargo Container (Short, Light Green)
//    Land_Cargo10_military_green_F | Cargo Container (Short, Military Green)
//    Land_Cargo10_orange_F | Cargo Container (Short, Orange)
//    Land_Cargo10_red_F | Cargo Container (Short, Red)
//    Land_Cargo10_sand_F | Cargo Container (Short, Sand)
//    Land_Cargo10_white_F | Cargo Container (Short, White)
//    Land_Cargo10_yellow_F | Cargo Container (Short, Yellow)
//    Land_Cargo20_blue_F | Cargo Container (Medium, Blue)
//    Land_Cargo20_brick_red_F | Cargo Container (Medium, Brick Red)
//    Land_Cargo20_cyan_F | Cargo Container (Medium, Cyan)
//    Land_Cargo20_EMP_F | Cargo Container (EMP-Proof)
//    Land_Cargo20_EMP_Training_F | Cargo Container (EMP-Proof, Training)
//    Land_Cargo20_grey_F | Cargo Container (Medium, Grey)
//    Land_Cargo20_IDAP_F | Cargo Container (Medium) [IDAP]
//    Land_Cargo20_light_blue_F | Cargo Container (Medium, Light Blue)
//    Land_Cargo20_light_green_F | Cargo Container (Medium, Light Green)
//    Land_Cargo20_military_green_F | Cargo Container (Medium, Military Green)
//    Land_Cargo20_orange_F | Cargo Container (Medium, Orange)
//    Land_Cargo20_red_F | Cargo Container (Medium, Red)
//    Land_Cargo20_sand_F | Cargo Container (Medium, Sand)
//    Land_Cargo20_vr_F | Cargo Container (Medium, VR)
//    Land_Cargo20_white_F | Cargo Container (Medium, White)
//    Land_Cargo20_yellow_F | Cargo Container (Medium, Yellow)
//    Land_Cargo40_blue_F | Cargo Container (Long, Blue)
//    Land_Cargo40_brick_red_F | Cargo Container (Long, Brick Red)
//    Land_Cargo40_cyan_F | Cargo Container (Long, Cyan)
//    Land_Cargo40_grey_F | Cargo Container (Long, Grey)
//    Land_Cargo40_IDAP_F | Cargo Container (Long) [IDAP]
//    Land_Cargo40_light_blue_F | Cargo Container (Long, Light Blue)
//    Land_Cargo40_light_green_F | Cargo Container (Long, Light Green)
//    Land_Cargo40_military_green_F | Cargo Container (Long, Military Green)
//    Land_Cargo40_orange_F | Cargo Container (Long, Orange)
//    Land_Cargo40_red_F | Cargo Container (Long, Red)
//    Land_Cargo40_sand_F | Cargo Container (Long, Sand)
//    Land_Cargo40_white_F | Cargo Container (Long, White)
//    Land_Cargo40_yellow_F | Cargo Container (Long, Yellow)
//    Land_CargoBox_V1_F | Cargo Box
//    Land_dufflebag_closed_Black_NoLogo_rf | Duffel Bag (Closed, Black)
//    Land_dufflebag_closed_Black_rf | Sports Duffel Bag (Closed, Black)
//    Land_dufflebag_closed_Blue_rf | Sports Duffel Bag (Closed, Blue)
//    Land_dufflebag_closed_MTP_rf | Duffel Bag (Closed, OCP)
//    Land_dufflebag_closed_Olive_NoLogo_rf | Duffel Bag (Closed, Olive)
//    Land_dufflebag_closed_Olive_rf | Sports Duffel Bag (Closed, Olive)
//    Land_dufflebag_closed_Red_rf | Sports Duffel Bag (Closed, Red)
//    Land_dufflebag_closed_Sand_NoLogo_rf | Duffel Bag (Closed, Coyote)
//    Land_dufflebag_closed_Sand_rf | Sports Duffel Bag (Closed, Coyote)
//    Land_dufflebag_closed_VRANA_rf | Sports Duffel Bag (Closed, Vrana)
//    Land_dufflebag_open_Black_NoLogo_rf | Duffel Bag (Open, Black)
//    Land_dufflebag_open_Black_rf | Sports Duffel Bag (Open, Black)
//    Land_dufflebag_open_Blue_rf | Sports Duffel Bag (Open, Blue)
//    Land_dufflebag_open_MTP_rf | Duffel Bag (Open, OCP)
//    Land_dufflebag_open_Olive_NoLogo_rf | Duffel Bag (Open, Olive)
//    Land_dufflebag_open_Olive_rf | Sports Duffel Bag (Open, Olive)
//    Land_dufflebag_open_Red_rf | Sports Duffel Bag (Open, Red)
//    Land_dufflebag_open_Sand_NoLogo_rf | Duffel Bag (Open, Coyote)
//    Land_dufflebag_open_Sand_rf | Sports Duffel Bag (Open, Coyote)
//    Land_dufflebag_open_VRANA_rf | Sports Duffel Bag (Open, Vrana)
//    Land_MetalBarrel_empty_F | Metal Barrel (Open)
//    Land_MetalBarrel_F | Metal Barrel
//    Land_MetalCase_01_large_F | Metal Case (Large)
//    Land_MetalCase_01_medium_F | Metal Case (Medium)
//    Land_MetalCase_01_small_F | Metal Case (Small)
//    Land_PlasticCase_01_large_black_CBRN_F | Plastic Case (Large, Black, CBRN)
//    Land_PlasticCase_01_large_black_F | Plastic Case (Large, Black)
//    Land_PlasticCase_01_large_CBRN_F | Plastic Case (Large, CBRN)
//    Land_PlasticCase_01_large_F | Plastic Case (Large)
//    Land_PlasticCase_01_large_gray_F | Plastic Case (Large, Gray)
//    Land_PlasticCase_01_large_idap_F | Plastic Case (Large, White) [IDAP]
//    Land_PlasticCase_01_large_olive_CBRN_F | Plastic Case (Large, Olive, CBRN)
//    Land_PlasticCase_01_large_olive_F | Plastic Case (Large, Olive)
//    Land_PlasticCase_01_medium_black_CBRN_F | Plastic Case (Medium, Black, CBRN)
//    Land_PlasticCase_01_medium_black_F | Plastic Case (Medium, Black)
//    Land_PlasticCase_01_medium_CBRN_F | Plastic Case (Medium, CBRN)
//    Land_PlasticCase_01_medium_F | Plastic Case (Medium)
//    Land_PlasticCase_01_medium_gray_F | Plastic Case (Medium, Gray)
//    Land_PlasticCase_01_medium_idap_F | Plastic Case (Medium, White) [IDAP]
//    Land_PlasticCase_01_medium_olive_CBRN_F | Plastic Case (Medium, Olive, CBRN)
//    Land_PlasticCase_01_medium_olive_F | Plastic Case (Medium, Olive)
//    Land_PlasticCase_01_small_black_CBRN_F | Plastic Case (Small, Black, CBRN)
//    Land_PlasticCase_01_small_black_F | Plastic Case (Small, Black)
//    Land_PlasticCase_01_small_CBRN_F | Plastic Case (Small, CBRN)
//    Land_PlasticCase_01_small_F | Plastic Case (Small)
//    Land_PlasticCase_01_small_gray_F | Plastic Case (Small, Gray)
//    Land_PlasticCase_01_small_idap_F | Plastic Case (Small, White) [IDAP]
//    Land_PlasticCase_01_small_olive_CBRN_F | Plastic Case (Small, Olive, CBRN)
//    Land_PlasticCase_01_small_olive_F | Plastic Case (Small, Olive)
//    Land_WaterBarrel_F | Water Barrel
//    Land_WaterTank_F | Water Tank
//    MetalBarrel_burning_F | Metal Barrel (burning)
//
// -- Dead_bodies (50) --
//    ACE_Grave | Grave (Dirt)
//    Land_Cross_01_small_F | Cross (Small)
//    Land_Grave_01_F | Grave (Stone, v4)
//    Land_Grave_02_F | Grave (Marble, v1)
//    Land_Grave_03_F | Grave (Stone, v5)
//    Land_Grave_04_F | Grave (Stone, v6)
//    Land_Grave_05_F | Grave (Tiled)
//    Land_Grave_06_F | Grave (Marble, v2)
//    Land_Grave_07_F | Grave (Stone, v7)
//    Land_Grave_08_F | Grave (Concrete, v1)
//    Land_Grave_09_F | Grave (Concrete, v2)
//    Land_Grave_10_F | Grave (Concrete, v3)
//    Land_Grave_11_F | Grave (Dirt, v2)
//    Land_Grave_dirt_F | Grave (Dirt)
//    Land_Grave_forest_F | Grave (Forest)
//    Land_Grave_mass_F | Mass Grave
//    Land_Grave_memorial_F | Grave (Memorial)
//    Land_Grave_monument_F | Grave (Monument)
//    Land_Grave_obelisk_F | Grave (Obelisk)
//    Land_Grave_rocks_F | Grave (Rocks)
//    Land_Grave_soldier_F | Tombstone (Unknown Soldier)
//    Land_Grave_V1_F | Grave (Stone, v1)
//    Land_Grave_V2_F | Grave (Stone, v2)
//    Land_Grave_V3_F | Grave (Stone, v3)
//    Land_GraveFence_01_F | Grave Fence (Metal, v1)
//    Land_GraveFence_02_F | Grave Fence (Metal, v2)
//    Land_GraveFence_03_F | Grave Fence (Metal, v3)
//    Land_GraveFence_04_F | Grave Fence (Metal, v4)
//    Land_HumanSkeleton_F | Skeleton
//    Land_HumanSkull_F | Skull
//    Land_Tomb_01_F | Tomb
//    Land_Tombstone_01_F | Tombstone (Unmarked)
//    Land_Tombstone_02_F | Tombstone (Marble)
//    Land_Tombstone_03_F | Tombstone (Stone)
//    Land_Tombstone_04_F | Tombstone (Stone, v2)
//    Land_Tombstone_05_F | Tombstone (Wooden, v1)
//    Land_Tombstone_06_F | Tombstone (Wooden, v2)
//    Land_Tombstone_07_F | Tombstone (Stone, v3)
//    Land_Tombstone_08_damaged_F | Tombstone (Stone, v4, Damaged)
//    Land_Tombstone_08_F | Tombstone (Stone, v4)
//    Land_Tombstone_09_F | Tombstone (Stone, v5)
//    Land_Tombstone_10_F | Tombstone (Stone, v6)
//    Land_Tombstone_11_damaged_F | Tombstone (Stone, v7, Damaged)
//    Land_Tombstone_11_F | Tombstone (Stone, v7)
//    Land_Tombstone_12_F | Tombstone (Wooden, v3)
//    Land_Tombstone_13_F | Tombstone (Wooden, v4)
//    Land_Tombstone_14_F | Tombstone (Wooden, v5)
//    Land_Tombstone_15_F | Tombstone (Stone, v8)
//    Land_Tombstone_16_F | Tombstone (Stone, v9)
//    Land_Tombstone_17_F | Tombstone (Wooden, v6)
//
// -- Flag (118) --
//    ACE_Flag_Black | Flag (ACE - Black)
//    ACE_Flag_White | Flag (ACE - White)
//    Banner_01_AAF_F | Banner (AAF)
//    Banner_01_Ardistan_F | Banner (Ardistan)
//    Banner_01_CDF_F | Banner (CDF)
//    Banner_01_ChDKZ_F | Banner (ChDKZ)
//    Banner_01_CSAT_F | Banner (CSAT)
//    Banner_01_EAF_F | Banner (LDF)
//    Banner_01_F | Banner
//    Banner_01_FIA_F | Banner (FIA)
//    Banner_01_IDAP_F | Banner (IDAP)
//    Banner_01_IDF_F | Banner (IDF)
//    Banner_01_NATO_F | Banner (NATO)
//    Banner_01_Russia_F | Banner (Russia)
//    Banner_01_TFAegis_F | Banner (TF Aegis)
//    Banner_01_TKM_F | Banner (Insurgents)
//    Banner_01_USMC_F | Banner (USMC)
//    Banner_02_csat_RF | Banner (Big, CSAT)
//    Banner_02_medical_RF | Banner (Big, Medical)
//    Banner_02_white_RF | Banner (Big)
//    EF_Banner_01_29thMEU | Banner (29th MEU)
//    EF_Flag_29thMEU | Flag (29th MEU)
//    Flag_AAF_F | Flag (AAF)
//    Flag_Altis_F | Flag (Altis)
//    Flag_AltisColonial_F | Flag (Altis Colonial)
//    Flag_Ardistan_F | Flag (Ardistan)
//    Flag_Argana_F | Flag (Argana)
//    Flag_Argana_F_lxWS | Flag (Argana)
//    Flag_ARMEX_F | Flag (ARMEX)
//    Flag_Australia_F | Flag (Australia)
//    Flag_Belarus_F | Flag (Belarus)
//    Flag_BI_F | Flag (BI)
//    Flag_Blue_F | Flag (Blue)
//    Flag_Blueking_F | Flag (Blueking)
//    Flag_Blueking_inverted_F | Flag (Blueking, inverted)
//    Flag_Bocano_F | Flag (Bocano)
//    Flag_Burstkoke_F | Flag (Burstkoke)
//    Flag_Burstkoke_inverted_F | Flag (Burstkoke, inverted)
//    Flag_CDF_F | Flag (CDF)
//    Flag_ChDKZ_F | Flag (ChDKZ)
//    Flag_Chernarus_F | Flag (Chernarus)
//    Flag_China_F | Flag (China)
//    Flag_CSAT_F | Flag (CSAT)
//    Flag_CTRG_F | Flag (CTRG)
//    Flag_CZ_F | Flag (Czech Republic)
//    Flag_EAF_F | Flag (LDF)
//    Flag_Enoch_F | Flag (Livonia)
//    Flag_EnochLooters_F | Flag (Livonian Looters)
//    Flag_EU_F | Flag (European Union)
//    Flag_FD_Blue_F | Flag (FD - Blue)
//    Flag_FD_Green_F | Flag (FD - Green)
//    Flag_FD_Orange_F | Flag (FD - Orange)
//    Flag_FD_Purple_F | Flag (FD - Purple)
//    Flag_FD_Red_F | Flag (FD - Red)
//    Flag_FIA_F | Flag (FIA)
//    Flag_France_F | Flag (France)
//    Flag_Fuel_F | Flag (Fuel)
//    Flag_Fuel_inverted_F | Flag (Fuel, inverted)
//    Flag_Gendarmerie_F | Flag (Gendarmerie)
//    Flag_Germany_F | Flag (Germany)
//    Flag_Green_F | Flag (Green)
//    Flag_HorizonIslands_F | Flag (Horizon Islands)
//    Flag_IDAP_F | Flag (IDAP)
//    Flag_IDF_F | Flag (IDF)
//    Flag_ION_F | Flag (ION)
//    Flag_Iran_F | Flag (Iran)
//    Flag_IranArmy_F | Flag (IAF)
//    Flag_Israel_F | Flag (Israel)
//    Flag_Karzeghistan_F | Flag (Karzeghistan)
//    Flag_Larkin_F | Flag (Larkin)
//    Flag_NATO_F | Flag (NATO)
//    Flag_POWMIA_F | Flag (POW/MIA)
//    Flag_Quontrol_F | Flag (Quontrol)
//    Flag_Red_F | Flag (Red)
//    Flag_Redburger_F | Flag (Redburger)
//    Flag_RedCrystal_F | Flag (Red Crystal)
//    Flag_RedLion_F | Flag (Red Lion)
//    Flag_Redstone_F | Flag (Redstone)
//    Flag_Russia_F | Flag (Russia)
//    Flag_Sahrani_F | Flag (Sahrani)
//    Flag_SFIA_lxWS | Flag (SFIA)
//    Flag_Suatmm_F | Flag (Suatmm)
//    Flag_Syndikat_F | Flag (Syndikat)
//    Flag_Takistan_F | Flag (Takistan)
//    Flag_TFAegis_F | Flag (TF Aegis)
//    Flag_TKM_F | Flag (Insurgents)
//    Flag_UK_F | Flag (UK)
//    Flag_UNO_F | Flag (UNA)
//    Flag_US_F | Flag (USA)
//    Flag_USArmy_F | Flag (US Army)
//    Flag_USMC_F | Flag (USMC)
//    Flag_USNavyJack_F | Flag (US Navy Jack)
//    Flag_Viper_F | Flag (Viper)
//    Flag_Vrana_F | Flag (Vrana)
//    Flag_White_F | Flag (White)
//    FlagPole_F | Flagpole
//    ghost_flags_Belgium | Flag (Belgium)
//    ghost_flags_Canada | Flag (Canada)
//    ghost_flags_Croatia | Flag (Croatia)
//    ghost_flags_CzechRepublic | Flag (CzechRepublic)
//    ghost_flags_Denmark | Flag (Denmark)
//    ghost_flags_France | Flag (France)
//    ghost_flags_Georgia | Flag (Georgia)
//    ghost_flags_Germany | Flag (Germany)
//    ghost_flags_Greece | Flag (Greece)
//    ghost_flags_Hungary | Flag (Hungary)
//    ghost_flags_Iceland | Flag (Iceland)
//    ghost_flags_Italy | Flag (Italy)
//    ghost_flags_Luxembourg | Flag (Luxembourg)
//    ghost_flags_Netherlands | Flag (Netherlands)
//    ghost_flags_Norway | Flag (Norway)
//    ghost_flags_Poland | Flag (Poland)
//    ghost_flags_Portugal | Flag (Portugal)
//    ghost_flags_Russia | Flag (Russia)
//    ghost_flags_Slovakia | Flag (Slovakia)
//    ghost_flags_Slovenia | Flag (Slovenia)
//    ghost_flags_Spain | Flag (Spain)
//    PortableFlagPole_01_F | Portable Flagpole
//
// -- Fortifications (98) --
//    ACE_envelope_big | Trench - Big
//    ACE_envelope_small | Trench - Small
//    GRAD_envelope_giant | Trench - Giant
//    GRAD_envelope_long | Trench - Long
//    GRAD_envelope_short | Trench - Short
//    GRAD_envelope_vehicle | Trench - Vehicle
//    Land_BagFence_01_corner_green_F | Sandbag Wall (Corner, Green)
//    Land_BagFence_01_end_green_F | Sandbag Wall (End, Green)
//    Land_BagFence_01_long_green_F | Sandbag Wall (Long, Green)
//    Land_BagFence_01_round_green_F | Sandbag Wall (Round, Green)
//    Land_BagFence_01_short_green_F | Sandbag Wall (Short, Green)
//    Land_BagFence_Corner_F | Sandbag Wall (Corner)
//    Land_BagFence_End_F | Sandbag Wall (End)
//    Land_BagFence_Long_F | Sandbag Wall (Long)
//    Land_BagFence_Round_F | Sandbag Wall (Round)
//    Land_BagFence_Short_F | Sandbag Wall (Short)
//    Land_CncBarrier_dam_F | Concrete Barrier (Damaged)
//    Land_CncBarrier_F | Concrete Barrier
//    Land_CncBarrier_stripes_F | Concrete Barrier (Stripes)
//    Land_CncBarrierMedium4_F | Concrete Barrier (Medium, Long)
//    Land_CncBarrierMedium_F | Concrete Barrier (Medium)
//    Land_CncShelter_F | Concrete Shelter
//    Land_CncWall1_F | Concrete Wall
//    Land_CncWall4_F | Concrete Wall (Long)
//    Land_ConcreteHedgehog_01_F | Concrete Hedgehog
//    Land_ConcreteHedgehog_01_half_F | Concrete Hedgehog (Disassembled, Half)
//    Land_ConcreteHedgehog_01_palette_F | Concrete Hedgehog (Disassembled, Pallet)
//    Land_Crash_barrier_F | Safety Barrier
//    Land_CzechHedgehog_01_new_F | Czech Hedgehog (New)
//    Land_DragonsTeeth_01_1x1_new_F | Dragon's Tooth (Single, new)
//    Land_DragonsTeeth_01_1x1_new_redwhite_F | Dragon's Tooth (Single, Red-White, new)
//    Land_DragonsTeeth_01_1x1_old_F | Dragon's Tooth (Single, old)
//    Land_DragonsTeeth_01_1x1_old_redwhite_F | Dragon's Tooth (Single, Red-White, old)
//    Land_DragonsTeeth_01_4x2_new_F | Dragon's Teeth (Row, new)
//    Land_DragonsTeeth_01_4x2_new_redwhite_F | Dragon's Teeth (Row, Red-White, new)
//    Land_DragonsTeeth_01_4x2_old_F | Dragon's Teeth (Row, old)
//    Land_DragonsTeeth_01_4x2_old_redwhite_F | Dragon's Teeth (Row, Red-White, old)
//    Land_HBarrier_01_big_4_green_F | H-barrier (Big, 4 Blocks, Green)
//    Land_HBarrier_01_big_tower_green_F | H-barrier Watchtower (Green)
//    Land_HBarrier_01_line_1_green_F | H-barrier (Block, Green)
//    Land_HBarrier_01_line_3_green_F | H-barrier (3 Blocks, Green)
//    Land_HBarrier_01_line_5_green_F | H-barrier (5 Blocks, Green)
//    Land_HBarrier_01_wall_4_green_F | H-barrier Wall (Short, Green)
//    Land_HBarrier_01_wall_6_green_F | H-barrier Wall (Long, Green)
//    Land_HBarrier_01_wall_corner_green_F | H-barrier Wall (Corner, Green)
//    Land_HBarrier_01_wall_corridor_green_F | H-barrier Corridor (Green)
//    Land_HBarrier_1_F | H-barrier (Block)
//    Land_HBarrier_1_lxWS | H-barrier (Block)
//    Land_HBarrier_3_F | H-barrier (3 Blocks)
//    Land_HBarrier_3_lxWS | H-barrier (3 Blocks)
//    Land_HBarrier_5_F | H-barrier (5 Blocks)
//    Land_HBarrier_5_lxWS | H-barrier (5 Blocks)
//    Land_HBarrier_Big_F | H-barrier (Big, 4 Blocks)
//    Land_HBarrierBig_lxWS | H-barrier (Big, 4 Blocks)
//    Land_HBarrierTower_F | H-barrier Watchtower
//    Land_HBarrierTower_lxWS | H-barrier Watchtower
//    Land_HBarrierWall4_F | H-barrier Wall (Short)
//    Land_HBarrierWall4_lxWS | H-barrier Wall (Short)
//    Land_HBarrierWall6_F | H-barrier Wall (Long)
//    Land_HBarrierWall6_lxWS | H-barrier Wall (Long)
//    Land_HBarrierWall_corner_F | H-barrier Wall (Corner)
//    Land_HBarrierWall_corner_lxWS | H-barrier Wall (Corner)
//    Land_HBarrierWall_corridor_F | H-barrier Corridor
//    Land_HBarrierWall_corridor_lxWS | H-barrier Corridor
//    Land_Mil_ConcreteWall_F | Concrete Barrier (Plain)
//    Land_Mil_WallBig_4m_F | Military Base Wall
//    Land_Mil_WallBig_4m_lxWS | Military Base Wall
//    Land_Mil_WallBig_Corner_F | Military Base Wall (Corner)
//    Land_Mil_WallBig_Corner_lxWS | Military Base Wall (Corner)
//    Land_Mound01_8m_F | Mound
//    Land_Mound01_8m_lxWS | Mound
//    Land_Mound02_8m_F | Mound (Low)
//    Land_Mound02_8m_lxWS | Mound (Low)
//    Land_Mound03_8m_F | Mound
//    Land_Mound04_8m_F | Mound (Low)
//    Land_Razorwire_F | Razorwire Barrier
//    Land_Shoot_House_Corner_Crouch_F | Shoot House - Corner (Crouch)
//    Land_Shoot_House_Corner_F | Shoot House - Corner
//    Land_Shoot_House_Corner_Prone_F | Shoot House - Corner (Prone)
//    Land_Shoot_House_Corner_Stand_F | Shoot House - Corner (Stand)
//    Land_Shoot_House_Panels_Crouch_F | Shoot House - Panels (Crouch)
//    Land_Shoot_House_Panels_F | Shoot House - Panels
//    Land_Shoot_House_Panels_Prone_F | Shoot House - Panels (Prone)
//    Land_Shoot_House_Panels_Vault_F | Shoot House - Panels (Vault)
//    Land_Shoot_House_Panels_Window_F | Shoot House - Panels (Window)
//    Land_Shoot_House_Panels_Windows_F | Shoot House - Panels (Windows)
//    Land_Shoot_House_Tunnel_Crouch_F | Shoot House - Tunnel (Crouch)
//    Land_Shoot_House_Tunnel_F | Shoot House - Tunnel
//    Land_Shoot_House_Tunnel_Prone_F | Shoot House - Tunnel (Prone)
//    Land_Shoot_House_Tunnel_Stand_F | Shoot House - Tunnel (Stand)
//    Land_Shoot_House_Wall_Crouch_F | Shoot House - Wall (Crouch)
//    Land_Shoot_House_Wall_F | Shoot House - Wall
//    Land_Shoot_House_Wall_Long_Crouch_F | Shoot House - Wall (Crouch, Long)
//    Land_Shoot_House_Wall_Long_F | Shoot House - Wall (Long)
//    Land_Shoot_House_Wall_Long_Prone_F | Shoot House - Wall (Prone, Long)
//    Land_Shoot_House_Wall_Long_Stand_F | Shoot House - Wall (Stand, Long)
//    Land_Shoot_House_Wall_Prone_F | Shoot House - Wall (Prone)
//    Land_Shoot_House_Wall_Stand_F | Shoot House - Wall (Stand)
//
// -- Furniture (70) --
//    Fridge_01_closed_F | Refrigerator (Closed)
//    Fridge_01_open_F | Refrigerator (Open)
//    Land_ArmChair_01_F | Armchair
//    Land_Basin_01_F | Basin
//    Land_Bench_03_F | Bench (Weathered)
//    Land_Bench_04_F | Bench (Decorative)
//    Land_Bench_05_F | Bench (Rural)
//    Land_Bench_F | Stool
//    Land_Blankets_EP1_lxWS | Rugs
//    Land_Carpet_01_lxWS | Carpet
//    Land_Carpet_2_EP1_lxWS | Carpet (Flipped)
//    Land_Carpet_folded_01_lxWS | Carpet (Folded, v1)
//    Land_Carpet_folded_02_lxWS | Carpet (Folded, v2)
//    Land_Carpet_folded_03_lxWS | Carpet (Folded, v3)
//    Land_Carpet_hanging_01_lxWS | Carpet (Hanging)
//    Land_CashDesk_F | Cashdesk
//    Land_ChairPlastic_F | Chair (Plastic)
//    Land_ChairWood_F | Chair (Wooden)
//    Land_Icebox_F | Icebox
//    Land_Lab_bench_F | Laboratory Bench
//    Land_MapBoard_01_Wall_Altis_F | Whiteboard (Map of Altis, Wall)
//    Land_MapBoard_01_Wall_Enoch_F | Whiteboard (Map of Livonia, Wall)
//    Land_MapBoard_01_Wall_F | Whiteboard (Empty, Wall)
//    Land_MapBoard_01_Wall_Malden_F | Whiteboard (Map of Malden, Wall)
//    Land_MapBoard_01_Wall_Stratis_F | Whiteboard (Map of Stratis, Wall)
//    Land_MapBoard_01_Wall_Tanoa_F | Whiteboard (Map of Tanoa, Wall)
//    Land_MapBoard_Enoch_F | Whiteboard (Map of Livonia)
//    Land_MapBoard_F | Whiteboard (Empty)
//    Land_Metal_rack_F | Metal Rack (4 shelves)
//    Land_Metal_rack_Tall_F | Metal Rack (5 shelves)
//    Land_Metal_wooden_rack_F | Metal-Wooden Rack
//    Land_Metal_wooden_table_F | Metal-Wooden Table
//    Land_OfficeCabinet_01_F | Office Cabinet
//    Land_OfficeCabinet_02_F | Office Cabinet (Old)
//    Land_OfficeChair_01_F | Office Chair
//    Land_Pillow_01_lxWS | Pillow (New, White)
//    Land_Pillow_02_lxWS | Pillow (New, Red)
//    Land_Pillow_03_lxWS | Pillow (New, Stripes)
//    Land_Pillow_EP1_lxWS | Pillow (Old v1)
//    Land_Rack_F | Rack
//    Land_RattanChair_01_F | Rattan Chair
//    Land_RattanTable_01_F | Rattan Table
//    Land_Rug_01_F | Rug (Brown)
//    Land_Rug_01_Traditional_F | Rug (Brown, Traditional)
//    Land_ShelvesMetal_F | Shelves (Metal)
//    Land_ShelvesWooden_blue_F | Shelves (Wooden, Blue)
//    Land_ShelvesWooden_F | Shelves (Wooden)
//    Land_ShelvesWooden_khaki_F | Shelves (Wooden, Khaki)
//    Land_Sink_01_F | Sink
//    Land_Sofa_01_F | Sofa
//    Land_Table_small_EP1_lxWS | Small Table
//    Land_TableBig_01_F | Dinner Table
//    Land_TableDesk_F | Desk
//    Land_TableSmall_01_F | Coffee Table
//    Land_Toilet_01_F | Toilet
//    Land_WaterCooler_01_new_F | Water Cooler (New)
//    Land_WaterCooler_01_old_F | Water Cooler (Old)
//    Land_WoodenBed_01_F | Bed (Double, Wooden)
//    Land_WoodenTable_02_large_F | Picnic Table
//    Land_WoodenTable_large_F | Wooden table (Large)
//    Land_WoodenTable_small_F | Wooden table (Small)
//    Land_Workbench_02_F | Workbench (Green)
//    MapBoard_altis_F | Whiteboard (Map of Altis)
//    MapBoard_Malden_F | Whiteboard (Map of Malden)
//    MapBoard_seismic_F | Whiteboard (Seismic map)
//    MapBoard_stratis_F | Whiteboard (Map of Stratis)
//    MapBoard_Tanoa_F | Whiteboard (Map of Tanoa)
//    OfficeTable_01_new_F | Office Table (New)
//    OfficeTable_01_old_F | Office Table (Old)
//    pillowV2_EP1_lxWS | Pillow (Old v2)
//
// -- Garbage (45) --
//    BloodPool_01_Large_New_F | Blood Pool (Large, New)
//    BloodPool_01_Large_Old_F | Blood Pool (Large, Old)
//    BloodPool_01_Medium_New_F | Blood Pool (Medium, New)
//    BloodPool_01_Medium_Old_F | Blood Pool (Medium, Old)
//    BloodSplatter_01_Large_New_F | Blood Splatter (Large, New)
//    BloodSplatter_01_Large_Old_F | Blood Splatter (Large, Old)
//    BloodSplatter_01_Medium_New_F | Blood Splatter (Medium, New)
//    BloodSplatter_01_Medium_Old_F | Blood Splatter (Medium, Old)
//    BloodSplatter_01_Small_New_F | Blood Splatter (Small, New)
//    BloodSplatter_01_Small_Old_F | Blood Splatter (Small, Old)
//    BloodSpray_01_New_F | Blood Spray (New)
//    BloodSpray_01_Old_F | Blood Spray (Old)
//    BloodTrail_01_New_F | Blood Trail (New)
//    BloodTrail_01_Old_F | Blood Trail (Old)
//    Land_BurntGarbage_01_F | Burnt Garbage (v1)
//    Land_CrabCages_F | Crab Cages
//    Land_FishingGear_01_F | Fishing Gear
//    Land_FishingGear_02_F | Fishing Nets
//    Land_Garbage_line_F | Garbage (Line)
//    Land_Garbage_square3_F | Garbage (3x3)
//    Land_Garbage_square5_F | Garbage (5x5)
//    Land_GarbageBags_F | Garbage (Bags)
//    Land_GarbageBarrel_01_english_F | Garbage Barrel (Smiley, English)
//    Land_GarbageBarrel_01_F | Garbage Barrel (Smiley, Greek)
//    Land_GarbageBarrel_02_buried_F | Garbage Barrel (Buried, Military)
//    Land_GarbageBarrel_02_F | Garbage Barrel (Military)
//    Land_GarbageContainer_closed_F | Trash container (Closed)
//    Land_GarbageContainer_open_F | Trash container (Open)
//    Land_GarbageHeap_01_F | Pile of Garbage (v1)
//    Land_GarbageHeap_02_F | Pile of Garbage (v2)
//    Land_GarbageHeap_03_F | Pile of Garbage (v3)
//    Land_GarbageHeap_04_F | Pile of Garbage (v4)
//    Land_GarbagePallet_F | Garbage Heap (Pallet)
//    Land_GarbageWashingMachine_F | Garbage Heap (Washing machine)
//    Land_JunkPile_F | Pile of Junk
//    Land_PalmFenceLeafPile_lxWS | Palm Leaf Pile
//    Land_Tyre_01_F | Tire (Vertical, 1)
//    Land_Tyre_01_line_x5_F | Tire Line (Vertical, 5)
//    Land_Tyre_F | Tire
//    Land_Tyres_F | Tires (Heap)
//    Land_WheelieBin_01_F | Wheelie Bin
//    Tire_Van_02_Cargo_F | Van Tire (Rim, Cargo)
//    Tire_Van_02_F | Van Tire
//    Tire_Van_02_Spare_F | Van Tire (Spare)
//    Tire_Van_02_Transport_F | Van Tire (Rim, Transport)
//
// -- Helpers (49) --
//    Box_Large_lxWS | Box (Large)
//    Box_Medium_lxWS | Box (Medium)
//    Cage_Large_lxWS | Cage (Large)
//    Cage_Medium_lxWS | Cage (Medium)
//    Cage_Small_lxWS | Cage (Small)
//    Land_ATM_Monitor_RF | ATM Monitor
//    Land_ClutterCutter_extra_large_RF | Grass Cutter (Extra Large)
//    Land_ClutterCutter_large_F | Grass Cutter (Large)
//    Land_ClutterCutter_medium_F | Grass Cutter (Medium)
//    Land_ClutterCutter_small_F | Grass Cutter (Small)
//    PlaneInvis_lxWS | Plane, Invisible
//    ProtectionZone_F | Protection Zone
//    ProtectionZone_Invisible_F | Protection Zone (Invisible)
//    Sign_Arrow_Blue_F | Arrow (Blue)
//    Sign_Arrow_Cyan_F | Arrow (Cyan)
//    Sign_Arrow_Direction_Blue_F | Arrow (Direction, Blue)
//    Sign_Arrow_Direction_Cyan_F | Arrow (Direction, Cyan)
//    Sign_Arrow_Direction_F | Arrow (Direction, Red)
//    Sign_Arrow_Direction_Green_F | Arrow (Direction, Green)
//    Sign_Arrow_Direction_Pink_F | Arrow (Direction, Pink)
//    Sign_Arrow_Direction_Yellow_F | Arrow (Direction, Yellow)
//    Sign_Arrow_F | Arrow (Red)
//    Sign_Arrow_Green_F | Arrow (Green)
//    Sign_Arrow_Large_Blue_F | Arrow (Large, Blue)
//    Sign_Arrow_Large_Cyan_F | Arrow (Large, Cyan)
//    Sign_Arrow_Large_F | Arrow (Large, Red)
//    Sign_Arrow_Large_Green_F | Arrow (Large, Green)
//    Sign_Arrow_Large_Pink_F | Arrow (Large, Pink)
//    Sign_Arrow_Large_Yellow_F | Arrow (Large, Yellow)
//    Sign_Arrow_Pink_F | Arrow (Pink)
//    Sign_Arrow_Yellow_F | Arrow (Yellow)
//    Sign_Circle_F | Circle
//    Sign_Pointer_Blue_F | Pointer (Blue)
//    Sign_Pointer_Cyan_F | Pointer (Cyan)
//    Sign_Pointer_F | Pointer (Red)
//    Sign_Pointer_Green_F | Pointer (Green)
//    Sign_Pointer_Pink_F | Pointer (Pink)
//    Sign_Pointer_Yellow_F | Pointer (Yellow)
//    Sign_Sphere100cm_F | Sphere (100cm)
//    Sign_Sphere100cm_Geometry_F | Sphere (Geometry, 100cm)
//    Sign_Sphere10cm_F | Sphere (10cm)
//    Sign_Sphere10cm_Geometry_F | Sphere (Geometry, 10cm)
//    Sign_Sphere200cm_F | Sphere (200cm)
//    Sign_Sphere200cm_Geometry_F | Sphere (Geometry, 200cm)
//    Sign_Sphere25cm_F | Sphere (25cm)
//    Sign_Sphere25cm_Geometry_F | Sphere (Geometry, 25cm)
//    UserTexture10m_F | User Texture (10m)
//    UserTexture1m_F | User Texture (1m)
//    UserTexture_1x2_F | User Texture (1x2m)
//
// -- Items (162) --
//    ACE_adenosineItem | Adenosine Autoinjector
//    ACE_bananaItem | Banana
//    ACE_bloodIVItem | Blood IV (1000ml)
//    ACE_bodyBagItem | Bodybag
//    ACE_Can_Franta_Item | Can (Franta)
//    ACE_Can_RedGull_Item | Can (RedGull)
//    ACE_Can_Spirit_Item | Can (Spirit)
//    ACE_Canteen_Empty_Item | Canteen (Empty)
//    ACE_Canteen_Half_Item | Canteen (Half)
//    ACE_Canteen_Item | Canteen
//    ACE_elasticBandageItem | Bandage (Elastic)
//    ACE_epinephrineItem | Epinephrine Autoinjector
//    ACE_fieldDressingItem | Bandage (Basic)
//    ACE_Flashlight_KSF1Item | KSF-1
//    ACE_Flashlight_MX991Item | Fulton MX-991
//    ACE_Flashlight_XL50Item | Maglite XL50
//    ACE_Humanitarian_Ration_Item | Humanitarian Ration
//    ACE_Item_ATragMX | ATragMX
//    ACE_Item_DAGR | DAGR
//    ACE_Item_Flashlight_Maglite_ML300L | Maglite ML300L
//    ACE_Item_HuntIR_monitor | HuntIR Monitor
//    ACE_Item_Kestrel4500 | Kestrel 4500NV
//    ACE_Item_MX2A | MX-2A
//    ACE_Item_RangeCard | Range Card
//    ACE_Item_Sandbag_empty | Sandbag (empty)
//    ACE_Item_SpottingScope | Spotting Scope
//    ACE_Item_SpraypaintBlack | Spray Paint (Black)
//    ACE_Item_SpraypaintBlue | Spray Paint (Blue)
//    ACE_Item_SpraypaintGreen | Spray Paint (Green)
//    ACE_Item_SpraypaintRed | Spray Paint (Red)
//    ACE_Item_SpraypaintWhite | Spray Paint (White)
//    ACE_Item_SpraypaintYellow | Spray Paint (Yellow)
//    ACE_Item_Tripod | SSWT Kit
//    ACE_Item_Vector | Vector 21 Nite
//    ACE_Item_VectorDay | Vector 21
//    ACE_Item_Yardage450 | Yardage 450
//    ACE_microDAGR_Item | MicroDAGR GPS
//    ACE_morphineItem | Morphine Autoinjector
//    ACE_MRE_BeefStew_Item | MRE Beef Stew
//    ACE_MRE_ChickenHerbDumplings_Item | MRE Chicken with Herb Dumplings
//    ACE_MRE_ChickenTikkaMasala_Item | MRE Chicken Tikka Masala
//    ACE_MRE_CreamChickenSoup_Item | MRE Cream Chicken Soup
//    ACE_MRE_CreamTomatoSoup_Item | MRE Cream Tomato Soup
//    ACE_MRE_LambCurry_Item | MRE Lamb Curry
//    ACE_MRE_MeatballsPasta_Item | MRE Meatballs and Pasta
//    ACE_MRE_SteakVegetables_Item | MRE Steak Vegetables
//    ACE_packingBandageItem | Bandage (Packing)
//    ACE_painkillersItem | Painkillers
//    ACE_personalAidKitItem | Personal Aid Kit
//    ACE_plasmaIVItem | Plasma IV (1000ml)
//    ACE_quikClotItem | Bandage (QuikClot)
//    ACE_salineIVItem | Saline IV (1000ml)
//    ACE_splintItem | Splint
//    ACE_Sunflower_Seeds_Item | Sunflower Seeds
//    ACE_surgicalKitItem | Surgical Kit
//    ACE_sutureItem | Suture
//    ACE_tourniquetItem | Tourniquet (CAT)
//    ACE_WaterBottle_Empty_Item | Water Bottle (Empty)
//    ACE_WaterBottle_Half_Item | Water Bottle (Half)
//    ACE_WaterBottle_Item | Water Bottle
//    ALiVE_Humrat_Item | ALiVE Rice Pack
//    ALiVE_Waterbottle_Item | ALiVE Water Bottle (Full)
//    GHOST_apapItem | Apap pastille
//    ghost_equipment_Item_Vector_Designator | [Ghost] ACE Vector Designator (NVG/TI)
//    ghost_equipment_Item_Vector_Designator_NVG | [Ghost] ACE Vector Designator (NVG)
//    ghost_medbags_Item_DrugKit | Drug Kit
//    ghost_medbags_Item_FirstAid | Boo Boo Bag
//    ghost_medbags_Item_Fluid | Fluid Kit
//    ghost_medbags_Item_MedicKit | Medic Bag
//    ghost_medbags_Item_Trauma | Trauma Kit
//    ghost_patrol_base_kit_olive_object | Patrol Base Kit (Olive)
//    ghost_patrol_base_kit_sand_object | Patrol Base Kit (Sand)
//    Item_Antibiotic | Antibiotics
//    Item_Antimalaricum | Antimalarial Pills
//    Item_AntimalaricumVaccine | Atrox Counteragent
//    Item_Bandage | Bandages
//    Item_Binocular | Binoculars
//    Item_Butane_canister | Butane Canister (Full)
//    Item_Camera_lxWS | Digital Camera
//    Item_ChemicalDetector_01_black_F | Chemical Detector (Cover, Black)
//    Item_ChemicalDetector_01_olive_F | Chemical Detector (Cover, Olive)
//    Item_ChemicalDetector_01_tan_F | Chemical Detector (Cover, Tan)
//    Item_ChemicalDetector_01_watch_F | Chemical Detector
//    Item_CSAToperatorAccesCard_01 | Access Card (v1) [CSAT]
//    Item_CSAToperatorAccesCard_02 | Access Card (v2) [CSAT]
//    Item_CSAToperatorAccesCard_03 | Access Card (v3) [CSAT]
//    Item_CSAToperatorAccesCard_04 | Access Card (v4) [CSAT]
//    Item_CSAToperatorAccesCard_05 | Access Card (v5) [CSAT]
//    Item_EF_LPNVG | LPNVG
//    Item_EF_LPNVG_T | LPNVG-T
//    Item_EF_LPNVG_T_Tan | LPNVG-T (Tan)
//    Item_EF_LPNVG_Tan | LPNVG (Tan)
//    Item_Files | Files
//    Item_FileTopSecret | File (Top Secret)
//    Item_FirstAidKit | First Aid Kit
//    Item_FlashDisk | Flash Drive
//    Item_Goggles | Goggles (Brown)
//    Item_Goggles_grn_F | Goggles (Green)
//    Item_Goggles_tna_F | Goggles (Tropic)
//    Item_ItemALiVEPhoneOld | Mobile Phone (Old)
//    Item_ItemCompass | Compass
//    Item_ItemGPS | GPS
//    Item_ItemMap | Map
//    Item_ItemRadio | Radio
//    Item_ItemSmartPhone | Mobile Phone
//    Item_ItemWatch | Watch
//    Item_Keys | Keys
//    Item_Laptop_closed | Laptop (Closed)
//    Item_Laptop_Unfolded | Laptop (Open)
//    Item_Laserdesignator | Laser Designator (Sand)
//    Item_Laserdesignator_01_khk_F | Laser Designator (Khaki)
//    Item_Laserdesignator_02 | Laser Designator (Hex)
//    Item_Laserdesignator_02_blk_F | Laser Designator (Black)
//    Item_Laserdesignator_02_ghex_F | Laser Designator (Green Hex)
//    Item_Laserdesignator_02_grn_F | Laser Designator (Green)
//    Item_Laserdesignator_03 | Laser Designator (Olive)
//    Item_Laserdesignator_04 | Laser Designator (Grey)
//    Item_Medikit | Medikit
//    Item_MineDetector | Mine Detector
//    Item_MobilePhone | Mobile Phone (Old)
//    Item_Money | Money
//    Item_Money_bunch | Money (Notes)
//    Item_Money_roll | Money (Roll)
//    Item_Money_stack | Money (Stack)
//    Item_MotionSensor_lxWS | Motion Sensor
//    Item_muzzle_antenna_01_f | SD Military Antenna (78-89 MHz)
//    Item_muzzle_antenna_02_f | SD Experimental Antenna (390-500 MHz)
//    Item_NetworkStructure | Network Structure Plans
//    Item_NVGoggles | NV Goggles (Brown)
//    Item_NVGoggles_INDEP | NV Goggles (Green)
//    Item_NVGoggles_OPFOR | NV Goggles (Black)
//    Item_NVGoggles_tna_F | NV Goggles (Tropic)
//    Item_NVGogglesB_blk_F | ENVG-II (Black)
//    Item_NVGogglesB_grn_F | ENVG-II (Green)
//    Item_NVGogglesB_gry_F | ENVG-II (Grey)
//    Item_O_NVGoggles_blk_F | Compact NVG (Black)
//    Item_O_NVGoggles_ghex_F | Compact NVG (Green Hex)
//    Item_O_NVGoggles_grn_F | Compact NVG (Green)
//    Item_O_NVGoggles_hex_F | Compact NVG (Hex)
//    Item_O_NVGoggles_urb_F | Compact NVG (Urban)
//    Item_PropCamera_lxWS | Digital Camera (Intel)
//    Item_Rangefinder | Rangefinder
//    Item_Rev_Bustard | Deployable AP-5 Bustard
//    Item_Rev_Darter | Deployable AR-2 Darter
//    Item_Rev_Demine | Deployable Demining Drone
//    Item_Rev_Designator | Deployable remote designator
//    Item_Rev_Pelican | Deployable AL-6 Pelican
//    Item_Rev_Pelter | Deployable ED-1D Pelter
//    Item_Rev_Roller | Deployable ED-1E Roller
//    Item_Rev_UAV_IED | Deployable IED UAV
//    Item_SatPhone | Satellite Phone
//    Item_SecretDocuments | File
//    Item_SecretFiles | File (Top Secret)
//    Item_Sleeping_bag_folded_01 | Sleeping Bag (Folded)
//    Item_SmartPhone | Mobile Phone (New)
//    Item_TiGoggles_grn_RF | TNVG-B (Green)
//    Item_TiGoggles_RF | TNVG-B (Black)
//    Item_TiGoggles_tan_RF | TNVG-B (Sand)
//    Item_ToolKit | Toolkit
//    Item_Wallet_traitor | Wallet (ID)
//    vhf30108Item | ACRE VHF30108 GSM
//    vhf30108spike | ACRE VHF30108 GS
//
// -- ItemsHeadgear (867) --
//    ghost_headware_Item_H_Booniehat_Multicam_F | [Ghost] Booniehat (Multicam)
//    ghost_headware_Item_H_Booniehat_Multicam_hs_F | [Ghost] Booniehat (Multicam) [Headset]
//    ghost_headware_Item_H_Booniehat_Multicam_Snow_F | [Ghost] Booniehat (Multicam Snow)
//    ghost_headware_Item_H_Booniehat_Multicam_Snow_hs_F | [Ghost] Booniehat (Multicam Snow) [Headset]
//    ghost_headware_Item_H_Booniehat_Multicam_Woodland_F | [Ghost] Booniehat (Multicam Woodland)
//    ghost_headware_Item_H_Booniehat_Multicam_Woodland_hs_F | [Ghost] Booniehat (Multicam Woodland) [Headset]
//    ghost_headware_Item_H_Booniehat_ocp_F | [Ghost] Booniehat (OCP)
//    ghost_headware_Item_H_Booniehat_ocp_hs_F | [Ghost] Booniehat (OCP) [Headset]
//    ghost_headware_Item_H_Booniehat_Solid_CoyoteBrown_F | [Ghost] Booniehat (Coyote)
//    ghost_headware_Item_H_Booniehat_Solid_CoyoteBrown_hs_F | [Ghost] Booniehat (Coyote) [Headset]
//    ghost_headware_Item_H_Booniehat_Solid_Olive_F | [Ghost] Booniehat (Olive)
//    ghost_headware_Item_H_Booniehat_Solid_Olive_hs_F | [Ghost] Booniehat (Olive) [Headset]
//    ghost_headware_Item_H_Booniehat_Solid_Ranger_Green_F | [Ghost] Booniehat (Ranger Green)
//    ghost_headware_Item_H_Booniehat_Solid_Ranger_Green_hs_F | [Ghost] Booniehat (Ranger Green) [Headset]
//    ghost_headware_Item_H_Booniehat_Solid_Tan_F | [Ghost] Booniehat (Tan)
//    ghost_headware_Item_H_Booniehat_Solid_Tan_hs_F | [Ghost] Booniehat (Tan) [Headset]
//    ghost_headware_Item_H_Booniehat_Solid_White_F | [Ghost] Booniehat (White)
//    ghost_headware_Item_H_Booniehat_Solid_White_hs_F | [Ghost] Booniehat (White) [Headset]
//    ghost_headware_Item_H_Helmet_FASTMT_A3_Multicam_Woodland_F | [Ghost] FAST-MT Helmet (Multicam Woodland)
//    ghost_headware_Item_H_Helmet_FASTMT_blk_F | [Ghost] FAST-MT Helmet (Black)
//    ghost_headware_Item_H_Helmet_FASTMT_cbr_F | [Ghost] FAST-MT Helmet (Coyote Brown)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_A3_Multicam_Woodland_F | [Ghost] FAST-MT Helmet w/ Cover (Multicam Woodland)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_blk_F | [Ghost] FAST-MT Helmet w/ Cover (Black)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_desert_F | [Ghost] FAST-MT Helmet w/ Cover (Desert)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_ghost_US_OCP_F | [Ghost] FAST-MT Helmet w/ Cover (Ghost US OCP)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_mtp_F | [Ghost] FAST-MT Helmet w/ Cover (MTP)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_Multicam_F | [Ghost] FAST-MT Helmet w/ Cover (Multicam)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_Multicam_Snow_F | [Ghost] FAST-MT Helmet w/ Cover (Multicam Alpine)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_rgr_F | [Ghost] FAST-MT Helmet w/ Cover (Ranger Green)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_tan_F | [Ghost] FAST-MT Helmet w/ Cover (Tan)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_tna_F | [Ghost] FAST-MT Helmet w/ Cover (Tropic)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_US_OCP_F | [Ghost] FAST-MT Helmet w/ Cover (US OCP)
//    ghost_headware_Item_H_Helmet_FASTMT_Cover_wdl_F | [Ghost] FAST-MT Helmet w/ Cover (Woodland)
//    ghost_headware_Item_H_Helmet_FASTMT_Headset_A3_Multicam_Woodland_F | [Ghost] FAST-MT Helmet w/ Headset (Multicam Woodland)
//    ghost_headware_Item_H_Helmet_FASTMT_Headset_blk_F | [Ghost] FAST-MT Helmet w/ Headset (Black)
//    ghost_headware_Item_H_Helmet_FASTMT_Headset_cbr_F | [Ghost] FAST-MT Helmet w/ Headset (Coyote Brown)
//    ghost_headware_Item_H_Helmet_FASTMT_Headset_Multicam_F | [Ghost] FAST-MT Helmet w/ Headset (Multicam)
//    ghost_headware_Item_H_Helmet_FASTMT_Headset_Multicam_Snow_F | [Ghost] FAST-MT Helmet w/ Headset (Multicam Alpine)
//    ghost_headware_Item_H_Helmet_FASTMT_Headset_rgr_F | [Ghost] FAST-MT Helmet w/ Headset (Ranger Green)
//    ghost_headware_Item_H_Helmet_FASTMT_Headset_tan_F | [Ghost] FAST-MT Helmet w/ Headset (Tan)
//    ghost_headware_Item_H_Helmet_FASTMT_Headset_US_OCP_F | [Ghost] FAST-MT Helmet w/ Headset (US OCP)
//    ghost_headware_Item_H_Helmet_FASTMT_Multicam_F | [Ghost] FAST-MT Helmet (Multicam)
//    ghost_headware_Item_H_Helmet_FASTMT_Multicam_Snow_F | [Ghost] FAST-MT Helmet (Multicam Alpine)
//    ghost_headware_Item_H_Helmet_FASTMT_rgr_F | [Ghost] FAST-MT Helmet (Ranger Green)
//    ghost_headware_Item_H_Helmet_FASTMT_tan_F | [Ghost] FAST-MT Helmet (Tan)
//    ghost_headware_Item_H_Helmet_FASTMT_US_OCP_F | [Ghost] FAST-MT Helmet (US OCP)
//    ghost_uniform_sof_Item_SOF_H_BaseballCap_khk | [Ghost] Baseball Cap (Khaki)
//    ghost_uniform_sof_Item_SOF_H_BaseballCap_mcam | [Ghost] Baseball Cap (MTP)
//    ghost_uniform_sof_Item_SOF_H_BaseballCap_rgr | [Ghost] Baseball Cap (Green)
//    ghost_uniform_sof_Item_SOF_H_BaseballCapSpec_khk | [Ghost] Baseball Cap (Headset, Khaki)
//    ghost_uniform_sof_Item_SOF_H_BaseballCapSpec_mcam | [Ghost] Baseball Cap (Headset, MTP)
//    ghost_uniform_sof_Item_SOF_H_BaseballCapSpec_rgr | [Ghost] Baseball Cap (Headset, Green)
//    ghost_uniform_sof_Item_SOF_H_BaseballCapSpec_tna | [Ghost] Baseball Cap (Headset, Tropic)
//    ghost_uniform_sof_Item_SOF_H_BaseballCapSpec_wdl | [Ghost] Baseball Cap (Headset, Woodland)
//    ghost_uniform_sof_Item_SOF_H_Opscore_blk | [Ghost] Hi-Cut Helmet (Black)
//    ghost_uniform_sof_Item_SOF_H_Opscore_Cover_mcam | [Ghost] Hi-Cut Helmet (Cover, MTP)
//    ghost_uniform_sof_Item_SOF_H_Opscore_Cover_mrpt_des | [Ghost] Hi-Cut Helmet (Cover, USMC Desert)
//    ghost_uniform_sof_Item_SOF_H_Opscore_Cover_mrpt_wdl | [Ghost] Hi-Cut Helmet (Cover, USMC Woodland)
//    ghost_uniform_sof_Item_SOF_H_Opscore_Cover_nwu | [Ghost] Hi-Cut Helmet (Cover, USN Woodland)
//    ghost_uniform_sof_Item_SOF_H_Opscore_Cover_ocp | [Ghost] Hi-Cut Helmet (Cover, OCP)
//    ghost_uniform_sof_Item_SOF_H_Opscore_Cover_rgr | [Ghost] Hi-Cut Helmet (Cover, Green)
//    ghost_uniform_sof_Item_SOF_H_Opscore_Cover_tna | [Ghost] Hi-Cut Helmet (Cover, Tropic)
//    ghost_uniform_sof_Item_SOF_H_Opscore_Cover_wdl | [Ghost] Hi-Cut Helmet (Cover, Woodland)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverCamo_mcam | [Ghost] Hi-Cut Helmet (Cover, MTP/Camo)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverCamo_ocp | [Ghost] Hi-Cut Helmet (Cover, OCP/Camo)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverCamo_rgr | [Ghost] Hi-Cut Helmet (Cover, Green/Camo)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverSpec_mcam | [Ghost] Enhanced Hi-Cut Helmet (Cover, MTP)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverSpec_mrpt_des | [Ghost] Enhanced Hi-Cut Helmet (Cover, USMC Desert)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverSpec_mrpt_wdl | [Ghost] Enhanced Hi-Cut Helmet (Cover, USMC Woodland)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverSpec_nwu | [Ghost] Enhanced Hi-Cut Helmet (Cover, USN Woodland)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverSpec_ocp | [Ghost] Enhanced Hi-Cut Helmet (Cover, OCP)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverSpec_rgr | [Ghost] Enhanced Hi-Cut Helmet (Cover, Green)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverSpec_tna | [Ghost] Enhanced Hi-Cut Helmet (Cover, Tropic)
//    ghost_uniform_sof_Item_SOF_H_Opscore_CoverSpec_wdl | [Ghost] Enhanced Hi-Cut Helmet (Cover, Woodland)
//    ghost_uniform_sof_Item_SOF_H_Opscore_oli | [Ghost] Hi-Cut Helmet (Olive)
//    ghost_uniform_sof_Item_SOF_H_Opscore_rgr | [Ghost] Hi-Cut Helmet (Green)
//    ghost_uniform_sof_Item_SOF_H_Opscore_snd | [Ghost] Hi-Cut Helmet (Sand)
//    ghost_uniform_sof_Item_SOF_H_OpscoreSpec_blk | [Ghost] Enhanced Hi-Cut Helmet (Black)
//    ghost_uniform_sof_Item_SOF_H_OpscoreSpec_oli | [Ghost] Enhanced Hi-Cut Helmet (Olive)
//    ghost_uniform_sof_Item_SOF_H_OpscoreSpec_rgr | [Ghost] Enhanced Hi-Cut Helmet (Green)
//    ghost_uniform_sof_Item_SOF_H_OpscoreSpec_snd | [Ghost] Enhanced Hi-Cut Helmet (Sand)
//    Headgear_Aegis_H_Booniehat_UNO_F | Booniehat [UN]
//    Headgear_Aegis_H_Booniehat_UNO_hs_F | Booniehat [UN] (Headset)
//    Headgear_Aegis_H_Helmet_FASTMT_blk_F | Operator Helmet (Black)
//    Headgear_Aegis_H_Helmet_FASTMT_cbr_F | Operator Helmet (Coyote)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_blk_F | Operator Helmet (Cover, Black)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_dazzle_F | Operator Helmet [CTRG] (Cover)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_dazzle_tna_F | Operator Helmet [CTRG] (Cover, Tropic)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_desert_F | Operator Helmet [US] (Cover, MCU-D)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_mtp_F | Operator Helmet [US] (Cover, OCP)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_rgr_F | Operator Helmet (Cover, Green)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_tan_F | Operator Helmet (Cover, Tan)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_tna_F | Operator Helmet [US] (Cover, MTP-T)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F | Operator Helmet [UK] (Cover, MTP)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_UK_tna_F | Operator Helmet [UK] (Cover, MTP-T)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F | Operator Helmet [UK] (Cover, MTP-W)
//    Headgear_Aegis_H_Helmet_FASTMT_Cover_wdl_F | Operator Helmet [US] (Cover, MTP-W)
//    Headgear_Aegis_H_Helmet_FASTMT_Headset_blk_F | Operator Helmet (Headset, Black)
//    Headgear_Aegis_H_Helmet_FASTMT_Headset_cbr_F | Operator Helmet (Headset, Coyote)
//    Headgear_Aegis_H_Helmet_FASTMT_Headset_rgr_F | Operator Helmet (Headset, Green)
//    Headgear_Aegis_H_Helmet_FASTMT_Headset_tan_F | Operator Helmet (Headset, Tan)
//    Headgear_Aegis_H_Helmet_FASTMT_rgr_F | Operator Helmet (Green)
//    Headgear_Aegis_H_Helmet_FASTMT_tan_F | Operator Helmet (Tan)
//    Headgear_Aegis_H_Helmet_Virtus_Cover_mtp_F | Fortis Helmet (Cover, MTP)
//    Headgear_Aegis_H_Helmet_Virtus_Cover_tna_F | Fortis Helmet (Cover, MTP-T)
//    Headgear_Aegis_H_Helmet_Virtus_Cover_UN_F | Fortis Helmet [UN] (Cover)
//    Headgear_Aegis_H_Helmet_Virtus_Cover_wdl_F | Fortis Helmet (Cover, MTP-W)
//    Headgear_Aegis_H_Helmet_Virtus_Headset_rgr_F | Fortis Helmet (Headset, Green)
//    Headgear_Aegis_H_Helmet_Virtus_Headset_snd_F | Fortis Helmet (Headset, Tan)
//    Headgear_Aegis_H_Helmet_Virtus_rgr_F | Fortis Helmet (Green)
//    Headgear_Aegis_H_Helmet_Virtus_Scrim_mtp_F | Fortis Helmet (Scrim, MTP)
//    Headgear_Aegis_H_Helmet_Virtus_Scrim_tna_F | Fortis Helmet (Scrim, MTP-T)
//    Headgear_Aegis_H_Helmet_Virtus_Scrim_wdl_F | Fortis Helmet (Scrim, MTP-W)
//    Headgear_Aegis_H_Helmet_Virtus_snd_F | Fortis Helmet (Tan)
//    Headgear_Aegis_H_HelmetAggressor_cover_ruurban_F | Avenger Helmet (Cover, Urban)
//    Headgear_Aegis_H_Milcap_nohs_blue_F | Military Cap (Blue)
//    Headgear_Aegis_H_Milcap_nohs_desert_lxWS | Military Cap (Desert)
//    Headgear_Aegis_H_Milcap_nohs_dgtl_F | Military Cap [AAF]
//    Headgear_Aegis_H_Milcap_nohs_eaf_arid | Military Cap [LDF] (Arid)
//    Headgear_Aegis_H_Milcap_nohs_eaf_F | Military Cap [LDF]
//    Headgear_Aegis_H_Milcap_nohs_gen_F | Military Cap (Gendarmerie)
//    Headgear_Aegis_H_Milcap_nohs_ghex_F | Military Cap (Green Hex)
//    Headgear_Aegis_H_Milcap_nohs_grn_F | Military Cap (Green)
//    Headgear_Aegis_H_Milcap_nohs_gry_F | Military Cap (Grey)
//    Headgear_Aegis_H_Milcap_nohs_mcamo_F | Military Cap (OCP)
//    Headgear_Aegis_H_Milcap_nohs_ocamo_F | Military Cap (Hex)
//    Headgear_Aegis_H_Milcap_nohs_oicamo_F | Military Cap (Desert Hex)
//    Headgear_Aegis_H_Milcap_nohs_oucamo_F | Military Cap (Urban)
//    Headgear_Aegis_H_Milcap_nohs_taiga_F | Military Cap (Taiga)
//    Headgear_Aegis_H_Milcap_nohs_tan_F | Military Cap (Tan)
//    Headgear_Aegis_H_Milcap_nohs_tna_F | Military Cap (Tropic)
//    Headgear_Aegis_H_Milcap_nohs_UNO | Military Cap [UN]
//    Headgear_Aegis_H_Milcap_nohs_wdl_F | Military Cap (Woodland)
//    Headgear_Aegis_H_Milcap_tachs_blk_F | Military Cap (Tactical Headset, Black)
//    Headgear_Aegis_H_Milcap_tachs_blue_F | Military Cap (Tactical Headset, Blue)
//    Headgear_Aegis_H_Milcap_tachs_grn_F | Military Cap (Tactical Headset, Green)
//    Headgear_Aegis_H_Milcap_tachs_taiga_F | 
//    Headgear_Aegis_H_Milcap_tachs_tan_F | Military Cap (Tactical Headset, Tan)
//    Headgear_Aegis_H_MilCap_UNO | Military Cap [UN] (Headset)
//    Headgear_Aegis_lxWS_H_bmask_UwU | Ballistic Mask (UwU)
//    Headgear_Atlas_H_FieldCap_flecktarn | Field Cap (Flecktarn)
//    Headgear_Atlas_H_FieldCap_hs_flecktarn | Field Cap (Headset, Flecktarn)
//    Headgear_Atlas_H_FieldCap_hs_ldf | Field Cap [LDF] (Headset)
//    Headgear_Atlas_H_FieldCap_hs_multitarn | Field Cap (Headset, Multitarn)
//    Headgear_Atlas_H_FieldCap_hs_pantera | Field Cap [LDF] (Headset, Reservist)
//    Headgear_Atlas_H_FieldCap_ldf | Field Cap [LDF]
//    Headgear_Atlas_H_FieldCap_multitarn | Field Cap (Multitarn)
//    Headgear_Atlas_H_FieldCap_pantera | Field Cap [LDF] (Reservist)
//    Headgear_Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F | Operator Helmet [ADF Arid] (Cover)
//    Headgear_Atlas_H_Helmet_FASTMT_Cover_aucamo_F | Operator Helmet [ADF] (Cover)
//    Headgear_Atlas_H_Helmet_FASTMT_Cover_aucamo_trp_F | Operator Helmet [ADF Tropic] (Cover)
//    Headgear_Atlas_H_HelmetCCH_blk_F | Liberator Helmet (Black)
//    Headgear_Atlas_H_HelmetCCH_cover_dst_F | Liberator Helmet (Cover, Desert Hex)
//    Headgear_Atlas_H_HelmetCCH_cover_ghex_F | Liberator Helmet (Cover, Green Hex)
//    Headgear_Atlas_H_HelmetCCH_cover_hex_F | Liberator Helmet (Cover, Hex)
//    Headgear_Atlas_H_HelmetCCH_cover_mhex_F | Liberator Helmet (Cover, Oceanic Hex)
//    Headgear_Atlas_H_HelmetCCH_cover_semiarid_F | Liberator Helmet (Cover, Semi-Arid)
//    Headgear_Atlas_H_HelmetCCH_cover_uhex_F | Liberator Helmet (Cover, Urban)
//    Headgear_Atlas_H_HelmetCCH_cover_whex_F | Liberator Helmet (Cover, Woodland Hex)
//    Headgear_Atlas_H_HelmetCCH_grn_F | Liberator Helmet (Green)
//    Headgear_Atlas_H_HelmetCCH_headset_blk_F | Liberator Helmet (Headset, Black)
//    Headgear_Atlas_H_HelmetCCH_headset_grn_F | Liberator Helmet (Headset, Green)
//    Headgear_Atlas_H_HelmetCCH_headset_khk_F | Liberator Helmet (Headset, Khaki)
//    Headgear_Atlas_H_HelmetCCH_HiCut_blk_F | Intruder Helmet (Black)
//    Headgear_Atlas_H_HelmetCCH_HiCut_cover_dst_F | Intruder Helmet (Cover, Desert Hex)
//    Headgear_Atlas_H_HelmetCCH_HiCut_cover_ghex_F | Intruder Helmet (Cover, Green Hex)
//    Headgear_Atlas_H_HelmetCCH_HiCut_cover_hex_F | Intruder Helmet (Cover, Hex)
//    Headgear_Atlas_H_HelmetCCH_HiCut_cover_mhex_F | Intruder Helmet (Cover, Oceanic Hex)
//    Headgear_Atlas_H_HelmetCCH_HiCut_cover_semiarid_F | Intruder Helmet (Cover, Semi-Arid)
//    Headgear_Atlas_H_HelmetCCH_HiCut_cover_uhex_F | Intruder Helmet (Cover, Urban)
//    Headgear_Atlas_H_HelmetCCH_HiCut_cover_whex_F | Intruder Helmet (Cover, Woodland Hex)
//    Headgear_Atlas_H_HelmetCCH_HiCut_grn_F | Intruder Helmet (Green)
//    Headgear_Atlas_H_HelmetCCH_HiCut_headset_blk_F | Intruder Helmet (Headset, Black)
//    Headgear_Atlas_H_HelmetCCH_HiCut_headset_grn_F | Intruder Helmet (Headset, Green)
//    Headgear_Atlas_H_HelmetCCH_HiCut_headset_khk_F | Intruder Helmet (Headset, Khaki)
//    Headgear_Atlas_H_HelmetCCH_HiCut_khk_F | Intruder Helmet (Khaki)
//    Headgear_Atlas_H_HelmetCCH_khk_F | Liberator Helmet (Khaki)
//    Headgear_Atlas_H_MilCap_nohs_aucamo | Military Cap [ADF]
//    Headgear_Atlas_H_MilCap_nohs_jungle | Military Cap [HIMF]
//    Headgear_Atlas_H_MilCap_nohs_kzg | Military Cap [KZG]
//    Headgear_Atlas_H_MilCap_nohs_semiarid | Military Cap (Semi-Arid)
//    Headgear_Atlas_H_MilCap_nohs_sgg | Military Cap (Sage)
//    Headgear_Atlas_H_MilCap_nohs_whex_F | Military Cap (Woodland Hex)
//    Headgear_Atlas_H_MilCap_tachs_jungle | Military Cap [HIMF] (Tactical Headset)
//    Headgear_Atlas_H_MilCap_tachs_kzg | Military Cap [KZG] (Tactical Headset)
//    Headgear_Atlas_H_PASGT_Cover_alt_Black_F | Basic Helmet (Cover, Black)
//    Headgear_Atlas_H_PASGT_Cover_alt_KZG_F | Basic Helmet [KZG] (Cover)
//    Headgear_Atlas_H_PASGT_Cover_Green_F | Basic Helmet (Cover, Green)
//    Headgear_Atlas_H_PASGT_Cover_HIMF_F | Basic Helmet [HIMF] (Cover)
//    Headgear_Atlas_H_PASGT_Cover_I_EAF_F | Basic Helmet [LDF] (Cover)
//    Headgear_Atlas_H_PASGT_Cover_I_EAF_R_F | Basic Helmet [LDF] (Cover, Reservist)
//    Headgear_Atlas_H_PASGT_Cover_I_UNA_F | Basic Helmet [UNA] (Cover)
//    Headgear_Atlas_H_PASGT_Cover_O_DHex_F | 
//    Headgear_Atlas_H_PASGT_Cover_O_GHex_F | 
//    Headgear_Atlas_H_PASGT_Cover_O_Hex_F | 
//    Headgear_Atlas_H_PASGT_Cover_O_SAHex_F | 
//    Headgear_Atlas_H_PASGT_Cover_O_UHex_F | 
//    Headgear_Atlas_H_PASGT_Cover_Olive_F | Basic Helmet (Cover, Olive)
//    Headgear_Atlas_H_PASGT_Cover_Tan_F | Basic Helmet (Cover, Tan)
//    Headgear_Atlas_H_PASGT_Cover_UN_F | Basic Helmet [UN] (Cover)
//    Headgear_Atlas_H_PASGT_Cover_wdl_F | Basic Helmet (Cover, Woodland)
//    Headgear_EF_H_Booniehat_Des | Booniehat (Desert)
//    Headgear_EF_H_Booniehat_Wdl | Booniehat (Woodland)
//    Headgear_EF_H_Cap_Navy | Cap (Navy)
//    Headgear_EF_H_Cap_Takmyr | Cap (USS Takmyr)
//    Headgear_EF_H_HelmetB_light_black_slick | Light Combat Helmet (Black/Slick)
//    Headgear_EF_H_HelmetB_light_desert_slick | Light Combat Helmet (Desert/Slick)
//    Headgear_EF_H_HelmetB_light_grass_slick | Light Combat Helmet (Grass/Slick)
//    Headgear_EF_H_HelmetB_light_sand_slick | Light Combat Helmet (Sand/Slick)
//    Headgear_EF_H_HelmetB_light_slick | Light Combat Helmet (Slick)
//    Headgear_EF_H_HelmetB_light_snakeskin_slick | Light Combat Helmet (Snakeskin/Slick)
//    Headgear_EF_H_HelmetB_light_tna_slick | Light Combat Helmet (Tropic/Slick)
//    Headgear_EF_H_HelmetB_light_wdl_slick | Light Combat Helmet (Woodland/Slick)
//    Headgear_EF_H_HelmetCrew_Coy | Crew Helmet [MJTF]
//    Headgear_EF_H_HelmetCrew_O_Urban | Crew Helmet (Urban) [CSAT]
//    Headgear_EF_H_HelmetCrew_White | Crew Helmet [White]
//    Headgear_EF_H_HelmetCrew_Yellow | Crew Helmet [Yellow]
//    Headgear_EF_H_MCH | Marine Combat Helmet
//    Headgear_EF_H_MCH_Basic | Marine Combat Helmet (Basic)
//    Headgear_EF_H_MCH_BasicNet_Black | Marine Combat Helmet (Basic/Black)
//    Headgear_EF_H_MCH_BasicNet_Coy | Marine Combat Helmet (Basic/Coyote Brown)
//    Headgear_EF_H_MCH_BasicNet_Des | Marine Combat Helmet (Basic/Desert)
//    Headgear_EF_H_MCH_BasicNet_Olive | Marine Combat Helmet (Basic/Olive)
//    Headgear_EF_H_MCH_BasicNet_Wdl | Marine Combat Helmet (Basic/Woodland)
//    Headgear_EF_H_MCH_Full | Marine Combat Helmet (Full)
//    Headgear_EF_H_MCH_FullCamo_Black | Marine Combat Helmet (Full/Black)
//    Headgear_EF_H_MCH_FullCamo_Coy | Marine Combat Helmet (Full/Coyote Brown)
//    Headgear_EF_H_MCH_FullCamo_Des | Marine Combat Helmet (Full/Desert)
//    Headgear_EF_H_MCH_FullCamo_Olive | Marine Combat Helmet (Full/Olive)
//    Headgear_EF_H_MCH_FullCamo_Wdl | Marine Combat Helmet (Full/Woodland)
//    Headgear_EF_H_Protecta | Protecta Headset
//    Headgear_EF_H_UtilityCap_Des | Utility Cap (Desert)
//    Headgear_EF_H_UtilityCap_Wdl | Utility Cap (Woodland)
//    Headgear_H_Bandanna_blu | Bandana (Blue)
//    Headgear_H_Bandanna_camo | Bandana (Woodland)
//    Headgear_H_Bandanna_camo_hs | Bandana (Woodland, Headset)
//    Headgear_H_Bandanna_cbr | Bandana (Coyote)
//    Headgear_H_Bandanna_gry | Bandana (Black)
//    Headgear_H_Bandanna_khk | Bandana (Khaki)
//    Headgear_H_Bandanna_khk_hs | Bandana (Khaki, Headset)
//    Headgear_H_Bandanna_mcamo | Bandana (OCP)
//    Headgear_H_Bandanna_mcamo_hs | Bandana (OCP, Headset)
//    Headgear_H_Bandanna_sand | Bandana (Sand)
//    Headgear_H_Bandanna_sgg | Bandana (Sage)
//    Headgear_H_Bandanna_surfer | Bandana (Surfer)
//    Headgear_H_Bandanna_surfer_blk | Bandana (Surfer, Black)
//    Headgear_H_Bandanna_surfer_grn | Bandana (Surfer, Green)
//    Headgear_H_Bandanna_tna_F | Bandana (Tropic)
//    Headgear_H_Bandanna_tna_hs_F | Bandana (Tropic, Headset)
//    Headgear_H_Beret_02 | Beret [NATO]
//    Headgear_H_Beret_AAF_01_F | Beret [AAF]
//    Headgear_H_Beret_blk | Beret (Black)
//    Headgear_H_Beret_blk_POLICE | Beret (Police)
//    Headgear_H_Beret_brn | Beret (Brown)
//    Headgear_H_Beret_brn_SF | Beret (SAS)
//    Headgear_H_Beret_Colonel | Beret [NATO] (Colonel)
//    Headgear_H_Beret_CSAT_01_F | Beret (Red) [CSAT]
//    Headgear_H_Beret_EAF_01_F | Beret [LDF]
//    Headgear_H_Beret_gen_F | Beret (Gendarmerie)
//    Headgear_H_Beret_grn | Beret (Green)
//    Headgear_H_Beret_grn_SF | Beret (SF)
//    Headgear_H_Beret_gry | Beret (Grey)
//    Headgear_H_Beret_Headset_lxWS | Beret (Headset)
//    Headgear_H_Beret_ocamo | Beret [CSAT]
//    Headgear_H_Beret_red | Beret (Red)
//    Headgear_H_Beret_UNO_01_F | Beret [UN]
//    Headgear_H_bmask_snake_lxws | Ballistic Mask (Snake)
//    Headgear_H_Booniehat_aucamo_F | Booniehat [ADF]
//    Headgear_H_Booniehat_aucamo_hs_F | Booniehat [ADF] (Headset)
//    Headgear_H_Booniehat_blk | Booniehat (Black)
//    Headgear_H_Booniehat_desert | Booniehat (Desert) [USMC]
//    Headgear_H_Booniehat_desert_hs | Booniehat (Desert, Headset) [USMC]
//    Headgear_H_Booniehat_dgtl | Boonie Hat [AAF]
//    Headgear_H_Booniehat_dgtl_hs | Booniehat [AAF] (Headset)
//    Headgear_H_Booniehat_eaf | Boonie Hat [LDF]
//    Headgear_H_Booniehat_eaf_arid | Booniehat [LDF] (Arid)
//    Headgear_H_Booniehat_eaf_arid_hs | Booniehat [LDF] (Arid, Headset)
//    Headgear_H_Booniehat_eaf_hs | Booniehat [LDF] (Headset)
//    Headgear_H_Booniehat_flecktarn | Booniehat (Flecktarn)
//    Headgear_H_Booniehat_flecktarn_hs | Booniehat (Flecktarn, Headset)
//    Headgear_H_Booniehat_ghex_F | Booniehat (Green Hex)
//    Headgear_H_Booniehat_ghex_hs_F | Booniehat (Green Hex, Headset)
//    Headgear_H_Booniehat_jungle | Booniehat [HIMF]
//    Headgear_H_Booniehat_jungle_hs | Booniehat [HIMF] (Headset)
//    Headgear_H_Booniehat_khk | Boonie Hat (Khaki)
//    Headgear_H_Booniehat_khk_hs | Booniehat (Khaki, Headset)
//    Headgear_H_Booniehat_mcamo | Booniehat (OCP)
//    Headgear_H_Booniehat_mcamo_hs | Booniehat (OCP, Headset)
//    Headgear_H_Booniehat_mgrn | Boonie Hat (Green)
//    Headgear_H_Booniehat_mgrn_hs | Booniehat (Green, Headset)
//    Headgear_H_Booniehat_multitarn | Booniehat (Multitarn)
//    Headgear_H_Booniehat_multitarn_hs | Booniehat (Multitarn, Headset)
//    Headgear_H_Booniehat_mwdl | Booniehat (Woodland) [USMC]
//    Headgear_H_Booniehat_mwdl_hs | Booniehat (Woodland, Headset) [USMC]
//    Headgear_H_Booniehat_ocamo | Boonie Hat (Hex)
//    Headgear_H_Booniehat_ocamo_hs | Booniehat (Hex, Headset)
//    Headgear_H_Booniehat_oicamo | Booniehat (Desert Hex)
//    Headgear_H_Booniehat_oicamo_hs | Booniehat (Desert Hex, Headset)
//    Headgear_H_Booniehat_oli | Boonie Hat (Olive)
//    Headgear_H_Booniehat_oli_hs | Booniehat (Olive, Headset)
//    Headgear_H_Booniehat_semiarid | Booniehat (Semi-Arid)
//    Headgear_H_Booniehat_semiarid_hs | Booniehat (Semi-Arid, Headset)
//    Headgear_H_Booniehat_taiga | Boonie Hat (Taiga)
//    Headgear_H_Booniehat_taiga_hs | Booniehat (Taiga, Headset)
//    Headgear_H_Booniehat_tan | Boonie Hat (Sand)
//    Headgear_H_Booniehat_tna_F | Boonie Hat (Tropic)
//    Headgear_H_Booniehat_tna_hs_F | Booniehat (Tropic, Headset)
//    Headgear_H_Booniehat_wdl | Boonie Hat (Woodland)
//    Headgear_H_Booniehat_wdl_hs | Booniehat (Woodland, Headset)
//    Headgear_H_Booniehat_whex_F | Booniehat (Woodland Hex)
//    Headgear_H_Booniehat_whex_hs_F | Booniehat (Woodland Hex, Headset)
//    Headgear_H_Cap_aucamo | Cap [ADF]
//    Headgear_H_Cap_Black_IDAP_F | Cap (Black) [IDAP]
//    Headgear_H_Cap_blk | Cap (Black)
//    Headgear_H_Cap_blk_CMMG | Cap (CMMG)
//    Headgear_H_Cap_blk_ION | Cap (ION)
//    Headgear_H_Cap_blk_ION_hs | Cap (ION, Headset)
//    Headgear_H_Cap_blk_Raven | Cap [AAF]
//    Headgear_H_Cap_blk_Raven_hs | Cap [AAF] (Headset)
//    Headgear_H_Cap_blu | Cap (Blue)
//    Headgear_H_Cap_brn_SERO | Cap (SERO)
//    Headgear_H_Cap_brn_SPECOPS | Cap (Hex)
//    Headgear_H_Cap_brn_SPECOPS_hs | Cap (Hex, Headset)
//    Headgear_H_Cap_eaf_arid_F | Cap [LDF] (Arid)
//    Headgear_H_Cap_eaf_arid_hs_F | Cap [LDF] (Arid, Headset)
//    Headgear_H_Cap_eaf_F | Cap [LDF]
//    Headgear_H_Cap_eaf_hs_F | Cap [LDF] (Headset)
//    Headgear_H_Cap_ghex_F | Cap (Green Hex)
//    Headgear_H_Cap_ghex_hs_F | Cap (Green Hex, Headset)
//    Headgear_H_Cap_grn | Cap (Green)
//    Headgear_H_Cap_grn_BI | Cap (BI)
//    Headgear_H_Cap_headphones | Rangemaster Cap
//    Headgear_H_Cap_headphones_blk | Rangemaster Cap (Black)
//    Headgear_H_Cap_headphones_blk_ION | Rangemaster Cap (ION)
//    Headgear_H_Cap_headphones_gry | Rangemaster Cap (Grey)
//    Headgear_H_Cap_headphones_ion_lxws | Cap (ION, Headphones)
//    Headgear_H_Cap_headphones_tan | Rangemaster Cap (Tan)
//    Headgear_H_Cap_khaki_specops_UK | Cap (UK)
//    Headgear_H_Cap_khaki_specops_UK_hs | Cap (UK, Headset)
//    Headgear_H_Cap_Lyfe | Cap (Lyfe)
//    Headgear_H_Cap_MaldenTours | Cap (Malden Tours)
//    Headgear_H_Cap_marshal | Marshal Cap
//    Headgear_H_Cap_marshal_blue_RF | Marshal Cap (Blue)
//    Headgear_H_Cap_oicamo | Cap (Desert Hex)
//    Headgear_H_Cap_oicamo_hs | Cap (Desert Hex, Headset)
//    Headgear_H_Cap_oli | Cap (Olive)
//    Headgear_H_Cap_oli_hs | Cap (Olive, Headset)
//    Headgear_H_Cap_Orange_IDAP_F | Cap (Orange) [IDAP]
//    Headgear_H_Cap_police | Cap (Police)
//    Headgear_H_Cap_press | Cap (Press)
//    Headgear_H_Cap_red | Cap (Red)
//    Headgear_H_Cap_surfer | Cap (Surfer)
//    Headgear_H_Cap_tan | Cap (Tan)
//    Headgear_H_Cap_tan_specops_US | Cap (OCP)
//    Headgear_H_Cap_tan_specops_US_hs | Cap (OCP, Headset)
//    Headgear_H_Cap_tna_F | Cap (Tropic)
//    Headgear_H_Cap_tna_hs_F | Cap (Tropic, Headset)
//    Headgear_H_Cap_usblack | Cap (US, Black)
//    Headgear_H_Cap_usblack_hs | Cap (US, Black, Headset)
//    Headgear_H_Cap_White_IDAP_F | Cap (White) [IDAP]
//    Headgear_H_Construction_basic_black_F | Hard Hat (Black)
//    Headgear_H_Construction_basic_orange_F | Hard Hat (Orange)
//    Headgear_H_Construction_basic_red_F | Hard Hat (Red)
//    Headgear_H_Construction_basic_vrana_F | Hard Hat (Vrana)
//    Headgear_H_Construction_basic_white_F | Hard Hat (White)
//    Headgear_H_Construction_basic_yellow_F | Hard Hat (Yellow)
//    Headgear_H_Construction_earprot_black_F | Hard Hat (Black, Ear Protectors)
//    Headgear_H_Construction_earprot_orange_F | Hard Hat (Orange, Ear Protectors)
//    Headgear_H_Construction_earprot_red_F | Hard Hat (Red, Ear Protectors)
//    Headgear_H_Construction_earprot_vrana_F | Hard Hat (Vrana, Ear Protectors)
//    Headgear_H_Construction_earprot_white_F | Hard Hat (White, Ear Protectors)
//    Headgear_H_Construction_earprot_yellow_F | Hard Hat (Yellow, Ear Protectors)
//    Headgear_H_Construction_headset_black_F | Hard Hat (Black, Headset)
//    Headgear_H_Construction_headset_orange_F | Hard Hat (Orange, Headset)
//    Headgear_H_Construction_headset_red_F | Hard Hat (Red, Headset)
//    Headgear_H_Construction_headset_vrana_F | Hard Hat (Vrana, Headset)
//    Headgear_H_Construction_headset_white_F | Hard Hat (White, Headset)
//    Headgear_H_Construction_headset_yellow_F | Hard Hat (Yellow, Headset)
//    Headgear_H_CrewHelmetHeli_B | Heli Crew Helmet (Black)
//    Headgear_H_CrewHelmetHeli_B_A | Heli Crew Helmet [ADF]
//    Headgear_H_CrewHelmetHeli_I | Heli Crew Helmet [AAF]
//    Headgear_H_CrewHelmetHeli_I_E | Heli Crew Helmet [LDF]
//    Headgear_H_CrewHelmetHeli_O | Heli Crew Helmet (Olive)
//    Headgear_H_EarProtectors_black_F | Ear Protectors (Black)
//    Headgear_H_EarProtectors_olive_F | Ear Protectors (Olive)
//    Headgear_H_EarProtectors_orange_F | Ear Protectors (Orange)
//    Headgear_H_EarProtectors_red_F | Ear Protectors (Red)
//    Headgear_H_EarProtectors_sand_F | Ear Protectors (Sand)
//    Headgear_H_EarProtectors_white_F | Ear Protectors (White)
//    Headgear_H_EarProtectors_yellow_F | Ear Protectors (Yellow)
//    Headgear_H_Hat_blue | Hat (Blue)
//    Headgear_H_Hat_brown | Hat (Brown)
//    Headgear_H_Hat_camo | Hat (Camo)
//    Headgear_H_Hat_checker | Hat (Checker)
//    Headgear_H_Hat_grey | Hat (Grey)
//    Headgear_H_Hat_Pakol_brn_F | Traditional Hat (Brown)
//    Headgear_H_Hat_Pakol_gry_F | Traditional Hat (Grey)
//    Headgear_H_Hat_Pakol_tan_F | Traditional Hat (Tan)
//    Headgear_H_Hat_Safari_olive_F | Safari Hat (Olive)
//    Headgear_H_Hat_Safari_sand_F | Safari Hat (Sand)
//    Headgear_H_Hat_tan | Hat (Tan)
//    Headgear_H_Hat_Tinfoil_F | Tin Foil Hat
//    Headgear_H_HeadBandage_bloody_F | Head Bandage (Severe)
//    Headgear_H_HeadBandage_clean_F | Head Bandage (Clean)
//    Headgear_H_HeadBandage_stained_F | Head Bandage (Moderate)
//    Headgear_H_HeadSet_black_F | Headset (Black)
//    Headgear_H_Headset_light | Light Headset
//    Headgear_H_HeadSet_olive_F | Headset (Olive)
//    Headgear_H_HeadSet_orange_F | Headset (Orange)
//    Headgear_H_HeadSet_red_F | Headset (Red)
//    Headgear_H_HeadSet_sand_F | Headset (Sand)
//    Headgear_H_Headset_Tactical | Tactical Headset (Black)
//    Headgear_H_HeadSet_white_F | Headset (White)
//    Headgear_H_HeadSet_yellow_F | Headset (Yellow)
//    Headgear_H_Helmet_HardHat_Black_RF | Full Brim Hard Hat (Black)
//    Headgear_H_Helmet_HardHat_Blue_RF | Full Brim Hard Hat (Blue)
//    Headgear_H_Helmet_HardHat_Green_RF | Full Brim Hard Hat (Green)
//    Headgear_H_Helmet_HardHat_Orange_RF | Full Brim Hard Hat (Orange)
//    Headgear_H_Helmet_HardHat_Red_RF | Full Brim Hard Hat (Red)
//    Headgear_H_Helmet_HardHat_White_RF | Full Brim Hard Hat (White)
//    Headgear_H_Helmet_HardHat_Yellow_RF | Full Brim Hard Hat (Yellow)
//    Headgear_H_Helmet_Skate | Skate Helmet
//    Headgear_H_HelmetAggressor_black_F | Avenger Helmet (Black)
//    Headgear_H_HelmetAggressor_cover_F | Avenger Helmet (Cover, Khaki)
//    Headgear_H_HelmetAggressor_cover_taiga_F | Avenger Helmet (Cover, Taiga)
//    Headgear_H_HelmetAggressor_F | Avenger Helmet
//    Headgear_H_HelmetAggressor_sb_taiga_RF | Avenger Helmet (Taiga, Shape Breaker)
//    Headgear_H_HelmetB | Combat Helmet
//    Headgear_H_HelmetB_black | Combat Helmet (Black)
//    Headgear_H_HelmetB_camo | Combat Helmet (Camo)
//    Headgear_H_HelmetB_camo_mcamo | Combat Helmet (MTP, Camo)
//    Headgear_H_HelmetB_Camo_tna_F | Combat Helmet (Tropic, Camo)
//    Headgear_H_HelmetB_camo_wdl | Combat Helmet (Woodland, Camo)
//    Headgear_H_HelmetB_cover_fleck_F | Combat Helmet (Flecktarn, Cover)
//    Headgear_H_HelmetB_cover_multitarn_F | Combat Helmet (Multitarn, Cover)
//    Headgear_H_HelmetB_desert | Combat Helmet (Desert)
//    Headgear_H_HelmetB_Enh_Light_tna_F | Light Combat Helmet (Tropic, Enhanced)
//    Headgear_H_HelmetB_Enh_tna_F | Combat Helmet (Tropic, Enhanced)
//    Headgear_H_HelmetB_grass | Combat Helmet (Grass)
//    Headgear_H_HelmetB_green | Combat Helmet (Green)
//    Headgear_H_HelmetB_light | Light Combat Helmet
//    Headgear_H_HelmetB_light_black | Light Combat Helmet (Black)
//    Headgear_H_HelmetB_light_desert | Light Combat Helmet (Desert)
//    Headgear_H_HelmetB_light_grass | Light Combat Helmet (Grass)
//    Headgear_H_HelmetB_light_green | Light Combat Helmet (Green)
//    Headgear_H_HelmetB_light_idfsf | Light Combat Helmet [IDF]
//    Headgear_H_HelmetB_light_mcamo | Light Combat Helmet (OCP)
//    Headgear_H_HelmetB_light_sand | Light Combat Helmet (Sand)
//    Headgear_H_HelmetB_light_snakeskin | Light Combat Helmet (Snakeskin)
//    Headgear_H_HelmetB_Light_tna_F | Light Combat Helmet (Tropic)
//    Headgear_H_HelmetB_light_wdl | Light Combat Helmet (Woodland)
//    Headgear_H_HelmetB_plain_mcamo | Combat Helmet (OCP)
//    Headgear_H_HelmetB_plain_sb_geo_RF | Combat Helmet (Geometric, Shape Breaker)
//    Headgear_H_HelmetB_plain_sb_hex_RF | Combat Helmet (Hex, Shape Breaker)
//    Headgear_H_HelmetB_plain_sb_khaki_RF | Combat Helmet (Khaki, Shape Breaker)
//    Headgear_H_HelmetB_plain_sb_mtp_RF | Combat Helmet (OCP, Shape Breaker)
//    Headgear_H_HelmetB_plain_sb_tna_RF | Combat Helmet (Tropic, Shape Breaker)
//    Headgear_H_HelmetB_plain_sb_wdl_RF | Combat Helmet (Woodland, Shape Breaker)
//    Headgear_H_HelmetB_plain_wdl | Combat Helmet (Woodland)
//    Headgear_H_HelmetB_sand | Combat Helmet (Sand)
//    Headgear_H_HelmetB_snakeskin | Combat Helmet (Snakeskin)
//    Headgear_H_HelmetB_TI_arid_F | Stealth Combat Helmet (Arid)
//    Headgear_H_HelmetB_TI_tna_F | Stealth Combat Helmet (Tropic)
//    Headgear_H_HelmetB_tna_F | Combat Helmet (Tropic)
//    Headgear_H_HelmetCrew_B | Modular Crew Helmet (Olive)
//    Headgear_H_HelmetCrew_B_oli_F | Modular Crew Helmet (Green)
//    Headgear_H_HelmetCrew_I | Crew Helmet (Green)
//    Headgear_H_HelmetCrew_I_I | Crew Helmet (Sand)
//    Headgear_H_HelmetCrew_O | Modular Crew Helmet (Hex)
//    Headgear_H_HelmetCrew_O_ghex_F | Modular Crew Helmet (Green Hex)
//    Headgear_H_HelmetGora_oli_F | Gora Helmet (Olive)
//    Headgear_H_HelmetHBK_arid_chops_F | Advanced Modular Helmet (Arid, Chops)
//    Headgear_H_HelmetHBK_arid_ear_F | Advanced Modular Helmet (Arid, Ear Protectors)
//    Headgear_H_HelmetHBK_arid_F | Advanced Modular Helmet (Arid)
//    Headgear_H_HelmetHBK_arid_headset_F | Advanced Modular Helmet (Arid, Headset)
//    Headgear_H_HelmetHBK_aucamo_arid_chops_F | Advanced Modular Helmet [ADF Arid] (Chops)
//    Headgear_H_HelmetHBK_aucamo_arid_ear_F | Advanced Modular Helmet [ADF Arid] (Ear Protectors)
//    Headgear_H_HelmetHBK_aucamo_arid_F | Advanced Modular Helmet [ADF Arid]
//    Headgear_H_HelmetHBK_aucamo_arid_headset_F | Advanced Modular Helmet [ADF Arid] (Headset)
//    Headgear_H_HelmetHBK_aucamo_chops_F | Advanced Modular Helmet [ADF] (Chops)
//    Headgear_H_HelmetHBK_aucamo_ear_F | Advanced Modular Helmet [ADF] (Ear Protectors)
//    Headgear_H_HelmetHBK_aucamo_F | Advanced Modular Helmet [ADF]
//    Headgear_H_HelmetHBK_aucamo_headset_F | Advanced Modular Helmet [ADF] (Headset)
//    Headgear_H_HelmetHBK_aucamo_tropic_chops_F | Advanced Modular Helmet [ADF Tropic] (Chops)
//    Headgear_H_HelmetHBK_aucamo_tropic_ear_F | Advanced Modular Helmet [ADF Tropic] (Ear Protectors)
//    Headgear_H_HelmetHBK_aucamo_tropic_F | Advanced Modular Helmet [ADF Tropic]
//    Headgear_H_HelmetHBK_aucamo_tropic_headset_F | Advanced Modular Helmet [ADF Tropic] (Headset)
//    Headgear_H_HelmetHBK_chops_F | Advanced Modular Helmet (Geometric, Chops)
//    Headgear_H_HelmetHBK_commando_ear_F | Advanced Modular Helmet [HIMF-C] (Ear Protectors)
//    Headgear_H_HelmetHBK_commando_F | Advanced Modular Helmet [HIMF-C]
//    Headgear_H_HelmetHBK_commando_headset_F | Advanced Modular Helmet [HIMF-C] (Headset)
//    Headgear_H_HelmetHBK_ear_F | Advanced Modular Helmet (Geometric, Ear Protectors)
//    Headgear_H_HelmetHBK_F | Advanced Modular Helmet (Geometric)
//    Headgear_H_HelmetHBK_headset_F | Advanced Modular Helmet (Geometric, Headset)
//    Headgear_H_HelmetHBK_olive_chops_F | Advanced Modular Helmet (Olive, Chops)
//    Headgear_H_HelmetHBK_olive_ear_F | Advanced Modular Helmet (Olive, Ear Protectors)
//    Headgear_H_HelmetHBK_olive_F | Advanced Modular Helmet (Olive)
//    Headgear_H_HelmetHBK_olive_headset_F | Advanced Modular Helmet (Olive, Headset)
//    Headgear_H_HelmetHeavy_Black_RF | Heavy Combat Helmet (Black)
//    Headgear_H_HelmetHeavy_GHex_RF | Heavy Combat Helmet (Green Hex)
//    Headgear_H_HelmetHeavy_Hex_RF | Heavy Combat Helmet (Hex)
//    Headgear_H_HelmetHeavy_Olive_RF | Heavy Combat Helmet (Olive)
//    Headgear_H_HelmetHeavy_Sand_RF | Heavy Combat Helmet (Sand)
//    Headgear_H_HelmetHeavy_Simple_Black_RF | Heavy Combat Helmet (Black, no Visor)
//    Headgear_H_HelmetHeavy_Simple_GHex_RF | Heavy Combat Helmet (Green Hex, no Visor)
//    Headgear_H_HelmetHeavy_Simple_Hex_RF | Heavy Combat Helmet (Hex, no Visor)
//    Headgear_H_HelmetHeavy_Simple_Olive_RF | Heavy Combat Helmet (Olive, no Visor)
//    Headgear_H_HelmetHeavy_Simple_Sand_RF | Heavy Combat Helmet (Sand, no Visor)
//    Headgear_H_HelmetHeavy_Simple_White_RF | Heavy Combat Helmet (White, no Visor)
//    Headgear_H_HelmetHeavy_VisorUp_Black_RF | Heavy Combat Helmet (Black, Visor up)
//    Headgear_H_HelmetHeavy_VisorUp_GHex_RF | Heavy Combat Helmet (Green Hex, Visor up)
//    Headgear_H_HelmetHeavy_VisorUp_Hex_RF | Heavy Combat Helmet (Hex, Visor up)
//    Headgear_H_HelmetHeavy_VisorUp_Olive_RF | Heavy Combat Helmet (Olive, Visor up)
//    Headgear_H_HelmetHeavy_VisorUp_Sand_RF | Heavy Combat Helmet (Sand, Visor up)
//    Headgear_H_HelmetHeavy_VisorUp_White_RF | Heavy Combat Helmet (White, Visor up)
//    Headgear_H_HelmetHeavy_White_RF | Heavy Combat Helmet (White)
//    Headgear_H_HelmetI_I_01_cover_F | Guardian Helmet (Shapebreaker)
//    Headgear_H_HelmetI_I_01_F | Guardian Helmet
//    Headgear_H_HelmetIA | Modular Helmet (Digi)
//    Headgear_H_HelmetIA_sb_arid_RF | Modular Helmet (Arid, Shape Breaker)
//    Headgear_H_HelmetIA_sb_digital_RF | Modular Helmet (Digital, Shape Breaker)
//    Headgear_H_HelmetLeaderO_blk | Defender Helmet (Black)
//    Headgear_H_HelmetLeaderO_ghex_F | Defender Helmet (Green Hex)
//    Headgear_H_HelmetLeaderO_ocamo | Defender Helmet (Hex)
//    Headgear_H_HelmetLeaderO_oicamo | Defender Helmet (Desert Hex)
//    Headgear_H_HelmetLeaderO_oucamo | Defender Helmet (Urban)
//    Headgear_H_HelmetLeaderO_whex_F | Defender Helmet (Woodland Hex)
//    Headgear_H_HelmetLuchnik_brn_F | Luchnik Helmet (Brown)
//    Headgear_H_HelmetLuchnik_cover_ardi_F | Luchnik Helmet (Cover, VSR)
//    Headgear_H_HelmetLuchnik_cover_dst_F | Luchnik Helmet (Cover, Desert Hex)
//    Headgear_H_HelmetLuchnik_cover_ghex_F | Luchnik Helmet (Cover, Green Hex)
//    Headgear_H_HelmetLuchnik_cover_grn_F | Luchnik Helmet (Cover, Green)
//    Headgear_H_HelmetLuchnik_cover_hex_F | Luchnik Helmet (Cover, Hex)
//    Headgear_H_HelmetLuchnik_cover_khk_F | Luchnik Helmet (Cover, Khaki)
//    Headgear_H_HelmetLuchnik_cover_ruarid_F | Luchnik Helmet (Cover, Arid)
//    Headgear_H_HelmetLuchnik_cover_rutaiga_F | Luchnik Helmet (Cover, Taiga)
//    Headgear_H_HelmetLuchnik_cover_semiarid_F | Luchnik Helmet (Cover, Semi-Arid)
//    Headgear_H_HelmetLuchnik_cover_sfia_F | Luchnik Helmet [SFIA] (Cover)
//    Headgear_H_HelmetLuchnik_cover_whex_F | Luchnik Helmet (Cover, Woodland Hex)
//    Headgear_H_HelmetLuchnik_ear_whex_F | Luchnik Helmet (Ear Cover, Woodland Hex)
//    Headgear_H_HelmetLuchnik_headset_brn_F | Luchnik Helmet (Headset, Brown)
//    Headgear_H_HelmetLuchnik_headset_grn_F | Luchnik Helmet (Headset, Olive)
//    Headgear_H_HelmetLuchnik_headset_khk_F | Luchnik Helmet (Headset, Khaki)
//    Headgear_H_HelmetLuchnik_khk_F | Luchnik Helmet (Khaki)
//    Headgear_H_HelmetLuchnik_olive_F | Luchnik Helmet (Olive)
//    Headgear_H_HelmetO_blk | Protector Helmet (Black)
//    Headgear_H_HelmetO_ghex_F | Protector Helmet (Green Hex)
//    Headgear_H_HelmetO_ocamo | Protector Helmet (Hex)
//    Headgear_H_HelmetO_ocamo_sb_hex_RF | Protector Helmet (Hex, Shape Breaker)
//    Headgear_H_HelmetO_ocamo_sb_urban_RF | Protector Helmet (Urban, Shape Breaker)
//    Headgear_H_HelmetO_oicamo | Protector Helmet (Desert Hex)
//    Headgear_H_HelmetO_oucamo | Protector Helmet (Urban)
//    Headgear_H_HelmetO_ViperSP_ghex_F | Special Purpose Helmet (Green Hex)
//    Headgear_H_HelmetO_ViperSP_hex_F | Special Purpose Helmet (Hex)
//    Headgear_H_HelmetO_ViperSP_whex_F | Special Purpose Helmet (Woodland Hex)
//    Headgear_H_HelmetO_whex_F | Protector Helmet (Woodland Hex)
//    Headgear_H_HelmetSpecB | Combat Helmet (Enhanced)
//    Headgear_H_HelmetSpecB_blk | Combat Helmet (Black, Enhanced)
//    Headgear_H_HelmetSpecB_cover_fleck_F | Combat Helmet (Flecktarn, Cover Enhanced)
//    Headgear_H_HelmetSpecB_cover_multitarn_F | Combat Helmet (Multitarn, Cover Enhanced)
//    Headgear_H_HelmetSpecB_green | Combat Helmet (Green, Enhanced)
//    Headgear_H_HelmetSpecB_light | Light Combat Helmet (Enhanced)
//    Headgear_H_HelmetSpecB_light_black | Light Combat Helmet (Black, Enhanced)
//    Headgear_H_HelmetSpecB_light_desert | Light Combat Helmet (Desert, Enhanced)
//    Headgear_H_HelmetSpecB_light_grass | Light Combat Helmet (Grass, Enhanced)
//    Headgear_H_HelmetSpecB_light_green | Light Combat Helmet (Green, Enhanced)
//    Headgear_H_HelmetSpecB_light_idfsf | Light Combat Helmet [IDF] (Enhanced)
//    Headgear_H_HelmetSpecB_light_mcamo | Light Combat Helmet (OCP, Enhanced)
//    Headgear_H_HelmetSpecB_light_sand | Light Combat Helmet (Sand, Enhanced)
//    Headgear_H_HelmetSpecB_light_snakeskin | Light Combat Helmet (Snakeskin, Enhanced)
//    Headgear_H_HelmetSpecB_light_wdl | Light Combat Helmet (Woodland, Enhanced)
//    Headgear_H_HelmetSpecB_mcamo | Combat Helmet (OCP, Enhanced)
//    Headgear_H_HelmetSpecB_paint1 | Combat Helmet (Grass, Enhanced)
//    Headgear_H_HelmetSpecB_paint2 | Combat Helmet (Desert, Enhanced)
//    Headgear_H_HelmetSpecB_sand | Combat Helmet (Sand, Enhanced)
//    Headgear_H_HelmetSpecB_snakeskin | Combat Helmet (Snakeskin, Enhanced)
//    Headgear_H_HelmetSpecB_wdl | Combat Helmet (Woodland, Enhanced)
//    Headgear_H_HelmetSpecO_blk | Assassin Helmet (Black)
//    Headgear_H_HelmetSpecO_ghex_F | Assassin Helmet (Green Hex)
//    Headgear_H_HelmetSpecO_ocamo | Assassin Helmet (Hex)
//    Headgear_H_HelmetSpecO_oicamo | Assassin Helmet (Desert Hex)
//    Headgear_H_HelmetSpecO_oucamo | Assassin Helmet (Urban)
//    Headgear_H_HelmetSpecO_whex_F | Assassin Helmet (Woodland Hex)
//    Headgear_H_HelmetSpecter_black_F | Raven Helmet (Black)
//    Headgear_H_HelmetSpecter_black_headset_F | Raven Helmet (Headset, Black)
//    Headgear_H_HelmetSpecter_brown_F | Raven Helmet (Brown)
//    Headgear_H_HelmetSpecter_brown_headset_F | Raven Helmet (Headset, Brown)
//    Headgear_H_HelmetSpecter_cover_AAF_F | Raven Helmet [AAF] (Cover)
//    Headgear_H_HelmetSpecter_cover_arid_F | 
//    Headgear_H_HelmetSpecter_cover_CDF_F | Raven Helmet (Cover, CDF)
//    Headgear_H_HelmetSpecter_cover_dst_F | 
//    Headgear_H_HelmetSpecter_cover_ghex_F | 
//    Headgear_H_HelmetSpecter_cover_grn_F | 
//    Headgear_H_HelmetSpecter_cover_hex_F | 
//    Headgear_H_HelmetSpecter_cover_uhex_F | 
//    Headgear_H_HelmetSpecter_F | Raven Helmet
//    Headgear_H_HelmetSpecter_headset_F | Raven Helmet (Headset)
//    Headgear_H_HelmetSpecter_paint_F | Raven Helmet (Spraypaint)
//    Headgear_H_HelmetSpecter_paint_headset_F | Raven Helmet (Headset, Spraypaint)
//    Headgear_H_I_Helmet_canvas_CBR_F | Modular Helmet (Coyote)
//    Headgear_H_I_Helmet_canvas_Green | Modular Helmet (Green)
//    Headgear_H_I_Helmet_canvas_UN_F | Modular Helmet [UN]
//    Headgear_H_MilCap_aucamo | Military Cap [ADF] (Headset)
//    Headgear_H_MilCap_blk | Military Cap (Headset, Black)
//    Headgear_H_MilCap_blue | Military Cap (Headset, Blue)
//    Headgear_H_MilCap_desert | Military Cap (Desert) [USMC]
//    Headgear_H_MilCap_dgtl | Military Cap [AAF] (Headset)
//    Headgear_H_MilCap_eaf | Military Cap [LDF] (Headset)
//    Headgear_H_MilCap_eaf_arid | Military Cap [LDF] (Headset, Arid)
//    Headgear_H_MilCap_gen_F | Military Cap (Headset, Gendarmerie)
//    Headgear_H_MilCap_ghex_F | Military Cap (Headset, Green Hex)
//    Headgear_H_MilCap_grn | Military Cap (Headset, Green)
//    Headgear_H_MilCap_gry | Military Cap (Headset, Grey)
//    Headgear_H_MilCap_jungle | Military Cap [HIMF] (Headset)
//    Headgear_H_MilCap_mcamo | Military Cap (Headset, OCP)
//    Headgear_H_MilCap_mwdl | Military Cap (Woodland) [USMC]
//    Headgear_H_MilCap_ocamo | Military Cap (Headset, Hex)
//    Headgear_H_MilCap_oicamo | Military Cap (Headset, Desert Hex)
//    Headgear_H_MilCap_oucamo | Military Cap (Headset, Urban)
//    Headgear_H_MilCap_semiarid | Military Cap (Headset, Semi-Arid)
//    Headgear_H_MilCap_sgg | Military Cap (Headset, Sage)
//    Headgear_H_MilCap_taiga | Military Cap (Headset, Taiga)
//    Headgear_H_MilCap_tan | Military Cap (Headset, Tan)
//    Headgear_H_MilCap_tna_F | Military Cap (Headset, Tropic)
//    Headgear_H_MilCap_wdl | Military Cap (Headset, Woodland)
//    Headgear_H_MilCap_whex_F | Military Cap (Headset, Woodland Hex)
//    Headgear_H_MK7_AAF_F | Service Helmet (Digi)
//    Headgear_H_MK7_Marar_F | Service Helmet [Marar]
//    Headgear_H_MK7_oli_F | Service Helmet (Olive)
//    Headgear_H_MK7_sand_F | Service Helmet (Sand)
//    Headgear_H_MK7_UN_F | Service Helmet [UN]
//    Headgear_H_O_Helmet_canvas_ghex_F | Modular Helmet (Green Hex)
//    Headgear_H_O_Helmet_canvas_ocamo | Modular Helmet (Hex)
//    Headgear_H_O_Helmet_canvas_oucamo | Modular Helmet (Urban)
//    Headgear_H_O_Helmet_canvas_owcamo | Modular Helmet (Woodland Hex)
//    Headgear_H_O_Helmet_canvas_RACS | Modular Helmet [RACS]
//    Headgear_H_O_Helmet_canvas_semiarid | Modular Helmet (Semi-Arid)
//    Headgear_H_ParadeDressCap_01_AAF_F | Parade Cap [AAF]
//    Headgear_H_ParadeDressCap_01_CSAT_F | Parade Cap [CSAT]
//    Headgear_H_ParadeDressCap_01_LDF_F | Parade Cap [LDF]
//    Headgear_H_ParadeDressCap_01_US_F | Parade Cap [US]
//    Headgear_H_PASGT_basic_black_F | Basic Helmet (Black)
//    Headgear_H_PASGT_basic_blue_F | Basic Helmet (Blue)
//    Headgear_H_PASGT_basic_blue_press_F | Press Helmet
//    Headgear_H_PASGT_basic_green_F | Basic Helmet (Green)
//    Headgear_H_PASGT_basic_olive_F | Basic Helmet (Olive)
//    Headgear_H_PASGT_basic_sand_F | Basic Helmet (Sand)
//    Headgear_H_PASGT_basic_UNO_F | Basic Helmet [UN]
//    Headgear_H_PASGT_basic_white_F | Basic Helmet (White)
//    Headgear_H_PASGT_neckprot_black_F | Basic Helmet (Black, Neck Protection)
//    Headgear_H_PASGT_neckprot_blue_press_F | Press Helmet (Neck Protection)
//    Headgear_H_PilotHelmetFighter_B | Pilot Helmet (Black)
//    Headgear_H_PilotHelmetFighter_B_A | Pilot Helmet [ADF]
//    Headgear_H_PilotHelmetFighter_I | Pilot Helmet (White)
//    Headgear_H_PilotHelmetFighter_I_E | Pilot Helmet [LDF]
//    Headgear_H_PilotHelmetFighter_I_I | Pilot Helmet [IDF]
//    Headgear_H_PilotHelmetFighter_O | Pilot Helmet (Olive)
//    Headgear_H_PilotHelmetHeli_B | Heli Pilot Helmet (Black)
//    Headgear_H_PilotHelmetHeli_B_A | Heli Pilot Helmet [ADF]
//    Headgear_H_PilotHelmetHeli_B_visor_up | Heli Pilot Helmet (Black, Visor-up)
//    Headgear_H_PilotHelmetHeli_black_RF | Heli Pilot Helmet (Black)
//    Headgear_H_PilotHelmetHeli_blue_RF | Heli Pilot Helmet (Blue)
//    Headgear_H_PilotHelmetHeli_green_RF | Heli Pilot Helmet (Green)
//    Headgear_H_PilotHelmetHeli_I | Heli Pilot Helmet [AAF]
//    Headgear_H_PilotHelmetHeli_I_E | Heli Pilot Helmet [LDF]
//    Headgear_H_PilotHelmetHeli_I_E_visor_up | Heli Pilot Helmet (Green, Visor-up)
//    Headgear_H_PilotHelmetHeli_I_visor_up | Heli Pilot Helmet [AAF] (Visor-up)
//    Headgear_H_PilotHelmetHeli_MilGreen_RF | Heli Pilot Helmet (Olive)
//    Headgear_H_PilotHelmetHeli_O | Heli Pilot Helmet (Olive)
//    Headgear_H_PilotHelmetHeli_O_visor_up | Heli Pilot Helmet (Olive, Visor-up)
//    Headgear_H_PilotHelmetHeli_orange_RF | Heli Pilot Helmet (Orange)
//    Headgear_H_PilotHelmetHeli_red_RF | Heli Pilot Helmet (Red)
//    Headgear_H_PilotHelmetHeli_white_RF | Heli Pilot Helmet (White)
//    Headgear_H_PilotHelmetHeli_yellow_RF | Heli Pilot Helmet (Yellow)
//    Headgear_H_RacingHelmet_1_black_F | Racing Helmet (Black)
//    Headgear_H_RacingHelmet_1_blue_F | Racing Helmet (Blue)
//    Headgear_H_RacingHelmet_1_F | Racing Helmet (Fuel)
//    Headgear_H_RacingHelmet_1_green_F | Racing Helmet (Green)
//    Headgear_H_RacingHelmet_1_orange_F | Racing Helmet (Orange)
//    Headgear_H_RacingHelmet_1_red_F | Racing Helmet (Red)
//    Headgear_H_RacingHelmet_1_white_F | Racing Helmet (White)
//    Headgear_H_RacingHelmet_1_yellow_F | Racing Helmet (Yellow)
//    Headgear_H_RacingHelmet_2_F | Racing Helmet (Bluking)
//    Headgear_H_RacingHelmet_3_F | Racing Helmet (Redstone)
//    Headgear_H_RacingHelmet_4_F | Racing Helmet (Vrana)
//    Headgear_H_Shemag_blk | Shemag (Black)
//    Headgear_H_Shemag_blk_hs | Shemag (Headset, Black)
//    Headgear_H_Shemag_khk | Shemag (Khaki)
//    Headgear_H_Shemag_khk_hs | Shemag (Headset, Khaki)
//    Headgear_H_Shemag_olive | Shemag (Olive)
//    Headgear_H_Shemag_olive_hs | Shemag (Olive, Headset)
//    Headgear_H_Shemag_red | Shemag (Red)
//    Headgear_H_Shemag_red_hs | Shemag (Headset, Red)
//    Headgear_H_ShemagOpen_khk | Shemag (White)
//    Headgear_H_ShemagOpen_khk_hs | Shemag (Headset, White)
//    Headgear_H_ShemagOpen_tan | Shemag (Tan)
//    Headgear_H_ShemagOpen_tan_hs | Shemag (Headset, Tan)
//    Headgear_H_StrawHat | Straw Hat
//    Headgear_H_StrawHat_dark | Straw Hat (Dark)
//    Headgear_H_Tank_black_F | Soft Crew Helmet (Black)
//    Headgear_H_turban_02_mask_black_lxws | Ballistic Mask (Black, Turban)
//    Headgear_H_turban_02_mask_hex_lxws | Ballistic Mask (Hex, Turban)
//    Headgear_H_turban_02_mask_snake_lxws | Ballistic Mask (Snake, Turban)
//    Headgear_H_Watchcap_blk | Beanie
//    Headgear_H_Watchcap_blk_hs | Beanie (Headset)
//    Headgear_H_Watchcap_camo | Beanie (Green)
//    Headgear_H_Watchcap_camo_hs | Beanie (Green, Headset)
//    Headgear_H_Watchcap_cbr | Beanie (Coyote)
//    Headgear_H_Watchcap_cbr_hs | Beanie (Coyote, Headset)
//    Headgear_H_Watchcap_Flora | Beanie (Flora)
//    Headgear_H_Watchcap_khk | Beanie (Khaki)
//    Headgear_H_Watchcap_khk_hs | Beanie (Khaki, Headset)
//    Headgear_H_Watchcap_red | Beanie (Red)
//    Headgear_H_Watchcap_sgg | Beanie (Sage)
//    Headgear_H_WirelessEarpiece_F | Wireless Earpiece
//    Headgear_JCA_H_balaclava_01_black_F | Tactical Balaclava (Black)
//    Headgear_JCA_H_balaclava_01_glasses_black_F | Tactical Balaclava (Black, Glasses)
//    Headgear_JCA_H_balaclava_01_glasses_olive_F | Tactical Balaclava (Olive, Glasses)
//    Headgear_JCA_H_balaclava_01_glasses_sand_F | Tactical Balaclava (Sand, Glasses)
//    Headgear_JCA_H_balaclava_01_goggles_black_F | Tactical Balaclava (Black, Goggles)
//    Headgear_JCA_H_balaclava_01_goggles_olive_F | Tactical Balaclava (Olive, Goggles)
//    Headgear_JCA_H_balaclava_01_goggles_sand_F | Tactical Balaclava (Sand, Goggles)
//    Headgear_JCA_H_balaclava_01_headset_black_F | Tactical Balaclava (Black, Headset)
//    Headgear_JCA_H_balaclava_01_headset_glasses_black_F | Tactical Balaclava (Black, Headset, Glasses)
//    Headgear_JCA_H_balaclava_01_headset_glasses_olive_F | Tactical Balaclava (Olive, Headset, Glasses)
//    Headgear_JCA_H_balaclava_01_headset_glasses_sand_F | Tactical Balaclava (Sand, Headset, Glasses)
//    Headgear_JCA_H_balaclava_01_headset_goggles_olive_F | Tactical Balaclava (Olive, Headset, Goggles)
//    Headgear_JCA_H_balaclava_01_headset_goggles_sand_F | Tactical Balaclava (Sand, Headset, Goggles)
//    Headgear_JCA_H_balaclava_01_headset_olive_F | Tactical Balaclava (Olive, Headset)
//    Headgear_JCA_H_balaclava_01_headset_sand_F | Tactical Balaclava (Sand, Headset)
//    Headgear_JCA_H_balaclava_01_olive_F | Tactical Balaclava (Olive)
//    Headgear_JCA_H_balaclava_01_sand_F | Tactical Balaclava (Sand)
//    Headgear_JCA_H_Beanie_01_black_F | Beanie (Black)
//    Headgear_JCA_H_Beanie_01_headset_black_F | Beanie (Black, Headset)
//    Headgear_JCA_H_Beanie_01_headset_olive_F | Beanie (Olive, Headset)
//    Headgear_JCA_H_Beanie_01_headset_sand_F | Beanie (Sand, Headset)
//    Headgear_JCA_H_Beanie_01_olive_F | Beanie (Olive)
//    Headgear_JCA_H_Beanie_01_sand_F | Beanie (Sand)
//    Headgear_JCA_H_Beret_01_black_F | Beret (Black)
//    Headgear_JCA_H_Beret_01_headset_black_F | Beret (Black, Headset)
//    Headgear_JCA_H_Beret_01_headset_olive_F | Beret (Olive, Headset)
//    Headgear_JCA_H_Beret_01_headset_sand_F | Beret (Sand, Headset)
//    Headgear_JCA_H_Beret_01_olive_F | Beret (Olive)
//    Headgear_JCA_H_Beret_01_sand_F | Beret (Sand)
//    Headgear_JCA_H_Cap_01_black_F | Cap (Black)
//    Headgear_JCA_H_Cap_01_headset_black_F | Cap (Black, Headset)
//    Headgear_JCA_H_Cap_01_headset_olive_F | Cap (Olive, Headset)
//    Headgear_JCA_H_Cap_01_headset_sand_F | Cap (Sand, Headset)
//    Headgear_JCA_H_Cap_01_olive_F | Cap (Olive)
//    Headgear_JCA_H_Cap_01_sand_F | Cap (Sand)
//    Headgear_JCA_H_Cap_Military_01_black_F | Field Cap (Black)
//    Headgear_JCA_H_Cap_Military_01_headset_black_F | Field Cap (Black, Headset)
//    Headgear_JCA_H_Cap_Military_01_headset_olive_F | Field Cap (Olive, Headset)
//    Headgear_JCA_H_Cap_Military_01_headset_sand_F | Field Cap (Sand, Headset)
//    Headgear_JCA_H_Cap_Military_01_olive_F | Field Cap (Olive)
//    Headgear_JCA_H_Cap_Military_01_sand_F | Field Cap (Sand)
//    Headgear_JCA_H_FaceMask_01_black_F | Tactical Face Mask (Black)
//    Headgear_JCA_H_FaceMask_01_glasses_black_F | Tactical Face Mask (Black, Glasses)
//    Headgear_JCA_H_FaceMask_01_glasses_olive_F | Tactical Face Mask (Olive, Glasses)
//    Headgear_JCA_H_FaceMask_01_glasses_sand_F | Tactical Face Mask (Sand, Glasses)
//    Headgear_JCA_H_FaceMask_01_goggles_black_F | Tactical Face Mask (Black, Goggles)
//    Headgear_JCA_H_FaceMask_01_goggles_olive_F | Tactical Face Mask (Olive, Goggles)
//    Headgear_JCA_H_FaceMask_01_goggles_sand_F | Tactical Face Mask (Sand, Goggles)
//    Headgear_JCA_H_FaceMask_01_headset_black_F | Tactical Face Mask (Black, Headset)
//    Headgear_JCA_H_FaceMask_01_headset_glasses_black_F | Tactical Face Mask (Black, Headset, Glasses)
//    Headgear_JCA_H_FaceMask_01_headset_glasses_olive_F | Tactical Face Mask (Olive, Headset, Glasses)
//    Headgear_JCA_H_FaceMask_01_headset_glasses_sand_F | Tactical Face Mask (Sand, Headset, Glasses)
//    Headgear_JCA_H_FaceMask_01_headset_goggles_black_F | Tactical Face Mask (Black, Headset, Goggles)
//    Headgear_JCA_H_FaceMask_01_headset_goggles_olive_F | Tactical Face Mask (Olive, Headset, Goggles)
//    Headgear_JCA_H_FaceMask_01_headset_goggles_sand_F | Tactical Face Mask (Sand, Headset, Goggles)
//    Headgear_JCA_H_FaceMask_01_headset_olive_F | Tactical Face Mask (Olive, Headset)
//    Headgear_JCA_H_FaceMask_01_headset_sand_F | Tactical Face Mask (Sand, Headset)
//    Headgear_JCA_H_FaceMask_01_olive_F | Tactical Face Mask (Olive)
//    Headgear_JCA_H_FaceMask_01_sand_F | Tactical Face Mask (Sand)
//    Headgear_JCA_H_Headset_Combat_01_black_F | Combat Headset (Black)
//    Headgear_JCA_H_Headset_Combat_01_olive_F | Combat Headset (Olive)
//    Headgear_JCA_H_Headset_Combat_01_sand_F | Combat Headset (Sand)
//    Headgear_JCA_H_HelmetHBK_black_F | Advanced Modular Helmet (Black)
//    Headgear_JCA_H_HelmetHBK_chops_black_F | Advanced Modular Helmet (Black, Chops)
//    Headgear_JCA_H_HelmetHBK_chops_olive_F | Advanced Modular Helmet (Olive, Chops)
//    Headgear_JCA_H_HelmetHBK_chops_sand_F | Advanced Modular Helmet (Sand, Chops)
//    Headgear_JCA_H_HelmetHBK_ear_black_F | Advanced Modular Helmet (Black, Ear Protectors)
//    Headgear_JCA_H_HelmetHBK_ear_olive_F | Advanced Modular Helmet (Olive, Ear Protectors)
//    Headgear_JCA_H_HelmetHBK_ear_sand_F | Advanced Modular Helmet (Sand, Ear Protectors)
//    Headgear_JCA_H_HelmetHBK_headset_black_F | Advanced Modular Helmet (Black, Headset)
//    Headgear_JCA_H_HelmetHBK_headset_olive_F | Advanced Modular Helmet (Olive, Headset)
//    Headgear_JCA_H_HelmetHBK_headset_sand_F | Advanced Modular Helmet (Sand, Headset)
//    Headgear_JCA_H_HelmetHBK_olive_F | Advanced Modular Helmet (Olive)
//    Headgear_JCA_H_HelmetHBK_sand_F | Advanced Modular Helmet (Sand)
//    Headgear_JCA_H_shemagh_01_black_F | Tactical Balaclava (Black)
//    Headgear_JCA_H_shemagh_01_glasses_black_F | Shemagh (Black, Glasses)
//    Headgear_JCA_H_shemagh_01_glasses_olive_F | Shemagh (Olive, Glasses)
//    Headgear_JCA_H_shemagh_01_glasses_sand_F | Shemagh (Sand, Glasses)
//    Headgear_JCA_H_shemagh_01_headset_black_F | Shemagh (Black, Headset)
//    Headgear_JCA_H_shemagh_01_headset_glasses_black_F | Shemagh (Black, Headset, Glasses)
//    Headgear_JCA_H_shemagh_01_headset_glasses_olive_F | Shemagh (Olive, Headset, Glasses)
//    Headgear_JCA_H_shemagh_01_headset_glasses_sand_F | Shemagh (Sand, Headset, Glasses)
//    Headgear_JCA_H_shemagh_01_headset_olive_F | Shemagh (Olive, Headset)
//    Headgear_JCA_H_shemagh_01_headset_sand_F | Shemagh (Sand, Headset)
//    Headgear_JCA_H_shemagh_01_olive_F | Shemagh (Olive)
//    Headgear_JCA_H_shemagh_01_sand_F | Shemagh (Sand)
//    Headgear_lxWS_H_Bandanna_blk_hs | Bandana (Black, Headset)
//    Headgear_lxWS_H_Beret_Colonel | Beret [UNA]
//    Headgear_lxWS_H_bmask_base | Ballistic Mask (Black)
//    Headgear_lxWS_H_bmask_camo01 | Ballistic Mask (Rocky)
//    Headgear_lxWS_H_bmask_camo02 | Ballistic Mask (Woodland)
//    Headgear_lxWS_H_bmask_ghex | Ballistic Mask (Green Hex)
//    Headgear_lxWS_H_bmask_hex | Ballistic Mask (Hex)
//    Headgear_lxWS_H_bmask_white | Ballistic Mask (White)
//    Headgear_lxWS_H_bmask_yellow | Ballistic Mask (Yellow)
//    Headgear_lxWS_H_Booniehat_desert | Booniehat (Desert)
//    Headgear_lxWS_H_CapB_rvs_blk_ION | Cap (ION, Reversed)
//    Headgear_lxWS_H_cloth_5_A | Taqiyah (Black)
//    Headgear_lxWS_H_cloth_5_B | Taqiyah (White)
//    Headgear_lxWS_H_cloth_5_C | Taqiyah (Pattern)
//    Headgear_lxWS_H_Headset | Military Headset
//    Headgear_lxWS_H_HelmetCrew_Blue | Crew Helmet (Blue)
//    Headgear_lxWS_H_HelmetCrew_I | Crew Helmet (Black)
//    Headgear_lxWS_H_MilCap_desert | Military Cap (Headset, Desert)
//    Headgear_lxWS_H_PASGT_basic_UN_F | Basic Helmet [UNA]
//    Headgear_lxWS_H_PASGT_goggles_black_F | Basic Helmet (Goggles, Black)
//    Headgear_lxWS_H_PASGT_goggles_olive_F | Basic Helmet (Goggles, Olive)
//    Headgear_lxWS_H_PASGT_goggles_UN_F | Basic Helmet (Goggles) [UNA]
//    Headgear_lxWS_H_PASGT_goggles_white_F | Basic Helmet (Goggles, White)
//    Headgear_lxWS_H_ssh40_black | Old Helmet (Black)
//    Headgear_lxWS_H_ssh40_blue | Old Helmet (Blue)
//    Headgear_lxWS_H_ssh40_green | Old Helmet (Green)
//    Headgear_lxWS_H_ssh40_sand | Old Helmet (Sand)
//    Headgear_lxWS_H_ssh40_un | Old Helmet [UNA]
//    Headgear_lxWS_H_ssh40_white | Old Helmet (White)
//    Headgear_lxWS_H_Tank_tan_F | Crew Helmet (Soft) [SFIA]
//    Headgear_lxWS_H_turban_01_black | Turban (Simple, Black)
//    Headgear_lxWS_H_turban_01_blue | Turban (Simple, Blue)
//    Headgear_lxWS_H_turban_01_blue_una | Turban (Simple, Blue) [UNA]
//    Headgear_lxWS_H_turban_01_gray | Turban (Simple, White)
//    Headgear_lxWS_H_turban_01_green | Turban (Simple, Green)
//    Headgear_lxWS_H_turban_01_red | Turban (Simple, Red)
//    Headgear_lxWS_H_turban_01_sand | Turban (Simple, Sand)
//    Headgear_lxWS_H_turban_01_yellow | Turban (Simple, Yellow)
//    Headgear_lxWS_H_turban_02_black | Turban (Open, Black)
//    Headgear_lxWS_H_turban_02_blue | Turban (Open, Blue)
//    Headgear_lxWS_H_turban_02_blue_una | Turban (Open, Blue) [UNA]
//    Headgear_lxWS_H_turban_02_gray | Turban (Open, White)
//    Headgear_lxWS_H_turban_02_green | Turban (Open, Green)
//    Headgear_lxWS_H_turban_02_green_pattern | Turban (Open, Green, Pattern)
//    Headgear_lxWS_H_turban_02_orange | Turban (Open, Orange)
//    Headgear_lxWS_H_turban_02_red | Turban (Open, Red)
//    Headgear_lxWS_H_turban_02_sand | Turban (Open, Sand)
//    Headgear_lxWS_H_turban_02_yellow | Turban (Open, Yellow)
//    Headgear_lxWS_H_turban_03_black | Turban (Full, Black)
//    Headgear_lxWS_H_turban_03_blue | Turban (Full, Blue)
//    Headgear_lxWS_H_turban_03_blue_una | Turban (Full, Blue) [UNA]
//    Headgear_lxWS_H_turban_03_gray | Turban (Full, White)
//    Headgear_lxWS_H_turban_03_green | Turban (Full, Green)
//    Headgear_lxWS_H_turban_03_green_pattern | Turban (Full, Green, Pattern)
//    Headgear_lxWS_H_turban_03_orange | Turban (Full, Orange)
//    Headgear_lxWS_H_turban_03_red | Turban (Full, Red)
//    Headgear_lxWS_H_turban_03_sand | Turban (Full, Sand)
//    Headgear_lxWS_H_turban_03_yellow | Turban (Full, Yellow)
//    Headgear_lxWS_H_turban_04_black | Turban (Loose, Black)
//    Headgear_lxWS_H_turban_04_blue | Turban (Loose, Blue)
//    Headgear_lxWS_H_turban_04_blue_una | Turban (Loose, Blue) [UNA]
//    Headgear_lxWS_H_turban_04_gray | Turban (Loose, White)
//    Headgear_lxWS_H_turban_04_green | Turban (Loose, Green)
//    Headgear_lxWS_H_turban_04_red | Turban (Loose, Red)
//    Headgear_lxWS_H_turban_04_sand | Turban (Loose, Sand)
//    Headgear_lxWS_H_turban_04_yellow | Turban (Loose, Yellow)
//
// -- ItemsUniform (28) --
//    ghost_uniform_Item_U_B_D_JSOC_StealthUniform_F | [Ghost] JSOC Stealth Uniform (Desert)
//    ghost_uniform_Item_U_B_D_JSOC_StealthUniform_RolledUp_F | [Ghost] JSOC Stealth Uniform (Desert, Rolled Up)
//    ghost_uniform_Item_U_B_JSOC_StealthUniform_F | [Ghost] JSOC Stealth Uniform
//    ghost_uniform_Item_U_B_JSOC_StealthUniform_RolledUp_F | [Ghost] JSOC Stealth Uniform (Rolled Up)
//    ghost_uniform_Item_U_B_OCP_JSOC_StealthUniform_F | [Ghost] JSOC Stealth Uniform (OCP)
//    ghost_uniform_Item_U_B_OCP_JSOC_StealthUniform_RolledUp_F | [Ghost] JSOC Stealth Uniform (OCP, Rolled Up)
//    ghost_uniform_Item_U_B_Snow_JSOC_StealthUniform_F | [Ghost] JSOC Stealth Uniform (Snow)
//    ghost_uniform_Item_U_B_Snow_JSOC_StealthUniform_RolledUp_F | [Ghost] JSOC Stealth Uniform (Snow, Rolled Up)
//    ghost_uniform_Item_U_B_T_JSOC_StealthUniform_F | [Ghost] JSOC Stealth Uniform (Tropic)
//    ghost_uniform_Item_U_B_T_JSOC_StealthUniform_RolledUp_F | [Ghost] JSOC Stealth Uniform (Tropic, Rolled Up)
//    ghost_uniform_Item_U_B_W_JSOC_StealthUniform_F | [Ghost] JSOC Stealth Uniform (Woodland)
//    ghost_uniform_Item_U_B_W_JSOC_StealthUniform_RolledUp_F | [Ghost] JSOC Stealth Uniform (Woodland, Rolled Up)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_mcam | [Ghost] Special Fatigues (MTP)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_mrpt | [Ghost] Special Fatigues (USMC Woodland)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_mrpt_des | [Ghost] Special Fatigues (USMC Desert)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_nwu | [Ghost] Special Fatigues (USN Woodland)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_ocp | [Ghost] Special Fatigues (OCP)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_rgr | [Ghost] Special Fatigues (Green)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_Shortsleeve_mcam | [Ghost] Special Fatigues (MTP, Rolled-up)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_Shortsleeve_mrpt | [Ghost] Special Fatigues (USMC Woodland, Rolled-up)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_Shortsleeve_mrpt_des | [Ghost] Special Fatigues (USMC Desert, Rolled-up)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_Shortsleeve_nwu | [Ghost] Special Fatigues (USN Woodland, Rolled-up)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_Shortsleeve_ocp | [Ghost] Special Fatigues (OCP, Rolled-Up)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_Shortsleeve_rgr | [Ghost] Special Fatigues (Green, Rolled-up)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_Shortsleeve_tna | [Ghost] Special Fatigues (Tropic, Rolled-up)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_Shortsleeve_wdl | [Ghost] Special Fatigues (Woodland, Rolled-up)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_tna | [Ghost] Special Fatigues (Tropic)
//    ghost_uniform_sof_Item_SOF_U_B_SFFatigues_wdl | [Ghost] Special Fatigues (Woodland)
//
// -- ItemsUniforms (577) --
//    ghost_equipment_Item_Wetsuit | [Ghost] Wetsuit
//    Item_Aegis_U_B_Sniper_Fatigues_CTRG_F | Ghillie Suit [CTRG]
//    Item_Aegis_U_B_SurvivalFatigues_CTRG_F | Survival Fatigues [CTRG]
//    Item_Aegis_U_B_SurvivalFatigues_des_F | Survival Fatigues (MCU-D)
//    Item_Aegis_U_B_SurvivalFatigues_tna_F | Survival Fatigues (MTP-T)
//    Item_Aegis_U_B_SurvivalFatigues_wdl_F | Survival Fatigues (MTP-W)
//    Item_Aegis_U_I_Uniform_01_sweater_02_f | Combat Fatigues [AAF] (Sweater, Rolled-up)
//    Item_Aegis_U_I_Uniform_01_sweater_f | Combat Fatigues [AAF] (Sweater)
//    Item_Aegis_U_O_CombatFatigues_02_dst_F | Combat Fatigues [CSAT] (Desert, Rolled-Up)
//    Item_Aegis_U_O_CombatFatigues_02_F | Combat Fatigues [CSAT] (Hex, Rolled-Up)
//    Item_Aegis_U_O_CombatFatigues_02_ghex_F | Combat Fatigues [CSAT] (Green Hex, Rolled-Up)
//    Item_Aegis_U_O_CombatFatigues_02_khk_F | Combat Fatigues [CSAT] (Khaki, Rolled-Up)
//    Item_Aegis_U_O_CombatFatigues_02_oli_F | Combat Fatigues [CSAT] (Olive, Rolled-Up)
//    Item_Aegis_U_O_CombatFatigues_02_ruarid_F | Combat Fatigues [RU] (Arid, Rolled-Up)
//    Item_Aegis_U_O_CombatFatigues_02_rutaiga_F | Combat Fatigues [RU] (Taiga, Rolled-Up)
//    Item_Aegis_U_O_CombatFatigues_dst_F | Combat Fatigues [CSAT] (Desert)
//    Item_Aegis_U_O_CombatFatigues_F | Combat Fatigues [CSAT] (Hex)
//    Item_Aegis_U_O_CombatFatigues_ghex_F | Combat Fatigues [CSAT] (Green Hex)
//    Item_Aegis_U_O_CombatFatigues_khk_F | Combat Fatigues [CSAT] (Khaki)
//    Item_Aegis_U_O_CombatFatigues_oli_F | Combat Fatigues [CSAT] (Olive)
//    Item_Aegis_U_O_CombatFatigues_ruarid_F | Combat Fatigues [RU] (Arid)
//    Item_Aegis_U_O_CombatFatigues_rutaiga_F | Combat Fatigues [RU] (Taiga)
//    Item_Aegis_U_O_CombatUniform_tshirt_dst_F | Light Fatigues (Desert Hex, Tee)
//    Item_Aegis_U_O_CombatUniform_tshirt_ghex_F | Light Fatigues (Green Hex, Tee)
//    Item_Aegis_U_O_CombatUniform_tshirt_hex_F | Light Fatigues (Hex, Tee)
//    Item_Aegis_U_O_CombatUniform_tshirt_urb_F | Light Fatigues (Urban, Tee)
//    Item_Aegis_U_O_LightCombatFatigues_dst_F | Light Combat Fatigues (Desert)
//    Item_Aegis_U_O_LightCombatFatigues_ghex_F | Light Combat Fatigues (Green Hex)
//    Item_Aegis_U_O_LightCombatFatigues_urb_F | Light Combat Fatigues (Urban)
//    Item_Aegis_U_O_Luchnik_arid_F | Luchnik Fatigues [RU] (Arid)
//    Item_Aegis_U_O_Luchnik_dst_F | Luchnik Fatigues (Desert Hex)
//    Item_Aegis_U_O_Luchnik_ghex_F | Luchnik Fatigues (Green Hex)
//    Item_Aegis_U_O_Luchnik_Hex_F | Luchnik Fatigues (Hex)
//    Item_Aegis_U_O_Luchnik_Officer_arid_F | Luchnik Fatigues [RU] (Arid, Officer)
//    Item_Aegis_U_O_Luchnik_Officer_taiga_F | Luchnik Fatigues [RU] (Taiga, Officer)
//    Item_Aegis_U_O_Luchnik_RolledUp_arid_F | Luchnik Fatigues [RU] (Arid, Rolled-Up)
//    Item_Aegis_U_O_Luchnik_RolledUp_dst_F | Luchnik Fatigues (Desert Hex, Rolled-Up)
//    Item_Aegis_U_O_Luchnik_RolledUp_ghex_F | Luchnik Fatigues (Green Hex, Rolled-Up)
//    Item_Aegis_U_O_Luchnik_RolledUp_Hex_F | Luchnik Fatigues (Hex, Rolled-Up)
//    Item_Aegis_U_O_Luchnik_RolledUp_taiga_F | Luchnik Fatigues [RU] (Taiga, Rolled-Up)
//    Item_Aegis_U_O_Luchnik_RolledUp_urban_F | Luchnik Fatigues [RU] (Urban, Rolled-Up)
//    Item_Aegis_U_O_Luchnik_taiga_F | Luchnik Fatigues [RU] (Taiga)
//    Item_Aegis_U_O_Luchnik_urban_F | Luchnik Fatigues [RU] (Urban)
//    Item_Aegis_U_O_R_CombatUniform_urban_F | Fatigues [RU] (Urban)
//    Item_Atlas_U_B_A_CBRN_Suit_01_Aucamo_F | CBRN Suit [ADF]
//    Item_Atlas_U_B_A_CombatUniform_aucamo | Combat Fatigues [ADF]
//    Item_Atlas_U_B_A_CombatUniform_aucamo_ard | Combat Fatigues [ADF] (Arid)
//    Item_Atlas_U_B_A_CombatUniform_aucamo_trp | Combat Fatigues [ADF] (Tropic)
//    Item_Atlas_U_B_A_CombatUniform_shortsleeve_aucamo | Combat Fatigues [ADF] (Rolled-up)
//    Item_Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard | Combat Fatigues [ADF] (Arid, Rolled-up)
//    Item_Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_trp | Combat Fatigues [ADF] (Tropic, Rolled-up)
//    Item_Atlas_U_B_A_GhillieSuit | Ghillie Suit [ADF]
//    Item_Atlas_U_B_A_GhillieSuit_Arid | Ghillie Suit [ADF] (Arid)
//    Item_Atlas_U_B_A_GhillieSuit_Tropical | Ghillie Suit [ADF] (Tropic)
//    Item_Atlas_U_B_A_PilotCoveralls | Pilot Coveralls [ADF]
//    Item_Atlas_U_B_A_Wetsuit | Wetsuit [ADF]
//    Item_Atlas_U_B_CombatUniform_ffl | Combat Fatigues (Geotiger)
//    Item_Atlas_U_B_CombatUniform_ffl_tshirt | Combat Fatigues (Geotiger, Tee)
//    Item_Atlas_U_B_CombatUniform_ffl_vest | Combat Fatigues (Geotiger, Rolled-up)
//    Item_Atlas_U_B_D_JSOC_StealthUniform_F | Stealth Uniform [US] (MCU-D)
//    Item_Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F | Stealth Uniform [US] (MCU-D, Rolled-Up)
//    Item_Atlas_U_B_G_CombatUniform_arid | Field Uniform [GER] (Arid)
//    Item_Atlas_U_B_G_CombatUniform_tshirt_arid | Field Uniform [GER] (Arid, Tank Top)
//    Item_Atlas_U_B_G_CombatUniform_tshirt_wdl | Field Uniform [GER] (Woodland, Tank Top)
//    Item_Atlas_U_B_G_CombatUniform_vest_arid | Field Uniform [GER] (Arid, Rolled-up)
//    Item_Atlas_U_B_G_CombatUniform_vest_wdl | Field Uniform [GER] (Woodland, Rolled-up)
//    Item_Atlas_U_B_G_CombatUniform_wdl | Field Uniform [GER] (Woodland)
//    Item_Atlas_U_B_G_HeliPilotCoveralls | Heli Pilot Coveralls [NATO] (Green)
//    Item_Atlas_U_B_H_Officer_F | Officer Fatigues [HIMF]
//    Item_Atlas_U_B_H_Soldier_2_F | Combat Fatigues [HIMF] (Rolled-up)
//    Item_Atlas_U_B_H_Soldier_3_F | Combat Fatigues [HIMF] (Tank Top)
//    Item_Atlas_U_B_H_Soldier_commando_F | Combat Fatigues [HIMF-C]
//    Item_Atlas_U_B_H_Soldier_commando_shortsleeve_F | Combat Fatigues [HIMF-C] (Rolled-up)
//    Item_Atlas_U_B_H_Soldier_F | Combat Fatigues [HIMF]
//    Item_Atlas_U_B_JSOC_StealthUniform_F | Stealth Uniform [US] (OCP)
//    Item_Atlas_U_B_JSOC_StealthUniform_RolledUp_F | Stealth Uniform [US] (OCP, Rolled-Up)
//    Item_Atlas_U_B_K_CBRN_Suit_01_F | CBRN Suit [KZG]
//    Item_Atlas_U_B_K_CombatUniform | Combat Fatigues [KZG]
//    Item_Atlas_U_B_K_CombatUniform_shortsleeve | Combat Fatigues [KZG] (Rolled-up)
//    Item_Atlas_U_B_M_CBRN_Suit_01_Marar_F | CBRN Suit [Marar]
//    Item_Atlas_U_B_M_CombatUniform_des | Combat Fatigues [Marar]
//    Item_Atlas_U_B_M_CombatUniform_shortsleeve_des | Combat Fatigues [Marar] (Rolled-up)
//    Item_Atlas_U_B_M_CombatUniform_tee_des | Combat Fatigues [Marar] (Tee)
//    Item_Atlas_U_B_M_Tank_Marar_F | Coveralls [Marar]
//    Item_Atlas_U_B_T_JSOC_StealthUniform_alt_F | Stealth Uniform [US] (AORMTP)
//    Item_Atlas_U_B_T_JSOC_StealthUniform_F | Stealth Uniform [US] (MTP-T)
//    Item_Atlas_U_B_T_JSOC_StealthUniform_RolledUp_alt_F | Stealth Uniform [US] (AORMTP, Rolled-Up)
//    Item_Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F | Stealth Uniform [US] (MTP-T, Rolled-Up)
//    Item_Atlas_U_B_W_JSOC_StealthUniform_F | Stealth Uniform [US] (MTP-W)
//    Item_Atlas_U_B_W_JSOC_StealthUniform_RolledUp_F | Stealth Uniform [US] (MTP-W, Rolled-Up)
//    Item_Atlas_U_C_CommonerJacket_01_blue_F | Commoner Jacket (Blue)
//    Item_Atlas_U_C_CommonerJacket_01_grey_F | Commoner Jacket (Grey)
//    Item_Atlas_U_C_CommonerJacket_01_marroon_F | Commoner Jacket (Marroon)
//    Item_Atlas_U_C_Uniform_01_shirt_pattern_F | Commoner Outfit (Pattern)
//    Item_Atlas_U_C_Uniform_01_shirt_striped_F | Commoner Outfit (Striped)
//    Item_Atlas_U_C_Uniform_01_shirt_white_F | Commoner Outfit (White)
//    Item_Atlas_U_C_Uniform_01_tshirt_white_F | Worn Clothes (White)
//    Item_Atlas_U_CombatUniformEURO_01_F | European Field Uniform [GER] (Woodland)
//    Item_Atlas_U_CombatUniformEURO_01_multitarn_F | European Field Uniform [GER] (Arid)
//    Item_Atlas_U_CombatUniformEURO_02_F | European Field Uniform [GER] (Woodland, Rolled-up)
//    Item_Atlas_U_CombatUniformEURO_02_multitarn_F | European Field Uniform [GER] (Arid, Rolled-up)
//    Item_Atlas_U_CombatUniformNCU_01_flecktarn_F | European Combat Uniform [GER] (Woodland)
//    Item_Atlas_U_CombatUniformNCU_01_mcam_F | European Combat Uniform (MTP)
//    Item_Atlas_U_CombatUniformNCU_01_mcam_wdl_F | European Combat Uniform (MTP-W)
//    Item_Atlas_U_CombatUniformNCU_01_multitarn_F | European Combat Uniform [GER] (Arid)
//    Item_Atlas_U_CombatUniformNCU_02_flecktarn_F | European Combat Uniform [GER] (Woodland, Rolled-up)
//    Item_Atlas_U_CombatUniformNCU_02_mcam_F | European Combat Uniform (MTP, Rolled-up)
//    Item_Atlas_U_CombatUniformNCU_02_mcam_wdl_F | European Combat Uniform (MTP-W, Rolled-up)
//    Item_Atlas_U_CombatUniformNCU_02_multitarn_F | European Combat Uniform [GER] (Arid, Rolled-up)
//    Item_Atlas_U_E_Reservist_Uniform_01_F | Reservist Uniform [LDF]
//    Item_Atlas_U_E_Reservist_Uniform_01_shortsleeve_F | Reservist Uniform [LDF] (Rolled-up)
//    Item_Atlas_U_E_SF_CombatUniformNCU_01_ard_F | European Combat Uniform [LDF] (Arid)
//    Item_Atlas_U_E_SF_CombatUniformNCU_01_F | European Combat Uniform [LDF]
//    Item_Atlas_U_E_SF_CombatUniformNCU_02_ard_F | European Combat Uniform [LDF] (Arid, Rolled-up)
//    Item_Atlas_U_E_SF_CombatUniformNCU_02_F | European Combat Uniform [LDF] (Rolled-up)
//    Item_Atlas_U_I_I_CBRN_Suit_01_Olive_F | CBRN Suit [IDF] (Olive)
//    Item_Atlas_U_I_I_CombatUniform_olive | Combat Fatigues [IDF]
//    Item_Atlas_U_I_I_CombatUniform_shortsleeve_olive | Combat Fatigues [IDF] (Rolled-up)
//    Item_Atlas_U_I_I_GhillieSuit | Ghillie Suit [IDF]
//    Item_Atlas_U_I_I_OfficerUniform | Officer Fatigues [IDF]
//    Item_Atlas_U_I_I_SFUniform_olive | Operator Fatigues [IDF]
//    Item_Atlas_U_I_I_SFUniform_shortsleeve_olive | Operator Fatigues [IDF] (Rolled-up)
//    Item_Atlas_U_I_I_SFUniform_tee_olive | Operator Fatigues [IDF] (Tee)
//    Item_Atlas_U_I_I_Wetsuit | Wetsuit [IDF]
//    Item_Atlas_U_I_U_CombatUniform_shortsleeve_UNO | Combat Fatigues [RACS] (Rolled-up)
//    Item_Atlas_U_I_U_CombatUniform_UNO | Combat Fatigues [RACS]
//    Item_Atlas_U_I_UW_CombatUniform_shortsleeve_UNO | Combat Fatigues [CDF] (Rolled-up)
//    Item_Atlas_U_I_UW_CombatUniform_UNO | Combat Fatigues [CDF]
//    Item_Atlas_U_O_Afghanka_01_dst_F | Gora Fatigues (Desert Hex)
//    Item_Atlas_U_O_Afghanka_01_ghex_F | Gora Fatigues (Green Hex)
//    Item_Atlas_U_O_Afghanka_01_grn_F | Gora Fatigues (Green)
//    Item_Atlas_U_O_Afghanka_01_hex_F | Gora Fatigues (Hex)
//    Item_Atlas_U_O_Afghanka_01_khk_F | Gora Fatigues (Khaki)
//    Item_Atlas_U_O_Afghanka_01_ruarid_F | Gora Fatigues [RU] (Arid)
//    Item_Atlas_U_O_Afghanka_01_rutaiga_F | Gora Fatigues [RU] (Taiga)
//    Item_Atlas_U_O_Afghanka_01_semiarid_F | Gora Fatigues (Semi-Arid)
//    Item_Atlas_U_O_Afghanka_01_whex_F | Gora Fatigues (Woodland Hex)
//    Item_Atlas_U_O_Afghanka_02_dst_F | Gora Fatigues (Desert Hex, Rolled-Up)
//    Item_Atlas_U_O_Afghanka_02_ghex_F | Gora Fatigues (Green Hex, Rolled-Up)
//    Item_Atlas_U_O_Afghanka_02_grn_F | Gora Fatigues (Green, Rolled-Up)
//    Item_Atlas_U_O_Afghanka_02_hex_F | Gora Fatigues (Hex, Rolled-Up)
//    Item_Atlas_U_O_Afghanka_02_khk_F | Gora Fatigues (Khaki, Rolled-Up)
//    Item_Atlas_U_O_Afghanka_02_ruarid_F | Gora Fatigues [RU] (Arid, Rolled-Up)
//    Item_Atlas_U_O_Afghanka_02_rutaiga_F | Gora Fatigues [RU] (Taiga, Rolled-Up)
//    Item_Atlas_U_O_Afghanka_02_semiarid_F | Gora Fatigues (Semi-Arid, Rolled-Up)
//    Item_Atlas_U_O_Afghanka_02_whex_F | Gora Fatigues (Woodland Hex, Rolled-Up)
//    Item_Atlas_U_O_CombatFatigues_02_semiarid_F | Combat Fatigues [CSAT] (Semi-Arid, Rolled-Up)
//    Item_Atlas_U_O_CombatFatigues_02_whex_F | Combat Fatigues [CSAT] (Woodland Hex, Rolled-Up)
//    Item_Atlas_U_O_CombatFatigues_mhex_02_F | Combat Fatigues [CSAT] (Oceanic Hex, Rolled-Up)
//    Item_Atlas_U_O_CombatFatigues_mhex_F | Combat Fatigues [CSAT] (Oceanic Hex)
//    Item_Atlas_U_O_CombatFatigues_semiarid_F | Combat Fatigues [CSAT] (Semi-Arid)
//    Item_Atlas_U_O_CombatFatigues_whex_F | Combat Fatigues [CSAT] (Woodland Hex)
//    Item_Atlas_U_O_CombatUniform_mhex | Fatigues [CSAT] (Oceanic Hex)
//    Item_Atlas_U_O_CombatUniform_semiarid | Fatigues [CSAT] (Semi-Arid)
//    Item_Atlas_U_O_CombatUniform_tshirt_semiarid_F | Light Fatigues (Semi-Arid, Tee)
//    Item_Atlas_U_O_LightCombatFatigues_semiarid_F | Light Combat Fatigues (Semi-Arid)
//    Item_Atlas_U_O_LightCombatFatigues_whex_F | Light Combat Fatigues (Woodland Hex)
//    Item_Atlas_U_O_Luchnik_Officer_whex_F | Luchnik Fatigues (Woodland Hex, Officer)
//    Item_Atlas_U_O_Luchnik_RolledUp_semiarid_F | Luchnik Fatigues (Semi-Arid, Rolled-Up)
//    Item_Atlas_U_O_Luchnik_RolledUp_whex_F | Luchnik Fatigues (Woodland Hex, Rolled-Up)
//    Item_Atlas_U_O_Luchnik_semiarid_F | Luchnik Fatigues (Semi-Arid)
//    Item_Atlas_U_O_Luchnik_whex_F | Luchnik Fatigues (Woodland Hex)
//    Item_Atlas_U_O_officer_noInsignia_semiarid_F | Light Fatigues (Semi-Arid)
//    Item_Atlas_U_O_officer_noInsignia_whex_F | Light Fatigues (Woodland Hex)
//    Item_Atlas_U_O_V_Soldier_Viper_whex_F | Special Purpose Suit (Woodland Hex)
//    Item_Atlas_U_O_W_CombatUniform_owcamo | Fatigues [CSAT] (Woodland Hex)
//    Item_Atlas_U_O_W_OfficerUniform | Officer Fatigues [CSAT] (Woodland Hex)
//    Item_Atlas_U_O_W_PilotCoveralls | Pilot Coveralls [CSAT] (Woodland Hex)
//    Item_Atlas_U_Tank_olive_F | Tanker Coveralls [IDF]
//    Item_Atlas_U_Tank_wdl_F | Tanker Coveralls [NATO] (Woodland)
//    Item_Atlas_U_UniformBDU_01_hi_F | Battledress Uniform [HIMF]
//    Item_Atlas_U_UniformBDU_01_m81_F | Battledress Uniform (M81)
//    Item_Atlas_U_UniformBDU_01_oli_F | Battledress Uniform (Olive)
//    Item_Atlas_U_UniformBDU_01_reservist_F | 
//    Item_Atlas_U_UniformBDU_02_hi_F | Battledress Uniform [HIMF] (Rolled-Up)
//    Item_Atlas_U_UniformBDU_02_m81_F | Battledress Uniform (M81, Rolled-Up)
//    Item_Atlas_U_UniformBDU_02_oli_F | Battledress Uniform (Olive, Rolled-Up)
//    Item_Atlas_U_UniformBDU_02_reservist_F | 
//    Item_EF_U_B_CrewCoveralls_Navy | Navy Coveralls (Blue)
//    Item_EF_U_B_MarineCombatUniform_Des_1 | Marine Combat Uniform (Desert)
//    Item_EF_U_B_MarineCombatUniform_Des_2 | Marine Combat Uniform (Desert/Gloves)
//    Item_EF_U_B_MarineCombatUniform_Des_3 | Marine Combat Uniform (Desert/Gloves/Rolled Up)
//    Item_EF_U_B_MarineCombatUniform_Des_4 | Marine Combat Uniform (Desert/Gloves/Rolled Up/Knee Pads)
//    Item_EF_U_B_MarineCombatUniform_Des_5 | Marine Combat Uniform (Desert/Gloves/Knee Pads)
//    Item_EF_U_B_MarineCombatUniform_Des_6 | Marine Combat Uniform (Desert/Rolled Up)
//    Item_EF_U_B_MarineCombatUniform_Diver_Des | Marine Diver Uniform (Desert)
//    Item_EF_U_B_MarineCombatUniform_Diver_Wdl | Marine Diver Uniform (Woodland)
//    Item_EF_U_B_MarineCombatUniform_Wdl_1 | Marine Combat Uniform (Woodland)
//    Item_EF_U_B_MarineCombatUniform_Wdl_2 | Marine Combat Uniform (Woodland/Gloves)
//    Item_EF_U_B_MarineCombatUniform_Wdl_3 | Marine Combat Uniform (Woodland/Gloves/Rolled Up)
//    Item_EF_U_B_MarineCombatUniform_Wdl_4 | Marine Combat Uniform (Woodland/Gloves/Rolled Up/Knee Pads)
//    Item_EF_U_B_MarineCombatUniform_Wdl_5 | Marine Combat Uniform (Woodland/Gloves/Knee Pads)
//    Item_EF_U_B_MarineCombatUniform_Wdl_6 | Marine Combat Uniform (Woodland/Rolled Up)
//    Item_EF_V_AAV_Black | Amphibious Assault Vest (Black)
//    Item_EF_V_AAV_Coy | Amphibious Assault Vest (Coyote Brown)
//    Item_EF_V_AAV_Diver_Black | Amphibious Assault Vest (Black/Diver)
//    Item_EF_V_AAV_Diver_Coy | Amphibious Assault Vest (Coyote Brown/Diver)
//    Item_EF_V_AAV_Diver_NoReb_Black | Amphibious Assault Vest (Black/Diver/No Rebreather)
//    Item_EF_V_AAV_Diver_NoReb_Coy | Amphibious Assault Vest (Coyote Brown/Diver/No Rebreather)
//    Item_EF_V_AAV_Diver_NoReb_Olive | Amphibious Assault Vest (Olive/Diver/No Rebreather)
//    Item_EF_V_AAV_Diver_Olive | Amphibious Assault Vest (Olive/Diver)
//    Item_EF_V_AAV_Olive | Amphibious Assault Vest (Olive)
//    Item_EF_V_AAV_Rifleman_Black | Amphibious Assault Vest (Black/Rifleman)
//    Item_EF_V_AAV_Rifleman_Coy | Amphibious Assault Vest (Coyote Brown/Rifleman)
//    Item_EF_V_AAV_Rifleman_Olive | Amphibious Assault Vest (Olive/Rifleman)
//    Item_EF_V_AAV_Sailor_Black | Amphibious Assault Vest (Black/Sailor)
//    Item_EF_V_AAV_Sailor_Coy | Amphibious Assault Vest (Coyote Brown/Sailor)
//    Item_EF_V_AAV_Sailor_Olive | Amphibious Assault Vest (Olive/Sailor)
//    Item_EF_V_AAV_Scout_Black | Amphibious Assault Vest (Black/Scout)
//    Item_EF_V_AAV_Scout_Coy | Amphibious Assault Vest (Coyote Brown/Scout)
//    Item_EF_V_AAV_Scout_Olive | Amphibious Assault Vest (Olive/Scout)
//    Item_EF_V_AAV_Support_Black | Amphibious Assault Vest (Black/Support)
//    Item_EF_V_AAV_Support_Coy | Amphibious Assault Vest (Coyote Brown/Support)
//    Item_EF_V_AAV_Support_Olive | Amphibious Assault Vest (Olive/Support)
//    Item_EF_V_AAV_TL_Black | Amphibious Assault Vest (Black/Team Leader)
//    Item_EF_V_AAV_TL_Coy | Amphibious Assault Vest (Coyote Brown/Team Leader)
//    Item_EF_V_AAV_TL_Olive | Amphibious Assault Vest (Olive/Team Leader)
//    Item_EF_V_CCR_Rifleman_Black | Commando Chest Rig (Black/Rifleman)
//    Item_EF_V_CCR_Rifleman_Coy | Commando Chest Rig (Coyote Brown/Rifleman)
//    Item_EF_V_CCR_Rifleman_Olive | Commando Chest Rig (Olive/Rifleman)
//    Item_EF_V_CCR_Scout_Black | Commando Chest Rig (Black/Scout)
//    Item_EF_V_CCR_Scout_Coy | Commando Chest Rig (Coyote Brown/Scout)
//    Item_EF_V_CCR_Scout_Olive | Commando Chest Rig (Olive/Scout)
//    Item_EF_V_CCR_Support_Black | Commando Chest Rig (Black/Support)
//    Item_EF_V_CCR_Support_Coy | Commando Chest Rig (Coyote Brown/Support)
//    Item_EF_V_CCR_Support_Olive | Commando Chest Rig (Olive/Support)
//    Item_EF_V_CCR_TL_Black | Commando Chest Rig (Black/Team Leader)
//    Item_EF_V_CCR_TL_Coy | Commando Chest Rig (Coyote Brown/Team Leader)
//    Item_EF_V_CCR_TL_Olive | Commando Chest Rig (Olive/Team Leader)
//    Item_JCA_U_NBCD_Suit_01_black_F | NBCD Suit (Black)
//    Item_JCA_U_NBCD_Suit_01_hood_black_F | NBCD Suit (Black, Hood)
//    Item_JCA_U_NBCD_Suit_01_hood_olive_F | NBCD Suit (Olive, Hood)
//    Item_JCA_U_NBCD_Suit_01_hood_sand_F | NBCD Suit (Sand, Hood)
//    Item_JCA_U_NBCD_Suit_01_olive_F | NBCD Suit (Olive)
//    Item_JCA_U_NBCD_Suit_01_sand_F | NBCD Suit (Sand)
//    Item_Marine_U_B_MCU_desert_F | MCU Combat Uniform (Desert)
//    Item_Marine_U_B_MCU_tshirt_desert_F | MCU Combat Uniform (Desert, Tee)
//    Item_Marine_U_B_MCU_tshirt_wdl_F | MCU Combat Uniform (Woodland, Tee)
//    Item_Marine_U_B_MCU_vest_desert_F | MCU Combat Uniform (Desert, Rolled-up)
//    Item_Marine_U_B_MCU_vest_wdl_F | MCU Combat Uniform (Woodland, Rolled-up)
//    Item_Marine_U_B_MCU_wdl_F | MCU Combat Uniform (Woodland)
//    Item_Opf_U_I_I_Uniform_01_ghex_F | Deserter Clothes (Green Hex)
//    Item_Opf_U_I_I_Uniform_01_hex_F | Deserter Clothes (Hex)
//    Item_Opf_U_I_I_Uniform_01_tshirt_black_F | Worn Clothes (Black)
//    Item_Opf_U_I_I_Uniform_01_urb_F | Deserter Clothes (Urban)
//    Item_Opf_U_IG_Guerilla3_3_F | Guerilla Smocks (Grey)
//    Item_Opf_U_O_ParamilitaryBody | Rugged Coveralls
//    Item_Opf_U_O_S_Gorka_01_autumn_F | Granit-A Suit (Weathered)
//    Item_Opf_U_O_S_Gorka_01_summer_F | Granit-C Suit (Weathered)
//    Item_Opf_U_O_S_Uniform_01_arid_F | Deserter Clothes (Arid)
//    Item_Opf_U_O_S_Uniform_01_sweater_F | Deserter Clothes (Sweater)
//    Item_Opf_U_O_S_Uniform_01_taiga_F | Deserter Clothes (Taiga)
//    Item_Police_U_I_P_PoliceUniform_F | Police Uniform
//    Item_Police_U_I_P_PoliceUniform_gloves_F | Police Uniform (Tactical Gloves)
//    Item_Scorch_U_CombatUniformNCU_01_afrg_F | Combat Fatigues [AFRG]
//    Item_Scorch_U_CombatUniformNCU_02_afrg_F | Combat Fatigues [AFRG] (Rolled-Up)
//    Item_U_B_A_CBRN_Suit_01_MTP_F | CBRN Suit [BAF] (MTP)
//    Item_U_B_CBRN_Suit_01_MTP_F | CBRN Suit [US] (OCP)
//    Item_U_B_CBRN_Suit_01_Tropic_F | CBRN Suit [US] (MTP-T)
//    Item_U_B_CBRN_Suit_01_Wdl_F | CBRN Suit [US] (MTP-W)
//    Item_U_B_CombatUniform_mcam | Combat Fatigues [US] (OCP)
//    Item_U_B_CombatUniform_mcam_tshirt | Combat Fatigues [US] (OCP, Tee)
//    Item_U_B_CombatUniform_mcam_vest | Combat Fatigues [US] (OCP, Rolled-up)
//    Item_U_B_CombatUniform_mcam_wdl_f | Combat Fatigues [US] (MTP-W)
//    Item_U_B_CombatUniform_sgg | Combat Fatigues (Sage)
//    Item_U_B_CombatUniform_sgg_tshirt | Combat Fatigues (Sage, Tee)
//    Item_U_B_CombatUniform_sgg_vest | Combat Fatigues (Sage, Rolled-up)
//    Item_U_B_CombatUniform_tshirt_mcam_wdL_f | Combat Fatigues [US] (MTP-W, Tee)
//    Item_U_B_CombatUniform_vest_mcam_wdl_f | Combat Fatigues [US] (MTP-W, Rolled-up)
//    Item_U_B_CTRG_1 | CTRG Combat Uniform
//    Item_U_B_CTRG_2 | CTRG Combat Uniform (Tee)
//    Item_U_B_CTRG_3 | CTRG Combat Uniform (Rolled-up)
//    Item_U_B_CTRG_3_lxWS | CTRG Combat Uniform (Desert)
//    Item_U_B_CTRG_4_lxWS | CTRG Stealth Uniform (Desert)
//    Item_U_B_CTRG_Soldier_2_arid_F | CTRG Stealth Uniform (Tee, Arid)
//    Item_U_B_CTRG_Soldier_2_Black_F | CTRG Stealth Uniform (Black, Tee)
//    Item_U_B_CTRG_Soldier_2_F | CTRG Stealth Uniform (Tropic, Tee)
//    Item_U_B_CTRG_Soldier_3_arid_F | CTRG Stealth Uniform (Rolled-up, Arid)
//    Item_U_B_CTRG_Soldier_3_Black_F | CTRG Stealth Uniform (Black, Rolled-up)
//    Item_U_B_CTRG_Soldier_3_F | CTRG Stealth Uniform (Tropic, Rolled-up)
//    Item_U_B_CTRG_Soldier_arid_F | CTRG Stealth Uniform (Arid)
//    Item_U_B_CTRG_Soldier_Black_F | CTRG Stealth Uniform (Black)
//    Item_U_B_CTRG_Soldier_F | CTRG Stealth Uniform (Tropic)
//    Item_U_B_CTRG_Soldier_urb_1_F | CTRG Urban Uniform
//    Item_U_B_CTRG_Soldier_urb_2_F | CTRG Urban Uniform (Tee)
//    Item_U_B_CTRG_Soldier_urb_3_F | CTRG Urban Uniform (Rolled-up)
//    Item_U_B_FullGhillie_ard | Full Ghillie [NATO] (Arid)
//    Item_U_B_FullGhillie_lsh | Full Ghillie [NATO] (Lush)
//    Item_U_B_FullGhillie_sard | Full Ghillie [NATO] (Semi-Arid)
//    Item_U_B_GEN_Commander_F | Gendarmerie Commander Uniform
//    Item_U_B_GEN_Soldier_F | Gendarmerie Uniform
//    Item_U_B_GhillieSuit | Ghillie Suit [US] (OCP)
//    Item_U_B_GhillieSuit_wdl_f | Ghillie Suit [US] (MTP-W)
//    Item_U_B_HeliPilotCoveralls | Heli Pilot Coveralls [US]
//    Item_U_B_HeliPilotCoveralls_MTP_RF | Heli Pilot Coveralls [US] (OCP)
//    Item_U_B_ION_Uniform_01_poloshirt_blue_F | Mercenary Outfit (Shirt, Blue)
//    Item_U_B_ION_Uniform_01_poloshirt_wdl_F | Mercenary Outfit (Shirt, Camo)
//    Item_U_B_ION_Uniform_01_tshirt_black_F | Mercenary Outfit (Tee)
//    Item_U_B_ParadeUniform_01_US_decorated_F | Parade Uniform (Decorated) [US]
//    Item_U_B_ParadeUniform_01_US_F | Parade Uniform [US]
//    Item_U_B_PilotCoveralls | Pilot Coveralls [NATO]
//    Item_U_B_Protagonist_VR | VR Suit [NATO]
//    Item_U_B_survival_uniform | Survival Fatigues (OCP)
//    Item_U_B_T_FullGhillie_tna_F | Full Ghillie [NATO] (Jungle)
//    Item_U_B_T_Sniper_F | Ghillie Suit [US] (MTP-T)
//    Item_U_B_T_Soldier_AR_F | Combat Fatigues [US] (MTP-T, Tee)
//    Item_U_B_T_Soldier_F | Combat Fatigues [US] (MTP-T)
//    Item_U_B_T_Soldier_SL_F | Combat Fatigues [US] (MTP-T, Rolled-up)
//    Item_U_B_UBACS_blk_f | Combat Uniform [BAF] (Black)
//    Item_U_B_UBACS_mtp_f | Combat Uniform [BAF] (MTP)
//    Item_U_B_UBACS_tna_f | Combat Uniform [BAF] (MTP-T)
//    Item_U_B_UBACS_tshirt_blk_f | Combat Uniform [BAF] (Black, Tee)
//    Item_U_B_UBACS_tshirt_mtp_f | Combat Uniform [BAF] (MTP, Tee)
//    Item_U_B_UBACS_tshirt_tna_f | Combat Uniform [BAF] (MTP-T, Tee)
//    Item_U_B_UBACS_tshirt_wdl_f | Combat Uniform [BAF] (MTP-W, Tee)
//    Item_U_B_UBACS_vest_blk_f | Combat Uniform [BAF] (Black, Rolled-up)
//    Item_U_B_UBACS_vest_mtp_f | Combat Uniform [BAF] (MTP, Rolled-up)
//    Item_U_B_UBACS_vest_tna_f | Combat Uniform [BAF] (MTP-T, Rolled-up)
//    Item_U_B_UBACS_vest_wdl_f | Combat Uniform [BAF] (MTP-W, Rolled-up)
//    Item_U_B_UBACS_wdl_f | Combat Uniform [BAF] (MTP-W)
//    Item_U_B_W_FullGhillie_wdl_F | Full Ghillie [NATO] (Woodland)
//    Item_U_B_Wetsuit | Wetsuit [NATO]
//    Item_U_BG_Guerilla1_1 | Guerilla Garment
//    Item_U_BG_Guerilla1_2_F | Guerilla Garment (Olive)
//    Item_U_BG_Guerilla1_3 | Guerilla Garment (Camo)
//    Item_U_BG_Guerilla2_1 | Guerilla Outfit (Plain, Dark)
//    Item_U_BG_Guerilla2_2 | Guerilla Outfit (Pattern)
//    Item_U_BG_Guerilla2_3 | Guerilla Outfit (Plain, Light)
//    Item_U_BG_Guerilla3_1 | Guerilla Smocks
//    Item_U_BG_Guerilla3_2 | Guerilla Smocks (Sand)
//    Item_U_BG_Guerrilla_6_1 | Guerilla Apparel
//    Item_U_BG_Guerrilla_RF | Guerilla Apparel (Rolled-up)
//    Item_U_BG_leader | Guerilla Uniform
//    Item_U_BG_leader_RF | Guerilla Combat Uniform
//    Item_U_C_ArtTShirt_01_v1_F | Casual Clothes (Art of War)
//    Item_U_C_ArtTShirt_01_v2_F | Casual Clothes (Drones)
//    Item_U_C_ArtTShirt_01_v3_F | Casual Clothes (Waltham Robotics)
//    Item_U_C_ArtTShirt_01_v4_F | Casual Clothes (Exhibition)
//    Item_U_C_ArtTShirt_01_v5_F | Casual Clothes (Robogeddon)
//    Item_U_C_ArtTShirt_01_v6_F | Casual Clothes (Abstract)
//    Item_U_C_CBRN_Suit_01_Black_F | CBRN Suit (Black)
//    Item_U_C_CBRN_Suit_01_Blue_F | CBRN Suit (Blue)
//    Item_U_C_CBRN_Suit_01_White_F | CBRN Suit (White)
//    Item_U_C_CBRN_Suit_01_Yellow_F | CBRN Suit (Yellow)
//    Item_U_C_Commoner1_1 | Scavenger Clothes
//    Item_U_C_Commoner1_2 | Leisure Suit
//    Item_U_C_Commoner1_3 | Workout Clothes
//    Item_U_C_ConstructionCoverall_Black_F | Construction Coverall (Black)
//    Item_U_C_ConstructionCoverall_Blue_F | Construction Coverall (Blue)
//    Item_U_C_ConstructionCoverall_Red_F | Construction Coverall (Red)
//    Item_U_C_ConstructionCoverall_Vrana_F | Construction Coverall (Vrana)
//    Item_U_C_Driver_1 | Driver Coverall (Fuel)
//    Item_U_C_Driver_1_black | Driver Coverall (Black)
//    Item_U_C_Driver_1_blue | Driver Coverall (Blue)
//    Item_U_C_Driver_1_green | Driver Coverall (Green)
//    Item_U_C_Driver_1_orange | Driver Coverall (Orange)
//    Item_U_C_Driver_1_red | Driver Coverall (Red)
//    Item_U_C_Driver_1_white | Driver Coverall (White)
//    Item_U_C_Driver_1_yellow | Driver Coverall (Yellow)
//    Item_U_C_Driver_2 | Driver Coverall (Bluking)
//    Item_U_C_Driver_3 | Driver Coverall (Redstone)
//    Item_U_C_Driver_4 | Driver Coverall (Vrana)
//    Item_U_C_E_LooterJacket_01_F | Looter Clothes (Leather Jacket)
//    Item_U_C_FirefighterFatigues_RF | Firefighter Fatigues
//    Item_U_C_FirefighterFatigues_RolledUp_RF | Firefighter Fatigues (Rolled-Up)
//    Item_U_C_FormalSuit_01_black_F | Formal Suit (Black)
//    Item_U_C_FormalSuit_01_blue_F | Formal Suit (Blue)
//    Item_U_C_FormalSuit_01_gray_F | Formal Suit (Gray)
//    Item_U_C_FormalSuit_01_khaki_F | Formal Suit (Khaki)
//    Item_U_C_FormalSuit_01_tshirt_black_F | Formal Suit (T-Shirt, Black)
//    Item_U_C_FormalSuit_01_tshirt_gray_F | Formal Suit (T-Shirt, Gray)
//    Item_U_C_HeliPilotCoveralls_Black_RF | Heli Pilot Coveralls (Black)
//    Item_U_C_HeliPilotCoveralls_Blue_RF | Heli Pilot Coveralls (Blue)
//    Item_U_C_HeliPilotCoveralls_Green_RF | Heli Pilot Coveralls (Green)
//    Item_U_C_HeliPilotCoveralls_Rescue_RF | Heli Pilot Coveralls (Red)
//    Item_U_C_HeliPilotCoveralls_Yellow_RF | Heli Pilot Coveralls (Yellow)
//    Item_U_C_HunterBody_grn | Hunting Clothes
//    Item_U_C_IDAP_Man_cargo_F | Aid Worker Clothes [IDAP] (Cargo)
//    Item_U_C_IDAP_Man_Casual_F | Aid Worker Clothes [IDAP] (Polo)
//    Item_U_C_IDAP_Man_jeans_F | Aid Worker Clothes [IDAP] (Jeans)
//    Item_U_C_IDAP_Man_shorts_F | Aid Worker Clothes [IDAP] (Polo, Shorts)
//    Item_U_C_IDAP_Man_tee_F | Aid Worker Clothes [IDAP] (Tee)
//    Item_U_C_IDAP_Man_teeshorts_F | Aid Worker Clothes [IDAP] (Tee, Shorts)
//    Item_U_C_Journalist | Journalist Clothes
//    Item_U_C_Man_casual_1_F | Casual Clothes (Navy)
//    Item_U_C_Man_casual_2_F | Casual Clothes (Blue)
//    Item_U_C_Man_casual_3_F | Casual Clothes (Green)
//    Item_U_C_Man_casual_4_F | Summer Clothes (Sky)
//    Item_U_C_Man_casual_5_F | Summer Clothes (Yellow)
//    Item_U_C_Man_casual_6_F | Summer Clothes (Red)
//    Item_U_C_Man_casual_7_F | Casual Clothes (Grey)
//    Item_U_C_Man_casual_8_F | Casual Clothes (Brown)
//    Item_U_C_Man_casual_9_F | Casual Clothes (Larkin)
//    Item_U_C_man_sport_1_F | Sport Clothes (Beach)
//    Item_U_C_man_sport_2_F | Sport Clothes (Orange)
//    Item_U_C_man_sport_3_F | Sport Clothes (Blue)
//    Item_U_C_Mechanic_01_F | Mechanic Clothes
//    Item_U_C_Paramedic_01_F | Paramedic Outfit
//    Item_U_C_PilotJacket_black_RF | Leather Jacket (Black)
//    Item_U_C_PilotJacket_brown_RF | Leather Jacket (Brown)
//    Item_U_C_PilotJacket_lbrown_RF | Leather Jacket (Light Brown)
//    Item_U_C_PilotJacket_open_black_RF | Leather Jacket (Black, Open)
//    Item_U_C_PilotJacket_open_brown_RF | Leather Jacket (Brown, Open)
//    Item_U_C_PilotJacket_open_lbrown_RF | Leather Jacket (Light Brown, Open)
//    Item_U_C_Poloshirt_blue | Commoner Clothes (Blue)
//    Item_U_C_Poloshirt_burgundy | Commoner Clothes (Burgundy)
//    Item_U_C_Poloshirt_redwhite | Commoner Clothes (Red-White)
//    Item_U_C_Poloshirt_salmon | Commoner Clothes (Salmon)
//    Item_U_C_Poloshirt_stripped | Commoner Clothes (Striped)
//    Item_U_C_Poloshirt_tricolour | Commoner Clothes (Tricolor)
//    Item_U_C_Poor_1 | Worn Clothes
//    Item_U_C_Poor_2 | Worn Clothes (Yellow)
//    Item_U_C_PriestBody | Clerical Robes
//    Item_U_C_Scientist | Scientist Clothes
//    Item_U_C_Uniform_Farmer_01_F | Farmer Outfit
//    Item_U_C_Uniform_Formal_01_blue_F | Formal Suit (Blue)
//    Item_U_C_Uniform_Formal_01_striped_F | Formal Suit (Checkered)
//    Item_U_C_Uniform_Formal_01_white_F | Formal Suit (White)
//    Item_U_C_Uniform_Scientist_01_F | Scientist Outfit (Formal, White)
//    Item_U_C_Uniform_Scientist_01_formal_F | Scientist Outfit (Formal, Blue)
//    Item_U_C_Uniform_Scientist_02_F | Scientist Outfit (Informal, Black)
//    Item_U_C_Uniform_Scientist_02_formal_F | Scientist Outfit (Informal, Red)
//    Item_U_C_WorkerCoveralls | Worker Coveralls
//    Item_U_Competitor | Competitor Suit
//    Item_U_I_C_Soldier_Bandit_1_F | Bandit Clothes (Polo Shirt)
//    Item_U_I_C_Soldier_Bandit_2_F | Bandit Clothes (Skull)
//    Item_U_I_C_Soldier_Bandit_3_F | Bandit Clothes (Tee)
//    Item_U_I_C_Soldier_Bandit_4_F | Bandit Clothes (Checkered)
//    Item_U_I_C_Soldier_Bandit_5_F | Bandit Clothes (Tank Top)
//    Item_U_I_C_Soldier_Camo_F | Syndikat Uniform
//    Item_U_I_C_Soldier_Para_1_F | Paramilitary Garb (Tee)
//    Item_U_I_C_Soldier_Para_2_F | Paramilitary Garb (Jacket)
//    Item_U_I_C_Soldier_Para_3_F | Paramilitary Garb (Shirt)
//    Item_U_I_C_Soldier_Para_4_F | Paramilitary Garb (Tank Top)
//    Item_U_I_C_Soldier_Para_5_F | Paramilitary Garb (Shorts)
//    Item_U_I_CBRN_Suit_01_AAF_F | CBRN Suit [AAF]
//    Item_U_I_CombatUniform | Combat Fatigues [AAF]
//    Item_U_I_CombatUniform_shortsleeve | Combat Fatigues [AAF] (Rolled-up)
//    Item_U_I_CombatUniform_tshirt | Combat Fatigues [AAF] (Tee)
//    Item_U_I_E_CBRN_Suit_01_EAF_F | CBRN Suit [LDF]
//    Item_U_I_E_FullGhillie_wdl_F | Full Ghillie [LDF] (Woodland)
//    Item_U_I_E_ParadeUniform_01_LDF_decorated_F | Parade Uniform (Decorated) [LDF]
//    Item_U_I_E_ParadeUniform_01_LDF_F | Parade Uniform [LDF]
//    Item_U_I_E_Uniform_01_coveralls_F | Coveralls [LDF]
//    Item_U_I_E_Uniform_01_F | Combat Fatigues [LDF]
//    Item_U_I_E_Uniform_01_officer_F | Combat Fatigues [LDF] (Officer)
//    Item_U_I_E_Uniform_01_pilot_F | Pilot Coveralls [LDF]
//    Item_U_I_E_Uniform_01_shortsleeve_F | Combat Fatigues [LDF] (Rolled-up)
//    Item_U_I_E_Uniform_01_sweater_F | Combat Fatigues [LDF] (Sweater)
//    Item_U_I_E_Uniform_01_tanktop_F | Combat Fatigues [LDF] (Tank Top)
//    Item_U_I_FullGhillie_ard | Full Ghillie [AAF] (Arid)
//    Item_U_I_FullGhillie_lsh | Full Ghillie [AAF] (Lush)
//    Item_U_I_FullGhillie_sard | Full Ghillie [AAF] (Semi-Arid)
//    Item_U_I_G_resistanceLeader_F | Guerilla Fatigues (Stavrou)
//    Item_U_I_G_Story_Protagonist_F | Worn Combat Fatigues (Kerry)
//    Item_U_I_GhillieSuit | Ghillie Suit [AAF]
//    Item_U_I_HeliPilotCoveralls | Heli Pilot Coveralls [AAF]
//    Item_U_I_L_Uniform_01_camo_F | Deserter Clothes (Jacket)
//    Item_U_I_L_Uniform_01_deserter_F | Deserter Clothes (T-Shirt)
//    Item_U_I_L_Uniform_01_tshirt_black_F | Looter Clothes (T-Shirt, Black)
//    Item_U_I_L_Uniform_01_tshirt_olive_F | Looter Clothes (T-Shirt, Olive)
//    Item_U_I_L_Uniform_01_tshirt_skull_F | Looter Clothes (T-Shirt, Skull)
//    Item_U_I_L_Uniform_01_tshirt_sport_F | Looter Clothes (T-Shirt, Sport)
//    Item_U_I_OfficerUniform | Combat Fatigues [AAF] (Officer)
//    Item_U_I_ParadeUniform_01_AAF_decorated_F | Parade Uniform (Decorated) [AAF]
//    Item_U_I_ParadeUniform_01_AAF_F | Parade Uniform [AAF]
//    Item_U_I_pilotCoveralls | Pilot Coveralls [AAF]
//    Item_U_I_Protagonist_VR | VR Suit [AAF]
//    Item_U_I_Uniform_01_tanktop_F | Combat Fatigues [AAF] (Tank Top)
//    Item_U_I_Wetsuit | Wetsuit [AAF]
//    Item_U_Jayholder | Worn Clothes (Jay Crowe)
//    Item_U_lxWS_B_CombatUniform_desert | Combat Fatigues [US] (MCU-D)
//    Item_U_lxWS_B_CombatUniform_desert_tshirt | Combat Fatigues [US] (MCU-D, Tee)
//    Item_U_lxWS_B_CombatUniform_desert_vest | Combat Fatigues [US] (MCU-D, Rolled-Up)
//    Item_U_lxWS_C_Djella_01 | Commoner Clothes (Djellaba, Yellow)
//    Item_U_lxWS_C_Djella_02 | Commoner Clothes (Djellaba, Blue)
//    Item_U_lxWS_C_Djella_03 | Commoner Clothes (Djellaba, Black)
//    Item_U_lxWS_C_Djella_04 | Commoner Clothes (Djellaba, Wine)
//    Item_U_lxWS_C_Djella_05 | Commoner Clothes (Djellaba, White)
//    Item_U_lxWS_C_Djella_06 | Commoner Clothes (Djellaba, Black, Simple)
//    Item_U_lxWS_C_Djella_07 | Commoner Clothes (Djellaba, Green)
//    Item_U_lxWS_Djella_02_Brown | Bandit Rags (Brown)
//    Item_U_lxWS_Djella_02_Grey | Bandit Rags (Gray)
//    Item_U_lxWS_Djella_02_Sand | Bandit Rags (Sand)
//    Item_U_lxWS_Djella_03_Green | Bandit Rags (Green)
//    Item_U_lxWS_ION_Casual2 | Contractor Outfit (Red)
//    Item_U_lxWS_ION_Casual3 | Contractor Outfit (Black)
//    Item_U_lxWS_ION_Casual4 | Contractor Outfit (White)
//    Item_U_lxWS_ION_Casual5 | Contractor Outfit (Peace)
//    Item_U_lxWS_ION_Casual6 | Contractor Outfit (Camo)
//    Item_U_lxWS_SFIA_deserter | Deserter Clothes [SFIA]
//    Item_U_lxWS_SFIA_Officer_1 | Combat Fatigues [SFIA] (Officer)
//    Item_U_lxWS_SFIA_pilot | Pilot Coveralls [SFIA]
//    Item_U_lxWS_SFIA_soldier_1 | Combat Fatigues [SFIA] (Rolled-Up)
//    Item_U_lxWS_SFIA_soldier_2 | Combat Fatigues [SFIA]
//    Item_U_lxWS_SFIA_Tanker_O | Tanker Coveralls [SFIA]
//    Item_U_lxWS_Tak_01_A | Commoner Clothes (Villager, Green)
//    Item_U_lxWS_Tak_01_B | Commoner Clothes (Villager, Dark)
//    Item_U_lxWS_Tak_01_C | Commoner Clothes (Villager, Blue)
//    Item_U_lxWS_Tak_02_A | Commoner Clothes (Jacket, Green)
//    Item_U_lxWS_Tak_02_B | Commoner Clothes (Jacket, Black)
//    Item_U_lxWS_Tak_02_C | Commoner Clothes (Jacket, Gray)
//    Item_U_lxWS_Tak_03_A | Commoner Clothes (Nomad, Brown)
//    Item_U_lxWS_Tak_03_B | Commoner Clothes (Nomad, Blue)
//    Item_U_lxWS_Tak_03_C | Commoner Clothes (Nomad, White)
//    Item_U_lxWS_UN_Camo1 | Combat Fatigues [UNA] (Officer)
//    Item_U_lxWS_UN_Camo2 | Combat Fatigues [UNA]
//    Item_U_lxWS_UN_Camo3 | Combat Fatigues [UNA] (Rolled-Up)
//    Item_U_lxWS_UN_Pilot | Pilot Coveralls [UNA]
//    Item_U_Marshal | Marshal Clothes
//    Item_U_NikosAgedBody | Formal Suit (Nikos)
//    Item_U_NikosBody | Profiteer Suit (Nikos)
//    Item_U_O_CombatUniform_ocamo | Fatigues [CSAT] (Hex)
//    Item_U_O_CombatUniform_oicamo | Fatigues [CSAT] (Desert Hex)
//    Item_U_O_CombatUniform_oucamo | Fatigues [CSAT] (Urban)
//    Item_U_O_FullGhillie_ard | Full Ghillie [CSAT] (Arid)
//    Item_U_O_FullGhillie_lsh | Full Ghillie [CSAT] (Lush)
//    Item_U_O_FullGhillie_sard | Full Ghillie [CSAT] (Semi-Arid)
//    Item_U_O_GhillieSuit | Ghillie Suit [CSAT]
//    Item_U_O_LCF_noInsignia_hex_lxws | Light Combat Fatigues (Hex)
//    Item_U_O_officer_noInsignia_hex_F | Light Fatigues (Hex)
//    Item_U_O_officer_noInsignia_oicamo_F | Light Fatigues (Desert Hex)
//    Item_U_O_officer_noInsignia_urb_F | Light Fatigues (Urban)
//    Item_U_O_OfficerUniform_ocamo | Officer Fatigues [CSAT] (Hex)
//    Item_U_O_OfficerUniform_oicamo | Officer Fatigues [CSAT] (Desert Hex)
//    Item_U_O_ParadeUniform_01_CSAT_decorated_F | Parade Uniform (Decorated) [CSAT]
//    Item_U_O_ParadeUniform_01_CSAT_F | Parade Uniform [CSAT]
//    Item_U_O_PilotCoveralls | Pilot Coveralls [CSAT]
//    Item_U_O_Protagonist_VR | VR Suit [CSAT]
//    Item_U_O_R_CombatUniform_arid_F | Fatigues [RU] (Arid)
//    Item_U_O_R_CombatUniform_taiga_F | Fatigues [RU] (Taiga)
//    Item_U_O_R_CombatUniform_tshirt_arid_F | Light Fatigues (Arid, Tee)
//    Item_U_O_R_CombatUniform_tshirt_taiga_F | Light Fatigues (Taiga, Tee)
//    Item_U_O_R_FullGhillie_ard_F | Full Ghillie [RU] (Arid)
//    Item_U_O_R_FullGhillie_lsh_F | Full Ghillie [RU] (Lush)
//    Item_U_O_R_FullGhillie_sard_F | Full Ghillie [RU] (Semi-Arid)
//    Item_U_O_R_FullGhillie_wdl_F | Full Ghillie [RU] (Woodland)
//    Item_U_O_R_GhillieSuit_arid_F | Ghillie Suit [RU] (Arid)
//    Item_U_O_R_GhillieSuit_taiga_F | Ghillie Suit [RU] (Taiga)
//    Item_U_O_R_Gorka_01_black_F | Tracksuit (Black)
//    Item_U_O_R_Gorka_01_brown_F | Granit-B Suit (Weathered)
//    Item_U_O_R_Gorka_01_camo_F | Granit-T Suit
//    Item_U_O_R_Gorka_01_F | Granit-B Suit
//    Item_U_O_R_officer_noInsignia_arid_F | Light Fatigues (Arid)
//    Item_U_O_R_officer_noInsignia_taiga_F | Light Fatigues (Taiga)
//    Item_U_O_R_OfficerUniform_arid_F | Officer Fatigues [RU] (Arid)
//    Item_U_O_R_OfficerUniform_taiga_F | Officer Fatigues [RU] (Taiga)
//    Item_U_O_R_PilotCoveralls | Pilot Coveralls [RU]
//    Item_U_O_R_Wetsuit | Wetsuit [RU]
//    Item_U_O_SpecopsUniform_blk | Fatigues [CSAT] (Black)
//    Item_U_O_T_FullGhillie_tna_F | Full Ghillie [CSAT] (Jungle)
//    Item_U_O_T_Officer_F | Officer Fatigues [CSAT] (Green Hex)
//    Item_U_O_T_officer_noInsignia_ghex_F | Light Fatigues (Green Hex)
//    Item_U_O_T_Pilot_F | Pilot Coveralls [CSAT] (Green Hex)
//    Item_U_O_T_Sniper_F | Ghillie Suit [CSAT] (Green Hex)
//    Item_U_O_T_Soldier_F | Fatigues [CSAT] (Green Hex)
//    Item_U_O_V_Soldier_Viper_F | Special Purpose Suit (Green Hex)
//    Item_U_O_V_Soldier_Viper_hex_F | Special Purpose Suit (Hex)
//    Item_U_O_V_Soldier_Viper_oicamo_F | Special Purpose Suit (Desert Hex)
//    Item_U_O_Wetsuit | Wetsuit [CSAT]
//    Item_U_OrestesBody | Surfer Outfit
//    Item_U_Rangemaster | Rangemaster Suit
//    Item_U_SFIA_deserter_lxWS | Deserter Clothes (Desert)
//    Item_U_Tank_green_F | Tanker Coveralls [AAF]
//    Item_V_lxWS_HarnessO_oli | LBV Harness (Olive)
//    Item_V_lxWS_PlateCarrier1_desert | Carrier Lite (MCU-D)
//    Item_V_lxWS_PlateCarrier2_desert | Carrier Rig (MCU-D)
//    Item_V_lxWS_PlateCarrierGL_desert | Carrier GL Rig (MCU-D)
//    Item_V_lxWS_PlateCarrierSpec_desert | Carrier Special Rig (MCU-D)
//    Item_V_lxWS_TacVestIR_oli | Raven Vest (Olive)
//    Item_V_lxWS_UN_Vest_F | GA Carrier Rig [UNA]
//    Item_V_lxWS_UN_Vest_Lite_F | GA Carrier Lite [UNA]
//    Item_V_PlateCarrierLite_black_noFlag_RF | Carrier Lite Rig (Black, No Flag)
//    Item_V_TacVest_gen_holster_RF | Gendarmerie Vest (Holster)
//    Item_V_TacVest_rig_blk_RF | Tactical Vest Rig (Black)
//    Item_V_TacVest_rig_khk_RF | Tactical Vest Rig (Khaki)
//    Item_V_TacVest_rig_oli_RF | Tactical Vest Rig (Olive)
//
// -- ItemsVest (6) --
//    ghost_vests_sof_Item_SOF_V_AVSCarrier_Lite_mcam | [Ghost] Light Carrier Vest (MTP)
//    ghost_vests_sof_Item_SOF_V_AVSCarrier_Lite_ocp | [Ghost] Light Carrier Vest (OCP)
//    ghost_vests_sof_Item_SOF_V_AVSCarrier_Lite_rgr | [Ghost] Light Carrier Vest (Green)
//    ghost_vests_sof_Item_SOF_V_AVSCarrier_Lite_rgr_noflag | [Ghost] Light Carrier Vest (Green, No Flag)
//    ghost_vests_sof_Item_SOF_V_AVSCarrier_Lite_tna | [Ghost] Light Carrier Vest (Tropic)
//    ghost_vests_sof_Item_SOF_V_AVSCarrier_Lite_wdl | [Ghost] Light Carrier Vest (Woodland)
//
// -- ItemsVests (521) --
//    ghost_equipment_Item_vest_rebreather | [Ghost] Rebreather
//    Vest_Aegis_V_Ammo_Bandolier_F | Bullet Bandolier
//    Vest_Aegis_V_CarrierRigKBT_01_cqb_black_F | Modular Carrier CQB Rig (Black)
//    Vest_Aegis_V_CarrierRigKBT_01_cqb_cbr_F | Modular Carrier CQB Rig (Coyote)
//    Vest_Aegis_V_CarrierRigKBT_01_cqb_EAF_F | Modular Carrier CQB Rig (Geometric)
//    Vest_Aegis_V_CarrierRigKBT_01_cqb_khk_F | Modular Carrier CQB Rig (Khaki)
//    Vest_Aegis_V_CarrierRigKBT_01_cqb_MTP_F | Modular Carrier CQB Rig (MTP)
//    Vest_Aegis_V_CarrierRigKBT_01_cqb_olive_F | Modular Carrier CQB Rig (Olive)
//    Vest_Aegis_V_CarrierRigKBT_01_holster_black_F | Modular Holster (Black)
//    Vest_Aegis_V_CarrierRigKBT_01_holster_cbr_F | Modular Holster (Coyote)
//    Vest_Aegis_V_CarrierRigKBT_01_holster_khk_F | Modular Holster (Khaki)
//    Vest_Aegis_V_CarrierRigKBT_01_holster_olive_F | Modular Holster (Olive)
//    Vest_Aegis_V_CarrierRigKBT_01_recon_black_F | Modular Carrier Recon Rig (Black)
//    Vest_Aegis_V_CarrierRigKBT_01_recon_cbr_F | Modular Carrier Recon Rig (Coyote)
//    Vest_Aegis_V_CarrierRigKBT_01_recon_ctrg_ard_F | Modular Carrier Recon Rig [CTRG]
//    Vest_Aegis_V_CarrierRigKBT_01_recon_ctrg_trp_F | Modular Carrier Recon Rig [CTRG] (Tropic)
//    Vest_Aegis_V_CarrierRigKBT_01_recon_EAF_F | Modular Carrier Recon Rig (Geometric)
//    Vest_Aegis_V_CarrierRigKBT_01_recon_khk_F | Modular Carrier Recon Rig (Khaki)
//    Vest_Aegis_V_CarrierRigKBT_01_recon_MTP_F | Modular Carrier Recon Rig (MTP)
//    Vest_Aegis_V_CarrierRigKBT_01_recon_olive_F | Modular Carrier Recon Rig (Olive)
//    Vest_Aegis_V_CarrierRigKBT_01_tac_black_F | Modular Carrier Tactical Rig (Black)
//    Vest_Aegis_V_CarrierRigKBT_01_tac_cbr_F | Modular Carrier Tactical Rig (Coyote)
//    Vest_Aegis_V_CarrierRigKBT_01_tac_khk_F | Modular Carrier Tactical Rig (Khaki)
//    Vest_Aegis_V_CarrierRigKBT_01_tac_olive_F | Modular Carrier Tactical Rig (Olive)
//    Vest_Aegis_V_ChestrigEast_dst_F | Lifchik-M Rig (Desert Hex)
//    Vest_Aegis_V_ChestrigEast_ghex_F | Lifchik-M Rig (Green Hex)
//    Vest_Aegis_V_ChestrigEast_grn_F | Lifchik-M Rig (Green)
//    Vest_Aegis_V_ChestrigEast_hex_F | Lifchik-M Rig (Hex)
//    Vest_Aegis_V_ChestrigEast_khk_F | Lifchik-M Rig (Khaki)
//    Vest_Aegis_V_ChestrigEast_oli_F | Lifchik-M Rig (Olive)
//    Vest_Aegis_V_ChestrigEast_RUarid_F | Lifchik-M Rig (Arid)
//    Vest_Aegis_V_ChestrigEast_RUtaiga_F | Lifchik-M Rig (Taiga)
//    Vest_Aegis_V_ChestrigEast_tan_F | Lifchik-M Rig (Tan)
//    Vest_Aegis_V_OCarrierLuchnik_arid_F | Luchnik Vest (Arid)
//    Vest_Aegis_V_OCarrierLuchnik_blk_F | Luchnik Vest (Black)
//    Vest_Aegis_V_OCarrierLuchnik_CQB_arid_F | Luchnik CQB Rig (Arid)
//    Vest_Aegis_V_OCarrierLuchnik_CQB_blk_F | Luchnik CQB Rig (Black)
//    Vest_Aegis_V_OCarrierLuchnik_CQB_F | Luchnik CQB Rig (Taiga)
//    Vest_Aegis_V_OCarrierLuchnik_CQB_grn_F | Luchnik CQB Rig (Green)
//    Vest_Aegis_V_OCarrierLuchnik_CQB_khk_F | Luchnik CQB Rig (Khaki)
//    Vest_Aegis_V_OCarrierLuchnik_F | Luchnik Vest (Taiga)
//    Vest_Aegis_V_OCarrierLuchnik_GL_arid_F | Luchnik GL Rig (Arid)
//    Vest_Aegis_V_OCarrierLuchnik_GL_blk_F | Luchnik GL Rig (Black)
//    Vest_Aegis_V_OCarrierLuchnik_GL_F | Luchnik GL Rig (Taiga)
//    Vest_Aegis_V_OCarrierLuchnik_GL_grn_F | Luchnik GL Rig (Green)
//    Vest_Aegis_V_OCarrierLuchnik_GL_khk_F | Luchnik GL Rig (Khaki)
//    Vest_Aegis_V_OCarrierLuchnik_grn_F | Luchnik Vest (Green)
//    Vest_Aegis_V_OCarrierLuchnik_khk_F | Luchnik Vest (Khaki)
//    Vest_Aegis_V_OCarrierLuchnik_Lite_arid_F | Luchnik Lite Rig (Arid)
//    Vest_Aegis_V_OCarrierLuchnik_Lite_blk_F | Luchnik Lite Rig (Black)
//    Vest_Aegis_V_OCarrierLuchnik_Lite_F | Luchnik Lite Rig (Taiga)
//    Vest_Aegis_V_OCarrierLuchnik_Lite_grn_F | Luchnik Lite Rig (Green)
//    Vest_Aegis_V_OCarrierLuchnik_Lite_khk_F | Luchnik Lite Rig (Khaki)
//    Vest_Aegis_V_PlateCarrier2_alt_blk | Carrier Alt Rig (Black)
//    Vest_Aegis_V_PlateCarrier2_alt_cbr | Carrier Alt Rig (Coyote)
//    Vest_Aegis_V_PlateCarrier2_alt_desert | Carrier Alt Rig (MCU-D)
//    Vest_Aegis_V_PlateCarrier2_alt_khk | Carrier Alt Rig (Khaki)
//    Vest_Aegis_V_PlateCarrier2_alt_mtp | Carrier Alt Rig (OCP)
//    Vest_Aegis_V_PlateCarrier2_alt_oli | Carrier Alt Rig (Olive)
//    Vest_Aegis_V_PlateCarrier2_alt_rgr | Carrier Alt Rig (Green)
//    Vest_Aegis_V_PlateCarrier2_alt_tna | Carrier Alt Rig (MTP-T)
//    Vest_Aegis_V_PlateCarrier2_alt_wdl | Carrier Alt Rig (MTP-W)
//    Vest_Aegis_V_PlateCarrier_RF_blk | Carrier Vest Rig (Black)
//    Vest_Aegis_V_PlateCarrier_RF_cbr | Carrier Vest Rig (Coyote)
//    Vest_Aegis_V_PlateCarrier_RF_desert | Carrier Vest Rig (MCU-D)
//    Vest_Aegis_V_PlateCarrier_RF_khk | Carrier Vest Rig (Khaki)
//    Vest_Aegis_V_PlateCarrier_RF_mtp | Carrier Vest Rig (OCP)
//    Vest_Aegis_V_PlateCarrier_RF_oli | Carrier Vest Rig (Olive)
//    Vest_Aegis_V_PlateCarrier_RF_rgr | Carrier Vest Rig (Green)
//    Vest_Aegis_V_PlateCarrier_RF_tna | Carrier Vest Rig (MTP-T)
//    Vest_Aegis_V_PlateCarrier_RF_wdl | Carrier Vest Rig (MTP-W)
//    Vest_Aegis_V_SmershVest_01_blk_F | Kipchak Vest (Black)
//    Vest_Aegis_V_SmershVest_01_radio_blk_F | Kipchak Vest (Black, Tactical Radio)
//    Vest_Aegis_V_TacVest_Rig_camo_RF | Tactical Vest Rig (Camo)
//    Vest_Aegis_V_TacVest_Rig_grn_RF | Tactical Vest Rig (Green)
//    Vest_Aegis_V_TacVest_Rig_gry_RF | Tactical Vest Rig (Grey)
//    Vest_Aegis_V_TacVest_RigB_blk_RF | Tactical Vest Lite Rig (Black)
//    Vest_Aegis_V_TacVest_RigB_camo_RF | Tactical Vest Lite Rig (Camo)
//    Vest_Aegis_V_TacVest_RigB_grn_RF | Tactical Vest Lite Rig (Green)
//    Vest_Aegis_V_TacVest_RigB_gry_RF | Tactical Vest Lite Rig (Grey)
//    Vest_Aegis_V_TacVest_RigB_khk_RF | Tactical Vest Lite Rig (Khaki)
//    Vest_Aegis_V_TacVest_RigB_oli_RF | Tactical Vest Lite Rig (Olive)
//    Vest_Atlas_V_CarrierRigKBT_01_cqb_france_F | Modular Carrier CQB Rig (Geotiger)
//    Vest_Atlas_V_CarrierRigKBT_01_cqb_RACS_F | Modular Carrier CQB Rig [RACS]
//    Vest_Atlas_V_CarrierRigKBT_01_france_F | Modular Carrier Vest (Geotiger)
//    Vest_Atlas_V_CarrierRigKBT_01_heavy_france_F | Modular Carrier GL Rig (Geotiger)
//    Vest_Atlas_V_CarrierRigKBT_01_heavy_RACS_F | Modular Carrier GL Rig [RACS]
//    Vest_Atlas_V_CarrierRigKBT_01_heavy_UNRACS_F | Modular Carrier GL Rig [RACS UN]
//    Vest_Atlas_V_CarrierRigKBT_01_light_france_F | Modular Carrier Lite (Geotiger)
//    Vest_Atlas_V_CarrierRigKBT_01_light_RACS_F | Modular Carrier Lite [RACS]
//    Vest_Atlas_V_CarrierRigKBT_01_RACS_F | Modular Carrier Vest [RACS]
//    Vest_Atlas_V_CarrierRigKBT_01_recon_idfsf_F | Modular Carrier Recon Rig [IDF]
//    Vest_Atlas_V_CarrierRigKBT_01_tac_UNRACS_F | Modular Carrier Tactical Rig [RACS UN]
//    Vest_Atlas_V_ChestRigEast_semiarid_F | Lifchik-M Rig (Semi-Arid Hex)
//    Vest_Atlas_V_ChestRigEast_whex_F | Lifchik-M Rig (Woodland Hex)
//    Vest_Atlas_V_OCarrierGora_ardi_F | Gora Vest (VSR)
//    Vest_Atlas_V_OCarrierGora_blk_F | Gora Vest (Black)
//    Vest_Atlas_V_OCarrierGora_CQB_ardi_F | Gora CQB Rig (VSR)
//    Vest_Atlas_V_OCarrierGora_CQB_blk_F | Gora CQB Rig (Black)
//    Vest_Atlas_V_OCarrierGora_CQB_grn_F | Gora CQB Rig (Green)
//    Vest_Atlas_V_OCarrierGora_CQB_khk_F | Gora CQB Rig (Khaki)
//    Vest_Atlas_V_OCarrierGora_grn_F | Gora Vest (Green)
//    Vest_Atlas_V_OCarrierGora_khk_F | Gora Vest (Khaki)
//    Vest_Atlas_V_OCarrierGora_Lite_ardi_F | Gora Lite Rig (VSR)
//    Vest_Atlas_V_OCarrierGora_Lite_blk_F | Gora Lite Rig (Black)
//    Vest_Atlas_V_OCarrierGora_Lite_grn_F | Gora Lite Rig (Green)
//    Vest_Atlas_V_OCarrierGora_Lite_khk_F | Gora Lite Rig (Khaki)
//    Vest_Atlas_V_OCarrierLuchnik_CQB_whex_F | Luchnik CQB Rig (Woodland Hex)
//    Vest_Atlas_V_OCarrierLuchnik_GL_whex_F | Luchnik GL Rig (Woodland Hex)
//    Vest_Atlas_V_OCarrierLuchnik_Lite_whex_F | Luchnik Lite Rig (Woodland Hex)
//    Vest_Atlas_V_OCarrierLuchnik_whex_F | Luchnik Vest (Woodland Hex)
//    Vest_Atlas_V_OCarrierRig_blk_F | Type 27 Carrier Vest (Black)
//    Vest_Atlas_V_OCarrierRig_CQB_alt_blk_F | Type 27 Carrier CQB Rig (Alt, Black)
//    Vest_Atlas_V_OCarrierRig_CQB_alt_khk_F | Type 27 Carrier CQB Rig (Alt, Khaki)
//    Vest_Atlas_V_OCarrierRig_CQB_alt_oli_F | Type 27 Carrier CQB Rig (Alt, Olive)
//    Vest_Atlas_V_OCarrierRig_CQB_blk_F | Type 27 Carrier CQB Rig (LBV, Black)
//    Vest_Atlas_V_OCarrierRig_CQB_dst_F | Type 27 Carrier CQB Rig (LBV, Desert Hex)
//    Vest_Atlas_V_OCarrierRig_CQB_GHex_F | Type 27 Carrier CQB Rig (LBV, Green Hex)
//    Vest_Atlas_V_OCarrierRig_CQB_Hex_F | Type 27 Carrier CQB Rig (LBV, Hex)
//    Vest_Atlas_V_OCarrierRig_CQB_khk_F | Type 27 Carrier CQB Rig (LBV, Khaki)
//    Vest_Atlas_V_OCarrierRig_CQB_oli_F | Type 27 Carrier CQB Rig (LBV, Olive)
//    Vest_Atlas_V_OCarrierRig_CQB_semiarid_F | Type 27 Carrier CQB Rig (LBV, Semiarid)
//    Vest_Atlas_V_OCarrierRig_CQB_Whex_F | Type 27 Carrier CQB Rig (LBV, Woodland Hex)
//    Vest_Atlas_V_OCarrierRig_dst_F | Type 27 Carrier Vest (Desert Hex)
//    Vest_Atlas_V_OCarrierRig_GHex_F | Type 27 Carrier Vest (Green Hex)
//    Vest_Atlas_V_OCarrierRig_GL_alt_blk_F | Type 27 Carrier GL Rig (Alt, Black)
//    Vest_Atlas_V_OCarrierRig_GL_alt_khk_F | Type 27 Carrier GL Rig (Alt, Khaki)
//    Vest_Atlas_V_OCarrierRig_GL_alt_oli_F | Type 27 Carrier GL Rig (Alt, Olive)
//    Vest_Atlas_V_OCarrierRig_GL_blk_F | Type 27 Carrier GL Rig (LBV, Black)
//    Vest_Atlas_V_OCarrierRig_GL_dst_F | Type 27 Carrier GL Rig (LBV, Desert Hex)
//    Vest_Atlas_V_OCarrierRig_GL_GHex_F | Type 27 Carrier GL Rig (LBV, Green Hex)
//    Vest_Atlas_V_OCarrierRig_GL_Hex_F | Type 27 Carrier GL Rig (LBV, Hex)
//    Vest_Atlas_V_OCarrierRig_GL_khk_F | Type 27 Carrier GL Rig (LBV, Khaki)
//    Vest_Atlas_V_OCarrierRig_GL_oli_F | Type 27 Carrier GL Rig (LBV, Olive)
//    Vest_Atlas_V_OCarrierRig_GL_semiarid_F | Type 27 Carrier GL Rig (LBV, Semiarid)
//    Vest_Atlas_V_OCarrierRig_GL_Whex_F | Type 27 Carrier GL Rig (LBV, Woodland Hex)
//    Vest_Atlas_V_OCarrierRig_Hex_F | Type 27 Carrier Vest (Hex)
//    Vest_Atlas_V_OCarrierRig_khk_F | Type 27 Carrier Vest (Khaki)
//    Vest_Atlas_V_OCarrierRig_Lite_alt_blk_F | Type 27 Carrier Lite (Alt, Black)
//    Vest_Atlas_V_OCarrierRig_Lite_alt_khk_F | Type 27 Carrier Lite (Alt, Khaki)
//    Vest_Atlas_V_OCarrierRig_Lite_alt_oli_F | Type 27 Carrier Lite (Alt, Olive)
//    Vest_Atlas_V_OCarrierRig_Lite_blk_F | Type 27 Carrier Lite (LBV, Black)
//    Vest_Atlas_V_OCarrierRig_Lite_dst_F | Type 27 Carrier Lite (LBV, Desert Hex)
//    Vest_Atlas_V_OCarrierRig_Lite_GHex_F | Type 27 Carrier Lite (LBV, Green Hex)
//    Vest_Atlas_V_OCarrierRig_Lite_Hex_F | Type 27 Carrier Lite (LBV, Hex)
//    Vest_Atlas_V_OCarrierRig_Lite_khk_F | Type 27 Carrier Lite (LBV, Khaki)
//    Vest_Atlas_V_OCarrierRig_Lite_oli_F | Type 27 Carrier Lite (LBV, Olive)
//    Vest_Atlas_V_OCarrierRig_Lite_semiarid_F | Type 27 Carrier Lite (LBV, Semiarid)
//    Vest_Atlas_V_OCarrierRig_Lite_Whex_F | Type 27 Carrier Lite (LBV, Woodland Hex)
//    Vest_Atlas_V_OCarrierRig_oli_F | Type 27 Carrier Vest (Olive)
//    Vest_Atlas_V_OCarrierRig_semiarid_F | Type 27 Carrier Vest (Semiarid)
//    Vest_Atlas_V_OCarrierRig_Whex_F | Type 27 Carrier Vest (Woodland Hex)
//    Vest_Atlas_V_ORigLBV_blk_F | Type 25 LBV Harness (Black)
//    Vest_Atlas_V_ORigLBV_dst_F | Type 25 LBV Harness (Desert Hex)
//    Vest_Atlas_V_ORigLBV_GHex_F | Type 25 LBV Harness (Green Hex)
//    Vest_Atlas_V_ORigLBV_Hex_F | Type 25 LBV Harness (Hex)
//    Vest_Atlas_V_ORigLBV_khk_F | Type 25 LBV Harness (Khaki)
//    Vest_Atlas_V_ORigLBV_oli_F | Type 25 LBV Harness (Olive)
//    Vest_Atlas_V_ORigLBV_semiarid_F | Type 25 LBV Harness (Semi-Arid Hex)
//    Vest_Atlas_V_ORigLBV_WHex_F | Type 25 LBV Harness (Woodland Hex)
//    Vest_Atlas_V_PlateCarrier_RF_aucamo | Carrier Vest Rig (Auscam)
//    Vest_Atlas_V_PlateCarrier_RF_aucamo_ard | Carrier Vest Rig (Auscam Arid)
//    Vest_Atlas_V_PlateCarrier_RF_aucamo_trp | Carrier Vest Rig (Auscam Tropic)
//    Vest_Atlas_V_PlateCarrier_RF_snd | Carrier Vest Rig (DDDPM)
//    Vest_EF_V_AAV_Diver_Black | Amphibious Assault Vest (Black/Diver/Alt)
//    Vest_EF_V_AAV_Diver_Coy | Amphibious Assault Vest (Coyote Brown/Diver/Alt)
//    Vest_EF_V_AAV_Diver_NoReb_Black | Amphibious Assault Vest (Black/Diver/No Rebreather/Alt)
//    Vest_EF_V_AAV_Diver_NoReb_Coy | Amphibious Assault Vest (Coyote Brown/Diver/No Rebreather/Alt)
//    Vest_EF_V_AAV_Diver_NoReb_Olive | Amphibious Assault Vest (Olive/Diver/No Rebreather/Alt)
//    Vest_EF_V_AAV_Diver_Olive | Amphibious Assault Vest (Olive/Diver/Alt)
//    Vest_EF_V_AAV_Rifleman_Black | Amphibious Assault Vest (Black/Rifleman/Alt)
//    Vest_EF_V_AAV_Rifleman_Coy | Amphibious Assault Vest (Coyote Brown/Rifleman/Alt)
//    Vest_EF_V_AAV_Rifleman_Olive | Amphibious Assault Vest (Olive/Rifleman/Alt)
//    Vest_EF_V_AAV_Sailor_Black | Amphibious Assault Vest (Black/Sailor/Alt)
//    Vest_EF_V_AAV_Sailor_Coy | Amphibious Assault Vest (Coyote Brown/Sailor/Alt)
//    Vest_EF_V_AAV_Sailor_Olive | Amphibious Assault Vest (Olive/Sailor/Alt)
//    Vest_EF_V_AAV_Scout_Black | Amphibious Assault Vest (Black/Scout/Alt)
//    Vest_EF_V_AAV_Scout_Coy | Amphibious Assault Vest (Coyote Brown/Scout/Alt)
//    Vest_EF_V_AAV_Scout_Olive | Amphibious Assault Vest (Olive/Scout/Alt)
//    Vest_EF_V_AAV_TL_Black | Amphibious Assault Vest (Black/Team Leader/Alt)
//    Vest_EF_V_AAV_TL_Coy | Amphibious Assault Vest (Coyote Brown/Team Leader/Alt)
//    Vest_EF_V_AAV_TL_Olive | Amphibious Assault Vest (Olive/Team Leader/Alt)
//    Vest_EF_V_CCR_Rifleman_Black | Commando Chest Rig (Black/Rifleman/Alt)
//    Vest_EF_V_CCR_Rifleman_Coy | Commando Chest Rig (Coyote Brown/Rifleman/Alt)
//    Vest_EF_V_CCR_Rifleman_Olive | Commando Chest Rig (Olive/Rifleman/Alt)
//    Vest_EF_V_CCR_Scout_Black | Commando Chest Rig (Black/Scout/Alt)
//    Vest_EF_V_CCR_Scout_Coy | Commando Chest Rig (Coyote Brown/Scout/Alt)
//    Vest_EF_V_CCR_Scout_Olive | Commando Chest Rig (Olive/Scout/Alt)
//    Vest_EF_V_CCR_TL_Black | Commando Chest Rig (Black/Team Leader/Alt)
//    Vest_EF_V_CCR_TL_Coy | Commando Chest Rig (Coyote Brown/Team Leader/Alt)
//    Vest_EF_V_CCR_TL_Olive | Commando Chest Rig (Olive/Team Leader/Alt)
//    Vest_EFA_V_AAV_des | Amphibious Assault Vest (MCU-D)
//    Vest_EFA_V_AAV_Diver_Alt_des | Amphibious Assault Vest (MCU-D/Diver/Alt)
//    Vest_EFA_V_AAV_Diver_Alt_MTP | Amphibious Assault Vest (MTP/Diver/Alt)
//    Vest_EFA_V_AAV_Diver_Alt_tna | Amphibious Assault Vest (MTP-T/Diver/Alt)
//    Vest_EFA_V_AAV_Diver_Alt_wdl | Amphibious Assault Vest (MTP-W/Diver/Alt)
//    Vest_EFA_V_AAV_Diver_des | Amphibious Assault Vest (MCU-D/Diver)
//    Vest_EFA_V_AAV_Diver_MTP | Amphibious Assault Vest (OCP/Diver)
//    Vest_EFA_V_AAV_Diver_NoReb_Alt_des | Amphibious Assault Vest (MCU-D/Diver/No Rebreather/Alt)
//    Vest_EFA_V_AAV_Diver_NoReb_Alt_MTP | Amphibious Assault Vest (MTP/Diver/No Rebreather/Alt)
//    Vest_EFA_V_AAV_Diver_NoReb_Alt_tna | Amphibious Assault Vest (MTP-T/Diver/No Rebreather/Alt)
//    Vest_EFA_V_AAV_Diver_NoReb_Alt_wdl | Amphibious Assault Vest (MTP-W/Diver/No Rebreather/Alt)
//    Vest_EFA_V_AAV_Diver_NoReb_des | Amphibious Assault Vest (MCU-D/Diver/No Rebreather)
//    Vest_EFA_V_AAV_Diver_NoReb_MTP | Amphibious Assault Vest (MTP/Diver/No Rebreather)
//    Vest_EFA_V_AAV_Diver_NoReb_tna | Amphibious Assault Vest (MTP-T/Diver/No Rebreather)
//    Vest_EFA_V_AAV_Diver_NoReb_wdl | Amphibious Assault Vest (MTP-W/Diver/No Rebreather)
//    Vest_EFA_V_AAV_Diver_tna | Amphibious Assault Vest (MTP-T/Diver)
//    Vest_EFA_V_AAV_Diver_wdl | Amphibious Assault Vest (MTP-W/Diver)
//    Vest_EFA_V_AAV_MTP | Amphibious Assault Vest (OCP)
//    Vest_EFA_V_AAV_Rifleman_Alt_des | Amphibious Assault Vest (MCU-D/Rifleman/Alt)
//    Vest_EFA_V_AAV_Rifleman_Alt_MTP | Amphibious Assault Vest (MTP/Rifleman/Alt)
//    Vest_EFA_V_AAV_Rifleman_Alt_tna | Amphibious Assault Vest (MTP-T/Rifleman/Alt)
//    Vest_EFA_V_AAV_Rifleman_Alt_wdl | Amphibious Assault Vest (MTP-W/Rifleman/Alt)
//    Vest_EFA_V_AAV_Rifleman_des | Amphibious Assault Vest (MCU-D/Rifleman)
//    Vest_EFA_V_AAV_Rifleman_MTP | Amphibious Assault Vest (OCP/Rifleman)
//    Vest_EFA_V_AAV_Rifleman_tna | Amphibious Assault Vest (MTP-T/Rifleman)
//    Vest_EFA_V_AAV_Rifleman_wdl | Amphibious Assault Vest (MTP-W/Rifleman)
//    Vest_EFA_V_AAV_Sailor_Alt_des | Amphibious Assault Vest (MCU-D/Sailor/Alt)
//    Vest_EFA_V_AAV_Sailor_Alt_MTP | Amphibious Assault Vest (MTP/Sailor/Alt)
//    Vest_EFA_V_AAV_Sailor_Alt_tna | Amphibious Assault Vest (MTP-T/Sailor/Alt)
//    Vest_EFA_V_AAV_Sailor_Alt_wdl | Amphibious Assault Vest (MTP-W/Sailor/Alt)
//    Vest_EFA_V_AAV_Sailor_des | Amphibious Assault Vest (MCU-D/Sailor)
//    Vest_EFA_V_AAV_Sailor_MTP | Amphibious Assault Vest (OCP/Sailor)
//    Vest_EFA_V_AAV_Sailor_tna | Amphibious Assault Vest (MTP-T/Sailor)
//    Vest_EFA_V_AAV_Sailor_wdl | Amphibious Assault Vest (MTP-W/Sailor)
//    Vest_EFA_V_AAV_Scout_Alt_des | Amphibious Assault Vest (MCU-D/Scout/Alt)
//    Vest_EFA_V_AAV_Scout_Alt_MTP | Amphibious Assault Vest (MTP/Scout/Alt)
//    Vest_EFA_V_AAV_Scout_Alt_tna | Amphibious Assault Vest (MTP-T/Scout/Alt)
//    Vest_EFA_V_AAV_Scout_Alt_wdl | Amphibious Assault Vest (MTP-W/Scout/Alt)
//    Vest_EFA_V_AAV_Scout_des | Amphibious Assault Vest (MCU-D/Scout)
//    Vest_EFA_V_AAV_Scout_MTP | Amphibious Assault Vest (OCP/Scout)
//    Vest_EFA_V_AAV_Scout_tna | Amphibious Assault Vest (MTP-T/Scout)
//    Vest_EFA_V_AAV_Scout_wdl | Amphibious Assault Vest (MTP-W/Scout)
//    Vest_EFA_V_AAV_Support_des | Amphibious Assault Vest (MCU-D/Support)
//    Vest_EFA_V_AAV_Support_MTP | Amphibious Assault Vest (OCP/Support)
//    Vest_EFA_V_AAV_Support_tna | Amphibious Assault Vest (MTP-T/Support)
//    Vest_EFA_V_AAV_Support_wdl | Amphibious Assault Vest (MTP-W/Support)
//    Vest_EFA_V_AAV_TL_Alt_des | Amphibious Assault Vest (MCU-D/Team Leader/Alt)
//    Vest_EFA_V_AAV_TL_Alt_MTP | Amphibious Assault Vest (MTP/Team Leader/Alt)
//    Vest_EFA_V_AAV_TL_Alt_tna | Amphibious Assault Vest (MTP-T/Team Leader/Alt)
//    Vest_EFA_V_AAV_TL_Alt_wdl | Amphibious Assault Vest (MTP-W/Team Leader/Alt)
//    Vest_EFA_V_AAV_TL_des | Amphibious Assault Vest (MCU-D/Team Leader)
//    Vest_EFA_V_AAV_TL_MTP | Amphibious Assault Vest (OCP/Team Leader)
//    Vest_EFA_V_AAV_TL_tna | Amphibious Assault Vest (MTP-T/Team Leader)
//    Vest_EFA_V_AAV_TL_wdl | Amphibious Assault Vest (MTP-W/Team Leader)
//    Vest_EFA_V_AAV_tna | Amphibious Assault Vest (MTP-T)
//    Vest_EFA_V_AAV_wdl | Amphibious Assault Vest (MTP-W)
//    Vest_EFA_V_CCR_Rifleman_Alt_des | Commando Chest Rig (MCU-D/Rifleman/Alt)
//    Vest_EFA_V_CCR_Rifleman_Alt_MTP | Commando Chest Rig (MTP/Rifleman/Alt)
//    Vest_EFA_V_CCR_Rifleman_Alt_tna | Commando Chest Rig (MTP-T/Rifleman/Alt)
//    Vest_EFA_V_CCR_Rifleman_Alt_wdl | Commando Chest Rig (MTP-W/Rifleman/Alt)
//    Vest_EFA_V_CCR_Rifleman_des | Commando Chest Rig (MCU-D/Rifleman)
//    Vest_EFA_V_CCR_Rifleman_MTP | Commando Chest Rig (OCP/Rifleman)
//    Vest_EFA_V_CCR_Rifleman_tna | Commando Chest Rig (MTP-T/Rifleman)
//    Vest_EFA_V_CCR_Rifleman_wdl | Commando Chest Rig (MTP-W/Rifleman)
//    Vest_EFA_V_CCR_Scout_Alt_des | Commando Chest Rig (MCU-D/Scout/Alt)
//    Vest_EFA_V_CCR_Scout_Alt_MTP | Commando Chest Rig (MTP/Scout/Alt)
//    Vest_EFA_V_CCR_Scout_Alt_tna | Commando Chest Rig (MTP-T/Scout/Alt)
//    Vest_EFA_V_CCR_Scout_Alt_wdl | Commando Chest Rig (MTP-W/Scout/Alt)
//    Vest_EFA_V_CCR_Scout_des | Commando Chest Rig (MCU-D/Scout)
//    Vest_EFA_V_CCR_Scout_MTP | Commando Chest Rig (OCP/Scout)
//    Vest_EFA_V_CCR_Scout_tna | Commando Chest Rig (MTP-T/Scout)
//    Vest_EFA_V_CCR_Scout_wdl | Commando Chest Rig (MTP-W/Scout)
//    Vest_EFA_V_CCR_Support_des | Commando Chest Rig (MCU-D/Support)
//    Vest_EFA_V_CCR_Support_MTP | Commando Chest Rig (OCP/Support)
//    Vest_EFA_V_CCR_Support_tna | Commando Chest Rig (MTP-T/Support)
//    Vest_EFA_V_CCR_Support_wdl | Commando Chest Rig (MTP-W/Support)
//    Vest_EFA_V_CCR_TL_Alt_des | Commando Chest Rig (MCU-D/Team Leader/Alt)
//    Vest_EFA_V_CCR_TL_Alt_MTP | Commando Chest Rig (MTP/Team Leader/Alt)
//    Vest_EFA_V_CCR_TL_Alt_tna | Commando Chest Rig (MTP-T/Team Leader/Alt)
//    Vest_EFA_V_CCR_TL_Alt_wdl | Commando Chest Rig (MTP-W/Team Leader/Alt)
//    Vest_EFA_V_CCR_TL_des | Commando Chest Rig (MCU-D/Team Leader)
//    Vest_EFA_V_CCR_TL_MTP | Commando Chest Rig (OCP/Team Leader)
//    Vest_EFA_V_CCR_TL_tna | Commando Chest Rig (MTP-T/Team Leader)
//    Vest_EFA_V_CCR_TL_wdl | Commando Chest Rig (MTP-W/Team Leader)
//    Vest_JCA_V_CarrierRigKBT_01_combat_black_F | Modular Carrier Combat Rig (Black)
//    Vest_JCA_V_CarrierRigKBT_01_combat_MTP_alpine_F | Modular Carrier Combat Rig (MTP-Alpine)
//    Vest_JCA_V_CarrierRigKBT_01_combat_MTP_arid_F | Modular Carrier Combat Rig (OCP)
//    Vest_JCA_V_CarrierRigKBT_01_combat_MTP_desert_F | Modular Carrier Combat Rig (MTP-Desert)
//    Vest_JCA_V_CarrierRigKBT_01_combat_MTP_tropic_F | Modular Carrier Combat Rig (MTP-Tropic)
//    Vest_JCA_V_CarrierRigKBT_01_combat_MTP_woodland_F | Modular Carrier Combat Rig (MTP-Woodland)
//    Vest_JCA_V_CarrierRigKBT_01_combat_olive_F | Modular Carrier Combat Rig (Olive)
//    Vest_JCA_V_CarrierRigKBT_01_combat_sand_F | Modular Carrier Combat Rig (Sand)
//    Vest_JCA_V_CarrierRigKBT_01_command_black_F | Modular Carrier Command Rig (Black)
//    Vest_JCA_V_CarrierRigKBT_01_command_MTP_alpine_F | Modular Carrier Command Rig (MTP-Alpine)
//    Vest_JCA_V_CarrierRigKBT_01_command_MTP_arid_F | Modular Carrier Command Rig (OCP)
//    Vest_JCA_V_CarrierRigKBT_01_command_MTP_desert_F | Modular Carrier Command Rig (MTP-Desert)
//    Vest_JCA_V_CarrierRigKBT_01_command_MTP_tropic_F | Modular Carrier Command Rig (MTP-Tropic)
//    Vest_JCA_V_CarrierRigKBT_01_command_MTP_woodland_F | Modular Carrier Command Rig (MTP-Woodland)
//    Vest_JCA_V_CarrierRigKBT_01_command_olive_F | Modular Carrier Command Rig (Olive)
//    Vest_JCA_V_CarrierRigKBT_01_command_sand_F | Modular Carrier Command Rig (Sand)
//    Vest_JCA_V_CarrierRigKBT_01_compact_black_F | Modular Carrier Compact Vest (Black)
//    Vest_JCA_V_CarrierRigKBT_01_compact_MTP_alpine_F | Modular Carrier Compact Vest (MTP-Alpine)
//    Vest_JCA_V_CarrierRigKBT_01_compact_MTP_arid_F | Modular Carrier Compact Vest (OCP)
//    Vest_JCA_V_CarrierRigKBT_01_compact_MTP_desert_F | Modular Carrier Compact Vest (MTP-Desert)
//    Vest_JCA_V_CarrierRigKBT_01_compact_MTP_tropic_F | Modular Carrier Compact Vest (MTP-Tropic)
//    Vest_JCA_V_CarrierRigKBT_01_compact_MTP_woodland_F | Modular Carrier Compact Vest (MTP-Woodland)
//    Vest_JCA_V_CarrierRigKBT_01_compact_olive_F | Modular Carrier Compact Vest (Olive)
//    Vest_JCA_V_CarrierRigKBT_01_compact_sand_F | Modular Carrier Compact Vest (Sand)
//    Vest_JCA_V_CarrierRigKBT_01_CQB_black_F | Modular Carrier CQB Rig (Black)
//    Vest_JCA_V_CarrierRigKBT_01_CQB_MTP_alpine_F | Modular Carrier CQB Rig (MTP-Alpine)
//    Vest_JCA_V_CarrierRigKBT_01_CQB_MTP_arid_F | Modular Carrier CQB Rig (OCP)
//    Vest_JCA_V_CarrierRigKBT_01_CQB_MTP_desert_F | Modular Carrier CQB Rig (MTP-Desert)
//    Vest_JCA_V_CarrierRigKBT_01_CQB_MTP_tropic_F | Modular Carrier CQB Rig (MTP-Tropic)
//    Vest_JCA_V_CarrierRigKBT_01_CQB_MTP_woodland_F | Modular Carrier CQB Rig (MTP-Woodland)
//    Vest_JCA_V_CarrierRigKBT_01_CQB_olive_F | Modular Carrier CQB Rig (Olive)
//    Vest_JCA_V_CarrierRigKBT_01_CQB_sand_F | Modular Carrier CQB Rig (Sand)
//    Vest_JCA_V_CarrierRigKBT_01_crew_black_F | Modular Carrier Crew Vest (Black)
//    Vest_JCA_V_CarrierRigKBT_01_crew_MTP_alpine_F | Modular Carrier Crew Vest (MTP-Alpine)
//    Vest_JCA_V_CarrierRigKBT_01_crew_MTP_arid_F | Modular Carrier Crew Vest (OCP)
//    Vest_JCA_V_CarrierRigKBT_01_crew_MTP_desert_F | Modular Carrier Crew Vest (MTP-Desert)
//    Vest_JCA_V_CarrierRigKBT_01_crew_MTP_tropic_F | Modular Carrier Crew Vest (MTP-Tropic)
//    Vest_JCA_V_CarrierRigKBT_01_crew_MTP_woodland_F | Modular Carrier Crew Vest (MTP-Woodland)
//    Vest_JCA_V_CarrierRigKBT_01_crew_olive_F | Modular Carrier Crew Vest (Olive)
//    Vest_JCA_V_CarrierRigKBT_01_crew_sand_F | Modular Carrier Crew Vest (Sand)
//    Vest_JCA_V_CarrierRigKBT_01_holster_black_F | Modular Carrier Holster (Black)
//    Vest_JCA_V_CarrierRigKBT_01_holster_MTP_alpine_F | Modular Carrier Holster (MTP-Alpine)
//    Vest_JCA_V_CarrierRigKBT_01_holster_MTP_arid_F | Modular Carrier Holster (MTP-Arid)
//    Vest_JCA_V_CarrierRigKBT_01_holster_MTP_desert_F | Modular Carrier Holster (MTP-Desert)
//    Vest_JCA_V_CarrierRigKBT_01_holster_MTP_F | Modular Carrier Holster (OCP)
//    Vest_JCA_V_CarrierRigKBT_01_holster_MTP_tropic_F | Modular Carrier Holster (MTP-Tropic)
//    Vest_JCA_V_CarrierRigKBT_01_holster_MTP_woodland_F | Modular Carrier Holster (MTP-Woodland)
//    Vest_JCA_V_CarrierRigKBT_01_holster_olive_F | Modular Carrier Holster (Olive)
//    Vest_JCA_V_CarrierRigKBT_01_holster_sand_F | Modular Carrier Holster (Sand)
//    Vest_JCA_V_CarrierRigKBT_01_recon_black_F | Modular Carrier Recon Rig (Black)
//    Vest_JCA_V_CarrierRigKBT_01_recon_MTP_alpine_F | Modular Carrier Recon Rig (MTP-Alpine)
//    Vest_JCA_V_CarrierRigKBT_01_recon_MTP_arid_F | Modular Carrier Recon Rig (OCP)
//    Vest_JCA_V_CarrierRigKBT_01_recon_MTP_desert_F | Modular Carrier Recon Rig (MTP-Desert)
//    Vest_JCA_V_CarrierRigKBT_01_recon_MTP_tropic_F | Modular Carrier Recon Rig (MTP-Tropic)
//    Vest_JCA_V_CarrierRigKBT_01_recon_MTP_woodland_F | Modular Carrier Recon Rig (MTP-Woodland)
//    Vest_JCA_V_CarrierRigKBT_01_recon_olive_F | Modular Carrier Recon Rig (Olive)
//    Vest_JCA_V_CarrierRigKBT_01_recon_sand_F | Modular Carrier Recon Rig (Sand)
//    Vest_JCA_V_CarrierRigKBT_01_tactical_black_F | Modular Carrier Tactical Rig (Black)
//    Vest_JCA_V_CarrierRigKBT_01_tactical_MTP_alpine_F | Modular Carrier Tactical Rig (MTP-Alpine)
//    Vest_JCA_V_CarrierRigKBT_01_tactical_MTP_arid_F | Modular Carrier Tactical Rig (OCP)
//    Vest_JCA_V_CarrierRigKBT_01_tactical_MTP_desert_F | Modular Carrier Tactical Rig (MTP-Desert)
//    Vest_JCA_V_CarrierRigKBT_01_tactical_MTP_tropic_F | Modular Carrier Tactical Rig (MTP-Tropic)
//    Vest_JCA_V_CarrierRigKBT_01_tactical_MTP_woodland_F | Modular Carrier Tactical Rig (MTP-Woodland)
//    Vest_JCA_V_CarrierRigKBT_01_tactical_olive_F | Modular Carrier Tactical Rig (Olive)
//    Vest_JCA_V_CarrierRigKBT_01_tactical_sand_F | Modular Carrier Tactical Rig (Sand)
//    Vest_V_ALiVE_Suicide_Belt | Suicide Belt
//    Vest_V_BandollierB_blk | Slash Bandolier (Black)
//    Vest_V_BandollierB_cbr | Slash Bandolier (Coyote)
//    Vest_V_BandollierB_ghex_F | Slash Bandolier (Green Hex)
//    Vest_V_BandollierB_khk | Slash Bandolier (Khaki)
//    Vest_V_BandollierB_oli | Slash Bandolier (Olive)
//    Vest_V_BandollierB_rgr | Slash Bandolier (Green)
//    Vest_V_BandollierB_taiga_F | Slash Bandolier (Taiga)
//    Vest_V_BandollierB_tna_F | Slash Bandolier (Tropic)
//    Vest_V_CarrierRigKBT_01_black_F | Modular Carrier Vest (Black)
//    Vest_V_CarrierRigKBT_01_Coyote_F | Modular Carrier Vest (Coyote)
//    Vest_V_CarrierRigKBT_01_EAF_F | Modular Carrier Vest (Geometric)
//    Vest_V_CarrierRigKBT_01_heavy_black_F | Modular Carrier GL Rig (Black)
//    Vest_V_CarrierRigKBT_01_heavy_Coyote_F | Modular Carrier GL Rig (Coyote)
//    Vest_V_CarrierRigKBT_01_heavy_EAF_F | Modular Carrier GL Rig (Geometric)
//    Vest_V_CarrierRigKBT_01_heavy_Khaki_F | Modular Carrier GL Rig (Khaki)
//    Vest_V_CarrierRigKBT_01_heavy_MTP_alpine_F | Modular Carrier GL Rig (MTP-Alpine)
//    Vest_V_CarrierRigKBT_01_heavy_MTP_arid_F | Modular Carrier GL Rig (OCP)
//    Vest_V_CarrierRigKBT_01_heavy_MTP_desert_F | Modular Carrier GL Rig (MTP-Desert)
//    Vest_V_CarrierRigKBT_01_heavy_MTP_F | Modular Carrier GL Rig (MTP)
//    Vest_V_CarrierRigKBT_01_heavy_MTP_tropic_F | Modular Carrier GL Rig (MTP-Tropic)
//    Vest_V_CarrierRigKBT_01_heavy_MTP_woodland_F | Modular Carrier GL Rig (MTP-Woodland)
//    Vest_V_CarrierRigKBT_01_heavy_olive_F | Modular Carrier GL Rig (Olive)
//    Vest_V_CarrierRigKBT_01_heavy_sand_F | Modular Carrier GL Rig (Sand)
//    Vest_V_CarrierRigKBT_01_Khaki_F | Modular Carrier Vest (Khaki)
//    Vest_V_CarrierRigKBT_01_light_black_F | Modular Carrier Lite (Black)
//    Vest_V_CarrierRigKBT_01_light_Coyote_F | Modular Carrier Lite (Coyote)
//    Vest_V_CarrierRigKBT_01_light_EAF_F | Modular Carrier Lite (Geometric)
//    Vest_V_CarrierRigKBT_01_light_idfsf_F | Modular Carrier Lite [IDF]
//    Vest_V_CarrierRigKBT_01_light_Khaki_F | Modular Carrier Lite (Khaki)
//    Vest_V_CarrierRigKBT_01_light_MTP_alpine_F | Modular Carrier Lite (MTP-Alpine)
//    Vest_V_CarrierRigKBT_01_light_MTP_arid_F | Modular Carrier Lite (OCP)
//    Vest_V_CarrierRigKBT_01_light_MTP_desert_F | Modular Carrier Lite (MTP-Desert)
//    Vest_V_CarrierRigKBT_01_light_MTP_F | Modular Carrier Lite (MTP)
//    Vest_V_CarrierRigKBT_01_light_MTP_tropic_F | Modular Carrier Lite (MTP-Tropic)
//    Vest_V_CarrierRigKBT_01_light_MTP_woodland_F | Modular Carrier Lite (MTP-Woodland)
//    Vest_V_CarrierRigKBT_01_light_olive_F | Modular Carrier Lite (Olive)
//    Vest_V_CarrierRigKBT_01_light_POLICE_F | Police Carrier Vest
//    Vest_V_CarrierRigKBT_01_light_sand_F | Modular Carrier Lite (Sand)
//    Vest_V_CarrierRigKBT_01_MTP_alpine_F | Modular Carrier Vest (MTP-Alpine)
//    Vest_V_CarrierRigKBT_01_MTP_arid_F | Modular Carrier Vest (MTP-Arid)
//    Vest_V_CarrierRigKBT_01_MTP_desert_F | Modular Carrier Vest (MTP-Desert)
//    Vest_V_CarrierRigKBT_01_MTP_F | Modular Carrier Vest (MTP)
//    Vest_V_CarrierRigKBT_01_MTP_tropic_F | Modular Carrier Vest (MTP-Tropic)
//    Vest_V_CarrierRigKBT_01_MTP_woodland_F | Modular Carrier Vest (MTP-Woodland)
//    Vest_V_CarrierRigKBT_01_olive_F | Modular Carrier Vest (Olive)
//    Vest_V_CarrierRigKBT_01_sand_F | Modular Carrier Vest (Sand)
//    Vest_V_CF_CarrierRig_F | Defender Rig [CDF]
//    Vest_V_CF_CarrierRig_Lite_F | Defender Lite Rig [CDF]
//    Vest_V_CF_CarrierRig_MG_F | Defender MG Rig [CDF]
//    Vest_V_Chestrig_blk | Chest Rig (Black)
//    Vest_V_Chestrig_khk | Chest Rig (Khaki)
//    Vest_V_Chestrig_oli | Chest Rig (Olive)
//    Vest_V_Chestrig_rgr | Chest Rig (Green)
//    Vest_V_ChestrigF_blk | Fighter Chest Rig (Black)
//    Vest_V_ChestrigF_khk | Fighter Chest Rig (Khaki)
//    Vest_V_ChestrigF_oli | Fighter Chest Rig (Olive)
//    Vest_V_ChestrigF_rgr | Fighter Chest Rig (Green)
//    Vest_V_DeckCrew_blue_F | Deck Crew Vest (Blue)
//    Vest_V_DeckCrew_brown_F | Deck Crew Vest (Brown)
//    Vest_V_DeckCrew_green_F | Deck Crew Vest (Green)
//    Vest_V_DeckCrew_red_F | Deck Crew Vest (Red)
//    Vest_V_DeckCrew_violet_F | Deck Crew Vest (Violet)
//    Vest_V_DeckCrew_white_F | Deck Crew Vest (White)
//    Vest_V_DeckCrew_yellow_F | Deck Crew Vest (Yellow)
//    Vest_V_EOD_blue_F | EOD Vest (Blue)
//    Vest_V_EOD_coyote_F | EOD Vest (Coyote)
//    Vest_V_EOD_IDAP_blue_F | EOD Vest (Blue) [IDAP]
//    Vest_V_EOD_olive_F | EOD Vest (Olive)
//    Vest_V_HarnessO_blk | LBV Harness (Black)
//    Vest_V_HarnessO_brn | LBV Harness (Khaki)
//    Vest_V_HarnessO_ghex_F | LBV Harness (Green Hex)
//    Vest_V_HarnessO_gry | LBV Harness (Grey)
//    Vest_V_HarnessO_oicamo | LBV Harness (Brown)
//    Vest_V_HarnessO_tan | LBV Harness (Tan)
//    Vest_V_HarnessO_whex_F | LBV Harness (Woodland Hex)
//    Vest_V_HarnessOGL_blk | LBV Grenadier Harness (Black)
//    Vest_V_HarnessOGL_brn | LBV Grenadier Harness (Khaki)
//    Vest_V_HarnessOGL_ghex_F | LBV Grenadier Harness (Green Hex)
//    Vest_V_HarnessOGL_gry | LBV Grenadier Harness (Grey)
//    Vest_V_HarnessOGL_oicamo | LBV Grenadier Harness (Brown)
//    Vest_V_HarnessOGL_tan | LBV Grenadier Harness (Tan)
//    Vest_V_HarnessOGL_whex_F | LBV Grenadier Harness (Woodland Hex)
//    Vest_V_HarnessOSpec_blk | ELBV Harness (Black)
//    Vest_V_HarnessOSpec_brn | ELBV Harness (Khaki)
//    Vest_V_HarnessOSpec_ghex_F | ELBV Harness (Green Hex)
//    Vest_V_HarnessOSpec_gry | ELBV Harness (Grey)
//    Vest_V_HarnessOSpec_oicamo | ELBV Harness (Brown)
//    Vest_V_HarnessOSpec_tan | ELBV Harness (Tan)
//    Vest_V_HarnessOSpec_whex_F | ELBV Harness (Woodland Hex)
//    Vest_V_LegStrapBag_black_F | Leg Strap Bag (Black)
//    Vest_V_LegStrapBag_coyote_F | Leg Strap Bag (Coyote)
//    Vest_V_LegStrapBag_olive_F | Leg Strap Bag (Olive)
//    Vest_V_Plain_crystal_F | Identification Vest (Red Crystal)
//    Vest_V_Plain_medical_F | Identification Vest [IDAP]
//    Vest_V_PlateCarrier1_blk | Carrier Lite (Black)
//    Vest_V_PlateCarrier1_cbr | Carrier Lite (Coyote)
//    Vest_V_PlateCarrier1_khk | Carrier Lite (Khaki)
//    Vest_V_PlateCarrier1_mtp | Carrier Lite (OCP)
//    Vest_V_PlateCarrier1_oli | Carrier Lite (Olive)
//    Vest_V_PlateCarrier1_rgr | Carrier Lite (Green)
//    Vest_V_PlateCarrier1_rgr_noflag_F | Carrier Lite (Green, No Flag)
//    Vest_V_PlateCarrier1_tna_F | Carrier Lite (MTP-T)
//    Vest_V_PlateCarrier1_wdl | Carrier Lite (MTP-W)
//    Vest_V_PlateCarrier2_blk | Carrier Rig (Black)
//    Vest_V_PlateCarrier2_cbr | Carrier Rig (Coyote)
//    Vest_V_PlateCarrier2_khk | Carrier Rig (Khaki)
//    Vest_V_PlateCarrier2_mtp | Carrier Rig (OCP)
//    Vest_V_PlateCarrier2_oli | Carrier Rig (Olive)
//    Vest_V_PlateCarrier2_rgr | Carrier Rig (Green)
//    Vest_V_PlateCarrier2_rgr_noflag_F | Carrier Rig (Green, No Flag)
//    Vest_V_PlateCarrier2_wdl | Carrier Rig (MTP-W)
//    Vest_V_PlateCarrier_Kerry | US Plate Carrier Rig (Kerry)
//    Vest_V_PlateCarrierGL_blk | Carrier GL Rig (Black)
//    Vest_V_PlateCarrierGL_cbr | Carrier GL Rig (Coyote)
//    Vest_V_PlateCarrierGL_mtp | Carrier GL Rig (OCP)
//    Vest_V_PlateCarrierGL_rgr | Carrier GL Rig (Green)
//    Vest_V_PlateCarrierGL_tna_F | Carrier GL Rig (MTP-T)
//    Vest_V_PlateCarrierGL_wdl | Carrier GL Rig (MTP-W)
//    Vest_V_PlateCarrierH_CTRG | CTRG Plate Carrier Rig Mk.2 (Heavy)
//    Vest_V_PlateCarrierH_CTRG_grn_F | CTRG Plate Carrier Rig Mk.2 (Green, Heavy)
//    Vest_V_PlateCarrierIA1_dgtl | GA Carrier Lite (Digital)
//    Vest_V_PlateCarrierIA1_grn | GA Carrier Lite (Green)
//    Vest_V_PlateCarrierIA1_khk | GA Carrier Lite (Coyote)
//    Vest_V_PlateCarrierIA1_oli | GA Carrier Lite (Olive)
//    Vest_V_PlateCarrierIA2_dgtl | GA Carrier Rig (Digital)
//    Vest_V_PlateCarrierIA2_grn | GA Carrier Rig (Green)
//    Vest_V_PlateCarrierIA2_khk | GA Carrier Rig (Coyote)
//    Vest_V_PlateCarrierIA2_oli | GA Carrier Rig (Olive)
//    Vest_V_PlateCarrierIAGL_dgtl | GA Carrier GL Rig (Digital)
//    Vest_V_PlateCarrierIAGL_grn | GA Carrier GL Rig (Green)
//    Vest_V_PlateCarrierIAGL_khk | GA Carrier GL Rig (Coyote)
//    Vest_V_PlateCarrierIAGL_oli | GA Carrier GL Rig (Olive)
//    Vest_V_PlateCarrierL_CTRG | CTRG Plate Carrier Rig Mk.1 (Light)
//    Vest_V_PlateCarrierL_CTRG_grn_F | CTRG Plate Carrier Rig Mk.1 (Green, Light)
//    Vest_V_PlateCarrierSpec_blk | Carrier Special Rig (Black)
//    Vest_V_PlateCarrierSpec_cbr | Carrier Special Rig (Coyote)
//    Vest_V_PlateCarrierSpec_mtp | Carrier Special Rig (OCP)
//    Vest_V_PlateCarrierSpec_rgr | Carrier Special Rig (Green)
//    Vest_V_PlateCarrierSpec_tna_F | Carrier Special Rig (Tropic)
//    Vest_V_PlateCarrierSpec_wdl | Carrier Special Rig (MTP-W)
//    Vest_V_Pocketed_black_F | Multi-Pocket Vest (Black)
//    Vest_V_Pocketed_coyote_F | Multi-Pocket Vest (Coyote)
//    Vest_V_Pocketed_hunter_F | Multi-Pocket Vest (Camo)
//    Vest_V_Pocketed_olive_F | Multi-Pocket Vest (Olive)
//    Vest_V_Pocketed_wdl_F | Multi-Pocket Vest (Woodland)
//    Vest_V_Press_F | Vest (Press)
//    Vest_V_Rangemaster_belt | Battle Belt (Green)
//    Vest_V_Rangemaster_belt_blk | Battle Belt (Black)
//    Vest_V_Rangemaster_belt_cbr | Battle Belt (Coyote)
//    Vest_V_Rangemaster_belt_ghex_F | Battle Belt (Green Hex)
//    Vest_V_Rangemaster_belt_khk | Battle Belt (Khaki)
//    Vest_V_Rangemaster_belt_oli | Battle Belt (Olive)
//    Vest_V_Rangemaster_belt_taiga_F | Battle Belt (Taiga)
//    Vest_V_Rangemaster_belt_tna_F | Battle Belt (Tropic)
//    Vest_V_RebreatherB | Rebreather [NATO]
//    Vest_V_RebreatherI_I | Rebreather [IDF]
//    Vest_V_RebreatherIA | Rebreather [AAF]
//    Vest_V_RebreatherIR | Rebreather [CSAT]
//    Vest_V_Safety_blue_F | Safety Vest (Blue)
//    Vest_V_Safety_orange_F | Safety Vest (Orange)
//    Vest_V_Safety_yellow_F | Safety Vest (Yellow)
//    Vest_V_SmershVest_01_F | Kipchak Vest (Green)
//    Vest_V_SmershVest_01_khaki_F | Kipchak Vest (Khaki)
//    Vest_V_SmershVest_01_olive_F | Kipchak Vest (Olive)
//    Vest_V_SmershVest_01_radio_F | Kipchak Vest (Green, Tactical Radio)
//    Vest_V_SmershVest_01_radio_khaki_F | Kipchak Vest (Khaki, Tactical Radio)
//    Vest_V_SmershVest_01_radio_olive_F | Kipchak Vest (Olive, Tactical Radio)
//    Vest_V_TacChestrig_cbr_F | Tactical Chest Rig (Coyote)
//    Vest_V_TacChestrig_grn_F | Tactical Chest Rig (Green)
//    Vest_V_TacChestrig_oli_F | Tactical Chest Rig (Olive)
//    Vest_V_TacVest_blk | Tactical Vest (Black)
//    Vest_V_TacVest_blk_POLICE | Tactical Vest (Police)
//    Vest_V_TacVest_brn | Tactical Vest (Brown)
//    Vest_V_TacVest_camo | Tactical Vest (Camo)
//    Vest_V_TacVest_gen_F | Gendarmerie Vest
//    Vest_V_TacVest_grn | Tactical Vest (Green)
//    Vest_V_TacVest_gry | Tactical Vest (Grey)
//    Vest_V_TacVest_khk | Tactical Vest (Khaki)
//    Vest_V_TacVest_oli | Tactical Vest (Olive)
//    Vest_V_TacVest_tan | Tactical Vest (Tan)
//
// -- Lamps (69) --
//    Land_LampAirport_F | Airport Lamp [on]
//    Land_LampAirport_off_F | Airport Lamp [off]
//    Land_LampDecor_F | Lamp (Decorative) [on]
//    Land_LampDecor_off_F | Lamp (Decorative) [off]
//    Land_LampHalogen_F | Lamp (Halogen) [on]
//    Land_LampHalogen_off_F | Lamp (Halogen) [off]
//    Land_LampHarbour_F | Lamp (Harbor) [on]
//    Land_LampHarbour_off_F | Lamp (Harbor) [off]
//    Land_LampIndustrial_01_F | Industrial Lamp (Old) [on]
//    Land_LampIndustrial_01_off_F | Industrial Lamp (Old) [off]
//    Land_LampIndustrial_02_F | Railway Yard Lamp [on]
//    Land_LampIndustrial_02_off_F | Railway Yard Lamp [off]
//    Land_LampShabby_F | Lamp (Shabby) [on]
//    Land_LampShabby_off_F | Lamp (Shabby) [off]
//    Land_LampSolar_F | Lamp (Solar) [on]
//    Land_LampSolar_off_F | Lamp (Solar) [off]
//    Land_LampStadium_F | Lamp (Stadium) [off]
//    Land_LampStreet_02_amplion_F | Street Lamp (Speaker) [on]
//    Land_LampStreet_02_amplion_off_F | Street Lamp (Speaker) [off]
//    Land_LampStreet_02_double_F | Street Lamp (Double) [on]
//    Land_LampStreet_02_double_off_F | Street Lamp (Double) [off]
//    Land_LampStreet_02_F | Street Lamp [on]
//    Land_LampStreet_02_off_F | Street Lamp [off]
//    Land_LampStreet_02_triple_F | Street Lamp (Triple) [on]
//    Land_LampStreet_02_triple_off_F | Street Lamp (Triple) [off]
//    Land_LampStreet_F | Street Lamp [on]
//    Land_LampStreet_off_F | Street Lamp [off]
//    Land_LampStreet_small_F | Street Lamp (Small) [on]
//    Land_LampStreet_small_off_F | Street Lamp (Small) [off]
//    Land_PortableLight_02_double_black_F | Rugged Portable Lamp (Double, Black)
//    Land_PortableLight_02_double_olive_F | Rugged Portable Lamp (Double, Olive)
//    Land_PortableLight_02_double_sand_F | Rugged Portable Lamp (Double, Sand)
//    Land_PortableLight_02_double_yellow_F | Rugged Portable Lamp (Double, Yellow)
//    Land_PortableLight_02_folded_black_F | Rugged Portable Lamp (Folded, Black)
//    Land_PortableLight_02_folded_olive_F | Rugged Portable Lamp (Folded, Olive)
//    Land_PortableLight_02_folded_sand_F | Rugged Portable Lamp (Folded, Sand)
//    Land_PortableLight_02_folded_yellow_F | Rugged Portable Lamp (Folded, Yellow)
//    Land_PortableLight_02_quad_black_F | Rugged Portable Lamp (Quad, Black)
//    Land_PortableLight_02_quad_olive_F | Rugged Portable Lamp (Quad, Olive)
//    Land_PortableLight_02_quad_sand_F | Rugged Portable Lamp (Quad, Sand)
//    Land_PortableLight_02_quad_yellow_F | Rugged Portable Lamp (Quad, Yellow)
//    Land_PortableLight_02_single_black_F | Rugged Portable Lamp (Single, Black)
//    Land_PortableLight_02_single_folded_black_F | Rugged Portable Lamp (Single, Folded, Black)
//    Land_PortableLight_02_single_folded_olive_F | Rugged Portable Lamp (Single, Folded, Olive)
//    Land_PortableLight_02_single_folded_sand_F | Rugged Portable Lamp (Single, Folded, Sand)
//    Land_PortableLight_02_single_folded_yellow_F | Rugged Portable Lamp (Single, Folded, Yellow)
//    Land_PortableLight_02_single_olive_F | Rugged Portable Lamp (Single, Olive)
//    Land_PortableLight_02_single_sand_F | Rugged Portable Lamp (Single, Sand)
//    Land_PortableLight_02_single_yellow_F | Rugged Portable Lamp (Single, Yellow)
//    Reflector_Cone_01_blue_F | Light Cone (Blue)
//    Reflector_Cone_01_green_F | Light Cone (Green)
//    Reflector_Cone_01_Long_blue_F | Light Cone (Long, Blue)
//    Reflector_Cone_01_Long_green_F | Light Cone (Long, Green)
//    Reflector_Cone_01_Long_orange_F | Light Cone (Long, Orange)
//    Reflector_Cone_01_Long_red_F | Light Cone (Long, Red)
//    Reflector_Cone_01_Long_white_F | Light Cone (Long, White)
//    Reflector_Cone_01_narrow_blue_F | Light Cone (Narrow, Blue)
//    Reflector_Cone_01_narrow_green_F | Light Cone (Narrow, Green)
//    Reflector_Cone_01_narrow_orange_F | Light Cone (Narrow, Orange)
//    Reflector_Cone_01_narrow_red_F | Light Cone (Narrow, Red)
//    Reflector_Cone_01_narrow_white_F | Light Cone (Narrow, White)
//    Reflector_Cone_01_orange_F | Light Cone (Orange)
//    Reflector_Cone_01_red_F | Light Cone (Red)
//    Reflector_Cone_01_white_F | Light Cone (White)
//    Reflector_Cone_01_wide_blue_F | Light Cone (Wide, Blue)
//    Reflector_Cone_01_wide_green_F | Light Cone (Wide, Green)
//    Reflector_Cone_01_wide_orange_F | Light Cone (Wide, Orange)
//    Reflector_Cone_01_wide_red_F | Light Cone (Wide, Red)
//    Reflector_Cone_01_wide_white_F | Light Cone (Wide, White)
//
// -- Market (15) --
//    Land_Basket_F | Basket
//    Land_Cages_F | Cages
//    Land_CratesPlastic_F | Crates (Plastic)
//    Land_CratesShabby_F | Crates (Shabby)
//    Land_CratesWooden_F | Crates (Wooden)
//    Land_MarketShelter_F | Market Shelter
//    Land_PalletTrolley_01_khaki_F | Pallet Trolley (Khaki)
//    Land_PalletTrolley_01_yellow_F | Pallet Trolley (Yellow)
//    Land_Sack_F | Sack
//    Land_Sacks_goods_F | Sacks (Full)
//    Land_Sacks_heap_F | Sacks (Heap)
//    Land_saddle_lxws | Saddle
//    Land_StallWater_F | Stall (Water)
//    Land_Wicker_basket_EP1_lxWS | Wicker Basket
//    Land_WoodenCart_F | Cart (Wooden)
//
// -- Military (51) --
//    acre_oe_303 | ACRE OE-303 Antenna
//    ContainmentArea_01_black_F | Spill Bund (Large, Black)
//    ContainmentArea_01_forest_F | Spill Bund (Large, Olive)
//    ContainmentArea_01_sand_F | Spill Bund (Large, Sand)
//    ContainmentArea_02_black_F | Spill Bund (Medium, Black)
//    ContainmentArea_02_forest_F | Spill Bund (Medium, Olive)
//    ContainmentArea_02_sand_F | Spill Bund (Medium, Sand)
//    ContainmentArea_03_black_F | Spill Bund (Small, Black)
//    ContainmentArea_03_yellow_F | Spill Bund (Small, Yellow)
//    GunPod01_Static_black_RF | Weapon Pod GAU (Black)
//    GunPod01_Static_gray_RF | Weapon Pod GAU (Grey)
//    GunPod01_Static_olive_RF | Weapon Pod GAU (Olive)
//    GunPod01_Static_sand_RF | Weapon Pod GAU (Sand)
//    GunPod02_Static_black_RF | Weapon Pod AC (Black)
//    GunPod02_Static_gray_RF | Weapon Pod AC (Grey)
//    GunPod02_Static_olive_RF | Weapon Pod AC (Olive)
//    GunPod02_Static_sand_RF | Weapon Pod AC (Sand)
//    Land_DataTerminal_01_F | Data Terminal
//    Land_Device_assembled_F | Device (Assembled)
//    Land_Device_disassembled_F | Device (Disassembled)
//    Land_Device_slingloadable_F | Device (Sling Loadable)
//    Land_EF_Sidearm_Prop | AGM-122M Sidearm
//    Land_EF_Titan_NLOS_Missile | Titan NLOS Missile
//    Land_EF_Titan_NLOS_Missile_Packed | Titan NLOS Missile (Packed)
//    Land_EF_Titan_NLOS_Pod_Double | Titan NLOS Missile Pod (2x)
//    Land_EF_Titan_NLOS_Pod_Single | Titan NLOS Missile Pod
//    Land_MainRotorBlade_RF | Rotor Blade
//    Land_Pallet_MilBoxes_F | Pallet (Military Boxes)
//    Land_PaperBox_closed_F | Box (Closed)
//    Land_PaperBox_open_empty_F | Box (Open, Empty)
//    Land_PaperBox_open_full_F | Box (Open, Full)
//    Land_PressureWasher_01_F | Pressure Washer
//    Land_Pylons_Left_RF | Helicopter Pylon Mount
//    Land_Scrap_MRAP_01_F | Decommissioned Hunter
//    Land_ScrapHeap_1_F | Vehicle Parts
//    Land_ScrapHeap_2_F | Vehicle Scrap
//    MissilePod01_Static_black_RF | Weapon Pod Rockets (Black)
//    MissilePod01_Static_gray_RF | Weapon Pod Rockets (Grey)
//    MissilePod01_Static_olive_RF | Weapon Pod Rockets (Olive)
//    MissilePod01_Static_sand_RF | Weapon Pod Rockets (Sand)
//    MissilePod02_Static_black_RF | Weapon Pod Tratnyr (Black)
//    MissilePod02_Static_blue_RF | Weapon Pod Tratnyr (Blue)
//    MissilePod02_Static_gray_RF | Weapon Pod Tratnyr (Grey)
//    MissilePod02_Static_olive_RF | Weapon Pod Tratnyr (Olive)
//    StorageBladder_01_fuel_forest_F | Fuel Bladder (Forest)
//    StorageBladder_01_fuel_sand_F | Fuel Bladder (Sand)
//    StorageBladder_02_water_forest_F | Water Bladder (Forest)
//    StorageBladder_02_water_sand_F | Water Bladder (Sand)
//    WaterPump_01_forest_F | Water Pump (Forest)
//    WaterPump_01_red_RF | Water Pump (Red)
//    WaterPump_01_sand_F | Water Pump (Sand)
//
// -- Modules (278) --
//    ace_laser_testLaser | [DEV] Laser Source (DOWN)
//    ace_map_gestures_moduleGroupSettings | Map Gestures - Group Settings
//    ACE_moduleAmbianceSound | Ambiance Sounds
//    ACE_ModuleFriendlyFire | Friendly Fire Messages
//    ACE_ModuleLSDVehicles | LSD Vehicles
//    ACE_ModuleRallypoint | Rallypoint System
//    ace_slideshow_module | Slideshow
//    ACE_VehicleLock_ModuleSyncedAssign | Vehicle Key Assign
//    acex_fortify_buildLocationModule | Fortify: Limit Build Area
//    acex_fortify_setupModule | Fortify
//    acre_api_basicMissionSetup | Basic Mission Setup
//    acre_api_nameChannels | Name Channels
//    ALiVE_amb_civ_placement | Civilian Placement
//    ALiVE_amb_civ_population | Civilian Population
//    ALiVE_civ_placement | Military Placement (Civ. Obj.)
//    ALiVE_mil_ato | Military Air Component Commander
//    ALiVE_MIL_C2ISTAR | Player Command/Control (C2ISTAR)
//    ALiVE_mil_cqb | Military Close Quarters Battle
//    ALiVE_mil_ied | Military IED Threat
//    ALiVE_mil_logistics | Military Logistics
//    ALiVE_mil_OPCOM | Military AI Commander
//    ALiVE_mil_placement | Military Placement (Mil. Obj.)
//    ALiVE_mil_placement_custom | Military Placement (Cust. Obj.)
//    ALiVE_mil_placement_spe | Military Placement (Garrision Obj.)
//    ALiVE_require | ALiVE (Required)
//    ALiVE_sup_artillery | Player Combat Support (Artillery)
//    ALiVE_sup_cas | Player Combat Support (CAS)
//    ALiVE_sup_combatsupport | Player Combat Support
//    ALiVE_sup_multispawn | Player Multispawn
//    ALiVE_SUP_PLAYER_RESUPPLY | Player Combat Logistics
//    ALiVE_SUP_TRANSPORT | Player Combat Support (Transport)
//    ALiVE_sys_aiskill | Military AI Skill
//    ALiVE_sys_data | ALiVE Data
//    ALiVE_sys_indexer | Map Indexer
//    ALiVE_SYS_LOGISTICSDISABLE | Player Logistics (Disable)
//    ALiVE_sys_orbatcreator | ALiVE ORBAT Creator
//    ALiVE_SYS_playeroptions | ALiVE Player Options
//    ALiVE_sys_profile | ALiVE Virtual AI System
//    ALiVE_sys_tour | ALiVE Tour
//    ALiVE_sys_weather | Ambient Dynamic Weather
//    Camera_F | Camera
//    CBA_main_require | Require CBA
//    CBA_ModuleAttack | Attack
//    CBA_ModuleDefend | Defend
//    CBA_ModulePatrol | Patrol
//    ControlPoint_F | Rich Curve Key Control Point
//    Curve_F | Rich Curve
//    DDT_InfoShare | Infoshare
//    DDT_Options | Options
//    EF_ModuleCradle | Combat Boat Cradle Teleporter
//    EF_ModuleNLOS | Support Provider: Cruise Missile
//    ghost_boc_ModuleAdd | Add Chestpack
//    ghost_boc_ModuleOnChest | Backpack on Chest
//    ghost_moduleAiHunter | AI Hunter
//    ghost_moduleAirDefence | Ghost - Air Defence (temporary)
//    ghost_moduleAiSpawner | AI Spawner
//    ghost_moduleAmbientKamikaze | Ghost - Ambient Kamikaze Drones
//    ghost_moduleAmbientShelling | Ghost - Ambient Shelling
//    ghost_moduleAntiShip | Anti-Ship Battery (Burevestnik)
//    ghost_moduleBoarding | Ghost - Boarding Point
//    ghost_moduleCAS | Ghost - CAS Drone
//    ghost_moduleHealArea | Heal Area
//    ghost_moduleIADS | Ghost - IADS / EMCON
//    ghost_moduleJamming | Ghost - Jamming
//    ghost_moduleLeaders | Ghost - Leader Chain
//    ghost_moduleQRF | Ghost - QRF
//    ghost_moduleReaction | Ghost - Enemy Reaction
//    ghost_modulesafestart | Safe Start Disabler
//    ghost_moduleTimedRepair | Timed Repair
//    ghost_moduleUAS | Ghost - Enemy Drones
//    HighCommand | High Command - Commander
//    HighCommandSubordinate | High Command - Subordinate
//    JCA_ModuleHandFlare_F | Hand Flare
//    JCA_ModuleSignalFlare_F | Signal Flare
//    Key_F | Rich Curve Key
//    MartaManager | Military Symbols
//    Module_WildFire_RF | Wildfire
//    ModuleAI_F | Set AI Mode
//    ModuleAlchemist_lxWS | Alchemist Magic
//    ModuleAmmo_F | Set Ammo
//    ModuleAnimals_F | Animals
//    ModuleBleedTickets_F | Bleed Tickets
//    ModuleCAS_F | Close Air Support (CAS)
//    ModuleChat_F | Radio Chat
//    ModuleChemlight_F | Chem light
//    ModuleCivilianPresence_F | Civilian Presence
//    ModuleCivilianPresenceSafeSpot_F | Civilian Presence Position
//    ModuleCivilianPresenceUnit_F | Civilian Presence Spawnpoint
//    ModuleCombatGetIn | Combat Get In
//    ModuleCombatPatrol_Init_F | Combat Patrol Init
//    ModuleCombatPatrol_LocationAdd_F | Combat Patrol Location Add
//    ModuleCombatPatrol_LocationAzimuthBlacklist_F | Combat Patrol Azimuth Blacklist
//    ModuleCombatPatrol_LocationMove_F | Combat Patrol Location Reposition
//    ModuleCombatPatrol_LocationRemove_F | Combat Patrol Location Remove
//    ModuleCountdown_F | Countdown
//    ModuleCoverMap_F | Cover Map
//    ModuleCreateDiaryRecord_F | Create Diary Record
//    ModuleCurator_F | Game Master
//    ModuleCuratorAddAddons_F | Manage Addons
//    ModuleCuratorAddCameraArea_F | Add Camera Area
//    ModuleCuratorAddEditableObjects | Add Editable Objects
//    ModuleCuratorAddEditingArea_F | Add Editing Area
//    ModuleCuratorAddEditingAreaPlayers_F | Restrict Editing Around Players
//    ModuleCuratorAddIcon_F | Add Icon
//    ModuleCuratorAddPoints_F | Manage Resources
//    ModuleCuratorSetAttributesGroup_F | Set Attributes - Groups
//    ModuleCuratorSetAttributesMarker_F | Set Attributes - Markers
//    ModuleCuratorSetAttributesObject_F | Set Attributes - Objects
//    ModuleCuratorSetAttributesPlayer_F | Set Attributes - Players
//    ModuleCuratorSetAttributesWaypoint_F | Set Attributes - Waypoints
//    ModuleCuratorSetCamera_F | Set Camera Position
//    ModuleCuratorSetCoefs_F | Set Editing Costs
//    ModuleCuratorSetCosts_F | Set Costs - Soldiers & Vehicles
//    ModuleCuratorSetDefaultCosts_F | Set Costs (Default)
//    ModuleCuratorSetEditingAreaType_F | Set Editing Area Type
//    ModuleCuratorSetModuleCosts_F | Set Costs - Modules
//    ModuleCuratorSetObjectCosts_F | Set Costs - Objects
//    ModuleCuratorSetSideCosts_F | Set Costs (Side)
//    ModuleCuratorUnlockArea_F | Unlock Area
//    ModuleCuratorUnlockObject_F | Unlock Object
//    ModuleDamage_F | Set Vehicle Damage
//    ModuleDate_F | Date
//    ModuleDoorOpen_F | Open / Close Doors
//    ModuleEditTerrainObject_F | Edit Terrain Object
//    ModuleEffectsBubbles_F | Bubbles
//    ModuleEffectsDesert_lxWS | Desert
//    ModuleEffectsFire_F | Fire
//    ModuleEffectsFlies_lxWS | Flies
//    ModuleEffectsPlankton_F | Plankton
//    ModuleEffectsShells_F | Cartridges
//    ModuleEffectsSmoke_F | Smoke
//    ModuleEndMission_F | End Scenario
//    ModuleFiringDrill_F | Firing Drill
//    ModuleFlare_F | Flare
//    ModuleFriendlyFire_F | Friendly Fire
//    ModuleFuel_F | Set Vehicle Fuel
//    ModuleGenericRadio_F | Generic radio message
//    ModuleGroupID | Set Callsign
//    ModuleHealth_F | Set Character Damage
//    ModuleHideTerrainObjects_F | Hide Terrain Objects
//    ModuleHitMarker_RF | Hit Indicator
//    ModuleHQ_F | Headquarters Entity
//    ModuleHvtEndGameObjective_F | End Game - End Game Objective
//    ModuleHvtObjectivesInstance_F | EndGame Objectives Instance
//    ModuleHvtSimpleObjective_F | End Game Simple Objective
//    ModuleHvtStartGameObjective_F | End Game Start Game Objective
//    ModuleIRGrenade_F | IR Grenade
//    ModuleLightning_F | Zeus Lightning Bolt
//    ModuleLiveFeedEffects_F | Live Feed - Effects
//    ModuleLiveFeedInit_F | Live Feed - Init
//    ModuleLiveFeedSetSource_F | Live Feed - Set Source
//    ModuleLiveFeedSetTarget_F | Live Feed - Set Target
//    ModuleLiveFeedTerminate_F | Live Feed - Terminate
//    ModuleMissionName_F | Scenario Name
//    ModuleMode_F | Set Mode
//    ModuleMPTypeDefense_F | Defend
//    ModuleMPTypeGameMaster_F | Game Master
//    ModuleMPTypeGroundSupport_F | Support
//    ModuleMPTypeGroundSupportBase_F | Support: Base
//    ModuleMPTypeSectorControl_F | Sector Control
//    ModuleMPTypeSeize_F | Seize
//    ModuleObjectiveRaceCP_F | Race - Check Point
//    ModuleObjectiveRaceFinish_F | Race - Finish
//    ModuleObjectiveRaceStart_F | Race - Lineup
//    ModuleOmActionQueue_F | Oldman Action Queue
//    ModuleOMAwareness_F | Old Man Awareness
//    ModuleOmDepot_F | Old Man Drop-off Point
//    ModuleOMEconomy | Old Man Economy
//    ModuleOMFastTravel_F | Old Man Fast Travel
//    ModuleOMFastTravelPos_F | Old Man Fast Travel Position
//    ModuleOmInit_F | Old Man Init.
//    ModuleOmInitScript_F | Old Man Init. Script
//    ModuleOmIntel_F | Old Man Intel
//    ModuleOmMarket_F | Old Man Market
//    ModuleOmMosquitos_F | Old Man Mosquitoes
//    ModuleOmNight_F | Old Man Night
//    ModuleOmProtectedVehicle_F | Old Man Protected Vehicle
//    ModuleOmQRF_F | Old Man QRF
//    ModuleOmQRF_F_First | Old Man QRF (1)
//    ModuleOmQRF_F_Second | Old Man QRF (2)
//    ModuleOmQRF_F_Third | Old Man QRF (3)
//    ModuleOmQuest_Defend_F | Old Man Quest Defend
//    ModuleOmQuest_DeliverPoint_F | Old Man Quest Fetch
//    ModuleOmQuest_DestroyObject_F | Old Man Destroy Quest Object
//    ModuleOmQuest_DestroyObjects_F | Old Man Destroy Quest Objects
//    ModuleOmQuest_Get_F | Old Man Quest Get
//    ModuleOmQuest_HoldAction_F | Old Man Hold Action Quest
//    ModuleOmQuest_HostageRescue_F | Old Man Quest Hostage Rescue
//    ModuleOmQuest_Location_F | Old Man Quest Location
//    ModuleOmQuest_Support_F | Old Man Quest Support
//    ModuleOmQuest_Support_StartingPos_F | Old Man Quest Support StartPos
//    ModuleOmQuest_SupportUnits_F | Old Man Support Quest Units
//    ModuleOmQuest_Transport_F | Old Man Quest Transport
//    ModuleOmQuest_TransportPerson_F | Old Man Quest Transport Person
//    ModuleOMRadio_F | Old Man Radio
//    ModuleOmRandomConversation_F | Old Man Random Conversations
//    ModuleOmRelationship_F | Old Man Relationship
//    ModuleOMReputation_F | Old Man Reputation
//    ModuleOmRestPoint_F | Old Man Rest Point
//    ModuleOmRestrictedArea_F | Old Man Restricted Area
//    ModuleOmSector_F | Old Man Sector
//    ModuleOmSectorCheckpoint_F | Old Man Checkpoint
//    ModuleOMSmartMarkers_F | Old Man Smart Markers
//    ModuleOMSyndikatAgent | Old Man Insurgent Agent
//    ModuleOMSyndikatCampPos | Old Man Insurgent Camp Position
//    ModuleOMSyndikatTeam | Old Man Insurgent Team
//    ModuleOmTracked_F | Old Man Tracked Device
//    ModuleOrdnance_F | Ordnance
//    ModulePatrolArea_F | Old Man Patrol Area
//    ModulePositioning_F | Set Position / Rotation
//    ModulePoster_F | Posters
//    ModulePostprocess_F | Post-Process
//    ModuleRadio_F | Play Radio Message
//    ModuleRadioChannelCreate_F | Create Radio Channel
//    ModuleRank_F | Set Rank
//    ModuleRating_F | Add Rating / Score
//    ModuleRespawnPosition_F | Respawn Position
//    ModuleRespawnTickets_F | Respawn Tickets
//    ModuleRespawnVehicle_F | Vehicle Respawn
//    ModuleSaveGame_F | Save Game
//    ModuleSector_F | Sector
//    ModuleSectorDummy_F | Sector (Dummy)
//    ModuleShowHide_F | Show / Hide
//    ModuleSimulationManager_F | Simulation Manager
//    ModuleSkill_F | Set Skill
//    ModuleSkiptime_F | Skip time
//    ModuleSkirmishTrigger_F | Skirmish: Trigger
//    ModuleSlingload_F | Sling Load
//    ModuleSmoke_F | Smoke Grenade
//    ModuleSpawnAI_F | Spawn AI
//    ModuleSpawnAIOptions_F | Spawn AI: Options
//    ModuleSpawnAIPoint_F | Spawn AI: Spawnpoint
//    ModuleSpawnAISectorTactic_F | Spawn AI: Sector Tactic
//    ModuleStrategicMapImage_F | Custom Image
//    ModuleStrategicMapInit_F | Strategic Map
//    ModuleStrategicMapMission_F | Mission
//    ModuleStrategicMapModuleOpen_F | Open Strategic Map
//    ModuleStrategicMapORBAT_F | ORBAT Group
//    ModuleTaskCreate_F | Create Task
//    ModuleTaskSetDescription_F | Set Task Description
//    ModuleTaskSetDestination_F | Set Task Destination
//    ModuleTaskSetState_F | Set Task State
//    ModuleTimeMultiplier_F | Time Acceleration
//    ModuleTimeTrial_F | Time Trial
//    ModuleTracers_F | Tracers
//    ModuleTrident_F | Trident
//    ModuleVanguardFob_F | Vanguard: Starting Area
//    ModuleVanguardObjective_F | Vanguard: Objective Area
//    ModuleVanguardScorePersistence_F | Vanguard: Score Persistence
//    ModuleVolume_F | Volume
//    ModuleWeather_F | Weather
//    ModuleWLBase_F | Warlords Base
//    ModuleWLInit_F | Warlords Init
//    ModuleWLResponse_F | Warlords Response Team
//    ModuleWLSector_F | Warlords Sector
//    ModuleWLSpawnPoint_F | Warlords Spawn Point
//    ModuleZoneProtection_F | Zone Protection
//    ModuleZoneRestriction_F | Zone Restriction
//    Site_Ambient | Animals
//    Site_BLUFOR | BLUFOR Site
//    Site_Camels_lxWS | Camels
//    Site_Empty | Empty Site
//    Site_Independent | Independents Site
//    Site_Minefield | Minefield
//    Site_OPFOR | OPFOR Site
//    Site_Patrol | Random Patrol
//    SupportProvider_Artillery | Support Provider: Artillery
//    SupportProvider_CAS_Bombing | Support Provider: CAS (Bombing Run)
//    SupportProvider_CAS_Heli | Support Provider: CAS (Helicopter Attack)
//    SupportProvider_Drop | Support Provider: Supply Drop
//    SupportProvider_Transport | Support Provider: Helicopter Transport
//    SupportProvider_Virtual_Artillery | Support Provider: Artillery (Virtual)
//    SupportProvider_Virtual_CAS_Bombing | Support Provider: CAS (Bombing Run, Virtual)
//    SupportProvider_Virtual_CAS_Heli | Support Provider: CAS (Helicopter Attack, Virtual)
//    SupportProvider_Virtual_Drop | Support Provider: Supply Drop (Virtual)
//    SupportProvider_Virtual_Transport | Support Provider: Helicopter Transport (Virtual)
//    SupportRequester | Support Requester
//    Timeline_F | Timeline
//
// -- Objects (367) --
//    ACE_ConcertinaWireCoil | Concertina Wire Coil
//    ace_csw_kordTripod | 6P57 Tripod
//    ace_csw_kordTripodLow | 6P57 Tripod
//    ace_csw_m220Tripod | M220 Tripod
//    ace_csw_m3Tripod | M3 Tripod
//    ace_csw_m3TripodLow | M3 Tripod
//    ace_csw_mortarBaseplate | Mortar Baseplate
//    ace_csw_sag30Tripod | SAG-30 Tripod
//    ace_csw_spg9Tripod | SPG-9 Tripod
//    ACE_TripodObject | SSWT Kit
//    acex_intelitems_document | Document
//    acex_intelitems_notepad | Notepad
//    acex_intelitems_photo | Photo
//    ALIVE_DemoCharge_Remote_Ammo | 
//    ALIVE_IEDLandBig_Remote_Ammo | 
//    ALIVE_IEDLandSmall_Remote_Ammo | 
//    ALIVE_IEDUrbanBig_Remote_Ammo | 
//    ALIVE_IEDUrbanSmall_Remote_Ammo | 
//    ALIVE_SatchelCharge_Remote_Ammo | 
//    AreaMarker_01_F | Area Marker
//    babe_helper | helper
//    Canvas_01_F | Canvas (Medium)
//    Canvas_01_Landscape_F | Canvas (Medium, Landscape)
//    Canvas_01_Large_F | Canvas (Large)
//    Canvas_01_Small_F | Canvas (Small)
//    Canvas_01_Square_F | Canvas (Medium, Square)
//    Crater | Crater
//    CraterLong | Airplane Crater
//    CraterLong_02_F | Airplane Crater (v2)
//    CraterLong_02_small_F | Airplane Crater (v2, Small)
//    CraterLong_small | Airplane Crater (Small)
//    DrainageDeck_01_F | Drainage Deck
//    GalleryDioramaBase_01_Dirt_F | Diorama Base (Dirt)
//    GalleryDioramaBase_01_Grass_F | Diorama Base (Grass)
//    GalleryDioramaBase_01_Sand_F | Diorama Base (Sand)
//    GalleryDioramaDisplay_01_F | Diorama Display (UAV)
//    GalleryDioramaDisplay_02_F | Diorama Display (Doggo)
//    GalleryFrame_01_large_portrait_F | Gallery Frame (Large, Portrait)
//    GalleryFrame_01_large_v1_F | Gallery Frame (Large, v1)
//    GalleryFrame_01_large_v2_F | Gallery Frame (Large, v2)
//    GalleryFrame_01_large_v3_F | Gallery Frame (Large, v3)
//    GalleryFrame_02_F | Gallery Frame (Medium)
//    GalleryFrame_02_large_rectangle_F | Gallery Frame (Large, Rectangle)
//    GalleryFrame_02_square_F | Gallery Frame (Medium, Square)
//    GalleryLabel_01_F | Gallery Label
//    Land_Bare_boulder_01_F | Boulder (Bare, v1)
//    Land_Bare_boulder_02_F | Boulder (Bare, v2)
//    Land_Bare_boulder_03_F | Boulder (Bare, v3)
//    Land_Bare_boulder_04_F | Boulder (Bare, v4)
//    Land_Bare_boulder_05_F | Boulder (Bare, v5)
//    Land_BluntRock_apart | Cluster of Big Stones (Brown)
//    Land_BluntRock_apart_lxWS | Cluster of Big Stones (Sand)
//    Land_BluntRock_monolith | Flat Rock (Brown)
//    Land_BluntRock_monolith_lxWS | Flat Rock (Sand)
//    Land_BluntRock_spike | Rock (Brown)
//    Land_BluntRock_spike_lxWS | Rock (Sand)
//    Land_BluntRock_wallH | Long Rock (Brown)
//    Land_BluntRock_wallH_lxWS | Long Rock (Sand)
//    Land_BluntRock_wallV | Tall Rock (Brown)
//    Land_BluntRock_wallV_lxWS | Tall Rock (Sand)
//    Land_BluntStone_01 | Medium Stone (Brown)
//    Land_BluntStone_01_lxWS | Medium Stone (Sand)
//    Land_BluntStone_02 | Big Stone (Brown)
//    Land_BluntStone_02_lxWS | Big Stone (Sand)
//    Land_BluntStone_03 | Small Stone (Brown)
//    Land_BluntStone_03_lxWS | Small Stone (Sand)
//    Land_BluntStones_erosion | Cluster of Small Stones (Brown)
//    Land_BluntStones_erosion_lxWS | Cluster of Small Stones (Sand)
//    Land_Cliff_boulder_F | Small Boulders (Mossy)
//    Land_Cliff_peak_F | Large Boulders (Mossy)
//    Land_Cliff_stone_big_F | Medium Stone (Mossy)
//    Land_Cliff_stone_medium_F | Small Stone (Mossy)
//    Land_Cliff_stone_small_F | Tiny Stone (Mossy)
//    Land_Cliff_stoneCluster_F | Cluster of Small Stones (Mossy)
//    Land_Cliff_surfaceMine_F | Long Rock (Surface Mine)
//    Land_Cliff_wall_long_F | Long Rock (Mossy)
//    Land_Cliff_wall_round_F | Rock (Mossy)
//    Land_Cliff_wall_tall_F | Tall Rock (Mossy)
//    Land_FoldingTable_F | Folding Table
//    Land_FoldingTable_white_F | Folding Table (White)
//    Land_Fridge_02_F | Refrigerator (Tall)
//    Land_Heli_EC_01_wreck_RF | Cougar Wreck
//    Land_Lavaboulder_01_F | Lava Formation (Long)
//    Land_Lavaboulder_02_F | Lava Formation
//    Land_Lavaboulder_03_F | Lava Formation (Round)
//    Land_Lavaboulder_04_F | Lava Formation (Short)
//    Land_LavaStone_big_F | Lava Stone (Medium)
//    Land_LavaStone_small_F | Lava Stone (Small)
//    Land_LavaStoneCluster_large_F | Lava Stones Cluster (Large)
//    Land_LavaStoneCluster_small_F | Lava Stones Cluster (Small)
//    Land_Limestone_01_01_F | Medium Stone (Limestone)
//    Land_Limestone_01_02_F | Big Stone (Limestone)
//    Land_Limestone_01_03_F | Small Stone (Limestone)
//    Land_Limestone_01_apart_F | Cluster of Big Stones (Limestone)
//    Land_Limestone_01_erosion_F | Cluster of Small Stones (Limestone)
//    Land_Limestone_01_monolith_F | Flat Rock (Limestone)
//    Land_Limestone_01_spike_F | Rock (Limestone)
//    Land_Limestone_01_wallH_F | Long Rock (Limestone)
//    Land_Limestone_01_wallV_F | Tall Rock (Limestone)
//    Land_Photoframe_02_F | Photo Frame (Portrait)
//    Land_R_rock_general1 | Medium Boulders (Bare, v1)
//    Land_R_rock_general2 | Medium Boulders (Bare, v2)
//    Land_R_rock_general3 | Medium Boulders (Bare, v3)
//    Land_RM_boulder1 | Boulder (Mossy, v1)
//    Land_RM_boulder2 | Boulder (Mossy, v2)
//    Land_RM_boulder3 | Boulder (Mossy, v3)
//    Land_RM_boulder4 | Boulder (Mossy, v4)
//    Land_RM_boulder5 | Boulder (Mossy, v5)
//    Land_RoadCone_01_F | Road Cone (Brown)
//    Land_SharpRock_apart | Cluster of Big Stones (Light Grey)
//    Land_SharpRock_monolith | Flat Rock (Light Grey)
//    Land_SharpRock_spike | Rock (Light Grey)
//    Land_SharpRock_wallH | Long Rock (Light Grey)
//    Land_SharpRock_wallV | Tall Rock (Light Grey)
//    Land_SharpStone_01 | Medium Stone (Light Grey)
//    Land_SharpStone_02 | Big Stone (Light Grey)
//    Land_SharpStone_03 | Small Stone (Light Grey)
//    Land_SharpStones_erosion | Cluster of Small Stones (Light Grey)
//    Land_Small_Stone_01_F | Large Stone (Light Grey)
//    Land_Small_Stone_02_F | Tiny Stone (Light Grey)
//    Land_SmallTable_F | Small Table
//    Land_Stove_01_F | Electric Stove
//    Land_TransferSwitch_01_F | Transfer Switch
//    Land_VergeRock_01_F | Verge Stone
//    Land_W_sharpRock_apart | Cluster of Big Stones (Dark Grey)
//    Land_W_sharpRock_monolith | Flat Rock (Dark Grey)
//    Land_W_sharpRock_spike | Rock (Dark Grey)
//    Land_W_sharpRock_wallH | Long Rock (Dark Grey)
//    Land_W_sharpRock_wallV | Tall Rock (Dark Grey)
//    Land_W_sharpStone_01 | Medium Stone (Dark Grey)
//    Land_W_sharpStone_02 | Big Stone (Dark Grey)
//    Land_W_sharpStone_03 | Small Stone (Dark Grey)
//    Land_W_sharpStones_erosion | Cluster of Small Stones (Dark Grey)
//    Land_WallSign_01_chalkboard_F | Wall Sign (Chalkboard)
//    Land_WallSign_01_F | Wall Sign
//    Land_WoodenCounter_01_F | Wooden Counter
//    Land_WoodenCrate_01_F | Wooden Crate
//    Land_WoodenCrate_01_stack_x3_F | Wooden Crates (3)
//    Land_WoodenCrate_01_stack_x5_F | Wooden Crates (5)
//    Land_WoodenWindBreak_01_F | Wooden Windbreak
//    Lantern_01_black_F | Lantern (Black)
//    Lantern_01_blue_F | Lantern (Blue)
//    Lantern_01_green_F | Lantern (Green)
//    Lantern_01_red_F | Lantern (Red)
//    LayFlatHose_01_Corner_F | Lay-Flat Hose (Corner)
//    LayFlatHose_01_CurveLong_F | Lay-Flat Hose (Curve, Long)
//    LayFlatHose_01_CurveShort_F | Lay-Flat Hose (Curve, Short)
//    LayFlatHose_01_CurveShort_RF | Lay-Flat Hose (Bend, Short)
//    LayFlatHose_01_Roll_F | Lay-Flat Hose (Roll)
//    LayFlatHose_01_SBend_F | Lay-Flat Hose (S-Bend)
//    LayFlatHose_01_Step_F | Lay-Flat Hose (Step)
//    LayFlatHose_01_StraightLong_F | Lay-Flat Hose (Straight, Long)
//    LayFlatHose_01_StraightShort_F | Lay-Flat Hose (Straight, Short)
//    LiquidSpraySystem_01_Extended_F | Coiled Hose Spray (Extended)
//    LiquidSpraySystem_01_F | Coiled Hose Spray (Retracted)
//    Logic | Game Logic
//    MemorialWreath_01_Altis_F | Memorial Wreath (Altis)
//    MemorialWreath_01_F | Memorial Wreath
//    MemorialWreath_01_Livonia_F | Memorial Wreath (Livonia)
//    MemorialWreath_01_Tanoa_F | Memorial Wreath (Horizon Islands)
//    MemorialWreath_01_UK_F | Memorial Wreath (UK)
//    MemorialWreath_01_US_F | Memorial Wreath (US)
//    PowerCable_01_Corner_F | Power Cable (Corner)
//    PowerCable_01_CurveLong_F | Power Cable (Curve, Long)
//    PowerCable_01_CurveShort_F | Power Cable (Curve, Short)
//    PowerCable_01_Roll_F | Power Cable (Roll)
//    PowerCable_01_SBend_F | Power Cable (S-Bend)
//    PowerCable_01_Step_F | Power Cable (Step)
//    PowerCable_01_StraightLong_F | Power Cable (Straight, Long)
//    PowerCable_01_StraightShort_F | Power Cable (Straight, Short)
//    PressureHose_01_Corner_F | Pressure Hose (Corner)
//    PressureHose_01_CurveLong_F | Pressure Hose (Curve, Long)
//    PressureHose_01_CurveShort_F | Pressure Hose (Curve, Short)
//    PressureHose_01_Roll_F | Pressure Hose (Roll)
//    PressureHose_01_SBend_F | Pressure Hose (S-Bend)
//    PressureHose_01_Step_F | Pressure Hose (Step)
//    PressureHose_01_StraightLong_F | Pressure Hose (Straight, Long)
//    PressureHose_01_StraightShort_F | Pressure Hose (Straight, Short)
//    RKSLA3_placableweapon_aa2 | AA-2 AAM
//    RKSLA3_placableweapon_adarter | A-Darter AAM
//    RKSLA3_placableweapon_agm114k | AGM-114K Hellfire
//    RKSLA3_placableweapon_agm114l | AGM-114L Hellfire
//    RKSLA3_placableweapon_agm114p | AGM-114P Hellfire
//    RKSLA3_placableweapon_agm114rx9 | AGM-114RX9 Hellfire
//    RKSLA3_placableweapon_agm119mk3 | AGM-119 Penguin Mk3
//    RKSLA3_placableweapon_agm65e | AGM-65E Maverick E
//    RKSLA3_placableweapon_agm65f | AGM-65F Maverick F
//    RKSLA3_placableweapon_agm88 | AGM-88E HARM
//    RKSLA3_placableweapon_agm88g | AGM-88G AARGM-ER
//    RKSLA3_placableweapon_aim120b | AIM-120B AAM
//    RKSLA3_placableweapon_aim120c | AIM-120C AAM
//    RKSLA3_placableweapon_aim132asraam | AIM-132 ASRAAM
//    RKSLA3_placableweapon_aim7 | AIM-7E AAM
//    RKSLA3_placableweapon_aim9m | AIM-9M AAM
//    RKSLA3_placableweapon_akd10a | AKD-10A
//    RKSLA3_placableweapon_akdrack | AKD-10 Quad helicopter rack
//    RKSLA3_placableweapon_aku470rack | APU-470 rack
//    RKSLA3_placableweapon_alarm | ALARM ARM
//    RKSLA3_placableweapon_alarmrack | ALARM Launch Rail
//    RKSLA3_placableweapon_am39 | AM39 Exocet
//    RKSLA3_placableweapon_apu13mt | APU13mt Rail
//    RKSLA3_placableweapon_apu470 | APU470 Rail
//    RKSLA3_placableweapon_apu50 | APU50 Rail
//    RKSLA3_placableweapon_apu60 | APU60 Rail
//    RKSLA3_placableweapon_apu60_2 | APU60-2 Rail
//    RKSLA3_placableweapon_apu68 | APU68 Rail
//    RKSLA3_placableweapon_apu73 | APU73 Rail
//    RKSLA3_placableweapon_as30 | AS.30
//    RKSLA3_placableweapon_aspide | ASPIDE AAM
//    RKSLA3_placableweapon_bap | BAP100 Area Denial Bomblet
//    RKSLA3_placableweapon_bap_x18 | BAP100 x18 Carrier
//    RKSLA3_placableweapon_bap_x9 | BAP100 x9 Carrier
//    RKSLA3_placableweapon_bgl1000 | BGL-1000 LGB
//    RKSLA3_placableweapon_bgl400 | BGL-400 LGB
//    RKSLA3_placableweapon_bl755 | BL755 CBU
//    RKSLA3_placableweapon_blg66 | BLG-66 Belouga CBU
//    RKSLA3_placableweapon_brimstone_3rack | Brimstone x3 Carrier
//    RKSLA3_placableweapon_brimstone_3rackrear | Brimstone x3 Carrier
//    RKSLA3_placableweapon_brimstone_dm | Brimstone Dual-Mode
//    RKSLA3_placableweapon_brimstone_sm | Brimstone Single-Mode
//    RKSLA3_placableweapon_bru41a | BRU41a
//    RKSLA3_placableweapon_bru42 | BRU42
//    RKSLA3_placableweapon_bru57 | BRU57
//    RKSLA3_placableweapon_bru61 | BRU61
//    RKSLA3_placableweapon_cbls200 | CBLS200
//    RKSLA3_placableweapon_cbu100 | CBU100 CBU
//    RKSLA3_placableweapon_delilah | Delilah
//    RKSLA3_placableweapon_derbyer | Derby-ER AAM
//    RKSLA3_placableweapon_display_bombrack_high | Display Bombrack (High)
//    RKSLA3_placableweapon_display_bombrack_low | Display Bombrack (Low)
//    RKSLA3_placableweapon_display_bombrack_sgl | Display Bombrack (Single)
//    RKSLA3_placableweapon_display_mraam_rack_sgl | Display MRAAM Rack
//    RKSLA3_placableweapon_display_sraam_rack_sgl | Display SRAAM Rack
//    RKSLA3_placableweapon_display_stow_plinth | Display STOW Plinth
//    RKSLA3_placableweapon_display_trollery | Display trolley
//    RKSLA3_placableweapon_displayrack | Display rack
//    RKSLA3_placableweapon_displayrack_125 | Display rack 125%
//    RKSLA3_placableweapon_displayrack_150 | Display rack 150%
//    RKSLA3_placableweapon_displayrack_150wide | Display rack wide 150%
//    RKSLA3_placableweapon_durandal | Durandal Area Denial Weapon
//    RKSLA3_placableweapon_dy90 | DY90 SAM
//    RKSLA3_placableweapon_dy90_box | DY90 Box
//    RKSLA3_placableweapon_fab500m62 | FAB500m62 GP Bomb
//    RKSLA3_placableweapon_fury_longrack | FURY PGW Dual Long Carrier
//    RKSLA3_placableweapon_fury_pgw | Fury PGW
//    RKSLA3_placableweapon_fury_shortrack | FURY PGW Dual short Carrier
//    RKSLA3_placableweapon_gbu10 | GBU-10 2000lb
//    RKSLA3_placableweapon_gbu12 | GBU-12 500lb
//    RKSLA3_placableweapon_gbu16 | GBU-16 1000lb
//    RKSLA3_placableweapon_gbu32 | GBU32 JDAM
//    RKSLA3_placableweapon_gbu54b | GBU54b JDAM
//    RKSLA3_placableweapon_gp19gunpod | GP-19 .50 cal GAU-19 gun pod
//    RKSLA3_placableweapon_griffin_b_dualrack | Griffin B Dual Carrier
//    RKSLA3_placableweapon_griffin_b_tube | Griffin B Tube
//    RKSLA3_placableweapon_harpoonl | AGM-84L Harpoon
//    RKSLA3_placableweapon_hmp250gunpod | HMP250 50cal Gunpod
//    RKSLA3_placableweapon_hmp400gunpod | HMP400 50cal Gunpod
//    RKSLA3_placableweapon_irist | Iris-T AAM
//    RKSLA3_placableweapon_kab500kr | KAB500kr
//    RKSLA3_placableweapon_kab500l | KAB500l
//    RKSLA3_placableweapon_kab500se | KAB500se
//    RKSLA3_placableweapon_kepd350 | Taurus KEPD350
//    RKSLA3_placableweapon_kh25ml | Kh-25ML
//    RKSLA3_placableweapon_kh25mp | KH-25MP ARM
//    RKSLA3_placableweapon_kh29l | Kh-29L
//    RKSLA3_placableweapon_kh31a | Kh-31A
//    RKSLA3_placableweapon_kh31p | KH-31P ARM
//    RKSLA3_placableweapon_kh59me | Kh-59me
//    RKSLA3_placableweapon_kh59mk2 | Kh-59mk2
//    RKSLA3_placableweapon_lau114 | LAU-114 Rail
//    RKSLA3_placableweapon_lau117 | LAU-117 Rail
//    RKSLA3_placableweapon_lau118 | LAU-118 Rail
//    RKSLA3_placableweapon_lau127 | LAU-127 Rail
//    RKSLA3_placableweapon_lau138 | LAU-138 Rail
//    RKSLA3_placableweapon_lau7 | LAU-7 Rail
//    RKSLA3_placableweapon_liteningpod | Litening Advanced Targeting Pod
//    RKSLA3_placableweapon_m299_2 | M299 Dual Rack
//    RKSLA3_placableweapon_m299_4 | M299 Quad Rack
//    RKSLA3_placableweapon_martel | Martel ARM
//    RKSLA3_placableweapon_martel_aj168 | AJ1-68 Martel TV Guided AShm
//    RKSLA3_placableweapon_martlet2 | Martlet LMM
//    RKSLA3_placableweapon_martlet2_rack_x5 | Martlet 5x Carrier
//    RKSLA3_placableweapon_martlet2_tube | Martlet Tube
//    RKSLA3_placableweapon_matra530D | Super 530D AAM
//    RKSLA3_placableweapon_matra550 | Matra R.550 AAM
//    RKSLA3_placableweapon_meteor | METEOR LRAAM
//    RKSLA3_placableweapon_mk81snakeeye | MK-81 Snakeeye
//    RKSLA3_placableweapon_mk82 | MK-82 GP
//    RKSLA3_placableweapon_mk82snakeeye | MK-82 Snakeeye
//    RKSLA3_placableweapon_mk83 | MK-83 GP
//    RKSLA3_placableweapon_mk84 | MK-84 GP
//    RKSLA3_placableweapon_pl10 | PL10 AAM
//    RKSLA3_placableweapon_pl12 | PL12B AAM
//    RKSLA3_placableweapon_popeye | Popeye (AGM-142 Have Nap)
//    RKSLA3_placableweapon_popeyedatlinkpod | AN/ASW-55 datalink pod
//    RKSLA3_placableweapon_practice_14kg | 14kg Practice Bomb
//    RKSLA3_placableweapon_practice_3kg | 3kg Practice Bomb
//    RKSLA3_placableweapon_pw3blu109 | Enhanced Paveway III (BLU109 - 2000lb)
//    RKSLA3_placableweapon_python3 | Python 3 AAM
//    RKSLA3_placableweapon_python4 | Python 4 AAM
//    RKSLA3_placableweapon_python5 | Python 5 AAM
//    RKSLA3_placableweapon_qjk99gunpod | QJK99 12.7mm Gunpod
//    RKSLA3_placableweapon_r60 | R60 AAM
//    RKSLA3_placableweapon_r73 | R73 AAM
//    RKSLA3_placableweapon_r77 | R77 AAM
//    RKSLA3_placableweapon_rbs15 | RBS-15
//    RKSLA3_placableweapon_sampt21 | SAMPT 21 GP Bomb
//    RKSLA3_placableweapon_seaeagle | Sea Eagle
//    RKSLA3_placableweapon_seaskua | Sea Skua
//    RKSLA3_placableweapon_seavenom | Sea Venom
//    RKSLA3_placableweapon_slam_er | AGM-84K SLAM-ER
//    RKSLA3_placableweapon_sniperxrpod | Sniper XR Advanced Targeting Pod
//    RKSLA3_placableweapon_spear3 | Spear 3
//    RKSLA3_placableweapon_spike_nlos_box | Spike NLOS Box
//    RKSLA3_placableweapon_spikeer | Spike ER
//    RKSLA3_placableweapon_spikeer_tube | Spike ER Tube
//    RKSLA3_placableweapon_spikenlos | Spike NLOS
//    RKSLA3_placableweapon_stormshadow | Stormshadow / SCALP-EG
//    RKSLA3_placableweapon_ty90 | TY90 AAM
//    RKSLA3_placableweapon_ty90_4rack | TY90 Carrier
//    RKSLA3_placableweapon_ukgp1000 | UK 1000lb GP Bomb
//    RKSLA3_placableweapon_ukgp1000ret | UK Retarded 1000lb GP Bomb
//    RKSLA3_placableweapon_ukgp500 | UK 500lb GP Bomb
//    RKSLA3_placableweapon_ukgp500ret | UK Retarded 500lb GP Bomb
//    RKSLA3_placableweapon_ukpw2_1000 | UK Paveway II 1000lb
//    RKSLA3_placableweapon_ukpw2_500 | UK Paveway II 500lb
//    RKSLA3_placableweapon_ukpwiv | Paveway IV 500lb
//    RKSLA3_placableweapon_yj91a | YJ-91A
//    RKSLA3_placableweapon_yj91p | YJ-91P ARM
//    rksla3_uav_gdt_sa_wreck | UAV Ground Data Terminal Wreck
//    rksla3_uav_h450_wreck | Hermes 450 Wreck
//    rksla3_uav_wkshelter_sa_wreck | UAV Shelter Wreck
//    RuggedTerminal_01_communications_F | Rugged Communications Terminal
//    RuggedTerminal_01_communications_hub_F | Rugged Communications Hub
//    RuggedTerminal_01_F | Rugged Terminal
//    RuggedTerminal_02_communications_F | Rugged Communications Terminal (Large)
//    SatelliteAntenna_01_Mounted_Black_F | Mounted Satellite Antenna (Black)
//    SatelliteAntenna_01_Mounted_Olive_F | Mounted Satellite Antenna (Olive)
//    SatelliteAntenna_01_Mounted_Sand_F | Mounted Satellite Antenna (Sand)
//    SatelliteAntenna_01_Small_Mounted_Black_F | Mounted Satellite Antenna (Small, Black)
//    SatelliteAntenna_01_Small_Mounted_Olive_F | Mounted Satellite Antenna (Small, Olive)
//    SatelliteAntenna_01_Small_Mounted_Sand_F | Mounted Satellite Antenna (Small, Sand)
//    SpaceshipCapsule_01_debris_F | Space Capsule Wreck (Debris)
//    SpaceshipCapsule_01_F | Space Capsule
//    SpaceshipCapsule_01_wreck_F | Space Capsule Wreck
//    Tarp_01_Large_Black_F | Tarp (Large, Black)
//    Tarp_01_Large_Green_F | Tarp (Large, Green)
//    Tarp_01_Large_Red_F | Tarp (Large, Red)
//    Tarp_01_Large_Yellow_F | Tarp (Large, Yellow)
//    Tarp_01_Small_Black_F | Tarp (Small, Black)
//    Tarp_01_Small_Green_F | Tarp (Small, Green)
//    Tarp_01_Small_Red_F | Tarp (Small, Red)
//    Tarp_01_Small_Yellow_F | Tarp (Small, Yellow)
//    WaterBucket_1000L_Red_RF | Helicopter Bucket (1000L, Red)
//    WaterBucket_1000L_Yellow_RF | Helicopter Bucket (1000L, Yellow)
//    WaterSpill_01_Large_Foam_F | Water Spill (Large, Foam)
//    WaterSpill_01_Large_New_F | Water Spill (Large, New)
//    WaterSpill_01_Large_Old_F | Water Spill (Large, Old)
//    WaterSpill_01_Medium_Foam_F | Water Spill (Medium, Foam)
//    WaterSpill_01_Medium_New_F | Water Spill (Medium, New)
//    WaterSpill_01_Medium_Old_F | Water Spill (Medium, Old)
//    WaterSpill_01_Small_Foam_F | Water Spill (Small, Foam)
//    WaterSpill_01_Small_New_F | Water Spill (Small, New)
//    WaterSpill_01_Small_Old_F | Water Spill (Small, Old)
//    WaterTrail_01_Foam_F | Water Trail (Foam)
//    WaterTrail_01_New_F | Water Trail (New)
//    WaterTrail_01_Old_F | Water Trail (Old)
//
// -- Objects_Airport (21) --
//    Land_AirIntakePlug_01_F | Air Intake Plug (Ghosthawk)
//    Land_AirIntakePlug_02_F | Air Intake Plug (Huron)
//    Land_AirIntakePlug_03_F | Air Intake Plug (Kajman)
//    Land_AirIntakePlug_04_F | Air Intake Plug (Taru)
//    Land_AirIntakePlug_05_F | Air Intake Plug (Hellcat)
//    Land_DieselGroundPowerUnit_01_F | Diesel Ground Power Unit
//    Land_DischargeStick_01_F | Discharge Stick
//    Land_HelicopterWheels_01_assembled_F | Helicopter Wheels (Assembled)
//    Land_HelicopterWheels_01_disassembled_F | Helicopter Wheels (Disassembled)
//    Land_JetEngineStarter_01_F | Jet Engine Air Start Unit
//    Land_MobileLandingPlatform_01_F | Mobile Landing Platform
//    Land_PitotTubeCover_01_F | Pitot Tube Cover
//    Land_PortableHelipadLight_01_F | Portable Helipad Light
//    Land_RotorCoversBag_01_F | Rotor Covers Bag
//    Land_WheelChock_01_F | Wheel Chock
//    PortableHelipadLight_01_blue_F | Portable Helipad Light (Blue)
//    PortableHelipadLight_01_green_F | Portable Helipad Light (Green)
//    PortableHelipadLight_01_red_F | Portable Helipad Light (Red)
//    PortableHelipadLight_01_white_F | Portable Helipad Light (White)
//    PortableHelipadLight_01_yellow_F | Portable Helipad Light (Yellow)
//    Windsock_01_F | Windsock
//
// -- Objects_Sports (37) --
//    KartSteertingWheel_01_black_F | Kart steering wheel (black)
//    KartSteertingWheel_01_blue_F | Kart steering wheel (blue)
//    KartSteertingWheel_01_green_F | Kart steering wheel (green)
//    KartSteertingWheel_01_orange_F | Kart steering wheel (orange)
//    KartSteertingWheel_01_red_F | Kart steering wheel (red)
//    KartSteertingWheel_01_white_F | Kart steering wheel (white)
//    KartSteertingWheel_01_yellow_F | Kart steering wheel (yellow)
//    Land_Baseball_01_F | Baseball
//    Land_BaseballMitt_01_F | Baseball Glove
//    Land_Basketball_01_F | Basketball
//    Land_camel_trophy_bronze_lxWS | Trophy (Camel, Bronze)
//    Land_camel_trophy_gold_lxWS | Trophy (Camel, Gold)
//    Land_camel_trophy_silver_lxWS | Trophy (Camel, Silver)
//    Land_Football_01_F | Football
//    Land_KartStand_01_F | Kart Stand
//    Land_KartSteertingWheel_01_F | Kart steering wheel
//    Land_KartTrolly_01_F | Kart Trolly
//    Land_KartTyre_01_F | Kart Tire
//    Land_KartTyre_01_x4_F | Kart Tires (4)
//    Land_PlasticBarrier_01_F | Plastic Barrier
//    Land_PlasticBarrier_01_line_x2_F | Plastic Barrier (Small, 2)
//    Land_PlasticBarrier_01_line_x4_F | Plastic Barrier (Small, 4)
//    Land_PlasticBarrier_01_line_x6_F | Plastic Barrier (Small, 6)
//    Land_PlasticBarrier_02_F | Plastic Barrier
//    Land_PlasticBarrier_03_F | Plastic Barrier
//    Land_Rugbyball_01_F | Rugby Ball
//    Land_Trophy_01_bronze_F | Trophy (Bronze)
//    Land_Trophy_01_gold_F | Trophy (Gold)
//    Land_Trophy_01_silver_F | Trophy (Silver)
//    Land_Volleyball_01_F | Volleyball
//    Oil_Spill_F | Oil Spill
//    PlasticBarrier_01_red_F | Plastic Barrier (Small, Red, 1)
//    PlasticBarrier_01_white_F | Plastic Barrier (Small, White, 1)
//    PlasticBarrier_02_grey_F | Plastic Barrier (Medium, Grey)
//    PlasticBarrier_02_yellow_F | Plastic Barrier (Medium, Yellow)
//    PlasticBarrier_03_blue_F | Plastic Barrier (Large, Blue)
//    PlasticBarrier_03_orange_F | Plastic Barrier (Large, Orange)
//
// -- Objects_VR (21) --
//    Land_VR_Target_APC_Wheeled_01_F | VR Wheeled APC Target
//    Land_VR_Target_Dart_01_F | VR Target (Circular)
//    Land_VR_Target_MBT_01_cannon_F | VR Tank Target
//    Land_VR_Target_MRAP_01_F | VR MRAP Target
//    Land_VRGoggles_01_F | VR Goggles
//    VR_3DSelector_01_complete_F | VR Selector (Complete)
//    VR_3DSelector_01_default_F | VR Selector
//    VR_3DSelector_01_exit_F | VR Selector (Exit)
//    VR_3DSelector_01_incomplete_F | VR Selector (Incomplete)
//    VR_Area_01_circle_4_grey_F | VR Area (Circle, 4m, Grey)
//    VR_Area_01_circle_4_yellow_F | VR Area (Circle, 4m, Yellow)
//    VR_Area_01_square_1x1_grey_F | VR Area (Square, 1x1, Grey)
//    VR_Area_01_square_1x1_yellow_F | VR Area (Square, 1x1, Yellow)
//    VR_Area_01_square_2x2_grey_F | VR Area (Square, 2x2, Grey)
//    VR_Area_01_square_2x2_yellow_F | VR Area (Square, 2x2, Yellow)
//    VR_Area_01_square_4x4_grey_F | VR Area (Square, 4x4, Grey)
//    VR_Area_01_square_4x4_yellow_F | VR Area (Square, 4x4, Yellow)
//    VR_Billboard_01_F | VR Wall
//    VR_GroundIcon_01_F | VR Ground Icon
//    VR_Sector_01_60deg_50_grey_F | VR Sector (60deg, 50m, Grey)
//    VR_Sector_01_60deg_50_red_F | VR Sector (60deg, 50m, Red)
//
// -- Ruins (315) --
//    CargoPlaftorm_01_brown_ruins_F | Military Cargo Platform (Brown, Ruin)
//    CargoPlaftorm_01_green_ruins_F | Military Cargo Platform (Green, Ruin)
//    CargoPlaftorm_01_jungle_ruins_F | Military Cargo Platform (Jungle, Ruin)
//    CargoPlaftorm_01_rusty_ruins_F | Military Cargo Platform (Rusty, Ruin)
//    Land_A_Mosque_small_2_ruins_EP1_lxWS | Mosque (Small) Ruins
//    Land_Addon_01_ruins_F | House Addon (Small, Ruin)
//    Land_Addon_01_V1_ruins_F | Pergola (Ruin)
//    Land_Addon_02_b_white_ruins_F | House Addon (v2, Ruin)
//    Land_Addon_02_ruins_F | House Addon (Big, Ruin)
//    Land_Addon_02_V1_ruins_F | House Addon (Ruin)
//    Land_Addon_03_ruins_F | House Addon (Coffee Bar, Ruin)
//    Land_Addon_03_V1_ruins_F | Inn Garden (Ruin)
//    Land_Addon_03mid_V1_ruins_F | Inn Garden (Middle, Ruin)
//    Land_Addon_04_ruins_F | House Addon (Terrace, Ruin)
//    Land_Addon_04_V1_ruins_F | Inn Garden (No Roof, Ruin)
//    Land_Addon_05_ruins_F | House Addon (Garage, Ruin)
//    Land_Airport_Tower_ruins_F | Airport Control Tower (Ruin)
//    Land_Barn_01_brown_ruins_F | Barn (Brown, Ruin)
//    Land_Barn_01_grey_ruins_F | Barn (Grey, Ruin)
//    Land_Barn_02_ruins_F | Barn (Brick, Ruin)
//    Land_Barn_03_large_ruins_F | Barn (Wooden, Large, Ruin)
//    Land_Barn_03_small_ruins_F | Barn (Wooden, Small, Ruin)
//    Land_Barn_04_ruins_F | Barn (Metal, Ruin)
//    Land_Barracks_02_ruins_F | Barracks (v2, Ruin)
//    Land_Barracks_03_ruins_F | Barracks (v3, Ruin)
//    Land_Barracks_04_ruins_F | Barracks (v4, Ruin)
//    Land_Barracks_05_ruins_F | Barracks (v5, Ruin)
//    Land_Barracks_06_ruins_F | Barracks (v6, Ruin)
//    Land_Barracks_ruins_F | Barracks (Ruin)
//    Land_BellTower_02_V1_ruins_F | Bell Tower (Big, New, Ruin)
//    Land_BellTower_02_V2_ruins_F | Bell Tower (Big, Old, Ruin)
//    Land_BusStop_02_shelter_ruins_F | Bus Stop (Shelter, Ruin)
//    Land_Camp_House_01_brown_ruins_F | Camp House (Brown, Ruin)
//    Land_Cargo20_china_color_V1_ruins_F | Cargo Container (Medium, Grey, Ruin)
//    Land_Cargo20_china_color_V2_ruins_F | Cargo Container (Medium, White, Ruin)
//    Land_Cargo20_color_V1_ruins_F | Cargo Container (Medium, Brick Red, Ruin)
//    Land_Cargo20_color_V2_ruins_F | Cargo Container (Medium, Light Blue, Ruin)
//    Land_Cargo20_color_V3_ruins_F | Cargo Container (Medium, Blue, Ruin)
//    Land_Cargo20_idap_ruins_F | Cargo Container (Medium, Ruin) [IDAP]
//    Land_Cargo20_military_ruins_F | Cargo Container (Medium, Military Green, Ruin)
//    Land_Cargo40_china_color_V1_ruins_F | Cargo Container (Long, Grey, Ruin)
//    Land_Cargo40_china_color_V2_ruins_F | Cargo Container (Long, White, Ruin)
//    Land_Cargo40_color_V1_ruins_F | Cargo Container (Long, Brick Red, Ruin)
//    Land_Cargo40_color_V2_ruins_F | Cargo Container (Long, Light Blue, Ruin)
//    Land_Cargo40_color_V3_ruins_F | Cargo Container (Long, Blue, Ruin)
//    Land_Cargo40_idap_ruins_F | Cargo Container (Long, Ruin) [IDAP]
//    Land_Cargo40_military_ruins_F | Cargo Container (Long, Military Green, Ruin)
//    Land_cargo_house_slum_ruins_F | Slum House Container (Ruin)
//    Land_Cargo_House_V1_ruins_F | Military Cargo House (Green, Ruin)
//    Land_Cargo_House_V2_ruins_F | Military Cargo House (Rusty, Ruin)
//    Land_Cargo_House_V3_derelict_F | Military Cargo House (Rusty, Derelict)
//    Land_Cargo_House_V3_ruins_F | Military Cargo House (Brown, Ruin)
//    Land_Cargo_House_V4_ruins_F | Military Cargo House (Jungle, Ruin)
//    Land_Cargo_HQ_V1_ruins_F | Military Cargo HQ (Green, Ruin)
//    Land_Cargo_HQ_V2_ruins_F | Military Cargo HQ (Rusty, Ruin)
//    Land_Cargo_HQ_V3_derelict_F | Military Cargo HQ (Rusty, Derelict)
//    Land_Cargo_HQ_V3_ruins_F | Military Cargo HQ (Brown, Ruin)
//    Land_Cargo_HQ_V4_ruins_F | Military Cargo HQ (Jungle, Ruin)
//    Land_Cargo_Patrol_V1_ruins_F | Military Cargo Post (Green, Ruin)
//    Land_Cargo_Patrol_V2_ruins_F | Military Cargo Post (Rusty, Ruin)
//    Land_Cargo_Patrol_V3_derelict_F | Military Cargo Post (Rusty, Derelict)
//    Land_Cargo_Patrol_V3_ruins_F | Military Cargo Post (Brown, Ruin)
//    Land_Cargo_Patrol_V4_ruins_F | Military Cargo Post (Jungle, Ruin)
//    Land_Cargo_Tower_V1_ruins_F | Military Cargo Tower (Green, Ruin)
//    Land_Cargo_Tower_V2_ruins_F | Military Cargo Tower (Rusty, Ruin)
//    Land_Cargo_Tower_V3_derelict_F | Military Cargo Tower (Rusty, Derelict)
//    Land_Cargo_Tower_V3_ruins_F | Military Cargo Tower (Brown, Ruin)
//    Land_Cargo_Tower_V4_ruins_F | Military Cargo Tower (Jungle, Ruin)
//    Land_Castle_01_tower_ruins_F | Castle Tower (Ruin)
//    Land_Chapel_02_white_ruins_F | Chapel (White, Ruin)
//    Land_Chapel_02_yellow_ruins_F | Chapel (Yellow, Ruin)
//    Land_Chapel_Small_V1_ruins_F | Chapel (Small, New, Ruin)
//    Land_Chapel_Small_V2_ruins_F | Chapel (Small, Old, Ruin)
//    Land_Chapel_V1_ruins_F | Chapel (Big, New, Ruin)
//    Land_Chapel_V2_ruins_F | Chapel (Big, Old, Ruin)
//    Land_Church_01_ruins_F | Church (Big, Ruin)
//    Land_Church_02_ruins_F | Church (Village, Ruin)
//    Land_Church_03_ruins_F | Church (Town, Ruin)
//    Land_ChurchRuin_01_F | Church (v1, Ruin)
//    Land_cmp_Hopper_ruins_F | Concrete Mixing Hopper (Ruin)
//    Land_cmp_Shed_ruins_F | Concrete Mixing Shed (Ruin)
//    Land_cmp_Tower_ruins_F | Concrete Mixing Tower (Ruin)
//    Land_ControlTower_01_ruins_F | Control Tower (Ruin)
//    Land_ControlTower_02_ruins_F | Airfield Control Tower (Military, Ruin)
//    Land_Cowshed_01_A_ruins_F | Cowshed (Left, Ruin)
//    Land_Cowshed_01_B_ruins_F | Cowshed (Middle, Ruin)
//    Land_Cowshed_01_C_ruins_F | Cowshed (Right, Ruin)
//    Land_Dome_01_big_green_ruins_v1_F | Dome (Big, Camo, Damaged)
//    Land_Dome_01_big_green_ruins_v2_F | Dome (Big, Camo, Ruin)
//    Land_Dome_01_small_green_ruins_F | Dome (Camo, Ruin)
//    Land_DomeDebris_01_hex_damaged_green_F | Dome Panel Shards (Camo)
//    Land_DomeDebris_01_hex_green_F | Dome Panel (Camo)
//    Land_DomeDebris_01_struts_large_green_F | Dome Debris (Camo)
//    Land_DomeDebris_01_struts_small_green_F | Dome Struts (Camo)
//    Land_dp_bigTank_old_ruins_F | Diesel Storage Tank (Big, Old, Ruin)
//    Land_dp_bigTank_ruins_F | Diesel Storage Tank (Big, Ruin)
//    Land_dp_smallTank_old_ruins_F | Diesel Storage Tank (Small, Old, Ruin)
//    Land_dp_smallTank_ruins_F | Diesel Storage Tank (Small, Ruin)
//    Land_Factory_Conv1_10_ruins_F | Factory Conveyor Belt (Ground, Ruin)
//    Land_Factory_Conv1_Main_ruins_F | Factory Conveyor Belt (Main, Ruin)
//    Land_Factory_Conv2_ruins_F | Factory Conveyor Belt (Slope, Ruin)
//    Land_Factory_Hopper_ruins_F | Factory Hopper (Ruin)
//    Land_Factory_Main_ruins_F | Factory (Ruin)
//    Land_FeedStorage_01_ruins_F | Feed Storage (Ruin)
//    Land_FuelStation_03_roof_ruins_F | Gas Station (Benzyna, Roof, Ruin)
//    Land_FuelStation_03_shop_ruins_F | Gas Station (Benzyna, Shop, Ruin)
//    Land_FuelStation_Build_ruins_F | Gas Station (Sun Oil, Shop, Ruin)
//    Land_FuelStation_Shed_ruins_F | Gas Station (Sun Oil, Roof, Ruin)
//    Land_Garage_V1_ruins_F | Garage (Ruin)
//    Land_GarageOffice_01_ruins_F | Garage Office (Ruin)
//    Land_GarageRow_01_large_ruins_F | Garage (Large, Ruin)
//    Land_GarageRow_01_small_ruins_F | Garage (Small, Ruin)
//    Land_GarageShelter_01_ruins_F | House with Parking Shelter (Ruin)
//    Land_GH_Gazebo_ruins_F | Ghost Hotel (Gazebo, Ruin)
//    Land_GH_House_ruins_F | Ghost Hotel (House, Ruin)
//    Land_Greenhouse_01_ruins_F | Green House (Ruin)
//    Land_GuardBox_01_brown_ruins_F | Guard Box (Brown, Ruin)
//    Land_GuardBox_01_green_ruins_F | Guard Box (Green, Ruin)
//    Land_GuardBox_01_smooth_ruins_F | Guard Box (Grey, Ruin)
//    Land_GuardHouse_02_ruins_F | Guard House (Ruin)
//    Land_GuardHouse_03_ruins_F | Guard House (Abandoned, Ruin)
//    Land_HealthCenter_01_ruins_F | Health Center (Ruin)
//    Land_House_1B01_ruins_F | Brick House (Small, v1, Ruin)
//    Land_House_1W01_ruins_F | Wooden House (Small, v1, Ruin)
//    Land_House_1W02_ruins_F | Wooden House (Small, v2, Ruin)
//    Land_House_1W03_ruins_F | Wooden House (Small, v3, Ruin)
//    Land_House_1W04_ruins_F | Wooden House (Small, v4, Ruin)
//    Land_House_1W05_ruins_F | Wooden House (Small, v5, Ruin)
//    Land_House_1W06_ruins_F | Wooden House (Small, v6, Ruin)
//    Land_House_1W07_ruins_F | Wooden House (Small, v7, Ruin)
//    Land_House_1W08_ruins_F | Wooden House (Small, v8, Ruin)
//    Land_House_1W09_ruins_F | Wooden House (Small, v9, Ruin)
//    Land_House_1W10_ruins_F | Wooden House (Small, v10, Ruin)
//    Land_House_1W11_ruins_F | Wooden House (Small, v11, Ruin)
//    Land_House_1W12_ruins_F | Wooden House (Small, v12, Ruin)
//    Land_House_1W13_ruins_F | Wooden House (Small, v13, Ruin)
//    Land_House_2B01_ruins_F | Brick House (v1, Ruin)
//    Land_House_2B02_ruins_F | Brick House (v2, Ruin)
//    Land_House_2B03_ruins_F | Brick House (v3, Ruin)
//    Land_House_2B04_ruins_F | Brick House (v4, Ruin)
//    Land_House_2W01_ruins_F | Wooden House (v1, Ruin)
//    Land_House_2W02_ruins_F | Wooden House (v2, Ruin)
//    Land_House_2W03_ruins_F | Wooden House (v3, Ruin)
//    Land_House_2W04_ruins_F | Wooden House (v4, Ruin)
//    Land_House_2W05_ruins_F | Wooden House (v5, Ruin)
//    Land_House_Big_01_b_blue_ruins_F | House (Large, Blue, Ruin)
//    Land_House_Big_01_b_brown_ruins_F | House (Large, Yellow & Brown, Ruin)
//    Land_House_Big_01_b_pink_ruins_F | House (Large, Pink, Ruin)
//    Land_House_Big_01_b_yellow_ruins_F | House (Large, Yellow & White, Ruin)
//    Land_House_Big_01_ruins_F | Bungalow (Yellow, Large, Ruin)
//    Land_House_Big_01_V1_ruins_F | House (Large, Ruin)
//    Land_House_Big_02_b_blue_ruins_F | House (Big, Blue, Ruin)
//    Land_House_Big_02_b_brown_ruins_F | House (Big, Yellow & Brown, Ruin)
//    Land_House_Big_02_b_pink_ruins_F | House (Big, Pink, Ruin)
//    Land_House_Big_02_b_yellow_ruins_F | House (Big, Yellow & White, Ruin)
//    Land_House_Big_02_V1_ruins_F | House (Big, Ruin)
//    Land_House_C_11_ruins_EP1_lxWS | House (Fenced) Ruins
//    Land_House_C_12_ruins_EP1_lxWS | Repair Shop Ruins
//    Land_House_C_5_ruins_EP1_lxWS | House (Small) Ruins
//    Land_House_K_1_ruins_EP1_lxWS | Village House (Small) Ruins
//    Land_House_K_3_ruins_EP1_lxWS | Village House (Two Floors) Ruins
//    Land_House_L_1_ruins_EP1_lxWS | Village House (Adobe, Small) Ruins
//    Land_House_L_3_ruins_EP1_lxWS | Village House (Adobe, Medium) Ruins
//    Land_House_L_7_ruins_EP1_lxWS | Village House (Adobe, Big) Ruins
//    Land_House_L_8_ruins_EP1_lxWS | Village House (Adobe, Big, Two Floors) Ruins
//    Land_House_L_9_ruins_EP1_lxWS | Village House (Unfinished) Ruins
//    Land_House_Native_01_ruins_F | Native House (Big, Ruin)
//    Land_House_Native_02_ruins_F | Native House (Small, Ruin)
//    Land_House_Small_01_b_blue_ruins_F | House (Blue, Ruin)
//    Land_House_Small_01_b_brown_ruins_F | House (Yellow & Brown, Ruin)
//    Land_House_Small_01_b_pink_ruins_F | House (Pink, Ruin)
//    Land_House_Small_01_b_yellow_ruins_F | House (Yellow & White, Ruin)
//    Land_House_Small_01_ruins_F | Metal Bungalow (Yellow, Ruin)
//    Land_House_Small_01_V1_ruins_F | House (Ruin)
//    Land_House_Small_02_b_blue_ruins_F | House (Small, v2, Blue, Ruin)
//    Land_House_Small_02_b_brown_ruins_F | House (Small, v2, Yellow & Brown, Ruin)
//    Land_House_Small_02_b_pink_ruins_F | House (Small, v2, Pink, Ruin)
//    Land_House_Small_02_b_V1_ruins_F | House (Small, v2, White, Ruin)
//    Land_House_Small_02_b_yellow_ruins_F | House (Small, v2, Yellow & White, Ruin)
//    Land_House_Small_02_ruins_F | Brick Bungalow (Ruin)
//    Land_House_Small_02_V1_ruins_F | House (Small, Ruin)
//    Land_House_Small_03_ruins_F | Bungalow (Turquoise, Ruin)
//    Land_House_Small_03_V1_ruins_F | Bungalow (Ruin)
//    Land_House_Small_04_ruins_F | Bungalow (Blue Roof, Ruin)
//    Land_House_Small_05_ruins_F | Bungalow (Grey Roof, Ruin)
//    Land_HouseChimney_Ruin_01_F | House Chimney (Ruin)
//    Land_HouseRuin_Big_01_F | Big House (v1, Ruin)
//    Land_HouseRuin_Big_01_half_F | Big House (v1, Half, Ruin)
//    Land_HouseRuin_Big_02_F | Big House (v2, Ruin)
//    Land_HouseRuin_Big_02_half_F | Big House (v2, Half, Ruin)
//    Land_HouseRuin_Big_03_F | Big House (v3, Ruin)
//    Land_HouseRuin_Big_03_half_F | Big House (v3, Half, Ruin)
//    Land_HouseRuin_Big_04_F | Big House (v4, Ruin)
//    Land_HouseRuin_Big_05_F | Big House (v5, Ruin)
//    Land_HouseRuin_Small_01_F | Small House (v1, Ruin)
//    Land_HouseRuin_Small_01_half_F | Small House (v1, Half, Ruin)
//    Land_HouseRuin_Small_02_F | Small House (v2, Ruin)
//    Land_HouseRuin_Small_03_F | Small House (v3, Ruin)
//    Land_HouseRuin_Small_04_F | Small House (v4, Ruin)
//    Land_HouseWallRuin_Corner_01_F | Wall (Corner, Medium, Ruin)
//    Land_HouseWallRuin_Corner_02_F | Wall (Corner, Big, Ruin)
//    Land_HouseWallRuin_Door_01_F | Wall (Door, Ruin)
//    Land_IndustrialShed_01_ruins_F | Shed (Industrial, Ruin)
//    Land_Kiosk_blueking_ruins_F | Kiosk (Ruin)
//    Land_LightHouse_ruins_F | Lighthouse (Ruin)
//    Land_Lighthouse_small_ruins_F | Lighthouse (Small, Ruin)
//    Land_Medevac_house_V1_ruins_F | Military Cargo House (Medical, Ruin)
//    Land_Medevac_HQ_V1_ruins_F | Military Cargo HQ (Medical, Ruin)
//    Land_Metal_Shed_ruins_F | Grey Metal Shed (Large, Ruin)
//    Land_MetalShelter_01_ruins_F | Metal Market Roof (Small, Ruin)
//    Land_MetalShelter_02_ruins_F | Metal Market Roof (Large, Ruin)
//    Land_MobileRadar_01_radar_ruins_F | Mobile Radar (Ruin)
//    Land_OrthodoxChurch_03_ruins_F | Orthodox Church (Large, Ruin)
//    Land_PoliceStation_01_ruins_F | Police Station (Ruin)
//    Land_PowerStation_01_ruins_F | Power Station (Ruin)
//    Land_Radar_01_HQ_ruins_F | Radar Complex (HQ, Ruin)
//    Land_Radar_01_kitchen_ruins_F | Radar Complex (Kitchen, Ruin)
//    Land_Radar_ruins_F | Radar (Ruin)
//    Land_Radar_Small_ruins_F | Radar (Small, Ruin)
//    Land_Rail_Station_Big_ruins_F | Railway Station (Big, Ruin)
//    Land_Rail_Station_Small_ruins_F | Railway Station (Small, Ruin)
//    Land_Rail_Warehouse_Small_ruins_F | Warehouse (Small, Ruin)
//    Land_RepairDepot_01_civ_ruins_F | Repair depot (Civilian, Ruin)
//    Land_RepairDepot_01_green_ruins_F | Repair depot (Green, Ruin)
//    Land_RepairDepot_01_tan_ruins_F | Repair depot (Tan, Ruin)
//    Land_Research_house_V1_ruins_F | Research House (Ruin)
//    Land_Research_HQ_ruins_F | Research HQ (Ruin)
//    Land_ReservoirTank_01_military_ruins_F | Reservoir Tank (Military, Ruin)
//    Land_ReservoirTank_Airport_ruins_F | Reservoir Tank (Airport, Ruin)
//    Land_ReservoirTank_Rust_ruins_F | Reservoir Tank (Rust, Ruin)
//    Land_ReservoirTank_V1_ruins_F | Reservoir Tank (Ruin)
//    Land_ReservoirTower_ruins_F | Reservoir Tower (Ruin)
//    Land_Sawmill_01_ruins_F | Sawmill (Ruin)
//    Land_Shed_01_ruins_F | Yellow Metal Shed (Ruin)
//    Land_Shed_02_ruins_F | Grey Metal Shed (Small, Ruin)
//    Land_Shed_03_ruins_F | Grey Metal Shed (Unfinished, Ruin)
//    Land_Shed_04_ruins_F | Yellow Metal Shed (Small, Ruin)
//    Land_Shed_05_ruins_F | Grey Metal Shed (Medium, Ruin)
//    Land_Shed_06_ruins_F | Grey Metal Shed (Roof, Ruin)
//    Land_Shed_07_ruins_F | Grey Metal Shed (Large, Weathered, Ruin)
//    Land_Shed_08_brown_ruins_F | Shed (Brown, Ruin)
//    Land_Shed_08_grey_ruins_F | Shed (Grey, Ruin)
//    Land_Shed_09_ruins_F | Wooden Shed (Small, Ruin)
//    Land_Shed_10_ruins_F | Wooden Shed (Medium, Ruin)
//    Land_Shed_11_ruins_F | Old Plywood Shed (Medium, Ruin)
//    Land_Shed_12_ruins_F | Plywood Shed (Small, Ruin)
//    Land_Shed_13_ruins_F | Plywood Shed (Medium, Ruin)
//    Land_Shed_14_ruins_F | Wooden Shed (Big, Ruin)
//    Land_Shed_Big_ruins_F | Industrial Shed (Big, Ruin)
//    Land_Shed_Ind_old_ruins_F | Shed (Industrial, Abandoned, Ruin)
//    Land_Shed_Ind_ruins_F | Industrial Shed (Ruin)
//    Land_Shed_Small_ruins_F | Industrial Shed (Small, Ruin)
//    Land_Shop_01_V1_ruins_F | Shop House (Ruin)
//    Land_Shop_02_b_blue_ruins_F | Shop (Blue, Ruin)
//    Land_Shop_02_b_brown_ruins_F | Shop (Yellow & Brown, Ruin)
//    Land_Shop_02_b_pink_ruins_F | Shop (Pink, Ruin)
//    Land_Shop_02_b_yellow_ruins_F | Shop (Yellow & White, Ruin)
//    Land_Shop_02_V1_ruins_F | Shop (Ruin)
//    Land_Shop_Town_01_ruins_F | Medium Shop (White, Ruin)
//    Land_Shop_Town_02_ruins_F | Small Shop (Yellow, Ruin)
//    Land_Shop_Town_03_ruins_F | Large Shop (White, Ruin)
//    Land_Shop_Town_04_ruins_F | Small Shop (Red, Ruin)
//    Land_SlideCastle_ruins_F | Slide (Castle, Ruin)
//    Land_Slum_01_ruins_F | Grey Shack (Small, Ruin)
//    Land_Slum_02_ruins_F | Grey Shack (Medium, Ruin)
//    Land_Slum_03_ruins_F | Purple Shack (Large, Ruin)
//    Land_Slum_04_ruins_F | Purple Shack (Medium, Ruin)
//    Land_Slum_House01_ruins_F | Slum House (Small, Ruin)
//    Land_Slum_House02_ruins_F | Slum House (Ruin)
//    Land_Slum_House03_ruins_F | Slum House (Big, Ruin)
//    Land_Smokestack_01_factory_ruins_F | Smokestack (SIŁA Factory, Ruin)
//    Land_Smokestack_01_ruins_F | Smokestack (Ruin)
//    Land_Smokestack_02_ruins_F | Smokestack (Old, Ruin)
//    Land_Smokestack_03_ruins_F | Smokestack (Metal, Ruin)
//    Land_spp_Mirror_ruins_F | Solar Mirrors (Ruin)
//    Land_spp_Tower_ruins_F | Solar Tower (Ruin)
//    Land_spp_Transformer_ruins_F | Solar Transformer (Ruin)
//    Land_Stone_HouseBig_V1_ruins_F | Stone House (Big, Ruin)
//    Land_Stone_HouseSmall_V1_ruins_F | Stone House (Ruin)
//    Land_Stone_Shed_01_b_clay_ruins_F | Stone House (Small, v2, Brown, Ruin)
//    Land_Stone_Shed_01_b_raw_ruins_F | Stone House (Small, v2, Grey, Ruin)
//    Land_Stone_Shed_01_b_white_ruins_F | Stone House (Small, v2, White, Ruin)
//    Land_Stone_Shed_V1_ruins_F | Stone House (Small, Ruin)
//    Land_Substation_01_ruins_F | Substation (Ruin)
//    Land_t_broussonetiap1s_RF | Broussonetia
//    Land_t_ficusb1s_RF | Ficus
//    Land_t_fraxinusav2s_RF | Fraxinus
//    Land_t_oleae1s_RF | Oleae (v1)
//    Land_t_oleae2s_RF | Oleae (v2)
//    Land_t_pinuss1s_RF | Pinus (v1)
//    Land_t_pinuss2s_b_RF | Pinus (v2)
//    Land_t_pinuss2s_RF | Pinus (v3)
//    Land_t_poplar2f_dead_RF | Poplar
//    Land_t_quercusir2s_RF | Quercus
//    Land_TBox_ruins_F | Transmitter Box (Ruin)
//    Land_Temple_Native_01_ruins_F | Native Temple (Ruin)
//    Land_TentHangar_V1_ruins_F | Tent Hangar (Ruin)
//    Land_TTowerBig_1_ruins_F | Transmitter Tower (Ruin)
//    Land_TTowerBig_2_ruins_F | Transmitter Tower (Tall, Ruin)
//    Land_Turret_01_ruins_F | AA Turret (Ruin)
//    Land_Unfinished_Building_01_ruins_F | Unfinished Building (Big, Ruin)
//    Land_Unfinished_Building_02_ruins_F | Unfinished Building (Large, Ruin)
//    Land_VillageStore_01_ruins_F | General Store (Ruin)
//    Land_Warehouse_03_ruins_F | Warehouse (Blue, Ruin)
//    Land_WaterStation_01_ruins_F | Water Station (Ruin)
//    Land_WaterTower_01_ruins_F | Water Tower (Ruin)
//    Land_WaterTower_02_ruins_F | Water Tower (Ruin)
//    Land_Windmill01_ruins_F | Windmill (Ruin)
//    Land_WIP_ruins_F | Unfinished Complex (Ruin)
//    Land_WoodenShelter_01_ruins_F | Wooden Shelter (Ruin)
//    Land_Workshop_01_ruins_F | Workshop (Small, v1, Ruin)
//    Land_Workshop_02_ruins_F | Workshop (Small, v2, Ruin)
//    Land_Workshop_03_ruins_F | Workshop (Medium, v1, Ruin)
//    Land_Workshop_04_ruins_F | Workshop (Medium, v2, Ruin)
//    Land_Workshop_05_ruins_F | Workshop (L-Shaped, Ruin)
//
// -- Signs (207) --
//    ace_flags_carrier_black | Flag (Black)
//    ace_flags_carrier_blue | Flag (Blue)
//    ace_flags_carrier_green | Flag (Green)
//    ace_flags_carrier_orange | Flag (Orange)
//    ace_flags_carrier_purple | Flag (Purple)
//    ace_flags_carrier_red | Flag (Red)
//    ace_flags_carrier_white | Flag (White)
//    ace_flags_carrier_yellow | Flag (Yellow)
//    ace_marker_flags_black | Marker Flag (Black)
//    ace_marker_flags_blue | Marker Flag (Blue)
//    ace_marker_flags_green | Marker Flag (Green)
//    ace_marker_flags_orange | Marker Flag (Orange)
//    ace_marker_flags_purple | Marker Flag (Purple)
//    ace_marker_flags_red | Marker Flag (Red)
//    ace_marker_flags_white | Marker Flag (White)
//    ace_marker_flags_yellow | Marker Flag (Yellow)
//    ArrowDesk_L_F | Arrow Desk (left)
//    ArrowDesk_R_F | Arrow Desk (right)
//    ArrowMarker_L_F | Arrow Marker (left)
//    ArrowMarker_R_F | Arrow Marker (right)
//    FlagChecked_F | Flag (Checkered)
//    FlagMarker_01_F | Flag (Marker)
//    FlagSmall_F | Flag (Small)
//    Land_BrokenCarGlass_01_4x4_F | Broken Glass (4x4m)
//    Land_BrokenCarGlass_01_6x2_F | Broken Glass (6x2m)
//    Land_ConcretePanels_01_end1_F | Concrete Panels (Decal, End 1)
//    Land_ConcretePanels_01_end2_F | Concrete Panels (Decal, End 2)
//    Land_ConcretePanels_01_F | Concrete Panels (Decal)
//    Land_ConcretePanels_01_single_F | Concrete Panel (Decal)
//    Land_Decal_BulletHoles_Big_01_F | Bullet Holes (Big, v1)
//    Land_Decal_BulletHoles_Big_02_F | Bullet Holes (Big, v2)
//    Land_Decal_BulletHoles_Small_01_F | Bullet Holes (Small, v1)
//    Land_Decal_BulletHoles_Small_02_F | Bullet Holes (Small, v2)
//    Land_Decal_BulletHoles_Small_03_F | Bullet Holes (Small, v3)
//    Land_Decal_damage_long1_F | Road Cracks (Long, v1)
//    Land_Decal_damage_long2_F | Road Cracks (Long, v2)
//    Land_Decal_damage_long3_F | Road Cracks (Long, v3)
//    Land_Decal_damage_long4_F | Road Cracks (Long, v4)
//    Land_Decal_damage_long5_F | Road Cracks (Long, v5)
//    Land_Decal_damage_medium1_F | Road Cracks (Medium, v1)
//    Land_Decal_damage_medium2_F | Road Cracks (Medium, v2)
//    Land_Decal_Garbage_01_F | Garbage Decal
//    Land_Decal_RoadCrack_Grass_01_F | Road Crack (Grass, v1)
//    Land_Decal_RoadCrack_Grass_02_F | Road Crack (Grass, v2)
//    Land_Decal_RoadCrack_Grass_03_F | Road Crack (Grass, v3)
//    Land_Decal_RoadCrack_Grass_04_F | Road Crack (Grass, v4)
//    Land_Decal_RoadCrack_Grass_05_F | Road Crack (Grass, v5)
//    Land_Decal_RoadEdge_Dirt_01_F | Road Edge Dirt (v1)
//    Land_Decal_RoadEdge_Dirt_02_F | Road Edge Dirt (v2)
//    Land_Decal_RoadEdge_Dirt_03_F | Road Edge Dirt (v3)
//    Land_Decal_RoadEdge_Dirt_04_F | Road Edge Dirt (v4)
//    Land_Decal_RoadEdge_Dirt_05_F | Road Edge Dirt (v5)
//    Land_Decal_RoadEdge_Dirt_06_F | Road Edge Dirt (v6)
//    Land_Decal_RoadEdge_Dirt_07_F | Road Edge Dirt (v7)
//    Land_Decal_RoadEdge_Dirt_08_F | Road Edge Dirt (v8)
//    Land_Decal_RoadEdge_Dirt_09_F | Road Edge Dirt (v9)
//    Land_Decal_RoadEdge_Dirt_10_F | Road Edge Dirt (v10)
//    Land_Decal_roads_ars_01_F | Road Crack Seal (v1)
//    Land_Decal_roads_ars_02_F | Road Crack Seal (v2)
//    Land_Decal_roads_ars_03_F | Road Crack Seal (v3)
//    Land_Decal_roads_ars_04_F | Road Crack Seal (v4)
//    Land_Decal_roads_ars_05_F | Road Crack Seal (v5)
//    Land_Decal_roads_ars_06_F | Road Crack Seal (v6)
//    Land_Decal_roads_oil_stain_01_F | Oil Stain (v1)
//    Land_Decal_roads_oil_stain_02_F | Oil Stain (v2)
//    Land_Decal_roads_oil_stain_03_F | Oil Stain (v3)
//    Land_Decal_roads_oil_stain_04_F | Oil Stain (v4)
//    Land_Decal_ScorchMark_01_extra_large_RF | Scorch Mark (Extra Large)
//    Land_Decal_ScorchMark_01_large_F | Scorch Mark (Large)
//    Land_Decal_ScorchMark_01_small_F | Scorch Mark (Small)
//    Land_dirt_road_damage_long_01_F | Dirt Road Cracks (Long, v1)
//    Land_dirt_road_damage_long_02_F | Dirt Road Cracks (Long, v2)
//    Land_dirt_road_damage_long_03_F | Dirt Road Cracks (Long, v3)
//    Land_dirt_road_damage_long_04_F | Dirt Road Cracks (Long, v4)
//    Land_dirt_road_damage_long_05_F | Dirt Road Cracks (Long, v5)
//    Land_dirt_road_rocks_01_F | Dirt Road Rocks (v1)
//    Land_dirt_road_rocks_02_F | Dirt Road Rocks (v2)
//    Land_dirt_road_rocks_03_F | Dirt Road Rocks (v3)
//    Land_dirt_road_rocks_04_F | Dirt Road Rocks (v4)
//    Land_DirtPatch_01_4x4_F | Dirt Patch (Small)
//    Land_DirtPatch_01_6x8_F | Dirt Patch (Large)
//    Land_DirtPatch_02_F | Dirt Patch 2 (Large)
//    Land_DirtPatch_03_F | Dirt Patch 3 (Large)
//    Land_DirtPatch_04_F | Dirt Patch 4 (Large)
//    Land_DirtPatch_05_F | Dirt Patch 5 (Large)
//    Land_DirtPatch_06_F | Dirt Patch 6 (Large)
//    Land_EntranceGate_01_narrow_F | Entrance Gate (IDAP)
//    Land_HelipadCircle_F | Helipad (Circle)
//    Land_HelipadCivil_F | Helipad (Civil)
//    Land_HelipadEmpty_F | Helipad (Invisible)
//    Land_HelipadRescue_F | Helipad (Rescue)
//    Land_HelipadSquare_F | Helipad (Square)
//    Land_InfoStand_V1_F | Infostand (1 leg)
//    Land_InfoStand_V2_F | Infostand (2 legs)
//    Land_JumpTarget_F | Parachute Jump Target
//    Land_LandMark_F | Runway Marker
//    Land_Noticeboard_F | Noticeboard
//    Land_OldFactorySign_01_F | Old Factory Sign
//    Land_OldFactorySign_01_graffiti_F | Old Factory Sign (Graffiti)
//    Land_PedestrianCrossing_01_6m_4str_F | Pedestrian Crossing (Short)
//    Land_PedestrianCrossing_01_6m_6str_F | Pedestrian Crossing
//    Land_PedestrianCrossing_01_8m_10str_F | Pedestrian Crossing (Long)
//    Land_Puddle_01_F | Puddle (Small)
//    Land_Puddle_02_F | Puddle (Large)
//    Land_RedWhitePole_F | Red-White Pole
//    Land_RoadCrack_01_2x2_F | Crack (2x2)
//    Land_RoadCrack_01_4x4_F | Crack (4x4)
//    Land_RoadCrack_01_6x2_F | Crack (6x2)
//    Land_roads_cracks_01_F | Road Crack (v1)
//    Land_roads_cracks_02_F | Road Crack (v2)
//    Land_roads_cracks_03_F | Road Crack (v3)
//    Land_roads_cracks_04_F | Road Crack (v4)
//    Land_roads_cracks_05_F | Road Crack (v5)
//    Land_roads_patch_01_F | Road Patch (v1)
//    Land_roads_patch_02_F | Road Patch (v2)
//    Land_roads_patch_03_F | Road Patch (v3)
//    Land_roads_patch_04_F | Road Patch (v4)
//    Land_roads_patch_05_F | Road Patch (v5)
//    Land_roads_patch_06_F | Road Patch (v6)
//    Land_roads_patch_07_F | Road Patch (v7)
//    Land_roads_patch_08_F | Road Patch (v8)
//    Land_roads_patch_09_F | Road Patch (v9)
//    Land_roads_patch_10_F | Road Patch (v10)
//    Land_roads_patch_11_F | Road Patch (v11)
//    Land_roads_patch_12_F | Road Patch (v12)
//    Land_sand_road_damage_long_01_lxWS | Sand Road (Long, v1)
//    Land_sand_road_damage_long_02_lxWS | Sand Road (Long, v2)
//    Land_sand_road_damage_long_03_lxWS | Sand Road (Long, v3)
//    Land_sand_road_damage_long_04_lxWS | Sand Road (Long, v4)
//    Land_sand_road_damage_long_05_lxWS | Sand Road (Long, v5)
//    Land_SandPatch_01_lxWS | Sand Patch (Large)
//    Land_SandRoad_01_lxWS | Sand Patch (v1)
//    Land_SandRoad_02_lxWS | Sand Patch (v2)
//    Land_SandRoad_03_lxWS | Sand Patch (v3)
//    Land_SandRoad_04_lxWS | Sand Patch (v4)
//    Land_sign_entry_en_pl_F | Sign (Military Area, Enter, Polish & English)
//    Land_sign_leave_en_pl_F | Sign (Military Area, Exit, Polish & English)
//    Land_Sign_Mines_F | Sign (Mines)
//    Land_Sign_MinesDanger_English_F | Sign (Mines Danger, International)
//    Land_Sign_MinesDanger_Greek_F | Sign (Mines Danger, Altis)
//    Land_Sign_MinesTall_English_F | Sign (Mines, Tall, International)
//    Land_Sign_MinesTall_F | Sign (Mines, Tall)
//    Land_Sign_MinesTall_Greek_F | Sign (Mines, Tall, Altis)
//    Land_Sign_noentry_big_en_pl_F | Sign (Military Area, Large, Polish & English)
//    Land_sign_noentry_small_en_pl_F | Sign (Military Area, Small, Polish & English)
//    Land_sign_uwaga_pl_1_F | Sign (Warning, Polish, v1)
//    Land_sign_uwaga_pl_2_F | Sign (Warning, Polish, v2)
//    Land_Sign_WarningMilAreaSmall_F | Sign (Military Area, Small, Greek & English)
//    Land_Sign_WarningMilitaryArea_F | Sign (Military Area, Greek & English)
//    Land_Sign_WarningMilitaryVehicles_F | Sign (Military Vehicles, Greek & English)
//    Land_Sign_WarningNoWeapon_F | Sign (No Weapons, International)
//    Land_Sign_WarningNoWeaponAltis_F | Sign (No Weapons, Altis)
//    Land_Sign_WarningNoWeaponTanoa_F | Sign (No Weapons, Tanoa)
//    Land_Sign_WarningUnexplodedAmmo_F | Sign (Risk Area)
//    Land_SignM_forRent_F | Sign (For Rent)
//    Land_SignM_forSale_F | Sign (For Sale)
//    Land_SignM_taxi_F | Sign (Taxi)
//    Land_SignM_WarningMilAreaSmall_english_F | Sign (Military Area, Small, English)
//    Land_SignM_WarningMilitaryArea_english_F | Sign (Military Area, English)
//    Land_SignM_WarningMilitaryVehicles_english_F | Sign (Military Vehicles, English)
//    Land_SignWarning_01_CheckpointAhead_F | Sign (Checkpoint, v1)
//    Land_VehicleTrack_01_left_crossing_F | Tire Track (Left Crossing)
//    Land_VehicleTrack_01_left_v1_F | Tire Track (Left Curve, v1)
//    Land_VehicleTrack_01_left_v2_F | Tire Track (Left Curve, v2)
//    Land_VehicleTrack_01_right_crossing_F | Tire Track (Right Crossing)
//    Land_VehicleTrack_01_right_v1_F | Tire Track (Right Curve, v1)
//    Land_VehicleTrack_01_right_v2_F | Tire Track (Right Curve, v2)
//    Land_VehicleTrack_01_straight_end_F | Tire Track (Straight, End)
//    Land_VehicleTrack_01_straight_start_F | Tire Track (Straight, Start)
//    Land_VehicleTrack_01_straight_v1_F | Tire Track (Straight, v1)
//    Land_VehicleTrack_01_straight_v2_F | Tire Track (Straight, v2)
//    Land_VergePost_01_F | Verge Post
//    Land_VergePost_02_v1_F | Verge Post (Old)
//    Land_VergePost_02_v2_F | Verge Post (Old, Damaged)
//    Pole_F | Pole
//    Sign_Direction_F | Sign Direction
//    Sign_F | Sign
//    SignAd_Sponsor_01_IDAP_F | Sign (IDAP)
//    SignAd_Sponsor_ARMEX_F | Sign (ARMEX)
//    SignAd_Sponsor_Blueking_F | Sign (Blueking)
//    SignAd_Sponsor_Burstkoke_F | Sign (Burstkoke)
//    SignAd_Sponsor_F | Sign (Sponsor)
//    SignAd_Sponsor_Fuel_green_F | Sign (Fuel, green)
//    SignAd_Sponsor_Fuel_white_F | Sign (Fuel, white)
//    SignAd_Sponsor_IDAP_F | Sign (IDAP)
//    SignAd_Sponsor_ION_F | Sign (ION)
//    SignAd_Sponsor_Larkin_F | Sign (Larkin)
//    SignAd_Sponsor_Quontrol_F | Sign (Quontrol)
//    SignAd_Sponsor_Redburger_F | Sign (Redburger)
//    SignAd_Sponsor_Redstone_F | Sign (Redstone)
//    SignAd_Sponsor_Suatmm_F | Sign (Suatmm)
//    SignAd_Sponsor_Vrana_F | Sign (Vrana)
//    SignAd_SponsorS_01_IDAP_F | Sign (IDAP - Small)
//    SignAd_SponsorS_ARMEX_F | Sign (ARMEX - Small)
//    SignAd_SponsorS_Blueking_F | Sign (Blueking - Small)
//    SignAd_SponsorS_Burstkoke_F | Sign (Burstkoke - Small)
//    SignAd_SponsorS_F | Sign (Sponsor - Small)
//    SignAd_SponsorS_Fuel_green_F | Sign (Fuel, green - Small)
//    SignAd_SponsorS_Fuel_white_F | Sign (Fuel, white - Small)
//    SignAd_SponsorS_ION_F | Sign (ION - Small)
//    SignAd_SponsorS_Larkin_F | Sign (Larkin - Small)
//    SignAd_SponsorS_Quontrol_F | Sign (Quontrol - Small)
//    SignAd_SponsorS_Redburger_F | Sign (Redburger - Small)
//    SignAd_SponsorS_Redstone_F | Sign (Redstone - Small)
//    SignAd_SponsorS_Suatmm_F | Sign (Suatmm - Small)
//    SignAd_SponsorS_Vrana_F | Sign (Vrana - Small)
//    TapeSign_F | Red-White Tape
//
// -- Small_items (472) --
//    Aegis_Land_Portable_Radio_01_black_F | Rugged Portable Radio (Black)
//    Aegis_Land_Portable_Radio_01_olive_F | Rugged Portable Radio (Olive)
//    Aegis_Land_Portable_Radio_01_sand_F | Rugged Portable Radio (Sand)
//    AluminiumFoil_01_F | Tin Foil
//    AntidoteKit_01_F | Antidote Kit
//    Book_01_F | Book (Small)
//    Book_02_F | Book (Large)
//    Broom_01_grey_F | Broom (Grey)
//    Broom_01_yellow_F | Broom (Yellow)
//    Brush_01_green_F | Brush (Green)
//    Brush_01_yellow_F | Brush (Yellow)
//    CBRNCase_01_F | CBRN Inner Packaging
//    CBRNContainer_01_closed_olive_F | CBRN Packaging (Olive, Closed)
//    CBRNContainer_01_closed_yellow_F | CBRN Packaging (Yellow, Closed)
//    CBRNContainer_01_olive_F | CBRN Packaging (Olive, Open)
//    CBRNContainer_01_yellow_F | CBRN Packaging (Yellow, Open)
//    CBRNLid_01_olive_F | CBRN Packaging Lid (Olive)
//    CBRNLid_01_yellow_F | CBRN Packaging Lid (Yellow)
//    Coffin_01_F | Coffin
//    Coffin_02_BasePlate_F | Military Coffin (Base)
//    Coffin_02_BasePlate_US_F | Military Coffin (US, Base)
//    Coffin_02_Cover_F | Military Coffin (Cover)
//    Coffin_02_Cover_US_F | Military Coffin (US, Cover)
//    Coffin_02_F | Military Coffin
//    Coffin_02_Flag_F | Military Coffin (Flag)
//    Coffin_02_US_F | Military Coffin (US)
//    DeconKit_01_F | Decon Kit
//    DeconShower_01_F | Decon Shower
//    DeconShower_02_F | Decon Shower (Large)
//    Easel_01_F | Easel
//    Easel_01_folded_F | Easel (Folded)
//    EauDeCombat_01_box_F | Aftershave (Boxed)
//    EauDeCombat_01_F | Aftershave
//    FlowerBouquet_01_F | Flower Bouquet (White)
//    FlowerBouquet_02_F | Flower Bouquet (Red)
//    FlowerBouquet_03_F | Flower Bouquet (Orange)
//    FoldedFlag_01_Altis_F | Folded Flag (Altis)
//    FoldedFlag_01_Livonia_F | Folded Flag (Livonia)
//    FoldedFlag_01_Tanoa_F | Folded Flag (Horizon Islands)
//    FoldedFlag_01_UK_F | Folded Flag (UK)
//    FoldedFlag_01_US_F | Folded Flag (US)
//    FPV_Retranslator | FPV Signal Booster
//    GalleryDioramaUnit_01_Astra_F | Diorama Unit (Astra)
//    GalleryDioramaUnit_01_F | Diorama Unit (Blank)
//    GalleryDioramaUnit_01_IDAP_F | Diorama Unit (IDAP)
//    GalleryDioramaUnit_01_Macrotech_F | Diorama Unit (Macrotech)
//    GalleryDioramaUnit_01_opsis_F | Diorama Unit (Opsis)
//    GalleryDioramaUnit_01_Redstone_F | Diorama Unit (Redstone)
//    GalleryDioramaUnit_01_Vrana_F | Diorama Unit (Vrana)
//    GHOST_MedicalLitter_apap | Leaflet
//    HazmatBag_01_empty_F | Hazmat Bag (Empty)
//    HazmatBag_01_F | Hazmat Bag (Full)
//    HazmatBag_01_roll_F | Hazmat Bag Roll
//    Land_AirConditioner_01_F | Air Conditioning Unit
//    Land_AirConditioner_02_F | Air Conditioning Unit (Hose, Long)
//    Land_AirConditioner_03_F | Air Conditioning Unit (Hose, Short)
//    Land_AirConditioner_04_F | Air Conditioning Unit (Hoses, Short)
//    Land_AirHorn_01_F | Air Horn
//    Land_Ammobox_rounds_F | Ammo box
//    Land_Antibiotic_F | Antibiotics
//    Land_BakedBeans_F | Baked Beans
//    Land_Bandage_F | Bandages
//    Land_Battery_F | Battery
//    Land_BatteryPack_01_battery_black_F | Rechargeable Battery (Black)
//    Land_BatteryPack_01_battery_olive_F | Rechargeable Battery (Olive)
//    Land_BatteryPack_01_battery_sand_F | Rechargeable Battery (Sand)
//    Land_BatteryPack_01_closed_black_F | Rugged Battery Pack (Black, Closed)
//    Land_BatteryPack_01_closed_olive_F | Rugged Battery Pack (Olive, Closed)
//    Land_BatteryPack_01_closed_sand_F | Rugged Battery Pack (Sand, Closed)
//    Land_BatteryPack_01_open_black_F | Rugged Battery Pack (Black, Open)
//    Land_BatteryPack_01_open_olive_F | Rugged Battery Pack (Olive, Open)
//    Land_BatteryPack_01_open_sand_F | Rugged Battery Pack (Sand, Open)
//    Land_BloodBag_F | Blood bag
//    Land_Bodybag_01_black_F | Body Bag (Black)
//    Land_Bodybag_01_blue_F | Body Bag (Blue)
//    Land_Bodybag_01_empty_black_F | Body Bag (Black, Empty)
//    Land_Bodybag_01_empty_blue_F | Body Bag (Blue, Empty)
//    Land_Bodybag_01_empty_white_F | Body Bag (White, Empty)
//    Land_Bodybag_01_folded_black_F | Body Bag (Black, Folded)
//    Land_Bodybag_01_folded_blue_F | Body Bag (Blue, Folded)
//    Land_Bodybag_01_folded_white_F | Body Bag (White, Folded)
//    Land_Bodybag_01_white_F | Body Bag (White)
//    Land_Bomb_Trolley_01_F | Bomb Trolley
//    Land_BoreSighter_01_F | Tank Bore Sighter
//    Land_BottlePlastic_V1_F | Plastic Bottle
//    Land_BottlePlastic_V2_F | Water bottle
//    Land_BriefingRoomDesk_01_F | Briefing Room Desk
//    Land_BriefingRoomScreen_01_F | Briefing Room Screen
//    Land_Bucket_clean_F | Bucket (Clean)
//    Land_Bucket_F | Bucket
//    Land_Bucket_painted_F | Bucket (Paint)
//    Land_BucketNavy_F | Bucket (NAVY)
//    Land_BulletTrap_01_F | Bullet Trap
//    Land_ButaneCanister_F | Butane canister
//    Land_ButaneTorch_F | Butane torch
//    Land_Camera_01_F | Camera
//    Land_Can_Dented_F | Can (Dented)
//    Land_Can_Rusty_F | Can (Rusty)
//    Land_Can_V1_F | Can (Spirit)
//    Land_Can_V2_F | Can (Franta)
//    Land_Can_V3_F | Can (RedGull)
//    Land_CanisterFuel_Blue_F | Canister (Fuel, Blue)
//    Land_CanisterFuel_F | Canister (Fuel)
//    Land_CanisterFuel_Red_F | Canister (Fuel, Red)
//    Land_CanisterFuel_White_F | Canister (Fuel, White)
//    Land_CanisterOil_F | Canister (Oil)
//    Land_CanisterPlastic_F | Canister (Plastic)
//    Land_CanOpener_F | Can opener
//    Land_Canteen_F | Canteen
//    Land_CarBattery_01_F | Car Battery (Truck)
//    Land_CarBattery_02_F | Car Battery (Car)
//    Land_CerealsBox_F | Cereal box
//    Land_Chainsaw_green_RF | Chainsaw (Green)
//    Land_Chainsaw_RF | Chainsaw (Orange)
//    Land_Computer_01_black_F | Rugged Computer (Black)
//    Land_Computer_01_olive_F | Rugged Computer (Olive)
//    Land_Computer_01_sand_F | Rugged Computer (Sand)
//    Land_Cup_Dates_lxWS | Cup (Dates)
//    Land_Cup_Empty_lxWS | Cup (Empty)
//    Land_Cup_Sugar_lxWS | Cup (Sugar)
//    Land_DeckTractor_01_F | Deck Tractor
//    Land_Defibrillator_F | Defibrillator
//    Land_DeskChair_01_black_F | Rugged Desk Chair (Black)
//    Land_DeskChair_01_olive_F | Rugged Desk Chair (Olive)
//    Land_DeskChair_01_sand_F | Rugged Desk Chair (Sand)
//    Land_DisinfectantSpray_F | Disinfectant spray
//    Land_Document_01_F | Document (Top Secret)
//    Land_DuctTape_F | Duct tape
//    Land_EmergencyBlanket_01_discarded_F | Emergency Blanket (Discarded)
//    Land_EmergencyBlanket_01_F | Emergency Blanket
//    Land_EmergencyBlanket_01_stack_F | Emergency Blankets
//    Land_EmergencyBlanket_02_discarded_F | Emergency Blanket (Thermal, Discarded)
//    Land_EmergencyBlanket_02_F | Emergency Blanket (Thermal)
//    Land_EmergencyBlanket_02_stack_F | Emergency Blankets (Thermal)
//    Land_File1_F | File (Documents)
//    Land_File2_F | File (Research)
//    Land_File_research_F | File (Top Secret)
//    Land_FilePhotos_F | File (Photos)
//    Land_FireExtinguisher_F | Fire extinguisher
//    Land_FirstAidKit_01_closed_F | First Aid Box (Closed)
//    Land_FirstAidKit_01_open_F | First Aid Box (Open)
//    Land_FlatTV_01_F | Flat TV
//    Land_FlowerPot_01_F | Flowerpot (Soil)
//    Land_FlowerPot_01_Flower_F | Flowerpot (Plant)
//    Land_FMradio_F | FM Radio
//    Land_Folding_ladder_big_F | Folding Ladder
//    Land_FoodContainer_01_F | Food Container (Large)
//    Land_FoodContainer_01_White_F | Food Container (Large, White)
//    Land_FoodSack_01_dmg_brown_F | Food Sack (Brown, Destroyed)
//    Land_FoodSack_01_dmg_brown_idap_F | Food Sack (Brown, Destroyed) [IDAP]
//    Land_FoodSack_01_dmg_white_idap_F | Food Sack (White, Destroyed) [IDAP]
//    Land_FoodSack_01_empty_brown_F | Food Sack (Brown, Empty)
//    Land_FoodSack_01_empty_brown_idap_F | Food Sack (Brown, Empty) [IDAP]
//    Land_FoodSack_01_empty_white_idap_F | Food Sack (White, Empty) [IDAP]
//    Land_FoodSack_01_full_brown_F | Food Sack (Brown, Full)
//    Land_FoodSack_01_full_brown_idap_F | Food Sack (Brown, Full) [IDAP]
//    Land_FoodSack_01_full_white_idap_F | Food Sack (White, Full) [IDAP]
//    Land_FoodSacks_01_cargo_brown_F | Cargo Net (Sacks, Brown)
//    Land_FoodSacks_01_cargo_brown_idap_F | Cargo Net (Sacks, Brown) [IDAP]
//    Land_FoodSacks_01_cargo_white_idap_F | Cargo Net (Sacks, White) [IDAP]
//    Land_FoodSacks_01_large_brown_F | Food Sacks (Large Heap, Brown)
//    Land_FoodSacks_01_large_brown_idap_F | Food Sacks (Large Heap, Brown) [IDAP]
//    Land_FoodSacks_01_large_white_idap_F | Food Sacks (Large Heap, White) [IDAP]
//    Land_FoodSacks_01_small_brown_F | Food Sacks (Small Heap, Brown)
//    Land_FoodSacks_01_small_brown_idap_F | Food Sacks (Small Heap, Brown) [IDAP]
//    Land_FoodSacks_01_small_white_idap_F | Food Sacks (Small Heap, White) [IDAP]
//    Land_GamingSet_01_camera_F | Gaming Set (Camera)
//    Land_GamingSet_01_console_F | Gaming Set (Console)
//    Land_GamingSet_01_controller_F | Gaming Set (Controller)
//    Land_GamingSet_01_powerSupply_F | Gaming Set (Power Supply)
//    Land_GasCanister_F | Gas canister
//    Land_GasCooker_F | Gas cooker
//    Land_Glass_lxWS | Glass
//    Land_Glasses_RF | Common Glasses
//    Land_Graffiti_01_F | Graffiti (Anti-war)
//    Land_Graffiti_02_F | Graffiti (Freedom)
//    Land_Graffiti_03_F | Graffiti (Crime)
//    Land_Graffiti_04_F | Graffiti (Anti-state)
//    Land_Graffiti_05_F | Graffiti (FIA)
//    Land_HandyCam_F | Handheld Camera
//    Land_HDMICable_01_F | HDMI Cable
//    Land_HeatPack_F | Heatpack
//    Land_IntravenBag_01_empty_F | IV Bag (Empty)
//    Land_IntravenBag_01_full_F | IV Bag (Full)
//    Land_IntravenStand_01_1bag_F | IV Stand (1 Bag)
//    Land_IntravenStand_01_2bags_F | IV Stand (2 Bags)
//    Land_IntravenStand_01_empty_F | IV Stand (Empty)
//    Land_IPPhone_01_black_F | Rugged IP Telephone (Black)
//    Land_IPPhone_01_olive_F | Rugged IP Telephone (Olive)
//    Land_IPPhone_01_sand_F | Rugged IP Telephone (Sand)
//    Land_Ketchup_01_F | Ketchup Bottle
//    Land_Lab_beaker_F | Beaker
//    Land_Lab_bunsen_F | Bunsen Burner
//    Land_Lab_cylinder_beaker_F | Cylinder Beaker
//    Land_Lab_dropper_F | Dropper
//    Land_Lab_erlenmeyer_flask_F | Erlenmeyer Flask
//    Land_Lab_microscope_F | Microscope
//    Land_Lab_petri_dish_F | Petri Dish
//    Land_Lab_triplebeam_F | Triple Beam Balance
//    Land_Lab_vial_F | Vial
//    Land_Lab_volume_beaker_F | Volume Beaker
//    Land_Laptop_02_F | Old Laptop (Closed)
//    Land_Laptop_02_unfolded_F | Old Laptop (Open)
//    Land_Laptop_03_black_F | Rugged Laptop (Black, Open)
//    Land_laptop_03_closed_black_F | Rugged Laptop (Black, Closed)
//    Land_laptop_03_closed_olive_F | Rugged Laptop (Olive, Closed)
//    Land_laptop_03_closed_sand_F | Rugged Laptop (Sand, Closed)
//    Land_Laptop_03_olive_F | Rugged Laptop (Olive, Open)
//    Land_Laptop_03_sand_F | Rugged Laptop (Sand, Open)
//    Land_Laptop_device_F | Laptop (Device readings)
//    Land_Laptop_F | Laptop (Closed)
//    Land_Laptop_Intel_01_F | Laptop (Open, Intel v1)
//    Land_Laptop_Intel_02_F | Laptop (Open, Intel v2)
//    Land_Laptop_Intel_Oldman_F | Laptop (Open, Intel v3)
//    Land_Laptop_unfolded_F | Laptop (Open)
//    Land_Leaflet_01_F | Leaflet (Government)
//    Land_Leaflet_02_F | Leaflet (Protest)
//    Land_Leaflet_03_F | Leaflet (Curfew)
//    Land_Leaflet_04_F | Leaflet (Political)
//    Land_LiquidDispenser_01_F | Liquid Dispenser
//    Land_Locker_01_closed_blue_F | Locker (Closed, Blue)
//    Land_Locker_01_closed_F | Locker (Closed)
//    Land_Locker_01_open_blue_F | Locker (Open, Blue)
//    Land_Locker_01_open_F | Locker (Open)
//    Land_LuggageHeap_01_F | Luggage (Couple)
//    Land_LuggageHeap_02_F | Luggage (Few)
//    Land_LuggageHeap_03_F | Luggage (Bunch)
//    Land_LuggageHeap_04_F | Luggage (Pile)
//    Land_LuggageHeap_05_F | Luggage (Heap)
//    Land_Magazine_rifle_F | Magazine (Rifle)
//    Land_Map_altis_F | Map of Altis
//    Land_Map_blank_F | Map
//    Land_Map_Enoch_F | Map of Livonia
//    Land_Map_F | Sleeved map
//    Land_Map_Malden_F | Map of Malden
//    Land_Map_stratis_F | Map of Stratis
//    Land_Map_Tanoa_F | Map of Tanoa
//    Land_Map_unfolded_Altis_F | Sleeved Map (Altis)
//    Land_Map_unfolded_Enoch_F | Sleeved Map (Livonia)
//    Land_Map_unfolded_F | Sleeved map (Stratis)
//    Land_Map_unfolded_Malden_F | Sleeved Map (Malden)
//    Land_Map_unfolded_Tanoa_F | Sleeved Map (Tanoa)
//    Land_Matches_F | Box of matches
//    Land_MetalWire_F | Metal wire
//    Land_Microwave_01_F | Microwave Oven
//    Land_Missle_Trolley_02_F | Missile Trolley
//    Land_MobilePhone_old_F | Mobile Phone (Old)
//    Land_MobilePhone_smart_F | Mobile Phone (New)
//    Land_Money_F | Pile of Money
//    Land_MRL_Magazine_01_F | MRL Magazine
//    Land_MultiScreenComputer_01_black_F | Rugged Multi-Screen Computer (Black)
//    Land_MultiScreenComputer_01_closed_black_F | Rugged Multi-Screen Computer (Black, Closed)
//    Land_MultiScreenComputer_01_closed_olive_F | Rugged Multi-Screen Computer (Olive, Closed)
//    Land_MultiScreenComputer_01_closed_sand_F | Rugged Multi-Screen Computer (Sand, Closed)
//    Land_MultiScreenComputer_01_olive_F | Rugged Multi-Screen Computer (Olive)
//    Land_MultiScreenComputer_01_sand_F | Rugged Multi-Screen Computer (Sand)
//    Land_Mustard_01_F | Mustard Bottle
//    Land_Notepad_F | Notepad
//    Land_Orange_01_F | Orange
//    Land_PainKillers_F | Pain killers
//    Land_PaperBox_01_open_boxes_F | Box (Open, Boxes) [IDAP]
//    Land_PaperBox_01_open_empty_F | Box (Open, Empty)
//    Land_PaperBox_01_open_water_F | Box (Open, Water) [IDAP]
//    Land_PaperBox_01_small_closed_brown_F | Cardboard Box (Brown)
//    Land_PaperBox_01_small_closed_brown_food_F | Cardboard Box (Food) [IDAP]
//    Land_PaperBox_01_small_closed_brown_IDAP_F | Cardboard Box (Brown) [IDAP]
//    Land_PaperBox_01_small_closed_white_IDAP_F | Cardboard Box (White) [IDAP]
//    Land_PaperBox_01_small_closed_white_med_F | Cardboard Box (Medical) [IDAP]
//    Land_PaperBox_01_small_destroyed_brown_F | Cardboard Box (Brown, Destroyed)
//    Land_PaperBox_01_small_destroyed_brown_IDAP_F | Cardboard Box (Brown, Destroyed) [IDAP]
//    Land_PaperBox_01_small_destroyed_white_IDAP_F | Cardboard Box (White, Destroyed) [IDAP]
//    Land_PaperBox_01_small_open_brown_F | Cardboard Box (Brown, Open)
//    Land_PaperBox_01_small_open_brown_IDAP_F | Cardboard Box (Brown, Open) [IDAP]
//    Land_PaperBox_01_small_open_white_IDAP_F | Cardboard Box (White, Open) [IDAP]
//    Land_PaperBox_01_small_ransacked_brown_F | Cardboard Box (Brown, Ransacked)
//    Land_PaperBox_01_small_ransacked_brown_IDAP_F | Cardboard Box (Brown, Ransacked) [IDAP]
//    Land_PaperBox_01_small_ransacked_white_IDAP_F | Cardboard Box (White, Ransacked) [IDAP]
//    Land_PaperBox_01_small_stacked_F | Cardboard Boxes (Brown) [IDAP]
//    Land_PCSet_01_case_F | PC Set (Case)
//    Land_PCSet_01_keyboard_F | PC Set (Keyboard)
//    Land_PCSet_01_mouse_F | PC Set (Mouse)
//    Land_PCSet_01_mousepad_F | PC Set (Mouse Pad)
//    Land_PCSet_01_mousepad_IDAP_F | PC Set (Mouse Pad, IDAP)
//    Land_PCSet_01_screen_F | PC Set (Screen)
//    Land_PCSet_Intel_01_F | PC Set (Screen, Intel v1)
//    Land_PCSet_Intel_02_F | PC Set (Screen, Intel v2)
//    Land_PenBlack_F | Pen (Black)
//    Land_PencilBlue_F | Pencil (Blue)
//    Land_PencilGreen_F | Pencil (Green)
//    Land_PencilRed_F | Pencil (Red)
//    Land_PencilYellow_F | Pencil (Yellow)
//    Land_PenRed_F | Pen (Red)
//    Land_PensAndPencils_F | Pens and Pencils
//    Land_Photoframe_01_broken_F | Photoframe (broken)
//    Land_Photoframe_01_F | Photoframe
//    Land_Photoframe_02_standing_F | Photo Frame (Portrait, Standing)
//    Land_Photos_V1_F | Photos 1
//    Land_Photos_V2_F | Photos 2
//    Land_Photos_V3_F | Photos 3
//    Land_Photos_V4_F | Photos 4
//    Land_Photos_V5_F | Photos 5
//    Land_Photos_V6_F | Photos 6
//    Land_PlasticBucket_01_closed_F | Plastic Bucket (Closed)
//    Land_PlasticBucket_01_open_F | Plastic Bucket (Open)
//    Land_PlasticNetFence_01_roll_F | Plastic Net Fence (Roll)
//    Land_PortableCabinet_01_4drawers_black_F | Rugged Portable Cabinet (Black, 4 Drawers)
//    Land_PortableCabinet_01_4drawers_olive_F | Rugged Portable Cabinet (Olive, 4 Drawers)
//    Land_PortableCabinet_01_4drawers_sand_F | Rugged Portable Cabinet (Sand, 4 Drawers)
//    Land_PortableCabinet_01_7drawers_black_F | Rugged Portable Cabinet (Black, 7 Drawers)
//    Land_PortableCabinet_01_7drawers_olive_F | Rugged Portable Cabinet (Olive, 7 Drawers)
//    Land_PortableCabinet_01_7drawers_sand_F | Rugged Portable Cabinet (Sand, 7 Drawers)
//    Land_PortableCabinet_01_bookcase_black_F | Rugged Portable Cabinet (Black, Books)
//    Land_PortableCabinet_01_bookcase_olive_F | Rugged Portable Cabinet (Olive, Books)
//    Land_PortableCabinet_01_bookcase_sand_F | Rugged Portable Cabinet (Sand, Books)
//    Land_PortableCabinet_01_closed_black_F | Rugged Portable Cabinet (Black, Closed)
//    Land_PortableCabinet_01_closed_olive_F | Rugged Portable Cabinet (Olive, Closed)
//    Land_PortableCabinet_01_closed_sand_F | Rugged Portable Cabinet (Sand, Closed)
//    Land_PortableCabinet_01_lid_black_F | Rugged Portable Cabinet Lid (Black)
//    Land_PortableCabinet_01_lid_olive_F | Rugged Portable Cabinet Lid (Olive)
//    Land_PortableCabinet_01_lid_sand_F | Rugged Portable Cabinet Lid (Sand)
//    Land_PortableCabinet_01_medical_F | Rugged Portable Cabinet (Medical, 7 Drawers)
//    Land_PortableDesk_01_black_F | Rugged Portable Desk (Black)
//    Land_PortableDesk_01_olive_F | Rugged Portable Desk (Olive)
//    Land_PortableDesk_01_panel_black_F | Rugged Portable Desk (Black, Panel)
//    Land_PortableDesk_01_panel_olive_F | Rugged Portable Desk (Olive, Panel)
//    Land_PortableDesk_01_panel_sand_F | Rugged Portable Desk (Sand, Panel)
//    Land_PortableDesk_01_sand_F | Rugged Portable Desk (Sand)
//    Land_PortableGenerator_01_black_F | Rugged Portable Generator (Black)
//    Land_PortableGenerator_01_F | Rugged Portable Generator
//    Land_PortableGenerator_01_sand_F | Rugged Portable Generator (Sand)
//    Land_PortableLongRangeRadio_F | Portable Long-range Radio
//    Land_PortableServer_01_black_F | Rugged Portable Server Unit (Black)
//    Land_PortableServer_01_cover_black_F | Rugged Portable Server Unit Cover (Black)
//    Land_PortableServer_01_cover_olive_F | Rugged Portable Server Unit Cover (Olive)
//    Land_PortableServer_01_cover_sand_F | Rugged Portable Server Unit Cover (Sand)
//    Land_PortableServer_01_olive_F | Rugged Portable Server Unit (Olive)
//    Land_PortableServer_01_sand_F | Rugged Portable Server Unit (Sand)
//    Land_PortableSolarPanel_01_folded_olive_F | Flexible Solar Panel (Olive, Folded)
//    Land_PortableSolarPanel_01_folded_sand_F | Flexible Solar Panel (Sand, Folded)
//    Land_PortableSolarPanel_01_olive_F | Flexible Solar Panel (Olive)
//    Land_PortableSolarPanel_01_sand_F | Flexible Solar Panel (Sand)
//    Land_PortableSpeakers_01_F | Portable Speakers
//    Land_PortableWeatherStation_01_olive_F | Portable Weather Station (Olive)
//    Land_PortableWeatherStation_01_sand_F | Portable Weather Station (Sand)
//    Land_PortableWeatherStation_01_white_F | Portable Weather Station (White)
//    Land_Poster_01_F | Poster (Government)
//    Land_Poster_02_F | Poster (Government, Defaced)
//    Land_Poster_03_F | Poster (Government, Ripped)
//    Land_Poster_04_F | Poster (Protest)
//    Land_Poster_05_F | Poster (Protest, Defaced)
//    Land_Poster_06_F | Poster (Protest, Ripped)
//    Land_Pottery_1_lxWS | Pottery (v1)
//    Land_Pottery_2_lxWS | Pottery (v2)
//    Land_Pottery_3_lxWS | Pottery (v3)
//    Land_Pottery_4_lxWS | Pottery (v4)
//    Land_Pottery_5_lxWS | Pottery Pile (v1)
//    Land_Pottery_6_lxWS | Pottery Pile (v2)
//    Land_Pottery_7_lxWS | Pottery Pile (v3)
//    Land_PowderedMilk_F | Powdered milk
//    Land_Printer_01_F | Printer
//    Land_Projector_01_F | Projector
//    Land_Pumpkin_01_F | Pumpkin
//    Land_Pumpkin_01_halloween_F | Pumpkin (Halloween)
//    Land_RefuelingHose_01_F | Refueling Hose
//    Land_RiceBox_F | Rice
//    Land_Rope_01_F | Rigging Rope
//    Land_Router_01_black_F | Rugged Router (Black)
//    Land_Router_01_olive_F | Rugged Router (Olive)
//    Land_Router_01_sand_F | Rugged Router (Sand)
//    Land_SatelliteAntenna_01_F | Satellite Antenna
//    Land_SatellitePhone_F | Satellite Phone
//    Land_Scabbard_lxWS | Takoba (Scabbard)
//    Land_ShotTimer_01_F | Shot Timer
//    Land_Shovel_F | Shovel
//    Land_SolarPanel_04_black_F | Rugged Solar Panel (Black)
//    Land_SolarPanel_04_olive_F | Rugged Solar Panel (Olive)
//    Land_SolarPanel_04_sand_F | Rugged Solar Panel (Sand)
//    Land_Stethoscope_01_F | Stethoscope
//    Land_Stretcher_01_F | Stretcher
//    Land_Stretcher_01_folded_F | Stretcher (Folded)
//    Land_Stretcher_01_folded_olive_F | Stretcher (Olive, Folded)
//    Land_Stretcher_01_folded_sand_F | Stretcher (Sand, Folded)
//    Land_Stretcher_01_olive_F | Stretcher (Olive)
//    Land_Stretcher_01_sand_F | Stretcher (Sand)
//    Land_Suitcase_F | Suitcase
//    Land_SurvivalRadio_F | Survival Radio
//    Land_Tablet_01_F | Tablet
//    Land_Tablet_02_black_F | Rugged Tablet (Black)
//    Land_Tablet_02_F | Rugged Tablet
//    Land_Tablet_02_sand_F | Rugged Tablet (Sand)
//    Land_Tableware_01_cup_F | Plastic Cup
//    Land_Tableware_01_fork_F | Disposable Fork
//    Land_Tableware_01_knife_F | Disposable Knife
//    Land_Tableware_01_napkin_F | Napkin
//    Land_Tableware_01_spoon_F | Disposable Spoon
//    Land_Tableware_01_stackOfNapkins_F | Napkin Stack
//    Land_Tableware_01_tray_F | Plastic Serving Tray
//    Land_TacticalBacon_F | Tactical Bacon
//    Land_Tajine_lxWS | Tajine (Big)
//    Land_Tajine_small_lxWS | Tajine
//    Land_Takouba_lxWS | Takoba
//    Land_TankEngine_01_F | Tank engine
//    Land_TankEngine_01_used_F | Tank engine (Used)
//    Land_TankRoadWheels_01_single_F | Tank road wheel
//    Land_TankSprocketWheels_01_single_F | Tank sprocket wheel
//    Land_TankTracks_01_long_F | Tank tracks (Long)
//    Land_TankTracks_01_short_F | Tank tracks (Short)
//    Land_Teapot_lxWS | Tea Pot
//    Land_TinContainer_F | Tin container
//    Land_TorqueWrench_01_F | Torque Wrench
//    Land_TowBar_01_F | Towbar
//    Land_Tray_lxWS | Tray
//    Land_TripodScreen_01_dual_v1_black_F | Rugged Dual Screen (Black, Horizontal)
//    Land_TripodScreen_01_dual_v1_F | Rugged Dual Screen (Horizontal)
//    Land_TripodScreen_01_dual_v1_sand_F | Rugged Dual Screen (Sand, Horizontal)
//    Land_TripodScreen_01_dual_v2_black_F | Rugged Dual Screen (Black, Vertical)
//    Land_TripodScreen_01_dual_v2_F | Rugged Dual Screen (Vertical)
//    Land_TripodScreen_01_dual_v2_sand_F | Rugged Dual Screen (Sand, Vertical)
//    Land_TripodScreen_01_large_black_F | Rugged Large Screen (Black)
//    Land_TripodScreen_01_large_F | Rugged Large Screen
//    Land_TripodScreen_01_large_sand_F | Rugged Large Screen (Sand)
//    Land_VitaminBottle_F | Vitamin bottle
//    Land_Wallet_01_F | Wallet
//    Land_WaterBottle_01_cap_F | Water Bottle Cap
//    Land_WaterBottle_01_compressed_F | Water Bottle (Empty, Compressed)
//    Land_WaterBottle_01_empty_F | Water Bottle (Empty)
//    Land_WaterBottle_01_full_F | Water Bottle (Full)
//    Land_WaterBottle_01_pack_F | Water Bottle Pack
//    Land_WaterBottle_01_stack_F | Water Bottle Stack
//    Land_WaterPurificationTablets_F | Water purification tablets
//    Leaflet_05_F | Leaflet
//    Leaflet_05_New_F | Leaflet (New)
//    Leaflet_05_Old_F | Leaflet (Old)
//    Leaflet_05_Stack_F | Leaflet (Stack)
//    MemorialWreath_01_Altis_Standing_F | Memorial Wreath (Standing, Altis)
//    MemorialWreath_01_Livonia_Standing_F | Memorial Wreath (Standing, Livonia)
//    MemorialWreath_01_Standing_F | Memorial Wreath (Standing)
//    MemorialWreath_01_Tanoa_Standing_F | Memorial Wreath (Standing, Horizon Islands)
//    MemorialWreath_01_UK_Standing_F | Memorial Wreath (Standing, UK)
//    MemorialWreath_01_US_Standing_F | Memorial Wreath (Standing, US)
//    Newspaper_01_F | Newspaper
//    OmniDirectionalAntenna_01_black_F | Omnidirectional Antenna (Black)
//    OmniDirectionalAntenna_01_olive_F | Omnidirectional Antenna (Olive)
//    OmniDirectionalAntenna_01_sand_F | Omnidirectional Antenna (Sand)
//    SatelliteAntenna_01_Black_F | Satellite Antenna (Black)
//    SatelliteAntenna_01_Olive_F | Satellite Antenna (Olive)
//    SatelliteAntenna_01_Sand_F | Satellite Antenna (Sand)
//    SatelliteAntenna_01_Small_Black_F | Satellite Antenna (Small, Black)
//    SatelliteAntenna_01_Small_Olive_F | Satellite Antenna (Small, Olive)
//    SatelliteAntenna_01_Small_Sand_F | Satellite Antenna (Small, Sand)
//    SCBACylinder_01_CUR_F | SCBA Cylinder (CUR)
//    SCBACylinder_01_F | SCBA Cylinder
//    ShootingMat_01_folded_Khaki_F | Shooting Mat (Folded, Khaki)
//    ShootingMat_01_folded_Olive_F | Shooting Mat (Folded, Olive)
//    ShootingMat_01_folded_OPFOR_F | Shooting Mat (Folded, Hex)
//    ShootingMat_01_Khaki_F | Shooting Mat (Khaki)
//    ShootingMat_01_Olive_F | Shooting Mat (Olive)
//    ShootingMat_01_OPFOR_F | Shooting Mat (Hex)
//    SpaceshipCapsule_01_container_F | Space Capsule Container
//    SpinalBoard_01_black_F | Spinal Board (Black)
//    SpinalBoard_01_orange_F | Spinal Board (Orange)
//    SpinalBoard_01_white_F | Spinal Board (White)
//    Sponge_01_dry_F | Sponge (Dry)
//    Sponge_01_Wet_F | Sponge (Wet)
//    StretcherRollerSystem_01_F | Stretcher Roller System
//    TrashBagHolder_01_F | Trash Bag Holder
//    Truck_01_Rack_F | HEMTT Rack
//    Truck_01_Rack_tropic_F | HEMTT Rack (Tropic)
//    UGV_02_ExternalDetector_F | Special Measurement Device
//    UGV_02_Tracks_F | ED-1 Tracks
//    UGV_02_Wheel_F | ED-1 Wheel
//    WalkingFrame_01_F | Walking Frame
//
// -- Structures (5) --
//    ACE_ConcertinaWire | Concertina Wire
//    Land_GalleryInterior_01_East_F | Gallery Room (East)
//    Land_GalleryInterior_01_Rotunda_F | Gallery Room (Rotunda)
//    Land_GalleryInterior_01_Sala_F | Gallery Room (Sala)
//    Land_GalleryInterior_01_West_F | Gallery Room (West)
//
// -- Structures_Airport (7) --
//    Land_Airport_01_controlTower_F | Airport Control Tower (Metal)
//    Land_Airport_01_hangar_F | Hangar (Small)
//    Land_Airport_01_terminal_F | Airport Terminal (Wooden)
//    Land_Airport_02_controlTower_F | Airport Control Tower (Yellow)
//    Land_Airport_02_terminal_F | Airport Terminal (White)
//    Land_AirstripPlatform_01_F | Airstrip Platform
//    Land_AirstripPlatform_01_footer_F | Airstrip Platform Footer
//
// -- Structures_Commercial (102) --
//    Land_Atm_01_F | ATM (Altis)
//    Land_ATM_01_malden_F | ATM (Malden)
//    Land_Atm_02_F | ATM (Altis, Sheltered)
//    Land_ATM_02_malden_F | ATM (Malden, Sheltered)
//    Land_Billboard_02_blank_F | Billboard 2 (Blank)
//    Land_Billboard_02_carrental_F | Billboard 2 (Car Rental)
//    Land_Billboard_02_chernarus_F | Billboard 2 (Chernarus)
//    Land_Billboard_02_chevre2_F | Billboard 2 (Goat Farm)
//    Land_Billboard_02_ion_F | Billboard 2 (ION)
//    Land_Billboard_02_leader_F | Billboard 2 (Leader)
//    Land_Billboard_02_mars2_F | Billboard 2 (MarsX)
//    Land_Billboard_02_monte_F | Billboard 2 (Monte)
//    Land_Billboard_02_redstone_F | Billboard 2 (Redstone)
//    Land_Billboard_02_surreal_F | Billboard 2 (SurRealité)
//    Land_Billboard_02_wine_F | Billboard 2 (Wine)
//    Land_Billboard_03_aan_F | Billboard 3 (AAN)
//    Land_Billboard_03_action_F | Billboard 3 (Malden Tours)
//    Land_Billboard_03_argois_F | Billboard 3 (Le Argois)
//    Land_Billboard_03_blank_F | Billboard 3 (Blank)
//    Land_Billboard_03_bluking_F | Billboard 3 (Bluking)
//    Land_Billboard_03_cheese_F | Billboard 3 (Cheese)
//    Land_Billboard_03_chevre_F | Billboard 3 (Goat Farm 2)
//    Land_Billboard_03_duckit_F | Billboard 3 (Duck It)
//    Land_Billboard_03_getlost_F | Billboard 3 (Get Lost)
//    Land_Billboard_03_ionbase_F | Billboard 3 (ION 2)
//    Land_Billboard_03_koke_F | Billboard 3 (Burstkoke)
//    Land_Billboard_03_lyfe_F | Billboard 3 (Lyfe)
//    Land_Billboard_03_mars_F | Billboard 3 (Mars)
//    Land_Billboard_03_maskrtnik_F | Billboard 3 (Maskrtnik)
//    Land_Billboard_03_olives_F | Billboard 3 (Olives)
//    Land_Billboard_03_pate_F | Billboard 3 (Pate)
//    Land_Billboard_03_pills_F | Billboard 3 (Pills)
//    Land_Billboard_03_plane_F | Billboard 3 (Plane)
//    Land_Billboard_03_supermarket_F | Billboard 3 (Supermarket)
//    Land_Billboard_03_winery_F | Billboard 3 (Winery)
//    Land_Billboard_03_ygont_F | Billboard 3 (Nerxydo)
//    Land_Billboard_04_blank_F | Billboard 4 (Blank)
//    Land_Billboard_04_koke_redstone_F | Billboard 4 (Burstkoke & Redstone)
//    Land_Billboard_04_mars_lyfe_F | Billboard 4 (Mars & Lyfe)
//    Land_Billboard_04_supermarket_maskrtnik_F | Billboard 4 (Supermarket & Maskrtnik)
//    Land_Billboard_F | Billboard 1 (Blank)
//    Land_CarService_F | Workshop
//    Land_d_Shop_01_V1_F | Shop House (Destroyed)
//    Land_d_Shop_02_V1_F | Shop (Destroyed)
//    Land_Dome_Big_F | Dome (Big, White)
//    Land_Dome_Small_F | Dome (White)
//    Land_Dome_Small_WIP2_F | Dome (White, Under Construction, Nearly)
//    Land_Dome_Small_WIP_F | Dome (White, Under Construction, Half)
//    Land_fs_feed_F | Gas Station (Fuel, Pump)
//    Land_fs_price_F | Gas Station (Fuel, Prices)
//    Land_fs_roof_F | Gas Station (Fuel, Roof)
//    Land_fs_sign_F | Gas Station (Fuel, Sign)
//    Land_FuelStation_01_prices_malevil_F | Gas Station (Malevil, Sign)
//    Land_FuelStation_01_pump_malevil_F | Gas Station (Malevil, Pump)
//    Land_FuelStation_01_roof_malevil_F | Gas Station (Malevil, Roof)
//    Land_FuelStation_02_prices_F | Gas Station (Tucan Oil, Prices)
//    Land_FuelStation_02_prices_lxWS | Gas Station (Afric Oil, Prices)
//    Land_FuelStation_02_pump_F | Gas Station (Tucan Oil, Pump)
//    Land_FuelStation_02_pump_lxWS | Gas Station (Afric Oil, Pump)
//    Land_FuelStation_02_roof_F | Gas Station (Tucan Oil, Roof)
//    Land_FuelStation_02_roof_lxWS | Gas Station (Afric Oil, Roof)
//    Land_FuelStation_02_sign_F | Gas Station (Tucan Oil, Sign)
//    Land_FuelStation_02_sign_lxWS | Gas Station (Afric Oil, Sign)
//    Land_FuelStation_02_workshop_F | Gas Station (Tucan Oil, Workshop)
//    Land_FuelStation_Build_F | Gas Station (Sun Oil, Shop)
//    Land_FuelStation_Feed_F | Gas Station (Sun Oil, Pump)
//    Land_FuelStation_Shed_F | Gas Station (Sun Oil, Roof)
//    Land_FuelStation_Sign_F | Gas Station (Sun Oil, Prices)
//    Land_GH_Gazebo_F | Ghost Hotel (Gazebo)
//    Land_GH_House_1_F | Ghost Hotel (House)
//    Land_GH_House_2_F | Ghost Hotel (Bungalow)
//    Land_GH_Platform_F | Ghost Hotel (Platform)
//    Land_GH_Pool_F | Ghost Hotel (Pool)
//    Land_GH_Stairs_F | Ghost Hotel (Stairs)
//    Land_i_Shop_01_V1_F | Shop House (White)
//    Land_i_Shop_01_V2_F | Shop House (Yellow)
//    Land_i_Shop_01_V3_F | Shop House (Stone)
//    Land_i_Shop_02_b_blue_F | Shop (Blue)
//    Land_i_Shop_02_b_brown_F | Shop (Yellow & Brown)
//    Land_i_Shop_02_b_pink_F | Shop (Pink)
//    Land_i_Shop_02_b_white_F | Shop (White & Brown)
//    Land_i_Shop_02_b_whiteblue_F | Shop (White & Blue)
//    Land_i_Shop_02_b_yellow_F | Shop (Yellow & White)
//    Land_i_Shop_02_V1_F | Shop (White)
//    Land_i_Shop_02_V2_F | Shop (Yellow)
//    Land_i_Shop_02_V3_F | Shop (Stone)
//    Land_Kiosk_blueking_F | Kiosk (Blueking)
//    Land_Kiosk_gyros_F | Kiosk (Gyros)
//    Land_Kiosk_papers_F | Kiosk (Papers)
//    Land_Kiosk_redburger_F | Kiosk (Redburger)
//    Land_Offices_01_V1_F | Office Building
//    Land_PhoneBooth_01_F | Phone Booth (Altis, Clean)
//    Land_PhoneBooth_01_lxWS | Phone Booth
//    Land_PhoneBooth_01_malden_F | Phone Booth (Malden, Clean)
//    Land_PhoneBooth_02_F | Phone Booth (Altis, Tagged)
//    Land_PhoneBooth_02_malden_F | Phone Booth (Malden, Tagged)
//    Land_Research_house_V1_F | Research House
//    Land_Research_HQ_F | Research HQ
//    Land_SignMonolith_01_F | Company Sign
//    Land_u_Shop_01_V1_F | Shop House (Abandoned)
//    Land_u_Shop_02_V1_F | Shop (Abandoned)
//    Land_WIP_F | Unfinished Complex
//
// -- Structures_Cultural (101) --
//    Land_Amphitheater_F | Amphitheater
//    Land_Ancient_Wall_4m_F | Ancient Wall
//    Land_Ancient_Wall_8m_F | Ancient Wall (Long)
//    Land_AncientHead_01_F | Ancient Head
//    Land_AncientPillar_damaged_F | Ancient Pillar (Damaged)
//    Land_AncientPillar_F | Ancient Pillar
//    Land_AncientPillar_fallen_F | Ancient Pillar (Fallen)
//    Land_AncientStatue_01_F | Ancient Statue (Jaw)
//    Land_AncientStatue_02_F | Ancient Statue (Sunflower)
//    Land_BasaltKerb_01_2m_d_F | Basalt Curb (2 m, Damaged)
//    Land_BasaltKerb_01_2m_F | Basalt Curb (2 m)
//    Land_BasaltKerb_01_4m_F | Basalt Curb (4 m)
//    Land_BasaltKerb_01_pile_F | Basalt Curbstone Pile
//    Land_BasaltKerb_01_platform_F | Basalt Curbstone Platform
//    Land_BasaltWall_01_4m_F | Basalt Wall (4 m)
//    Land_BasaltWall_01_8m_F | Basalt Wall (8 m)
//    Land_BasaltWall_01_d_left_F | Basalt Wall (Crumbled 1)
//    Land_BasaltWall_01_d_right_F | Basalt Wall (Crumbled 2)
//    Land_BasaltWall_01_gate_F | Basalt Wall Gate
//    Land_BellTower_01_V1_F | Bell Tower (Small, New)
//    Land_BellTower_01_V2_F | Bell Tower (Small, Old)
//    Land_BellTower_02_V1_F | Bell Tower (Big, New)
//    Land_BellTower_02_V2_F | Bell Tower (Big, Old)
//    Land_Calvary_01_V1_F | Calvary
//    Land_Calvary_02_V1_F | Calvary (New, Red)
//    Land_Calvary_02_V2_F | Calvary (New, Blue)
//    Land_Calvary_03_F | Calvary (Cross)
//    Land_Calvary_04_F | Calvary (Column)
//    Land_Camel_01_F | Camel Statue
//    Land_Camel_02_F | Camel Statue (Small)
//    Land_Castle_01_tower_F | Castle Tower
//    Land_CastleRuins_01_bastion_F | Castle Ruin (Bastion)
//    Land_CastleRuins_01_wall_10m_F | Castle Ruin (Wall, 10m)
//    Land_CastleRuins_01_wall_d_L_F | Castle Ruin (Wall, Left)
//    Land_CastleRuins_01_wall_d_R_F | Castle Ruin (Wall, Right)
//    Land_Cathedral_01_F | Cathedral
//    Land_Church_01_F | Church (Big)
//    Land_Church_01_V1_F | Church (White)
//    Land_Church_01_V2_F | Church (Yellow)
//    Land_Church_02_F | Church (Village)
//    Land_Church_03_F | Church (Town)
//    Land_Church_04_lightblue_damaged_F | Church (Light Blue, Damaged)
//    Land_Church_04_lightblue_F | Church (Light Blue)
//    Land_Church_04_lightyellow_damaged_F | Church (Light Yellow, Damaged)
//    Land_Church_04_lightyellow_F | Church (Light Yellow)
//    Land_Church_04_red_damaged_F | Church (Red, Damaged)
//    Land_Church_04_red_F | Church (Red)
//    Land_Church_04_small_lightblue_damaged_F | Church (Light Blue, Small, Damaged)
//    Land_Church_04_small_lightblue_F | Church (Light Blue, Small)
//    Land_Church_04_small_lightyellow_damaged_F | Church (Light Yellow, Small, Damaged)
//    Land_Church_04_small_lightyellow_F | Church (Light Yellow, Small)
//    Land_Church_04_small_red_damaged_F | Church (Red, Small, Damaged)
//    Land_Church_04_small_red_F | Church (Red, Small)
//    Land_Church_04_small_white_damaged_F | Church (White, Small, Damaged)
//    Land_Church_04_small_white_F | Church (White, Small)
//    Land_Church_04_small_white_red_damaged_F | Church (Red-White, Small, Damaged)
//    Land_Church_04_small_white_red_F | Church (Red-White, Small)
//    Land_Church_04_small_yellow_damaged_F | Church (Yellow, Small, Damaged)
//    Land_Church_04_small_yellow_F | Church (Yellow, Small)
//    Land_Church_04_white_damaged_F | Church (White, Damaged)
//    Land_Church_04_white_F | Church (White)
//    Land_Church_04_white_red_damaged_F | Church (Red-White, Damaged)
//    Land_Church_04_white_red_F | Church (Red-White)
//    Land_Church_04_yellow_damaged_F | Church (Yellow, Damaged)
//    Land_Church_04_yellow_F | Church (Yellow)
//    Land_Church_05_F | Small Church (Yellow)
//    Land_Fortress_01_10m_F | Fortress Wall (10 m)
//    Land_Fortress_01_5m_F | Fortress Wall (5 m)
//    Land_Fortress_01_bricks_v1_F | Fortress Rubble Pile (Large)
//    Land_Fortress_01_bricks_v1_lxWS | Fortress Rubble Pile (Large)
//    Land_Fortress_01_bricks_v2_F | Fortress Rubble Pile (Small)
//    Land_Fortress_01_bricks_v2_lxWS | Fortress Rubble Pile (Small)
//    Land_Fortress_01_cannon_F | Fortress Cannon
//    Land_Fortress_01_d_L_F | Fortress Wall (Destroyed, Left)
//    Land_Fortress_01_d_R_F | Fortress Wall (Destroyed, Right)
//    Land_Fortress_01_innerCorner_110_F | Fortress Wall (Inner Corner, 110 deg)
//    Land_Fortress_01_innerCorner_70_F | Fortress Wall (Inner Corner, 70 deg)
//    Land_Fortress_01_innerCorner_90_F | Fortress Wall (Inner Corner, 90 deg)
//    Land_Fortress_01_outterCorner_50_F | Fortress Wall (Outer Corner, 50 deg)
//    Land_Fortress_01_outterCorner_80_F | Fortress Wall (Outer Corner, 80 deg)
//    Land_Fortress_01_outterCorner_90_F | Fortress Wall (Outer Corner, 90 deg)
//    Land_Maroula_base_F | Maroula Statue (Pedestal)
//    Land_Maroula_F | Maroula Statue
//    Land_Mausoleum_01_F | Mausoleum
//    Land_Mausoleum_01_ruins_F | Mausoleum (Ruin)
//    Land_MolonLabe_F | Molon Labe
//    Land_Monument_01_F | Statue (Bushlurker)
//    Land_Monument_02_F | War Monument
//    Land_OldSculpture_01_F | Sculpture (Sun)
//    Land_OrthodoxChurch_02_F | Orthodox Church
//    Land_OrthodoxChurch_03_F | Orthodox Church (Large)
//    Land_Pedestal_01_F | Bronze Statue (Pedestal)
//    Land_Pedestal_02_F | Sandstone Statue (Pedestal)
//    Land_PetroglyphWall_01_F | Petroglyph Wall 1
//    Land_PetroglyphWall_02_F | Petroglyph Wall 2
//    Land_RaiStone_01_F | Rai Stone
//    Land_Statue_01_F | Sandstone Statue
//    Land_Statue_02_F | Bronze Statue
//    Land_Statue_03_F | Woman Statue
//    Land_StoneTanoa_01_F | Stone Tanoa
//    Land_TouristShelter_01_F | Tourist Shelter
//
// -- Structures_Fences (87) --
//    Land_BackAlley_01_l_gate_F | Back Alley Wire Fence (Gate)
//    Land_BackAlley_02_l_1m_F | Back Alley Tin Fence (1 m)
//    Land_BambooFence_01_s_4m_F | Bamboo Fence (4 m)
//    Land_BambooFence_01_s_8m_F | Bamboo Fence (8 m)
//    Land_BambooFence_01_s_d_F | Bamboo Fence (Destroyed)
//    Land_BambooFence_01_s_pole_F | Bamboo Fence (Pole)
//    Land_BarGate_01_open_F | Bar Gate (Open)
//    Land_BarGate_F | Bar Gate
//    Land_GuardRailing_01_F | Guard Railing
//    Land_IndFnc_3_D_F | Industrial Fence (Destroyed)
//    Land_IndFnc_3_F | Industrial Fence
//    Land_IndFnc_3_Hole_F | Industrial Fence (Hole)
//    Land_IndFnc_9_F | Industrial Fence (Long)
//    Land_IndFnc_Corner_F | Industrial Fence (Corner)
//    Land_IndFnc_Pole_F | Industrial Fence (Pole)
//    Land_Mil_WiredFence_F | Razor Fence
//    Land_Mil_WiredFence_Gate_F | Razor Fence (Gate)
//    Land_Mil_WiredFenceD_F | Razor Fence (Destroyed)
//    Land_Net_Fence_4m_F | Net Fence
//    Land_Net_Fence_8m_F | Net Fence (Long)
//    Land_Net_Fence_Gate_F | Net Fence (Gate)
//    Land_Net_Fence_pole_F | Net Fence (Pole)
//    Land_Net_FenceD_8m_F | Net Fence (Destroyed)
//    Land_NetFence_01_m_4m_F | Medium Net Fence (4 m)
//    Land_NetFence_01_m_8m_F | Medium Net Fence (8 m)
//    Land_NetFence_01_m_d_F | Medium Net Fence (4 m, Destroyed)
//    Land_NetFence_01_m_gate_F | Medium Net Fence (Gate)
//    Land_NetFence_01_m_pole_F | Medium Net Fence (Pole)
//    Land_NetFence_03_m_3m_corner_F | Industrial Fence (Corner)
//    Land_NetFence_03_m_3m_d_F | Industrial Fence (Destroyed)
//    Land_NetFence_03_m_3m_F | Industrial Fence
//    Land_NetFence_03_m_3m_hole_F | Industrial Fence (Hole)
//    Land_NetFence_03_m_9m_F | Industrial Fence (Long)
//    Land_NetFence_03_m_pole_F | Industrial Fence (Pole)
//    Land_New_WiredFence_10m_Dam_F | Barbed Wire Fence (Long, Destroyed)
//    Land_New_WiredFence_10m_F | Barbed Wire Fence (Long)
//    Land_New_WiredFence_5m_F | Barbed Wire Fence
//    Land_New_WiredFence_pole_F | Barbed Wire Fence (Pole)
//    Land_PalmFence_4m_lxWS | Palm Fence
//    Land_PalmFence_4md_lxWS | Palm Fence (Destroyed)
//    Land_PalmFence_8m_lxWS | Palm Fence (Long)
//    Land_PalmFence_8md_lxWS | Palm Fence (Long, Destroyed)
//    Land_Pipe_fence_4m_F | Pipe Fence (Long)
//    Land_PipeFence_01_m_2m_F | Small Concrete Pipe Wall (2 m)
//    Land_PipeFence_01_m_4m_F | Small Concrete Pipe Wall (4 m)
//    Land_PipeFence_01_m_8m_F | Small Concrete Pipe Wall (8 m)
//    Land_PipeFence_01_m_d_F | Small Concrete Pipe Wall (8 m, Damaged)
//    Land_PipeFence_01_m_gate_v1_F | Small Concrete Pipe Wall (Gate, Narrow)
//    Land_PipeFence_01_m_gate_v2_F | Small Concrete Pipe Wall (Gate, Wide)
//    Land_PipeFence_01_m_pole_F | Small Concrete Pipe Wall (Pole)
//    Land_PipeFence_02_s_4m_F | Pipe Fence (4 m)
//    Land_PipeFence_02_s_8m_F | Pipe Fence (8 m)
//    Land_PipeFence_03_m_gate_l_F | Pipe Fence (v3, Gate, Left)
//    Land_PipeFence_03_m_gate_r_F | Pipe Fence (v3, Gate, Right)
//    Land_PipeFence_04_m_gate_l_F | Pipe Fence (v4, Gate, Left)
//    Land_PipeFence_04_m_gate_r_F | Pipe Fence (v4, Gate, Right)
//    Land_PipeFence_05_m_gate_l_F | Pipe Fence (v5, Gate, Left)
//    Land_PipeFence_05_m_gate_r_F | Pipe Fence (v5, Gate, Right)
//    Land_PipeFence_06_m_gate_l_F | Pipe Fence (v6, Gate, Left)
//    Land_PipeFence_06_m_gate_r_F | Pipe Fence (v6, Gate, Right)
//    Land_PipeWall_concretel_8m_F | Concrete Pipe Wall
//    Land_PoleWall_01_3m_F | Rope Fence (3 m)
//    Land_PoleWall_01_6m_F | Rope Fence (6 m)
//    Land_PoleWall_01_pole_F | Rope Fence (Pole)
//    Land_PoleWall_02_3m_v1_F | Field Fence (3m, v1)
//    Land_PoleWall_02_3m_v2_F | Field Fence (3m, v2)
//    Land_PoleWall_02_end_F | Field Fence (3m, End)
//    Land_PoleWall_03_5m_v1_F | Branch Fence (5m, v1)
//    Land_PoleWall_03_5m_v2_F | Branch Fence (5m, v2)
//    Land_PoleWall_03_end_F | Branch Fence (3m, End)
//    Land_RoadBarrier_01_F | Bar Gate (v2)
//    Land_SportGround_fence_F | Sport Fence
//    Land_VineyardFence_01_F | Vine Trellis
//    Land_Wired_Fence_4m_F | Wire Fence
//    Land_Wired_Fence_4mD_F | Wire Fence (Destroyed)
//    Land_Wired_Fence_8m_F | Wire Fence (Long)
//    Land_Wired_Fence_8mD_F | Wire Fence (Long, Destroyed)
//    Land_WoodenWall_02_s_2m_F | Small Wooden Fence (2 m)
//    Land_WoodenWall_02_s_4m_F | Small Wooden Fence (4 m)
//    Land_WoodenWall_02_s_8m_F | Small Wooden Fence (8 m)
//    Land_WoodenWall_02_s_d_F | Small Wooden Fence (Destroyed)
//    Land_WoodenWall_02_s_gate_F | Small Wooden Fence (Gate)
//    Land_WoodenWall_02_s_pole_F | Small Wooden Fence (Pole)
//    Land_WoodenWall_03_s_d_pole_F | Wooden Wall (v3, Pole, Damaged)
//    Land_WoodenWall_03_s_gate_F | Wooden Wall (v3, Gate)
//    Land_WoodenWall_03_s_pole_F | Wooden Wall (v3, Pole)
//    Land_WoodenWall_04_s_gate_F | Wooden Wall (v4, Gate)
//
// -- Structures_Industrial (153) --
//    Land_Barn_01_brown_F | Barn (Brown)
//    Land_Barn_01_grey_F | Barn (Grey)
//    Land_CementWorks_01_brick_F | Cement Works (Brick)
//    Land_CementWorks_01_grey_F | Cement Works (Grey)
//    Land_cmp_Hopper_F | Concrete Mixing Hopper
//    Land_cmp_Shed_F | Concrete Mixing Shed
//    Land_cmp_Tower_F | Concrete Mixing Tower
//    Land_CoalPlant_01_MainBuilding_F | Coal Plant (Main Building)
//    Land_ContainerLine_01_F | Stacks of Containers (v1)
//    Land_ContainerLine_02_F | Stacks of Containers (v2)
//    Land_ContainerLine_03_F | Stacks of Containers (v3)
//    Land_CraneRail_01_F | Crane Rail
//    Land_d_Windmill01_F | Windmill (Destroyed)
//    Land_DPP_01_waterCooler_F | Power Plant Water Cooling
//    Land_Factory_02_F | Factory (Lathes)
//    Land_Factory_Conv1_10_F | Factory Conveyor Belt (Ground)
//    Land_Factory_Conv1_End_F | Factory Conveyor Belt (End)
//    Land_Factory_Conv1_Main_F | Factory Conveyor Belt (Main)
//    Land_Factory_Conv2_F | Factory Conveyor Belt (Slope)
//    Land_Factory_Hopper_F | Factory Hopper
//    Land_Factory_Main_F | Factory
//    Land_Factory_Tunnel_F | Factory Tunnel
//    Land_GantryCrane_01_F | Gantry Crane
//    Land_HeatPump_F | Heat pump
//    Land_i_Shed_Ind_F | Industrial Shed
//    Land_i_Shed_Ind_old_F | Shed (Industrial, Abandoned)
//    Land_i_Windmill01_F | Windmill
//    Land_IndPipe1_20m_F | Industrial Pipe (20m)
//    Land_IndPipe1_90degL_F | Industrial Pipe (Curve, Left)
//    Land_IndPipe1_90degR_F | Industrial Pipe (Curve, Right)
//    Land_IndPipe1_ground_F | Industrial Pipe (Ground)
//    Land_IndPipe1_Uup_F | Industrial Pipe (U, Up)
//    Land_IndPipe1_valve_F | Industrial Pipe (Valve)
//    Land_IndPipe2_big_18_F | Industrial Pipe Platform (Big, 18m)
//    Land_IndPipe2_big_18ladder_F | Industrial Pipe Platform (Big, 18m, Ladder)
//    Land_IndPipe2_big_9_F | Industrial Pipe Platform (Big, 9m)
//    Land_IndPipe2_big_ground1_F | Industrial Pipe Platform (Big, Ground, v1)
//    Land_IndPipe2_big_ground2_F | Industrial Pipe Platform (Big, Ground, v2)
//    Land_IndPipe2_big_support_F | Industrial Pipe Platform (Big, Support)
//    Land_IndPipe2_bigL_L_F | Industrial Pipe Platform (Big, Corner, Left)
//    Land_IndPipe2_bigL_R_F | Industrial Pipe Platform (Big, Corner, Right)
//    Land_IndPipe2_Small_9_F | Industrial Pipe Platform (9m)
//    Land_IndPipe2_Small_ground1_F | Industrial Pipe Platform (Ground, v1)
//    Land_IndPipe2_Small_ground2_F | Industrial Pipe Platform (Ground, v2)
//    Land_IndPipe2_SmallL_L_F | Industrial Pipe Platform (Corner, Left)
//    Land_IndPipe2_SmallL_R_F | Industrial Pipe Platform (Corner, Right)
//    Land_IndPipe3_big_18_F | Industrial Pipe Platform (Big, 18m)
//    Land_IndPipe3_big_18ladder_F | Industrial Pipe Platform (Big, 18m, Ladder)
//    Land_IndPipe3_big_9_F | Industrial Pipe Platform (Big, 9m)
//    Land_IndPipe3_big_ground1_F | Industrial Pipe Platform (Big, Ground, v1)
//    Land_IndPipe3_big_ground2_F | Industrial Pipe Platform (Big, Ground, v2)
//    Land_IndPipe3_big_support_F | Industrial Pipe Platform (Big, Support)
//    Land_IndPipe3_bigL_L_F | Industrial Pipe Platform (Big, Corner, Left)
//    Land_IndPipe3_bigL_R_F | Industrial Pipe Platform (Big, Corner, Right)
//    Land_IndPipe3_Small_9_F | Industrial Pipe Platform (9m)
//    Land_IndPipe3_Small_ground1_F | Industrial Pipe Platform (Ground, v1)
//    Land_IndPipe3_Small_ground2_F | Industrial Pipe Platform (Ground, v2)
//    Land_IndPipe3_SmallL_L_F | Industrial Pipe Platform (Corner, Left)
//    Land_IndPipe3_SmallL_R_F | Industrial Pipe Platform (Corner, Right)
//    Land_IndustrialShed_01_F | Shed (Industrial)
//    Land_Mine_01_conveyor_10m_F | Mine Conveyor (10m)
//    Land_Mine_01_conveyor_begin_F | Mine Conveyor (Start)
//    Land_Mine_01_conveyor_end_F | Mine Conveyor (End)
//    Land_Mine_01_heap_F | Mine Heap
//    Land_Mine_01_hopper_silo_F | Mine Hopper Silo
//    Land_Mine_01_minecart_F | Mine Cart
//    Land_Mine_01_rail_track_end_F | Mine Rail Tracks (End)
//    Land_Mine_01_rail_track_F | Mine Rail Tracks
//    Land_Mine_01_rail_track_switch_F | Mine Rail Tracks (Switch)
//    Land_Mine_01_warehouse_F | Mine Warehouse
//    Land_MobileCrane_01_F | Mobile Crane (Container Grip)
//    Land_MobileCrane_01_hook_F | Mobile Crane (Hook)
//    Land_PowerStation_01_F | Power Station
//    Land_ReservoirTank_Airport_F | Reservoir Tank (Airport)
//    Land_ReservoirTank_Rust_F | Reservoir Tank (Rust)
//    Land_ReservoirTank_V1_F | Reservoir Tank
//    Land_ReservoirTower_F | Reservoir Tower
//    Land_Sawmill_01_illuminati_tower_F | Sawmill (Illumination Tower)
//    Land_SCF_01_boilerBuilding_F | Sugarcane Factory (Boiler Building)
//    Land_SCF_01_chimney_F | Sugarcane Factory (Chimney)
//    Land_SCF_01_clarifier_F | Sugarcane Factory (Clarifier)
//    Land_SCF_01_condenser_F | Sugarcane Factory (Condenser)
//    Land_SCF_01_conveyor_16m_high_F | Sugarcane Factory (Conveyor, 16 m)
//    Land_SCF_01_conveyor_16m_slope_F | Sugarcane Factory (Conveyor, 16 m, Slope)
//    Land_SCF_01_conveyor_8m_high_F | Sugarcane Factory (Conveyor, 8 m)
//    Land_SCF_01_conveyor_columnBase_F | Sugarcane Factory (Conveyor Column Base)
//    Land_SCF_01_conveyor_end_high_F | Sugarcane Factory (Conveyor End)
//    Land_SCF_01_conveyor_hole_F | Sugarcane Factory (Conveyor Hole)
//    Land_SCF_01_crystallizer_F | Sugarcane Factory (Crystallizer)
//    Land_SCF_01_crystallizerTowers_F | Sugarcane Factory (Crystallizer Towers)
//    Land_SCF_01_diffuser_F | Sugarcane Factory (Diffuser)
//    Land_SCF_01_feeder_F | Sugarcane Factory (Feeder)
//    Land_SCF_01_feeder_lxWS | Ore Feeder
//    Land_SCF_01_generalBuilding_F | Sugarcane Factory (General Building)
//    Land_SCF_01_heap_bagasse_F | Heap of Bagasse
//    Land_SCF_01_heap_sugarcane_F | Heap of Sugarcane
//    Land_SCF_01_pipe_24m_F | Sugarcane Factory (Pipe, 24 m)
//    Land_SCF_01_pipe_24m_high_F | Sugarcane Factory (Pipe, 24 m, High)
//    Land_SCF_01_pipe_8m_F | Sugarcane Factory (Pipe, 8 m)
//    Land_SCF_01_pipe_8m_high_F | Sugarcane Factory (Pipe, 8 m, High)
//    Land_SCF_01_pipe_curve_F | Sugarcane Factory (Pipe Curve, Low)
//    Land_SCF_01_pipe_curve_high_F | Sugarcane Factory (Pipe Curve, High)
//    Land_SCF_01_pipe_end_F | Sugarcane Factory (Pipe End)
//    Land_SCF_01_pipe_up_F | Sugarcane Factory (Pipe, Vertical)
//    Land_SCF_01_shed_F | Sugarcane Factory (Shed)
//    Land_SCF_01_shredder_F | Sugarcane Factory (Shredder)
//    Land_SCF_01_storageBin_big_F | Sugarcane Factory (Storage Tank, Big)
//    Land_SCF_01_storageBin_medium_F | Sugarcane Factory (Storage Tank, Medium)
//    Land_SCF_01_storageBin_small_F | Sugarcane Factory (Storage Tank, Small)
//    Land_SCF_01_warehouse_F | Sugarcane Factory (Warehouse)
//    Land_SCF_01_washer_F | Sugarcane Factory (Washer)
//    Land_Shed_Big_F | Industrial Shed (Big)
//    Land_Shed_Small_F | Industrial Shed (Small)
//    Land_SM_01_reservoirTower_F | Reservoir Tower (Surface Mine)
//    Land_SM_01_shed_F | Industrial Shed (Surface Mine)
//    Land_SM_01_shed_unfinished_F | Industrial Shed (Unfinished, Surface Mine)
//    Land_SM_01_shelter_narrow_F | Industrial Shed (Small, Surface Mine)
//    Land_SM_01_shelter_wide_F | Industrial Shed (Big, Surface Mine)
//    Land_Smokestack_01_F | Smokestack
//    Land_Smokestack_01_factory_F | Smokestack (SIŁA Factory)
//    Land_Smokestack_02_F | Smokestack (Old)
//    Land_Smokestack_03_F | Smokestack (Metal)
//    Land_StorageTank_01_large_F | Storage Tank (Flat)
//    Land_StorageTank_01_small_F | Storage Tank (Dome)
//    Land_SY_01_block_F | Stockyard Conveyor Concrete Footer
//    Land_SY_01_conveyor_chute_F | Stockyard Conveyor (Chute)
//    Land_SY_01_conveyor_end_F | Stockyard Conveyor (End)
//    Land_SY_01_conveyor_junction_F | Stockyard Conveyor (Junction)
//    Land_SY_01_conveyor_long_F | Stockyard Conveyor (Long)
//    Land_SY_01_conveyor_reclaimer_F | Stockyard Conveyor (Short, No Hoops)
//    Land_SY_01_conveyor_short_F | Stockyard Conveyor (Short)
//    Land_SY_01_conveyor_slope_F | Stockyard Conveyor (Sloped)
//    Land_SY_01_crusher_F | Stockyard Crusher
//    Land_SY_01_reclaimer_F | Stockyard Reclaimer
//    Land_SY_01_stockpile_01_F | Ore Stockpile (Large)
//    Land_SY_01_stockpile_02_F | Ore Stockpile (Small)
//    Land_SY_01_tripper_F | Stockyard Conveyor (Tripper)
//    Land_Tank_rust_F | Rusty Cistern
//    Land_u_Shed_Ind_F | Industrial Shed (Unfinished)
//    Land_Walkover_01_F | Walkover Staircase
//    Land_Warehouse_01_F | Port Warehouse (Small)
//    Land_Warehouse_02_F | Port Warehouse (Large)
//    Land_WarehouseShelter_01_F | Port Warehouse Shelter
//    Land_Workshop_01_F | Workshop (Small, v1)
//    Land_Workshop_01_grey_F | Workshop (Small, Grey, v1)
//    Land_Workshop_02_F | Workshop (Small, v2)
//    Land_Workshop_02_grey_F | Workshop (Small, Grey, v2)
//    Land_Workshop_03_F | Workshop (Medium, v1)
//    Land_Workshop_03_grey_F | Workshop (Medium, Grey, v1)
//    Land_Workshop_04_F | Workshop (Medium, v2)
//    Land_Workshop_04_grey_F | Workshop (Medium, Grey, v2)
//    Land_Workshop_05_F | Workshop (L-Shaped)
//    Land_Workshop_05_grey_F | Workshop (L-Shaped, Grey)
//
// -- Structures_Infrastructure (209) --
//    Land_BusStop_01_shelter_F | Bus Stop (Shelter)
//    Land_BusStop_01_sign_F | Bus Stop (Sign)
//    Land_BusStop_02_shelter_F | Bus Stop (Shelter)
//    Land_BusStop_02_sign_F | Bus Stop (Sign)
//    Land_ChickenCoop_01_F | Chicken Coop
//    Land_CobblestoneSquare_01_2m_F | Cobblestone (2m)
//    Land_CobblestoneSquare_01_32m_F | Cobblestone (32m)
//    Land_CobblestoneSquare_01_4m_F | Cobblestone (4m)
//    Land_CobblestoneSquare_01_8m_F | Cobblestone (8m)
//    Land_CobblestoneSquare_01_edge_2m_v1_F | Cobblestone (2m, Edge, v1)
//    Land_CobblestoneSquare_01_edge_2m_v2_F | Cobblestone (2m, Edge, v2)
//    Land_CobblestoneSquare_01_edge_32m_v1_F | Cobblestone (32m, Edge, v1)
//    Land_CobblestoneSquare_01_edge_32m_v2_F | Cobblestone (32m, Edge, v2)
//    Land_CobblestoneSquare_01_edge_4m_v1_F | Cobblestone (4m, Edge, v1)
//    Land_CobblestoneSquare_01_edge_4m_v2_F | Cobblestone (4m, Edge, v2)
//    Land_CobblestoneSquare_01_edge_8m_v1_F | Cobblestone (8m, Edge, v1)
//    Land_CobblestoneSquare_01_edge_8m_v2_F | Cobblestone (8m, Edge, v2)
//    Land_Communication_F | Communication Tower
//    Land_ConcreteKerb_01_2m_F | Concrete Curb (Grey, 2 m)
//    Land_ConcreteKerb_01_2m_v2_F | Concrete Curb (Grey, 2 m)
//    Land_ConcreteKerb_01_4m_F | Concrete Curb (Grey, 4 m)
//    Land_ConcreteKerb_01_4m_v2_F | Concrete Curb (Grey, 4 m)
//    Land_ConcreteKerb_01_8m_F | Concrete Curb (Grey, 8 m)
//    Land_ConcreteKerb_01_8m_v2_F | Concrete Curb (Grey, 8 m)
//    Land_ConcreteKerb_02_1m_F | Concrete Curb (Wide, Grey, 1 m)
//    Land_ConcreteKerb_02_2m_F | Concrete Curb (Wide, Grey, 2 m)
//    Land_ConcreteKerb_02_4m_F | Concrete Curb (Wide, Grey, 4 m)
//    Land_ConcreteKerb_02_8m_F | Concrete Curb (Wide, Grey, 8 m)
//    Land_ConcreteKerb_03_BW_long_F | Concrete Curb (Black & White, Long)
//    Land_ConcreteKerb_03_BW_short_F | Concrete Curb (Black & White, Short)
//    Land_ConcreteKerb_03_BY_long_F | Concrete Curb (Black & Yellow, Long)
//    Land_ConcreteKerb_03_BY_short_F | Concrete Curb (Black & Yellow, Short)
//    Land_ConcretePanels_02_four_F | Concrete Panels (Quad)
//    Land_ConcretePanels_02_single_dmg_F | Concrete Panels (Single, Damaged)
//    Land_ConcretePanels_02_single_v1_F | Concrete Panels (Single, v1)
//    Land_ConcretePanels_02_single_v2_F | Concrete Panels (Single, v2)
//    Land_ConcretePavement_01_narrow_corner_F | Sidewalk (Narrow, Curve)
//    Land_ConcretePavement_01_narrow_F | Sidewalk (Narrow)
//    Land_ConcretePavement_01_wide_corner_F | Sidewalk (Wide, Curve)
//    Land_ConcretePavement_01_wide_F | Sidewalk (Wide)
//    Land_ConcreteTreePlanter_01_F | Concrete Tree Planter (Small)
//    Land_ConcreteTreePlanter_02_F | Concrete Tree Planter (Big)
//    Land_ConcreteWell_01_F | Concrete Well
//    Land_ConcreteWell_02_F | Well Pump
//    Land_dp_bigTank_F | Diesel Storage Tank (Big)
//    Land_dp_bigTank_old_F | Diesel Storage Tank (Big, Old)
//    Land_dp_mainFactory_F | Diesel Power Plant (Large, Yellow)
//    Land_dp_smallFactory_F | Diesel Power Plant (Small, White)
//    Land_dp_smallTank_F | Diesel Storage Tank (Small)
//    Land_dp_smallTank_old_F | Diesel Storage Tank (Small, Old)
//    Land_dp_transformer_F | Power Plant Transformer (Light Grey)
//    Land_DPP_01_mainFactory_F | Diesel Power Plant (Large, Grey)
//    Land_DPP_01_mainFactory_old_F | Factory (Abandoned)
//    Land_DPP_01_smallFactory_F | Diesel Power Plant (Small, Grey)
//    Land_DPP_01_transformer_F | Power Plant Transformer (Dark Grey)
//    Land_DryToilet_01_F | Outhouse
//    Land_FirewoodPile_01_F | Firewood Pile
//    Land_GardenPavement_01_F | Stone Path
//    Land_GardenPavement_02_F | Stone Path (Fractured)
//    Land_GasMeterCabinet_01_F | Gas Meter Cabinet
//    Land_Greenhouse_01_damaged_F | Green House (Damaged)
//    Land_Greenhouse_01_F | Green House
//    Land_HighVoltageColumn_F | High Voltage Column
//    Land_HighVoltageTower_dam_F | High Voltage Tower (Damaged)
//    Land_HighVoltageTower_F | High Voltage Tower
//    Land_HighVoltageTower_large_F | High Voltage Tower (Large)
//    Land_HighVoltageTower_largeCorner_F | High Voltage Tower (Large, Corner)
//    Land_Highway_Pillar_01_F | Highway Abutment
//    Land_Highway_Pillar_01_garage_F | Highway Abutments (Garage)
//    Land_Hutch_01_F | Hutch
//    Land_KerbIsland_01_end_F | Curb Island (Left)
//    Land_KerbIsland_01_start_F | Curb Island (Right)
//    Land_Lighthouse_03_green_F | Lighthouse (Green)
//    Land_Lighthouse_03_red_F | Lighthouse (Red)
//    Land_LightHouse_F | Lighthouse (Tall)
//    Land_Lighthouse_small_F | Lighthouse (Small)
//    Land_Loudspeakers_F | Loudspeakers
//    Land_MysteriousBell_01_F | Shooting Range Bell
//    Land_Pavement_narrow2_lxWS | Sidewalk (Red, v2)
//    Land_Pavement_narrow3_lxWS | Sidewalk (Narrow)
//    Land_Pavement_narrow_corner_F | Sidewalk (Narrow, Curve)
//    Land_Pavement_narrow_F | Sidewalk (Narrow)
//    Land_Pavement_narrow_green2_lxWS | Sidewalk (Green, v2)
//    Land_Pavement_narrow_green_lxWS | Sidewalk (Green, v1)
//    Land_Pavement_narrow_lxWS | Sidewalk (Red, v1)
//    Land_Pavement_wide_corner_F | Sidewalk (Wide, Curve)
//    Land_Pavement_wide_F | Sidewalk (Wide)
//    Land_PowerCable_submarine_F | Underwater Power Cable
//    Land_PowerGenerator_F | Power Generator
//    Land_PowerLine_02_pole_junction_A_F | Powerline Pole (Junction, A)
//    Land_PowerLine_02_pole_small_A_F | Powerline Pole (Small, A)
//    Land_PowerLine_02_pole_small_end_A_F | Powerline Pole (Small, A, End)
//    Land_PowerLine_02_pole_small_end_F | Powerline Pole (Small, End)
//    Land_PowerLine_02_pole_small_F | Powerline Pole (Small)
//    Land_PowerLine_02_pole_small_hook_F | Powerline Pole (Small, Hook)
//    Land_PowerLine_02_pole_small_lamp_F | Powerline Pole (Small, Lamp) [on]
//    Land_PowerLine_02_pole_small_lamp_off_F | Powerline Pole (Small, Lamp) [off]
//    Land_PowerLine_03_pole_end_F | Concrete Powerline Pole (End)
//    Land_PowerLine_03_pole_F | Concrete Powerline Pole
//    Land_PowerLine_03_pole_junction_F | Concrete Powerline Pole (Junction)
//    Land_PowerLine_distributor_F | Powerline Distributor
//    Land_PowerLine_part_F | Powerline Distributor (Part)
//    Land_PowerPoleConcrete_F | Concrete Power Pole
//    Land_PowerPoleWooden_F | Wooden Power Pole
//    Land_PowerPoleWooden_L_F | Wooden Power Pole (Lamp) [on]
//    Land_PowerPoleWooden_L_off_F | Wooden Power Pole (Lamp) [off]
//    Land_PowerPoleWooden_small_F | Wooden Power Pole (Small)
//    Land_PowLines_Transformer_F | Powerline Transformer
//    Land_Radar_F | Radar
//    Land_Radar_Small_F | Radar (Small)
//    Land_Rail_Bridge_40_F | Railway Bridge
//    Land_Rail_ConcreteRamp_F | Concrete Ramp
//    Land_Rail_Crossing_Barrier_F | Crossing Barrier
//    Land_Rail_LineBreak_Iron_F | Line Break
//    Land_Rail_Platform_Cross_F | Platform (Crossing)
//    Land_Rail_Platform_Segment_F | Platform (Segment)
//    Land_Rail_Platform_Start_F | Platform (End)
//    Land_Rail_Signals_F | Signals
//    Land_Rail_Track_25_F | Rail Track (25m)
//    Land_Rail_Track_Down_25_F | Rail Track (25m, Down)
//    Land_Rail_Track_Down_40_F | Rail Track (40m, Down)
//    Land_Rail_Track_L25_10_F | Rail Track (25m, 10 deg, Left)
//    Land_Rail_Track_LB1_RE_F | Rail Track (S-Curve, v2)
//    Land_Rail_Track_LB_RE_F | Rail Track (S-Curve, v1)
//    Land_Rail_Track_LE1_RB_F | Rail Track (S-Curve, v4)
//    Land_Rail_Track_LE_RB_F | Rail Track (S-Curve, v3)
//    Land_Rail_Track_Passing_10_F | Rail Track Crossing (10m)
//    Land_Rail_Track_Passing_25_F | Rail Track Crossing (25m)
//    Land_Rail_Track_Passing_25NOLC_F | Rail Track Crossing (25m, No Land Contact)
//    Land_Rail_Track_R25_10_F | Rail Track (25m, 10 deg, Right)
//    Land_Rail_Track_SP_F | Rail Track (Short)
//    Land_Rail_Track_TurnOutL_F | Rail Track Turnout (Left)
//    Land_Rail_Track_TurnOutR_F | Rail Track Turnout (Right)
//    Land_Rail_Track_Up_25_F | Rail Track (25m, Up)
//    Land_Rail_Track_Up_40_F | Rail Track (40m, Up)
//    Land_Rail_TrackE_25_F | Rail Track (25m, Elevated)
//    Land_Rail_TrackE_25NOLC_F | Rail Track (25m, Elevated, No Land Contact)
//    Land_Rail_TrackE_2_F | Rail Track (2m, Elevated)
//    Land_Rail_TrackE_40_F | Rail Track (40m, Elevated)
//    Land_Rail_TrackE_40NOLC_F | Rail Track (40m, Elevated, No Land Contact)
//    Land_Rail_TrackE_4_F | Rail Track (4m, Elevated)
//    Land_Rail_TrackE_8_F | Rail Track (8m, Elevated)
//    Land_Rail_TrackE_8NOLC_F | Rail Track (8m, Elevated, No Land Contact)
//    Land_Rail_TrackE_L25_10_F | Rail Track (25m, Elevated, 10 deg, Left)
//    Land_Rail_TrackE_L25_5_F | Rail Track (25m, Elevated, 5 deg, Left)
//    Land_Rail_TrackE_L30_20_F | Rail Track (30m, Elevated, 20 deg, Left)
//    Land_Rail_TrackE_R25_10_F | Rail Track (25m, Elevated, 10 deg, Right)
//    Land_Rail_TrackE_R25_5_F | Rail Track (25m, Elevated, 5 deg, Right)
//    Land_Rail_TrackE_R30_20_F | Rail Track (30m, Elevated, 20 deg, Right)
//    Land_Rail_TrackE_TurnOutL_F | Rail Track Turnout (Elevated, Left)
//    Land_Rail_TrackE_TurnOutR_F | Rail Track Turnout (Elevated, Right)
//    Land_SewerCover_01_F | Manhole Cover 1
//    Land_SewerCover_02_F | Manhole Cover 2
//    Land_SewerCover_03_F | Manhole Cover 3
//    Land_SewerCover_04_F | Manhole Cover 4
//    Land_Sidewalk_01_4m_F | Stone Sidewalk (4 m)
//    Land_Sidewalk_01_8m_F | Stone Sidewalk (8 m)
//    Land_Sidewalk_01_corner_F | Stone Sidewalk (Corner)
//    Land_Sidewalk_01_narrow_2m_F | Stone Sidewalk (Narrow, 2 m)
//    Land_Sidewalk_01_narrow_4m_F | Stone Sidewalk (Narrow, 4 m)
//    Land_Sidewalk_01_narrow_8m_F | Stone Sidewalk (Narrow, 8 m)
//    Land_Sidewalk_02_4m_F | Paved Sidewalk (4 m)
//    Land_Sidewalk_02_8m_F | Paved Sidewalk (8 m)
//    Land_Sidewalk_02_corner_F | Paved Sidewalk (Corner)
//    Land_Sidewalk_02_narrow_2m_F | Paved Sidewalk (Narrow, 2 m)
//    Land_Sidewalk_02_narrow_4m_F | Paved Sidewalk (Narrow, 4 m)
//    Land_Sidewalk_02_narrow_8m_F | Paved Sidewalk (Narrow, 8 m)
//    Land_SolarPanel_1_F | Solar Panel (3)
//    Land_SolarPanel_2_F | Solar Panel (6)
//    Land_SolarPanel_3_F | Solar Panel (12)
//    Land_spp_Mirror_Broken_F | Solar Mirrors (Broken)
//    Land_spp_Mirror_F | Solar Mirrors
//    Land_spp_Panel_Broken_F | Solar Panel (16, Broken)
//    Land_spp_Panel_F | Solar Panel (16)
//    Land_spp_Tower_F | Solar Tower
//    Land_spp_Transformer_F | Solar Transformer
//    Land_StoneWell_01_F | Stone Well
//    Land_TBox_F | Transmitter Box
//    Land_Track_01_10m_F | Track (10 m)
//    Land_Track_01_15deg_F | Track (Bend, 15 deg)
//    Land_Track_01_20m_F | Track (20 m)
//    Land_Track_01_30deg_F | Track (Bend, 30 deg)
//    Land_Track_01_3m_F | Track (3 m)
//    Land_Track_01_7deg_F | Track (Bend, 7 deg)
//    Land_Track_01_bridge_F | Track (Bridge)
//    Land_Track_01_bumper_F | Track (Bumper)
//    Land_Track_01_crossing_F | Track (Crossing)
//    Land_Track_01_switch_F | Track (Turnout Switch Lever)
//    Land_Track_01_turnout_left_F | Track (Turnout, Left)
//    Land_Track_01_turnout_right_F | Track (Turnout, Right)
//    Land_TreeGrate_01_F | Tree Grate
//    Land_TreeGuard_01_F | Metal Tree Guard
//    Land_TTowerBig_1_F | Transmitter Tower
//    Land_TTowerBig_2_F | Transmitter Tower (Tall)
//    Land_TTowerSmall_1_F | Transmitter Pole
//    Land_TTowerSmall_2_F | Transmitter Pole (Tall)
//    Land_Water_source_F | Water Source
//    Land_WaterTank_01_F | Water Tank (Large)
//    Land_WaterTank_02_F | Water Tank (Large, On Stand)
//    Land_WaterTank_03_F | Water Tank (Small)
//    Land_WaterTank_04_F | Water Tank (Small, On Stand)
//    Land_WaterTower_01_F | Water Tower
//    Land_WavePowerPlant_F | Wave Powerplant
//    Land_WavePowerPlantBroken_F | Wave Powerplant (Broken)
//    Land_WindmillPump_01_F | Windmill Pump
//    Land_wpp_Turbine_V1_F | Wind Turbine (Camo)
//    Land_wpp_Turbine_V1_off_F | Wind Turbine (Off, Camo)
//    Land_wpp_Turbine_V2_F | Wind Turbine
//    Land_wpp_Turbine_V2_off_F | Wind Turbine (Off)
//
// -- Structures_Military (113) --
//    Atlas_Land_Destroyer_01_base_HMS_F | HMS Vigilance
//    CBA_BuildingPos | AI Building Position
//    Land_BagBunker_01_large_green_F | Bunker (Large, Green)
//    Land_BagBunker_01_small_green_F | Bunker (Small, Green)
//    Land_BagBunker_Large_F | Bunker (Large)
//    Land_BagBunker_Small_F | Bunker (Small)
//    Land_BagBunker_Tower_East_F | Bunker (Tower, Taiga)
//    Land_BagBunker_Tower_F | Bunker (Tower)
//    Land_BagBunker_Tower_INDP_F | Bunker (Tower, Digital)
//    Land_BagBunker_Tower_OPFOR_F | Bunker (Tower, Hex)
//    Land_BagBunker_Tower_sand_F | Bunker (Tower, Sand)
//    Land_BagBunker_Tower_wdl_F | Bunker (Tower, Woodland)
//    Land_Barracks_01_camo_F | Barracks (Jungle Camo)
//    Land_Barracks_01_dilapidated_F | Barracks (Dilapidated)
//    Land_Barracks_01_grey_F | Barracks (Grey)
//    Land_Barracks_02_F | Barracks (v2)
//    Land_Barracks_03_F | Barracks (v3)
//    Land_Barracks_04_F | Barracks (v4)
//    Land_Barracks_05_F | Barracks (v5)
//    Land_Barracks_06_F | Barracks (Large)
//    Land_Barricade_01_10m_F | Junk Barricade (10 m)
//    Land_Barricade_01_4m_F | Junk Barricade (4 m)
//    Land_BattlefieldCross_01_AAF_F | Battlefield Memorial [AAF]
//    Land_BattlefieldCross_01_CSAT_F | Battlefield Memorial [CSAT]
//    Land_BattlefieldCross_01_F | Battlefield Memorial
//    Land_BattlefieldCross_01_green_AAF_F | Battlefield Memorial (Green) [AAF]
//    Land_BattlefieldCross_01_green_CSAT_F | Battlefield Memorial (Green) [CSAT]
//    Land_BattlefieldCross_01_green_F | Battlefield Memorial (Green)
//    Land_BattlefieldCross_01_green_LDF_F | Battlefield Memorial (Green) [LDF]
//    Land_BattlefieldCross_01_green_NATO_F | Battlefield Memorial (Green) [NATO]
//    Land_BattlefieldCross_01_LDF_F | Battlefield Memorial [LDF]
//    Land_BattlefieldCross_01_NATO_F | Battlefield Memorial [NATO]
//    Land_Bunker_F | Bunker
//    Land_Cargo_House_V1_F | Military Cargo House (Green)
//    Land_Cargo_House_V2_F | Military Cargo House (Rusty)
//    Land_Cargo_House_V3_F | Military Cargo House (Brown)
//    Land_Cargo_House_V4_F | Military Cargo House (Jungle)
//    Land_Cargo_HQ_V1_F | Military Cargo HQ (Green)
//    Land_Cargo_HQ_V2_F | Military Cargo HQ (Rusty)
//    Land_Cargo_HQ_V3_F | Military Cargo HQ (Brown)
//    Land_Cargo_HQ_V4_F | Military Cargo HQ (Jungle)
//    Land_Cargo_Patrol_V1_F | Military Cargo Post (Green)
//    Land_Cargo_Patrol_V2_F | Military Cargo Post (Rusty)
//    Land_Cargo_Patrol_V3_F | Military Cargo Post (Brown)
//    Land_Cargo_Patrol_V4_F | Military Cargo Post (Jungle)
//    Land_Cargo_Tower_V1_F | Military Cargo Tower (Green)
//    Land_Cargo_Tower_V1_No1_F | Military Cargo Tower (#1)
//    Land_Cargo_Tower_V1_No2_F | Military Cargo Tower (#2)
//    Land_Cargo_Tower_V1_No3_F | Military Cargo Tower (#3)
//    Land_Cargo_Tower_V1_No4_F | Military Cargo Tower (#4)
//    Land_Cargo_Tower_V1_No5_F | Military Cargo Tower (#5)
//    Land_Cargo_Tower_V1_No6_F | Military Cargo Tower (#6)
//    Land_Cargo_Tower_V1_No7_F | Military Cargo Tower (#7)
//    Land_Cargo_Tower_V2_F | Military Cargo Tower (Rusty)
//    Land_Cargo_Tower_V3_F | Military Cargo Tower (Brown)
//    Land_Cargo_Tower_V4_F | Military Cargo Tower (Jungle)
//    Land_Carrier_01_base_F | USS Freedom
//    Land_ControlTower_01_F | Control Tower
//    Land_ControlTower_02_F | Airfield Control Tower (Military)
//    Land_CzechHedgehog_01_old_F | Czech Hedgehog
//    Land_Destroyer_01_base_F | USS Liberty
//    Land_Destroyer_01_Boat_Rack_01_F | Boat Rack
//    Land_DomeParts_01_panel_white_F | Dome Panel (White)
//    Land_DomeParts_01_panel_white_stack_F | Dome Panel Stack (White)
//    Land_DomeParts_01_struts_stack_F | Dome Struts
//    Land_DomeParts_01_white_openstack_F | Dome Panel Stack (White, Open)
//    Land_EF_CombatBoat_Cradle | Combat Boat Cradle
//    Land_EF_LPD_base | LPD 36 [USS Takmyr]
//    Land_EmplacementGun_01_d_mossy_F | Emplacement Gun (Mossy, Destroyed)
//    Land_EmplacementGun_01_d_rusty_F | Emplacement Gun (Rusty, Destroyed)
//    Land_EmplacementGun_01_mossy_F | Emplacement Gun (Mossy)
//    Land_EmplacementGun_01_rusty_F | Emplacement Gun (Rusty)
//    Land_GuardBox_01_brown_F | Guard Box (Brown)
//    Land_GuardBox_01_green_F | Guard Box (Green)
//    Land_GuardBox_01_smooth_F | Guard Box (Grey)
//    Land_GuardHouse_02_F | Guard House
//    Land_GuardHouse_02_grey_F | Guard House (Grey)
//    Land_GuardHouse_03_F | Guard House (Abandoned)
//    Land_GuardTower_01_F | Guard Tower (Big)
//    Land_GuardTower_02_F | Guard Tower (Small)
//    Land_HBarrier_01_tower_ghex_F | Bunker (Tower, Green Hex)
//    Land_HBarrier_01_tower_green_F | Bunker (Tower, Green)
//    Land_i_Barracks_V1_F | Barracks (Camo)
//    Land_i_Barracks_V2_F | Barracks (New)
//    Land_Medevac_house_V1_F | Military Cargo House (Medical)
//    Land_Medevac_HQ_V1_F | Military Cargo HQ (Medical)
//    Land_MilOffices_V1_F | Military Offices
//    Land_MobileRadar_01_generator_F | Mobile Radar (Generator)
//    Land_MobileRadar_01_radar_F | Mobile Radar
//    Land_PillboxBunker_01_big_F | Pillbox (Big)
//    Land_PillboxBunker_01_hex_F | Pillbox (Hexagonal)
//    Land_PillboxBunker_01_rectangle_F | Pillbox (Rectangular)
//    Land_PillboxWall_01_3m_F | Pillbox Wall (3 m, Sharp)
//    Land_PillboxWall_01_3m_round_F | Pillbox Wall (3 m, Blunt)
//    Land_PillboxWall_01_6m_F | Pillbox Wall (6 m, Sharp)
//    Land_PillboxWall_01_6m_round_F | Pillbox Wall (6 m, Blunt)
//    Land_Radar_01_airshaft_F | Radar Complex (Airshaft)
//    Land_Radar_01_antenna_base_F | Radar Complex (Antenna Base)
//    Land_Radar_01_antenna_F | Radar Complex (Antenna)
//    Land_Radar_01_cooler_F | Radar Complex (Cooler)
//    Land_Radar_01_HQ_F | Radar Complex (HQ)
//    Land_Radar_01_kitchen_F | Radar Complex (Kitchen)
//    Land_SandbagBarricade_01_F | Sandbag Barricade (Tall)
//    Land_SandbagBarricade_01_half_F | Sandbag Barricade (Short)
//    Land_SandbagBarricade_01_hole_F | Sandbag Barricade (Tall, Hole)
//    Land_ServiceHangar_01_L_F | Service Hangar (Military, Left)
//    Land_ServiceHangar_01_R_F | Service Hangar (Military, Right)
//    Land_ShootingPos_Roof_01_F | Shooting Range Bench
//    Land_TentHangar_V1_F | Tent Hangar
//    Land_Trench_01_forest_F | Trench (Forest)
//    Land_Trench_01_grass_F | Trench (Grass)
//    Land_TrenchFrame_01_F | Trench (Frame)
//    Land_u_Barracks_V2_F | Barracks (Old)
//
// -- Structures_Slums (9) --
//    Land_Boat_03_abandoned_cover_F | Boat Cover
//    Land_cargo_addon01_V1_F | Slum Roof Addon (v1)
//    Land_cargo_addon01_V2_F | Slum Roof Addon (v2)
//    Land_cargo_addon02_V1_F | Slum Canvas (Blue)
//    Land_cargo_addon02_V2_F | Slum Canvas (Black)
//    Land_cargo_house_slum_F | Slum House Container
//    Land_Slum_House01_F | Slum House (Small)
//    Land_Slum_House02_F | Slum House
//    Land_Slum_House03_F | Slum House (Big)
//
// -- Structures_Sports (17) --
//    Land_BC_Basket_F | Basketball Basket
//    Land_BC_Court_F | Basketball Court
//    Land_FinishGate_01_narrow_F | Finish Gate (Narrow)
//    Land_FinishGate_01_wide_F | Finish Gate (Wide)
//    Land_Goal_F | Goal
//    Land_GymBench_01_F | Gym Bench
//    Land_GymRack_01_F | Gym Rack (Big)
//    Land_GymRack_02_F | Gym Rack (Small)
//    Land_GymRack_03_F | Gym Rack (Weight plates)
//    Land_RugbyGoal_01_F | Rugby Goal Posts
//    Land_Tribune_F | Tribune
//    Land_TyreBarrier_01_F | Tire Barrier
//    Land_TyreBarrier_01_line_x4_F | Tire Barrier (4)
//    Land_TyreBarrier_01_line_x6_F | Tire Barrier (6)
//    Land_WinnersPodium_01_F | Winner's podium
//    TyreBarrier_01_black_F | Tire Barrier (Black, 1)
//    TyreBarrier_01_white_F | Tire Barrier (White, 1)
//
// -- Structures_Town (205) --
//    CargoPlaftorm_01_brown_F | Military Cargo Platform (Brown)
//    CargoPlaftorm_01_green_F | Military Cargo Platform (Green)
//    CargoPlaftorm_01_jungle_F | Military Cargo Platform (Jungle)
//    CargoPlaftorm_01_rusty_F | Military Cargo Platform (Rusty)
//    Land_Addon_01_F | House Addon (Small)
//    Land_Addon_02_F | House Addon (Big)
//    Land_Addon_03_F | House Addon (Coffee Bar)
//    Land_Addon_04_F | House Addon (Terrace)
//    Land_Addon_05_F | House Addon (Garage)
//    Land_AirconCondenser_01_F | Aircon Condenser
//    Land_BeachBooth_01_F | Beach Booth
//    Land_Bench_01_F | Bench
//    Land_Bench_02_F | Bench (Blue)
//    Land_Bollard_01_F | Bollard
//    Land_Bunker_01_big_F | Modular Bunker (Big)
//    Land_Bunker_01_blocks_1_F | Modular Bunker (Block)
//    Land_Bunker_01_blocks_3_F | Modular Bunker (3 Blocks)
//    Land_Bunker_01_HQ_F | Modular Bunker (HQ)
//    Land_Bunker_01_small_F | Modular Bunker (Small)
//    Land_Bunker_01_tall_F | Modular Bunker (Tall)
//    Land_Bunker_02_double_F | Old Bunker (Mossy)
//    Land_Bunker_02_left_F | Old Bunker (Left, Mossy)
//    Land_Bunker_02_light_double_F | Old Bunker
//    Land_Bunker_02_light_left_F | Old Bunker (Left)
//    Land_Bunker_02_light_right_F | Old Bunker (Right)
//    Land_Bunker_02_right_F | Old Bunker (Right, Mossy)
//    Land_Camp_House_01_brown_F | Camp House (Brown)
//    Land_Carousel_01_F | Carousel
//    Land_Chapel_01_F | Chapel (Orthodox)
//    Land_Chapel_02_white_damaged_F | Chapel (White, Damaged)
//    Land_Chapel_02_white_F | Chapel (White)
//    Land_Chapel_02_yellow_damaged_F | Chapel (Yellow, Damaged)
//    Land_Chapel_02_yellow_F | Chapel (Yellow)
//    Land_Chapel_Small_V1_F | Chapel (Small, New)
//    Land_Chapel_Small_V2_F | Chapel (Small, Old)
//    Land_Chapel_V1_F | Chapel (Big, New)
//    Land_Chapel_V2_F | Chapel (Big, Old)
//    Land_ClothShelter_01_F | Cloth Market Shelter (Yellow)
//    Land_ClothShelter_02_F | Cloth Market Shelter (White)
//    Land_CoalPlant_01_Conveyor_F | Coal Plant (Conveyor)
//    Land_CoalPlant_01_LoadingHouse_F | Coal Plant (Loading House)
//    Land_d_Addon_02_V1_F | House Addon (Destroyed)
//    Land_d_House_Big_01_V1_F | House (Large, Destroyed)
//    Land_d_House_Big_02_V1_F | House (Big, Destroyed)
//    Land_d_House_Small_01_V1_F | House (Destroyed)
//    Land_d_House_Small_02_V1_F | House (Small, Destroyed)
//    Land_DisturbedSoil_01_decal_F | Disturbed Soil (Decal, Small)
//    Land_DisturbedSoil_02_decal_F | Disturbed Soil (Decal, Large)
//    Land_FireEscape_01_short_F | Fire Escape
//    Land_FireEscape_01_tall_F | Fire Escape (Tall)
//    Land_FlexibleTank_Red_RF | Firefighter Water Reservoir (Red)
//    Land_FlexibleTank_Yellow_RF | Firefighter Water Reservoir (Yellow)
//    Land_FuelStation_01_arrow_F | Gas Station (Tanoil, Arrow Sign)
//    Land_FuelStation_01_prices_F | Gas Station (Tanoil, Sign)
//    Land_FuelStation_01_pump_F | Gas Station (Tanoil, Pump)
//    Land_FuelStation_01_roof_F | Gas Station (Tanoil, Roof)
//    Land_FuelStation_01_shop_F | Gas Station (Tanoil, Shop)
//    Land_FuelStation_01_workshop_F | Gas Station (Tanoil, Workshop)
//    Land_FuelStation_03_prices_F | Gas Station (Benzyna, Prices)
//    Land_FuelStation_03_pump_F | Gas Station (Benzyna, Pump)
//    Land_FuelStation_03_roof_F | Gas Station (Benzyna, Roof)
//    Land_FuelStation_03_shop_F | Gas Station (Benzyna, Shop)
//    Land_GarbageBin_01_F | Trash Bin
//    Land_GuardHouse_01_F | Guard House
//    Land_HealthCenter_01_F | Health Center
//    Land_Hotel_01_F | Hotel (White)
//    Land_Hotel_02_F | Hotel (Yellow)
//    Land_House_Big_03_F | Villa
//    Land_House_Big_04_F | Apartment Building
//    Land_House_Big_05_F | Hostel (Small)
//    Land_House_Small_04_F | Bungalow (Blue Roof)
//    Land_House_Small_05_F | Bungalow (Grey Roof)
//    Land_i_Addon_02_b_white_F | House Addon (v2)
//    Land_i_Addon_02_V1_F | House Addon
//    Land_i_Addon_03_V1_F | Inn Garden
//    Land_i_Addon_03mid_V1_F | Inn Garden (Middle)
//    Land_i_Addon_04_V1_F | Inn Garden (No Roof)
//    Land_i_Garage_V1_F | Garage (New)
//    Land_i_Garage_V2_F | Garage (Old)
//    Land_i_House_Big_01_b_blue_F | House (Large, Blue)
//    Land_i_House_Big_01_b_brown_F | House (Large, Yellow & Brown)
//    Land_i_House_Big_01_b_pink_F | House (Large, Pink)
//    Land_i_House_Big_01_b_white_F | House (Large, White & Brown)
//    Land_i_House_Big_01_b_whiteblue_F | House (Large, White & Blue)
//    Land_i_House_Big_01_b_yellow_F | House (Large, Yellow & White)
//    Land_i_House_Big_01_V1_F | House (Large, White)
//    Land_i_House_Big_01_V2_F | House (Large, Yellow)
//    Land_i_House_Big_01_V3_F | House (Large, Stone)
//    Land_i_House_Big_02_b_blue_F | House (Big, Blue)
//    Land_i_House_Big_02_b_brown_F | House (Big, Yellow & Brown)
//    Land_i_House_Big_02_b_pink_F | House (Big, Pink)
//    Land_i_House_Big_02_b_white_F | House (Big, White & Brown)
//    Land_i_House_Big_02_b_whiteblue_F | House (Big, White & Blue)
//    Land_i_House_Big_02_b_yellow_F | House (Big, Yellow & White)
//    Land_i_House_Big_02_V1_F | House (Big, White)
//    Land_i_House_Big_02_V2_F | House (Big, Yellow)
//    Land_i_House_Big_02_V3_F | House (Big, Stone)
//    Land_i_House_Small_01_b_blue_F | House (Blue)
//    Land_i_House_Small_01_b_brown_F | House (Yellow & Brown)
//    Land_i_House_Small_01_b_pink_F | House (Pink)
//    Land_i_House_Small_01_b_white_F | House (White & Brown)
//    Land_i_House_Small_01_b_whiteblue_F | House (White & Blue)
//    Land_i_House_Small_01_b_yellow_F | House (Yellow & White)
//    Land_i_House_Small_01_V1_F | House (White)
//    Land_i_House_Small_01_V2_F | House (Yellow)
//    Land_i_House_Small_01_V3_F | House (Stone)
//    Land_i_House_Small_02_b_blue_F | House (Small, v2, Blue)
//    Land_i_House_Small_02_b_brown_F | House (Small, v2, Yellow & Brown)
//    Land_i_House_Small_02_b_pink_F | House (Small, v2, Pink)
//    Land_i_House_Small_02_b_white_F | House (Small, v2, White & Brown)
//    Land_i_House_Small_02_b_whiteblue_F | House (Small, v2, White & Blue)
//    Land_i_House_Small_02_b_yellow_F | House (Small, v2, Yellow & White)
//    Land_i_House_Small_02_c_blue_F | House (Small, v3, Blue)
//    Land_i_House_Small_02_c_brown_F | House (Small, v3, Yellow & Brown)
//    Land_i_House_Small_02_c_pink_F | House (Small, v3, Pink)
//    Land_i_House_Small_02_c_white_F | House (Small, v3, White & Brown)
//    Land_i_House_Small_02_c_whiteblue_F | House (Small, v3, White & Blue)
//    Land_i_House_Small_02_c_yellow_F | House (Small, v3, Yellow & White)
//    Land_i_House_Small_02_V1_F | House (Small, White)
//    Land_i_House_Small_02_V2_F | House (Small, Yellow)
//    Land_i_House_Small_02_V3_F | House (Small, Stone)
//    Land_i_House_Small_03_V1_F | Bungalow
//    Land_LifeguardTower_01_F | Lifeguard Tower
//    Land_Metal_Shed_F | Grey Metal Shed (Large)
//    Land_MetalShelter_01_F | Metal Market Roof (Small)
//    Land_MetalShelter_02_F | Metal Market Roof (Large)
//    Land_Misc_ConcBox_EP1_lxWS | Concrete Reservoir
//    Land_Misc_Well_C_EP1_lxWS | Concrete Well
//    Land_Misc_Well_L_EP1_lxWS | Village Well
//    Land_MultistoryBuilding_01_F | Office Block
//    Land_MultistoryBuilding_03_F | Apartment Tower
//    Land_MultistoryBuilding_04_F | Office Tower
//    Land_PalmTotem_01_F | Totem (Long Face)
//    Land_PalmTotem_02_F | Totem (Short Face)
//    Land_PalmTotem_03_F | Totem (Plain)
//    Land_ParkingMeter_01_F | Parking Meter
//    Land_PoliceStation_01_F | Police Station
//    Land_Pot_01_F | Flowerpot (Rectangular)
//    Land_Pot_02_F | Flowerpot (Circular)
//    Land_Rail_Station_Small_F | Railway Station (Small)
//    Land_ReservoirTank_01_military_F | Reservoir Tank (Military)
//    Land_Sawmill_01_F | Sawmill
//    Land_School_01_F | School
//    Land_Shed_08_brown_F | Shed (Brown)
//    Land_Shed_08_grey_F | Shed (Grey)
//    Land_ShellCrater_01_decal_F | Shell Crater (Decal, Small)
//    Land_ShellCrater_01_F | Shell Crater (Small)
//    Land_ShellCrater_02_debris_F | Shell Crater (Debris)
//    Land_ShellCrater_02_decal_F | Shell Crater (Decal, Large)
//    Land_ShellCrater_02_extralarge_F | Shell Crater (Extra Large)
//    Land_ShellCrater_02_large_F | Shell Crater (Large)
//    Land_ShellCrater_02_small_F | Shell Crater (Medium)
//    Land_Shop_City_01_F | Corner Shop (Blue)
//    Land_Shop_City_02_F | Corner Shop (Brown)
//    Land_Shop_City_03_F | Large Shop (Brown)
//    Land_Shop_City_04_F | Hostel
//    Land_Shop_City_05_F | Large Shop (Blue)
//    Land_Shop_City_06_F | Large Shop (Yellow)
//    Land_Shop_City_07_F | Medium Shop (Pink)
//    Land_Shop_Town_01_F | Medium Shop (White)
//    Land_Shop_Town_02_F | Small Shop (Yellow)
//    Land_Shop_Town_03_F | Large Shop (White)
//    Land_Shop_Town_04_F | Small Shop (Red)
//    Land_Shop_Town_05_addon_F | Shop Addon (Red)
//    Land_Shop_Town_05_F | Medium Shop (Red)
//    Land_Slide_F | Slide
//    Land_SlideCastle_F | Slide (Castle)
//    Land_Supermarket_01_F | Supermarket (Tanoa)
//    Land_Supermarket_01_malden_F | Supermarket (Malden)
//    Land_SurveyMarker_01_cover_F | Survey Marker (Cover)
//    Land_SurveyMarker_01_post_F | Survey Marker (Post)
//    Land_SurveyMarker_01_rod_F | Survey Marker (Rod)
//    Land_Swing_01_F | Swing
//    Land_Target_Concrete_01_v1_F | Concrete Target (Big, v1)
//    Land_Target_Concrete_01_v2_F | Concrete Target (Big, v2)
//    Land_Target_Concrete_Support_01_F | Concrete Target (Support)
//    Land_Target_Line_01_F | Wooden Targets (5)
//    Land_Target_Line_PaperTargets_01_F | Wooden Targets (Paper)
//    Land_Target_Pistol_01_F | Wooden Targets (3)
//    Land_Target_Single_01_F | Wooden Target
//    land_tower_lxws | Mosque (Tower)
//    Land_TreeBin_F | Tree Base
//    Land_u_Addon_01_V1_F | Pergola
//    Land_u_Addon_02_V1_F | House Addon (Abandoned)
//    Land_u_House_Big_01_V1_F | House (Large, Abandoned)
//    Land_u_House_Big_02_V1_F | House (Big, Abandoned)
//    Land_u_House_Small_01_V1_F | House (Abandoned)
//    Land_u_House_Small_02_V1_F | House (Small, Abandoned)
//    Land_Unfinished_Building_01_F | Unfinished Building (Big)
//    Land_Unfinished_Building_02_F | Unfinished Building (Large)
//    Land_VillageStore_01_F | General Store
//    Land_Warehouse_03_F | Warehouse (Blue)
//    Land_WoodenShelter_01_F | Wooden Shelter
//    MedicalGarbage_01_1x1_v1_F | Medical Garbage (1x1, v1)
//    MedicalGarbage_01_1x1_v2_F | Medical Garbage (1x1, v2)
//    MedicalGarbage_01_1x1_v3_F | Medical Garbage (1x1, v3)
//    MedicalGarbage_01_3x3_v1_F | Medical Garbage (3x3, v1)
//    MedicalGarbage_01_3x3_v2_F | Medical Garbage (3x3, v2)
//    MedicalGarbage_01_5x5_v1_F | Medical Garbage (5x5)
//    MedicalGarbage_01_Bandage_F | Medical Garbage (Bandage)
//    MedicalGarbage_01_FirstAidKit_F | Medical Garbage (First Aid Kit)
//    MedicalGarbage_01_Gloves_F | Medical Garbage (Gloves)
//    MedicalGarbage_01_Injector_F | Medical Garbage (Injector)
//    MedicalGarbage_01_Packaging_F | Medical Garbage (Packaging)
//    Scarecrow_01_F | Scarecrow
//
// -- Structures_Transport (41) --
//    Land_Airport_Tower_F | Airport Control Tower
//    Land_Breakwater_01_F | Breakwater (Dry)
//    Land_Breakwater_02_F | Breakwater (Wet)
//    Land_Canal_Dutch_01_15m_F | Canal Promenade (15 m)
//    Land_Canal_Dutch_01_bridge_F | Canal Promenade (Bridge)
//    Land_Canal_Dutch_01_corner_F | Canal Promenade (Outer Corner)
//    Land_Canal_Dutch_01_plate_F | Canal Promenade (Inner Corner)
//    Land_Canal_Dutch_01_stairs_F | Canal Promenade (Stairs)
//    Land_Hangar_F | Hangar
//    Land_nav_pier_m_F | Pier (Metal)
//    Land_Pier_addon | Pier Platform
//    Land_Pier_Box_F | Pier Box
//    Land_Pier_F | Pier (Concrete)
//    Land_Pier_small_F | Pier (Wooden)
//    Land_Pier_wall_F | Pier (Rocks)
//    Land_PierConcrete_01_16m_F | Concrete Pier (16 m)
//    Land_PierConcrete_01_30deg_F | Concrete Pier (Bend)
//    Land_PierConcrete_01_4m_ladders_F | Concrete Pier (4 m, Ladders)
//    Land_PierConcrete_01_end_F | Concrete Pier (End)
//    Land_PierConcrete_01_steps_F | Concrete Pier (Steps)
//    Land_PierLadder_F | Pier Ladder
//    Land_PierWooden_01_10m_noRails_F | Wooden Pier (10 m, No Rails)
//    Land_PierWooden_01_16m_F | Wooden Pier (16 m)
//    Land_PierWooden_01_dock_F | Wooden Pier (End, Dock)
//    Land_PierWooden_01_hut_F | Wooden Pier (End, Hut)
//    Land_PierWooden_01_ladder_F | Wooden Pier (End, Ladder)
//    Land_PierWooden_01_platform_F | Wooden Pier (End, Platform)
//    Land_PierWooden_02_16m_F | Old Wooden Pier
//    Land_PierWooden_02_30deg_F | Old Wooden Pier (Turn)
//    Land_PierWooden_02_barrel_F | Old Wooden Pier (End, Barrel)
//    Land_PierWooden_02_hut_F | Old Wooden Pier (End, Hut)
//    Land_PierWooden_02_ladder_F | Old Wooden Pier (End, Ladder)
//    Land_PierWooden_03_F | Small Wooden Pier
//    Land_Pillar_Pier_F | Pier Pillar
//    Land_QuayConcrete_01_20m_F | Concrete Quay (20 m)
//    Land_QuayConcrete_01_20m_wall_F | Concrete Quay (20 m, Wall Railing)
//    Land_QuayConcrete_01_5m_ladder_F | Concrete Quay (5 m, Ladder)
//    Land_QuayConcrete_01_innerCorner_F | Concrete Quay (Inner Corner)
//    Land_QuayConcrete_01_outterCorner_F | Concrete Quay (Outer Corner)
//    Land_QuayConcrete_01_pier_F | Concrete Quay (Pier Junction)
//    Land_Sea_Wall_F | Rock Wavebreaker
//
// -- Structures_VR (12) --
//    Land_VR_Block_01_F | VR Obstacle (20x10x8)
//    Land_VR_Block_02_F | VR Obstacle (12x12x4)
//    Land_VR_Block_03_F | VR Obstacle (12x7.5x6)
//    Land_VR_Block_04_F | VR Obstacle (10.5x10.5x9)
//    Land_VR_Block_05_F | VR Obstacle (10x5x4)
//    Land_VR_CoverObject_01_kneel_F | VR Cover Object (Kneel)
//    Land_VR_CoverObject_01_kneelHigh_F | VR Cover Object (High kneel)
//    Land_VR_CoverObject_01_kneelLow_F | VR Cover Object (Low kneel)
//    Land_VR_CoverObject_01_stand_F | VR Cover Object (Stand)
//    Land_VR_CoverObject_01_standHigh_F | VR Cover Object (High stand)
//    Land_VR_Shape_01_cube_1m_F | VR Game Block (Cube, 1m)
//    Land_VR_Slope_01_F | VR Slope (10x5x4)
//
// -- Structures_Village (122) --
//    Land_Anthill_01_F | Anthill
//    Land_Bark_Beetle_Trap_01_F | Bark Beetle Trap (Small)
//    Land_Bark_Beetle_Trap_02_F | Bark Beetle Trap (Medium)
//    Land_Bark_Beetle_Trap_03_F | Bark Beetle Trap (Large)
//    Land_Barn_02_F | Barn (Brick)
//    Land_Barn_03_large_F | Barn (Wooden, Large)
//    Land_Barn_03_small_F | Barn (Wooden, Small)
//    Land_Barn_04_F | Barn (Metal)
//    Land_Caravan_01_green_F | Caravan (Green)
//    Land_Caravan_01_rust_F | Caravan (Rusty)
//    Land_ClothesLine_01_F | Clothesline (Long)
//    Land_ClothesLine_01_full_F | Clothesline (Long, Full)
//    Land_ClothesLine_01_short_F | Clothesline (Short)
//    Land_Cowshed_01_A_F | Cowshed (Left)
//    Land_Cowshed_01_B_F | Cowshed (Middle)
//    Land_Cowshed_01_C_F | Cowshed (Right)
//    Land_d_Stone_HouseBig_V1_F | Stone House (Big, Destroyed)
//    Land_d_Stone_HouseSmall_V1_F | Stone House (Destroyed)
//    Land_d_Stone_Shed_V1_F | Stone House (Small, Destroyed)
//    Land_Dates_01_lxWS | Dates (Pile, v1)
//    Land_Dates_02_lxWS | Dates (Pile, v2)
//    Land_Dates_03_lxWS | Dates (Pile, v3)
//    Land_DeerSkeleton_damaged_01_F | Deer Skeleton (Partial)
//    Land_DeerSkeleton_full_01_F | Deer Skeleton (Full)
//    Land_DeerSkeleton_pile_01_F | Deer Skeleton (Pile)
//    Land_DeerSkeleton_skull_01_F | Deer Skull
//    Land_DeerStand_01_F | Deer Stand (v1)
//    Land_DeerStand_02_F | Deer Stand (v2)
//    Land_Drainage_01_F | Drainage (Concrete Manhole)
//    Land_FeedRack_01_F | Feed Rack
//    Land_FeedShack_01_F | Feed Shack
//    Land_FeedStorage_01_F | Feed Storage
//    Land_GarageOffice_01_F | Garage Office
//    Land_GarageRow_01_large_F | Garage (Large)
//    Land_GarageRow_01_small_F | Garage (Small)
//    Land_GarageShelter_01_F | House with Parking Shelter
//    Land_GarbageBin_02_F | Garbage Bin
//    Land_GarbageBin_03_F | Garbage Bin
//    Land_HayBale_01_decayed_F | Hay Bale (Decayed)
//    Land_HayBale_01_F | Hay Bale
//    Land_HayBale_01_packed_F | Hay Bale (Packed)
//    Land_HayBale_01_stack_F | Hay Bale (Stack)
//    Land_HayBlock_01_lxWS | Hay Bale
//    Land_HayBlock_02_lxWS | Hay Bale (Big)
//    Land_HayBlock_03_lxWS | Hay Bale (Decayed)
//    Land_House_1B01_F | Brick House (Small, v1)
//    Land_House_1W01_F | Wooden House (Small, v1)
//    Land_House_1W02_F | Wooden House (Small, v2)
//    Land_House_1W03_F | Wooden House (Small, v3)
//    Land_House_1W04_F | Wooden House (Small, v4)
//    Land_House_1W05_F | Wooden House (Small, v5)
//    Land_House_1W06_F | Wooden House (Small, v6)
//    Land_House_1W07_F | Wooden House (Small, v7)
//    Land_House_1W08_F | Wooden House (Small, v8)
//    Land_House_1W09_F | Wooden House (Small, v9)
//    Land_House_1W10_F | Wooden House (Small, v10)
//    Land_House_1W11_F | Wooden House (Small, v11)
//    Land_House_1W12_F | Wooden House (Small, v12)
//    Land_House_1W13_F | Wooden House (Small, v13)
//    Land_House_2B01_F | Brick House (v1)
//    Land_House_2B02_F | Brick House (v2)
//    Land_House_2B03_F | Brick House (v3)
//    Land_House_2B04_F | Brick House (v4)
//    Land_House_2W01_F | Wooden House (v1)
//    Land_House_2W02_F | Wooden House (v2)
//    Land_House_2W03_F | Wooden House (v3)
//    Land_House_2W04_F | Wooden House (v4)
//    Land_House_2W05_F | Wooden House (v5)
//    Land_House_Big_01_F | Bungalow (Yellow, Large)
//    Land_House_Big_02_F | Bungalow (Large)
//    Land_House_Native_01_F | Native House (Big)
//    Land_House_Native_02_F | Native House (Small)
//    Land_House_Small_01_F | Metal Bungalow (Yellow)
//    Land_House_Small_02_F | Brick Bungalow
//    Land_House_Small_03_F | Bungalow (Turquoise)
//    Land_House_Small_06_F | Bungalow (Yellow)
//    Land_i_Stone_House_Big_01_b_clay_F | Stone House (Big, v2, Brown)
//    Land_i_Stone_HouseBig_V1_F | Stone House (Big, Grey)
//    Land_i_Stone_HouseBig_V2_F | Stone House (Big, White)
//    Land_i_Stone_HouseBig_V3_F | Stone House (Big, Brown)
//    Land_i_Stone_HouseSmall_V1_F | Stone House (Grey)
//    Land_i_Stone_HouseSmall_V2_F | Stone House (White)
//    Land_i_Stone_HouseSmall_V3_F | Stone House (Brown)
//    Land_i_Stone_Shed_01_b_clay_F | Stone House (Small, v2, Brown)
//    Land_i_Stone_Shed_01_b_raw_F | Stone House (Small, v2, Grey)
//    Land_i_Stone_Shed_01_b_white_F | Stone House (Small, v2, White)
//    Land_i_Stone_Shed_01_c_clay_F | Stone House (Small, v3, Brown)
//    Land_i_Stone_Shed_01_c_raw_F | Stone House (Small, v3, Grey)
//    Land_i_Stone_Shed_01_c_white_F | Stone House (Small, v3, White)
//    Land_i_Stone_Shed_V1_F | Stone House (Small, Grey)
//    Land_i_Stone_Shed_V2_F | Stone House (Small, Brown)
//    Land_i_Stone_Shed_V3_F | Stone House (Small, White)
//    Land_ManurePile_01_F | Manure Pile
//    Land_PicnicTable_01_F | Picnic Table
//    Land_Rail_Station_Big_F | Railway Station (Big)
//    Land_Rail_Warehouse_Small_F | Warehouse (Small)
//    Land_Shed_01_F | Yellow Metal Shed
//    Land_Shed_02_F | Grey Metal Shed (Small)
//    Land_Shed_03_F | Grey Metal Shed (Unfinished)
//    Land_Shed_04_F | Yellow Metal Shed (Small)
//    Land_Shed_05_F | Grey Metal Shed (Medium)
//    Land_Shed_06_F | Grey Metal Shed (Roof)
//    Land_Shed_07_F | Grey Metal Shed (Large, Weathered)
//    Land_Shed_09_F | Wooden Shed (Small)
//    Land_Shed_10_F | Wooden Shed (Medium)
//    Land_Shed_11_F | Old Plywood Shed (Medium)
//    Land_Shed_12_F | Plywood Shed (Small)
//    Land_Shed_13_F | Plywood Shed (Medium)
//    Land_Shed_14_F | Wooden Shed (Big)
//    Land_SilageStorage_01_F | Silage Storage
//    Land_Slum_01_F | Grey Shack (Small)
//    Land_Slum_02_F | Grey Shack (Medium)
//    Land_Slum_03_F | Purple Shack (Large)
//    Land_Slum_04_F | Purple Shack (Medium)
//    Land_Slum_05_F | Grey Shack (Large)
//    Land_StrawStack_01_F | Straw Heap
//    Land_Substation_01_F | Substation
//    Land_Temple_Native_01_F | Native Temple
//    Land_Trough_01_F | Trough (Metal)
//    Land_WaterStation_01_F | Water Station
//    Land_WaterTower_02_F | Water Tower
//    Land_WoodenBox_02_F | Wooden Box (1x1)
//
// -- Structures_Walls (200) --
//    Land_BackAlley_01_l_1m_F | Back Alley Wire Fence (1 m)
//    Land_BackAlley_01_l_gap_F | Back Alley Wire Fence (Gap)
//    Land_BrickWall_01_l_5m_d_F | Brick Wall (v1, 5m, Damaged)
//    Land_BrickWall_01_l_5m_F | Brick Wall (v1, 5m)
//    Land_BrickWall_01_l_corner_F | Brick Wall (v1, 5m, Damaged)
//    Land_BrickWall_01_l_end_F | Brick Wall (v1, End)
//    Land_BrickWall_01_l_pole_F | Brick Wall (v1, Pole)
//    Land_BrickWall_02_l_5m_d_F | Brick Wall (v2, 5m, Damaged)
//    Land_BrickWall_02_l_5m_F | Brick Wall (v2, 5m)
//    Land_BrickWall_02_l_corner_v1_F | Brick Wall (v2, Corner, Convex)
//    Land_BrickWall_02_l_corner_v2_F | Brick Wall (v2, Corner, Concave)
//    Land_BrickWall_02_l_end_F | Brick Wall (v2, End)
//    Land_BrickWall_03_l_5m_v1_d_F | Brick Wall (v3, 5m, Damaged, Left)
//    Land_BrickWall_03_l_5m_v1_F | Brick Wall (v3, 5m, Left)
//    Land_BrickWall_03_l_5m_v2_d_F | Brick Wall (v3, 5m, Damaged, Right)
//    Land_BrickWall_03_l_5m_v2_F | Brick Wall (v3, 5m, Right)
//    Land_BrickWall_03_l_gate_F | Brick Wall (v3, Gate)
//    Land_BrickWall_03_l_pole_F | Brick Wall (v3, Pole)
//    Land_BrickWall_04_l_5m_d_F | Brick Wall (v4, 5m, Damaged)
//    Land_BrickWall_04_l_5m_F | Brick Wall (v4, 5m, Damaged)
//    Land_BrickWall_04_l_5m_old_d_F | Brick Wall (v4, 5m, Old, Damaged)
//    Land_BrickWall_04_l_5m_old_F | Brick Wall (v4, 5m, Old)
//    Land_BrickWall_04_l_pole_F | Brick Wall (v4, Pole)
//    Land_BrickWall_04_l_pole_old_F | Brick Wall (v4, Pole, Old)
//    Land_CamoConcreteWall_01_l_4m_d_v1_F | Camo Concrete Wall (4m, Damaged, v1)
//    Land_CamoConcreteWall_01_l_4m_d_v2_F | Camo Concrete Wall (4m, Damaged, v2)
//    Land_CamoConcreteWall_01_l_4m_v1_F | Camo Concrete Wall (4m, v1)
//    Land_CamoConcreteWall_01_l_4m_v2_F | Camo Concrete Wall (4m, v2)
//    Land_CamoConcreteWall_01_l_end_v1_F | Camo Concrete Wall (End)
//    Land_CamoConcreteWall_01_pole_v1_F | Camo Concrete Wall (Pole)
//    Land_Canal_Wall_10m_F | Canal Wall
//    Land_Canal_Wall_D_center_F | Canal Wall (Destroyed, Middle)
//    Land_Canal_Wall_D_left_F | Canal Wall (Destroyed, Left)
//    Land_Canal_Wall_D_right_F | Canal Wall (Destroyed, Right)
//    Land_Canal_Wall_Stairs_F | Canal Wall (Stairs)
//    Land_Canal_WallSmall_10m_F | Canal Wall (Small)
//    Land_City2_4m_F | Wall (White)
//    Land_City2_8m_F | Wall (Long, White)
//    Land_City2_8mD_F | Wall (Destroyed, White)
//    Land_City2_PillarD_F | Wall (Pillar, White)
//    Land_City_4m_F | City Wall (White)
//    Land_City_8m_F | City Wall (Long, White)
//    Land_City_8mD_F | City Wall (Long, Destroyed, White)
//    Land_City_Gate_F | City Wall (Gate, White)
//    Land_City_Pillar_F | City Wall (Pillar, White)
//    Land_Concrete_SmallWall_4m_F | Concrete Wall (Small, 4 m)
//    Land_Concrete_SmallWall_8m_F | Concrete Wall (Small, 8 m)
//    Land_ConcreteWall_01_l_4m_F | Tall Concrete Wall (4 m)
//    Land_ConcreteWall_01_l_8m_F | Tall Concrete Wall (8 m)
//    Land_ConcreteWall_01_l_d_F | Tall Concrete Wall (Destroyed)
//    Land_ConcreteWall_01_l_gate_F | Tall Concrete Wall (Gate)
//    Land_ConcreteWall_01_l_pole_F | Tall Concrete Wall (Pillar)
//    Land_ConcreteWall_01_m_4m_F | Medium Concrete Wall (4 m)
//    Land_ConcreteWall_01_m_8m_F | Medium Concrete Wall (8 m)
//    Land_ConcreteWall_01_m_d_F | Medium Concrete Wall (Destroyed)
//    Land_ConcreteWall_01_m_gate_F | Medium Concrete Wall (Gate)
//    Land_ConcreteWall_01_m_pole_F | Medium Concrete Wall (Pillar)
//    Land_ConcreteWall_02_m_2m_F | Concrete Decorative Wall (2 m)
//    Land_ConcreteWall_02_m_4m_F | Concrete Decorative Wall (4 m)
//    Land_ConcreteWall_02_m_8m_F | Concrete Decorative Wall (8 m)
//    Land_ConcreteWall_02_m_d_F | Concrete Decorative Wall (Destroyed)
//    Land_ConcreteWall_02_m_gate_F | Concrete Decorative Wall (Gate)
//    Land_ConcreteWall_02_m_pole_F | Concrete Decorative Wall (Pole)
//    Land_ConcreteWall_03_m_2m_F | Concrete Wall (v3, 2m)
//    Land_ConcreteWall_03_m_6m_F | Concrete Wall (v3, 6m)
//    Land_ConcreteWall_03_m_pole_F | Concrete Wall (v3, Pole)
//    Land_CrashBarrier_01_4m_F | Crash Barrier (4 m)
//    Land_CrashBarrier_01_8m_F | Crash Barrier (8 m)
//    Land_CrashBarrier_01_end_L_F | Crash Barrier (Left End)
//    Land_CrashBarrier_01_end_R_F | Crash Barrier (Right End)
//    Land_GameProofFence_01_l_5m_F | Game Fence (5m)
//    Land_GameProofFence_01_l_d_F | Game Fence (Destroyed)
//    Land_GameProofFence_01_l_gate_F | Game Fence (Gate)
//    Land_GameProofFence_01_l_pole_F | Game Fence (Pole)
//    Land_Hedge_01_s_2m_F | Small Hedge (2 m)
//    Land_Hedge_01_s_4m_F | Small Hedge (4 m)
//    Land_InvisibleBarrier_F | Invisible Wall
//    Land_Mil_WallBig_4m_battered_F | Military Base Wall (Battered)
//    Land_Mil_WallBig_4m_damaged_center_F | Military Base Wall (Damaged Center)
//    Land_Mil_WallBig_4m_damaged_center_lxWS | Military Base Wall (Damaged Center)
//    Land_Mil_WallBig_4m_damaged_left_F | Military Base Wall (Damaged Left)
//    Land_Mil_WallBig_4m_damaged_left_lxWS | Military Base Wall (Damaged Left)
//    Land_Mil_WallBig_4m_damaged_right_F | Military Base Wall (Damaged Right)
//    Land_Mil_WallBig_4m_damaged_right_lxWS | Military Base Wall (Damaged Right)
//    Land_Mil_WallBig_corner_battered_F | Military Base Wall (Corner, Battered)
//    Land_Mil_WallBig_debris_F | Military Base Wall (Debris)
//    Land_Mil_WallBig_debris_lxWS | Military Base Wall (Debris)
//    Land_Mil_WallBig_Gate_F | Military Base Wall (Gate)
//    Land_NetFence_02_m_2m_F | Concrete Net Fence (2 m)
//    Land_NetFence_02_m_4m_F | Concrete Net Fence (4 m)
//    Land_NetFence_02_m_8m_F | Concrete Net Fence (8 m)
//    Land_NetFence_02_m_d_F | Concrete Net Fence (2 m, Destroyed)
//    Land_NetFence_02_m_gate_v1_F | Concrete Net Fence (Gate, Narrow)
//    Land_NetFence_02_m_gate_v2_F | Concrete Net Fence (Gate, Wide)
//    Land_NetFence_02_m_pole_F | Concrete Net Fence (Pillar)
//    Land_PlasticNetFence_01_long_d_F | Plastic Net Fence (Long, Destroyed)
//    Land_PlasticNetFence_01_long_F | Plastic Net Fence (Long)
//    Land_PlasticNetFence_01_pole_F | Plastic Net Fence (Pole)
//    Land_PlasticNetFence_01_short_d_F | Plastic Net Fence (Destroyed)
//    Land_PlasticNetFence_01_short_F | Plastic Net Fence
//    Land_Rampart_F | Rampart
//    Land_Rampart_lxWS | Rampart (Sand)
//    Land_SilageWall_01_l_5m_F | Silage Wall (5m)
//    Land_SilageWall_01_l_d_F | Silage Wall (Destroyed)
//    Land_SilageWall_01_l_pole_F | Silage Wall (Pole)
//    Land_Slums01_8m | Slum Fence
//    Land_Slums01_pole | Slum Fence (Pole)
//    Land_Slums02_4m | Plank Fence (Long)
//    Land_Slums02_pole | Plank Fence (Pole)
//    Land_SlumWall_01_s_2m_F | Slum Wall (2 m)
//    Land_SlumWall_01_s_4m_F | Slum Wall (4 m)
//    Land_Stone_4m_F | Stone Wall
//    Land_Stone_8m_F | Stone Wall (Long)
//    Land_Stone_8mD_F | Stone Wall (Long, Destroyed)
//    Land_Stone_Gate_F | Stone Wall (Gate)
//    Land_Stone_pillar_F | Stone Wall (Pillar)
//    Land_StoneWall_01_s_10m_F | Small Stone Mound (10m)
//    Land_StoneWall_01_s_d_F | Small Stone Mound (10m, Destroyed)
//    Land_StoneWall_02_s_10m_F | Small Stone Mound (10m, v2)
//    Land_TinWall_01_m_4m_v1_F | Medium Tin Fence (4 m, Rusty)
//    Land_TinWall_01_m_4m_v2_F | Medium Tin Fence (4 m)
//    Land_TinWall_01_m_gate_v1_F | Medium Tin Fence (Gate, Narrow)
//    Land_TinWall_01_m_gate_v2_F | Medium Tin Fence (Gate, Wide)
//    Land_TinWall_01_m_pole_F | Medium Tin Fence (Pole)
//    Land_TinWall_02_l_4m_F | Tall Tin Fence (4 m)
//    Land_TinWall_02_l_8m_F | Tall Tin Fence (8 m)
//    Land_TinWall_02_l_pole_F | Tall Tin Fence (Pole)
//    Land_Wall_IndCnc_2deco_F | Concrete Square Wall
//    Land_Wall_IndCnc_4_D_F | Concrete Layered Wall (Destroyed)
//    Land_Wall_IndCnc_4_F | Concrete Layered Wall
//    Land_Wall_IndCnc_End_2_F | Concrete Layered Wall (End, Destroyed)
//    Land_Wall_IndCnc_Pole_F | Concrete Layered Wall (Pillar)
//    Land_Wall_L1_gate_EP1_lxWS | Wooden Gate with Concrete Posts
//    Land_Wall_Tin_4 | Tin Fence (v1)
//    Land_Wall_Tin_4_2 | Tin Fence (v2)
//    Land_Wall_Tin_Pole | Tin Fence (Pole)
//    Land_WallCity_01_4m_blue_F | City Wall (Blue)
//    Land_WallCity_01_4m_grey_F | City Wall (Grey)
//    Land_WallCity_01_4m_pink_F | City Wall (Pink)
//    Land_WallCity_01_4m_plain_blue_F | Wall (Blue)
//    Land_WallCity_01_4m_plain_grey_F | Wall (Grey)
//    Land_WallCity_01_4m_plain_pink_F | Wall (Pink)
//    Land_WallCity_01_4m_plain_whiteblue_F | Wall (White & Blue)
//    Land_WallCity_01_4m_plain_yellow_F | Wall (Yellow & White)
//    Land_WallCity_01_4m_whiteblue_F | City Wall (White & Blue)
//    Land_WallCity_01_4m_yellow_F | City Wall (Yellow & White)
//    Land_WallCity_01_8m_blue_F | City Wall (Long, Blue)
//    Land_WallCity_01_8m_dmg_blue_F | City Wall (Long, Destroyed, Blue)
//    Land_WallCity_01_8m_dmg_grey_F | City Wall (Long, Destroyed, Grey)
//    Land_WallCity_01_8m_dmg_pink_F | City Wall (Long, Destroyed, Pink)
//    Land_WallCity_01_8m_dmg_whiteblue_F | City Wall (Long, Destroyed, White & Blue)
//    Land_WallCity_01_8m_dmg_yellow_F | City Wall (Long, Destroyed, Yellow & White)
//    Land_WallCity_01_8m_grey_F | City Wall (Long, Grey)
//    Land_WallCity_01_8m_pink_F | City Wall (Long, Pink)
//    Land_WallCity_01_8m_plain_blue_F | Wall (Long, Blue)
//    Land_WallCity_01_8m_plain_grey_F | Wall (Long, Grey)
//    Land_WallCity_01_8m_plain_pink_F | Wall (Long, Pink)
//    Land_WallCity_01_8m_plain_whiteblue_F | Wall (Long, White & Blue)
//    Land_WallCity_01_8m_plain_yellow_F | Wall (Long, Yellow & White)
//    Land_WallCity_01_8m_whiteblue_F | City Wall (Long, White & Blue)
//    Land_WallCity_01_8m_yellow_F | City Wall (Long, Yellow & White)
//    Land_WallCity_01_gate_blue_F | City Wall (Gate, Blue)
//    Land_WallCity_01_gate_grey_F | City Wall (Gate, Grey)
//    Land_WallCity_01_gate_pink_F | City Wall (Gate, Pink)
//    Land_WallCity_01_gate_whiteblue_F | City Wall (Gate, White & Blue)
//    Land_WallCity_01_gate_yellow_F | City Wall (Gate, Yellow & White)
//    Land_WallCity_01_pillar_blue_F | City Wall (Pillar, Blue)
//    Land_WallCity_01_pillar_grey_F | City Wall (Pillar, Grey)
//    Land_WallCity_01_pillar_pink_F | City Wall (Pillar, Pink)
//    Land_WallCity_01_pillar_whiteblue_F | City Wall (Pillar, White & Blue)
//    Land_WallCity_01_pillar_yellow_F | City Wall (Pillar, Yellow & White)
//    Land_WiredFence_01_16m_F | Medium Wire Fence (16 m)
//    Land_WiredFence_01_4m_F | Medium Wire Fence (4 m)
//    Land_WiredFence_01_8m_d_F | Medium Wire Fence (8 m, Destroyed)
//    Land_WiredFence_01_8m_F | Medium Wire Fence (8 m)
//    Land_WiredFence_01_gate_F | Medium Wire Fence (Gate)
//    Land_WiredFence_01_pole_45_F | Medium Wire Fence (Brace Pole)
//    Land_WiredFence_01_pole_F | Medium Wire Fence (Pole)
//    Land_WoodenWall_01_m_4m_F | Medium Wooden Fence (4 m)
//    Land_WoodenWall_01_m_8m_F | Medium Wooden Fence (8 m)
//    Land_WoodenWall_01_m_d_F | Medium Wooden Fence (Destroyed)
//    Land_WoodenWall_01_m_pole_F | Medium Wooden Fence (Pole)
//    Land_WoodenWall_03_s_5m_v1_F | Wooden Wall (v3, 5m, Full 1)
//    Land_WoodenWall_03_s_5m_v2_F | Wooden Wall (v3, 5m, Full 2)
//    Land_WoodenWall_03_s_d_5m_v1_F | Wooden Wall (v3, 5m, Damaged 1)
//    Land_WoodenWall_03_s_d_5m_v2_F | Wooden Wall (v3, 5m, Damaged 2)
//    Land_WoodenWall_04_s_5m_F | Wooden Wall (v4, 5m)
//    Land_WoodenWall_04_s_d_5m_F | Wooden Wall (v4, 5m, Damaged)
//    Land_WoodenWall_04_s_end_v1_F | Wooden Wall (v4, End, Right)
//    Land_WoodenWall_04_s_end_v2_F | Wooden Wall (v4, End, Left)
//    Land_WoodenWall_04_s_pole_F | Wooden Wall (v4, Pole)
//    Land_WoodenWall_05_m_4m_v1_F | Wooden Wall (v5, 4m, Full 1)
//    Land_WoodenWall_05_m_4m_v2_F | Wooden Wall (v5, 4m, Full 2)
//    Land_WoodenWall_05_m_d_4m_F | Wooden Wall (v5, 4m, Damaged)
//    Land_WoodenWall_05_m_end_F | Wooden Wall (v5, End)
//    Land_WoodenWall_05_m_pole_F | Wooden Wall (v5, Pole)
//    Wall_L1_2m5_EP1_lxWS | Middle Eastern Concrete Wall
//    Wall_L1_5m_EP1_lxWS | Middle Eastern Concrete Wall (5m)
//    Wall_L2_5m_EP1_lxWS | Middle Eastern Concrete Wall (5m, Styled)
//    Wall_L_2m5_EP1_lxWS | Mud Wall
//
// -- Submerged (8) --
//    C_Boat_Civil_03_F | Fishing Motorboat
//    C_Boat_Civil_04_F | Trawler
//    Land_BuoyBig_F | Buoy
//    Land_Rope_F | Rope
//    Land_RowBoat_V1_F | Rowboat (v1)
//    Land_RowBoat_V2_F | Rowboat (v2)
//    Land_RowBoat_V3_F | Rowboat (v3)
//    Submarine_01_F | HMS Proteus
//
// -- SystemLocations (11) --
//    LocationArea_F | Area
//    LocationBase_F | Base
//    LocationCamp_F | Camp
//    LocationCity_F | Town
//    LocationCityCapital_F | City
//    LocationEvacPoint_F | Evac Point
//    LocationFOB_F | FOB
//    LocationOutpost_F | Outpost
//    LocationRespawnPoint_F | Respawn Point
//    LocationResupplyPoint_F | Resupply Point
//    LocationVillage_F | Village
//
// -- SystemMisc (6) --
//    Curator_F | Curator
//    MiscAND_F | Logical AND
//    MiscLock_F | Lock
//    MiscOR_F | Logical OR
//    MiscUnlock_F | Unlock
//    ModuleHvtObjectiveRandomiser_F | End Game - Objective Randomizer
//
// -- SystemSides (3) --
//    SideBLUFOR_F | BLUFOR
//    SideOPFOR_F | OPFOR
//    SideResistance_F | Independent
//
// -- Tents (172) --
//    Campfire_burning_F | Campfire (burning)
//    EF_LCC_Static | LCC-1 (Static)
//    EF_LCC_Static_AAF | LCC-1 (Static, AAF)
//    EF_LCC_Static_Grey | LCC-1 (Static, Grey)
//    FirePlace_burning_F | Fireplace (burning)
//    Land_Campfire_F | Campfire
//    Land_Camping_Light_F | Camping Lantern
//    Land_Camping_Light_off_F | Camping Lantern (Off)
//    Land_CampingChair_V1_F | Folding Chair
//    Land_CampingChair_V1_folded_F | Folding Chair (Folded)
//    Land_CampingChair_V2_F | Camping Chair
//    Land_CampingChair_V2_white_F | Camping Chair (White)
//    Land_CampingTable_F | Camping Table
//    Land_CampingTable_small_F | Camping Table (Small)
//    Land_CampingTable_small_white_F | Camping Table (Small, White)
//    Land_CampingTable_white_F | Camping Table (White)
//    Land_CanvasCover_01_F | Canvas Cover (Large)
//    Land_CanvasCover_01_green_F | Canvas Cover (Large)
//    Land_CanvasCover_02_F | Canvas Cover (Small)
//    Land_CanvasCover_02_green_F | Canvas Cover (Small)
//    Land_Compass_F | Compass
//    Land_ConnectorTent_01_AAF_closed_F | Connector Tent (Closed) [AAF]
//    Land_ConnectorTent_01_AAF_cross_F | Connector Tent (Cross) [AAF]
//    Land_ConnectorTent_01_AAF_open_F | Connector Tent (Open) [AAF]
//    Land_ConnectorTent_01_CSAT_brownhex_closed_F | Connector Tent (Closed) [CSAT]
//    Land_ConnectorTent_01_CSAT_brownhex_cross_F | Connector Tent (Cross) [CSAT]
//    Land_ConnectorTent_01_CSAT_brownhex_open_F | Connector Tent (Open) [CSAT]
//    Land_ConnectorTent_01_CSAT_greenhex_closed_F | Connector Tent (Closed) [CSAT]
//    Land_ConnectorTent_01_CSAT_greenhex_cross_F | Connector Tent (Cross) [CSAT]
//    Land_ConnectorTent_01_CSAT_greenhex_open_F | Connector Tent (Open) [CSAT]
//    Land_ConnectorTent_01_floor_dark_F | Connector Tent (Floor, Dark)
//    Land_ConnectorTent_01_floor_light_F | Connector Tent (Floor, Light)
//    Land_ConnectorTent_01_NATO_closed_F | Connector Tent (Closed) [NATO]
//    Land_ConnectorTent_01_NATO_cross_F | Connector Tent (Cross) [NATO]
//    Land_ConnectorTent_01_NATO_open_F | Connector Tent (Open) [NATO]
//    Land_ConnectorTent_01_NATO_tropic_closed_F | Connector Tent (Closed) [NATO]
//    Land_ConnectorTent_01_NATO_tropic_cross_F | Connector Tent (Cross) [NATO]
//    Land_ConnectorTent_01_NATO_tropic_open_F | Connector Tent (Open) [NATO]
//    Land_ConnectorTent_01_taiga_closed_F | Connector Tent (Closed) [Russia]
//    Land_ConnectorTent_01_taiga_cross_F | Connector Tent (Cross) [Russia]
//    Land_ConnectorTent_01_taiga_open_F | Connector Tent (Open) [Russia]
//    Land_ConnectorTent_01_wdl_closed_F | Connector Tent (Closed) [LDF]
//    Land_ConnectorTent_01_wdl_cross_F | Connector Tent (Cross) [LDF]
//    Land_ConnectorTent_01_wdl_open_F | Connector Tent (Open) [LDF]
//    Land_ConnectorTent_01_white_closed_F | Connector Tent (White, Closed)
//    Land_ConnectorTent_01_white_cross_F | Connector Tent (White, Cross)
//    Land_ConnectorTent_01_white_open_F | Connector Tent (White, Open)
//    Land_DeconTent_01_AAF_F | Decon Tent [AAF]
//    Land_DeconTent_01_CSAT_brownhex_F | Decon Tent [CSAT]
//    Land_DeconTent_01_CSAT_greenhex_F | Decon Tent [CSAT]
//    Land_DeconTent_01_IDAP_F | Decon Tent [IDAP]
//    Land_DeconTent_01_NATO_F | Decon Tent [NATO]
//    Land_DeconTent_01_NATO_tropic_F | Decon Tent [NATO]
//    Land_DeconTent_01_taiga_F | Decon Tent [Russia]
//    Land_DeconTent_01_wdl_F | Decon Tent [LDF]
//    Land_DeconTent_01_white_F | Decon Tent (White)
//    Land_DeconTent_01_yellow_F | Decon Tent (Yellow)
//    Land_FirePlace_F | Fireplace (No Fire)
//    Land_GasTank_01_blue_F | Gas Tank (Blue)
//    Land_GasTank_01_khaki_F | Gas Tank (Khaki)
//    Land_GasTank_01_yellow_F | Gas Tank (Yellow)
//    Land_Ground_sheet_blue_F | Sleeping Mat (Blue)
//    Land_Ground_sheet_F | Sleeping Mat
//    Land_Ground_sheet_folded_blue_F | Sleeping Mat (Blue, Folded)
//    Land_Ground_sheet_folded_F | Sleeping Mat (Folded)
//    Land_Ground_sheet_folded_khaki_F | Sleeping Mat (Khaki, Folded)
//    Land_Ground_sheet_folded_OPFOR_F | Sleeping Mat (OPFOR, Folded)
//    Land_Ground_sheet_folded_yellow_F | Sleeping Mat (Yellow, Folded)
//    Land_Ground_sheet_khaki_F | Sleeping Mat (Khaki)
//    Land_Ground_sheet_OPFOR_F | Sleeping Mat (OPFOR)
//    Land_Ground_sheet_yellow_F | Sleeping Mat (Yellow)
//    Land_IRMaskingCover_01_alt_F | IR Masking Tent (Large)
//    Land_IRMaskingCover_01_F | IR Masking Tent (Large)
//    Land_IRMaskingCover_02_alt_F | IR Masking Tent (Small)
//    Land_IRMaskingCover_02_F | IR Masking Tent (Small)
//    Land_MedicalTent_01_aaf_generic_closed_F | Tent (Field, Closed) [AAF]
//    Land_MedicalTent_01_aaf_generic_inner_F | Tent (Field, Inner) [AAF]
//    Land_MedicalTent_01_aaf_generic_open_F | Tent (Field, Open) [AAF]
//    Land_MedicalTent_01_aaf_generic_outer_F | Tent (Field, Outer) [AAF]
//    Land_MedicalTent_01_brownhex_closed_F | Medical Tent [CSAT]
//    Land_MedicalTent_01_CSAT_brownhex_generic_closed_F | Tent (Field, Closed) [CSAT]
//    Land_MedicalTent_01_CSAT_brownhex_generic_inner_F | Tent (Field, Inner) [CSAT]
//    Land_MedicalTent_01_CSAT_brownhex_generic_open_F | Tent (Field, Open) [CSAT]
//    Land_MedicalTent_01_CSAT_brownhex_generic_outer_F | Tent (Field, Outer) [CSAT]
//    Land_MedicalTent_01_CSAT_greenhex_generic_closed_F | Tent (Field, Closed) [CSAT]
//    Land_MedicalTent_01_CSAT_greenhex_generic_inner_F | Tent (Field, Inner) [CSAT]
//    Land_MedicalTent_01_CSAT_greenhex_generic_open_F | Tent (Field, Open) [CSAT]
//    Land_MedicalTent_01_CSAT_greenhex_generic_outer_F | Tent (Field, Outer) [CSAT]
//    Land_MedicalTent_01_digital_closed_F | Medical Tent [AAF]
//    Land_MedicalTent_01_floor_dark_F | Tent (Shelter, Floor, Dark)
//    Land_MedicalTent_01_floor_light_F | Tent (Shelter, Floor, Light)
//    Land_MedicalTent_01_greenhex_closed_F | Medical Tent [CSAT]
//    Land_MedicalTent_01_MTP_closed_F | Medical Tent [NATO]
//    Land_MedicalTent_01_NATO_generic_closed_F | Tent (Field, Closed) [NATO]
//    Land_MedicalTent_01_NATO_generic_inner_F | Tent (Field, Inner) [NATO]
//    Land_MedicalTent_01_NATO_generic_open_F | Tent (Field, Open) [NATO]
//    Land_MedicalTent_01_NATO_generic_outer_F | Tent (Field, Outer) [NATO]
//    Land_MedicalTent_01_NATO_tropic_generic_closed_F | Tent (Field, Closed) [NATO]
//    Land_MedicalTent_01_NATO_tropic_generic_inner_F | Tent (Field, Inner) [NATO]
//    Land_MedicalTent_01_NATO_tropic_generic_open_F | Tent (Field, Open) [NATO]
//    Land_MedicalTent_01_NATO_tropic_generic_outer_F | Tent (Field, Outer) [NATO]
//    Land_MedicalTent_01_taiga_closed_F | Medical Tent [Russia]
//    Land_MedicalTent_01_taiga_generic_closed_F | Tent (Field, Closed) [Russia]
//    Land_MedicalTent_01_taiga_generic_inner_F | Tent (Field, Inner) [Russia]
//    Land_MedicalTent_01_taiga_generic_open_F | Tent (Field, Open) [Russia]
//    Land_MedicalTent_01_taiga_generic_outer_F | Tent (Field, Outer) [Russia]
//    Land_MedicalTent_01_tropic_closed_F | Medical Tent [NATO]
//    Land_MedicalTent_01_wdl_closed_F | Medical Tent [LDF]
//    Land_MedicalTent_01_wdl_generic_closed_F | Tent (Field, Closed) [LDF]
//    Land_MedicalTent_01_wdl_generic_inner_F | Tent (Field, Inner) [LDF]
//    Land_MedicalTent_01_wdl_generic_open_F | Tent (Field, Open) [LDF]
//    Land_MedicalTent_01_wdl_generic_outer_F | Tent (Field, Outer) [LDF]
//    Land_MedicalTent_01_white_generic_closed_F | Tent (Shelter, Closed)
//    Land_MedicalTent_01_white_generic_inner_F | Tent (Shelter, Inner)
//    Land_MedicalTent_01_white_generic_open_F | Tent (Shelter, Open)
//    Land_MedicalTent_01_white_generic_outer_F | Tent (Shelter, Outer)
//    Land_MedicalTent_01_white_IDAP_closed_F | Tent (Shelter, Closed) [IDAP]
//    Land_MedicalTent_01_white_IDAP_med_closed_F | Medical Tent [IDAP]
//    Land_MedicalTent_01_white_IDAP_open_F | Tent (Shelter, Open) [IDAP]
//    Land_MedicalTent_01_white_IDAP_outer_F | Tent (Shelter, Outer) [IDAP]
//    Land_PartyTent_01_F | Tent (High Peak)
//    Land_Pillow_camouflage_F | Pillow (Camo)
//    Land_Pillow_F | Pillow
//    Land_Pillow_grey_F | Pillow (Grey)
//    Land_Pillow_old_F | Pillow (Old)
//    Land_Sink_F | Sink
//    Land_Sleeping_bag_blue_F | Sleeping Bag (Blue)
//    Land_Sleeping_bag_blue_folded_F | Sleeping Bag (Blue, Folded)
//    Land_Sleeping_bag_brown_F | Sleeping Bag (Brown)
//    Land_Sleeping_bag_brown_folded_F | Sleeping Bag (Brown, Folded)
//    Land_Sleeping_bag_F | Sleeping Bag
//    Land_Sleeping_bag_folded_F | Sleeping Bag (Folded)
//    Land_Sun_chair_F | Sun Chair
//    Land_Sun_chair_green_F | Sun Chair (Green)
//    Land_Sunshade_01_F | Sunshade (Blue)
//    Land_Sunshade_02_F | Sunshade (Yellow)
//    Land_Sunshade_03_F | Sunshade (Palm)
//    Land_Sunshade_04_F | Sunshade (Rattan)
//    Land_Sunshade_F | Sunshade
//    Land_TablePlastic_01_F | Garden Table
//    Land_tent_desert_01_lxws | Desert Tent (Brown)
//    Land_tent_desert_02_lxws | Desert Tent (Black)
//    Land_tent_desert_03_lxws | Desert Tent (Red)
//    Land_tent_desert_04_lxws | Desert Tent (Old)
//    Land_tent_desert_floor_lxws | Tent (Desert, Floor)
//    Land_tent_desert_floor_small_lxws | Tent (Desert, Floor, Small)
//    Land_TentA_F | Tent (A-shape)
//    Land_TentDome_F | Tent (Dome-shape)
//    Land_TentLamp_01_standing_F | Tent Lamp (Standing, White)
//    Land_TentLamp_01_standing_red_F | Tent Lamp (Standing, Red)
//    Land_TentLamp_01_suspended_F | Tent Lamp (Suspended, White)
//    Land_TentLamp_01_suspended_red_F | Tent Lamp (Suspended, Red)
//    Land_Tents_Refugee_Blue_lxWS | Refugee Tent (Blue)
//    Land_Tents_Refugee_DBrown_lxWS | Refugee Tent (Brown)
//    Land_Tents_Refugee_Dirty_lxWS | Refugee Tent (Dirty)
//    Land_Tents_Refugee_Green_lxWS | Refugee Tent (Green)
//    Land_Tents_Refugee_lxWS | Refugee Tent
//    Land_Tents_Refugee_Orange_lxWS | Refugee Tent (Orange)
//    Land_Tents_Refugee_Pattern_lxWS | Refugee Tent (Pattern)
//    Land_Tents_Refugee_Red_lxWS | Refugee Tent (Red)
//    Land_TentSolar_01_bluewhite_F | Tent (Solar, Blue-White)
//    Land_TentSolar_01_folded_bluewhite_F | Tent (Solar, Folded, Blue-White)
//    Land_TentSolar_01_folded_olive_F | Tent (Solar, Folded, Olive)
//    Land_TentSolar_01_folded_redwhite_F | Tent (Solar, Folded, Red-White)
//    Land_TentSolar_01_folded_sand_F | Tent (Solar, Folded, Sand)
//    Land_TentSolar_01_olive_F | Tent (Solar, Olive)
//    Land_TentSolar_01_redwhite_F | Tent (Solar, Red-White)
//    Land_TentSolar_01_sand_F | Tent (Solar, Sand)
//    Land_WoodenLog_02_F | Wooden Log (Aspen)
//    Land_WoodenLog_F | Wooden log
//    Land_WoodPile_F | Woodpile
//    Land_WoodPile_large_F | Woodpile (Large)
//
// -- Test (18) --
//    Land_A_Mosque_small_2_EP1_lxWS | Mosque (Small)
//    Land_House_C_11_EP1_off_lxWS | House (Fenced)
//    Land_House_C_12_EP1_off_lxWS | Repair Shop
//    Land_House_C_5_EP1_off_lxWS | House (Small)
//    Land_House_C_5_V1_EP1_off_lxWS | House (Two Floors, v1)
//    Land_House_C_5_V2_EP1_off_lxWS | House (Two Floors, v2)
//    Land_House_C_5_V3_EP1_off_lxWS | House (Two Floors, v3)
//    Land_House_K_1_EP1_lxWS | Village House (Small)
//    Land_House_K_3_EP1_lxWS | Village House (Two Floors)
//    Land_House_L_1_EP1_lxWS | Village House (Adobe, Small)
//    Land_House_L_3_EP1_lxWS | Village House (Adobe, Medium)
//    Land_House_L_7_EP1_lxWS | Village House (Adobe, Big)
//    Land_House_L_8_EP1_lxWS | Village House (Adobe, Big, Two Floors)
//    Land_House_L_9_EP1_lxWS | Village House (Unfinished)
//    Land_Wall_L_2m5_gate_EP1_lxWS | Mud Gate (No Door)
//    Land_Wall_L_5m_Door_dark_lxWS | Mud Wall (Door, Brown)
//    Land_Wall_L_5m_Door_green_lxWS | Mud Wall (Door, Green)
//    Land_Wall_L_5m_Door_lxWS | Mud Wall (Door, Blue)
//
// -- Training (133) --
//    BlockConcrete_F | Concrete Block
//    Dirthump_1_F | Dirt Hump (Small)
//    Dirthump_2_F | Dirt Hump
//    Dirthump_3_F | Dirt Hump (Big)
//    Dirthump_4_F | Dirt Hump (Long)
//    Hostage_PopUp2_Moving_90deg_F | Moving Hostage 2 (Front)
//    Hostage_PopUp2_Moving_F | Moving Hostage 2 (Side)
//    Hostage_PopUp3_Moving_90deg_F | Moving Hostage 3 (Front)
//    Hostage_PopUp3_Moving_F | Moving Hostage 3 (Side)
//    Hostage_PopUp_Moving_90deg_F | Moving Hostage 1 (Front)
//    Hostage_PopUp_Moving_F | Moving Hostage 1 (Side)
//    Land_Balloon_01_air_F | Balloon (Air)
//    Land_Balloon_01_water_F | Balloon (Water)
//    Land_Obstacle_Bridge_F | Obstacle (Bridge)
//    Land_Obstacle_Climb_F | Obstacle (Climbing)
//    Land_Obstacle_Crawl_F | Obstacle (Crawling)
//    Land_Obstacle_Cross_F | Obstacle (Cross Over)
//    Land_Obstacle_Pass_F | Obstacle (Passing)
//    Land_Obstacle_Ramp_F | Obstacle (Ramp)
//    Land_Obstacle_RunAround_F | Obstacle (Run-around)
//    Land_Obstacle_Saddle_F | Obstacle (Saddle)
//    Land_RampConcrete_F | Concrete Ramp
//    Land_RampConcreteHigh_F | Concrete Ramp (High)
//    Land_Target_Dueling_01_F | Dueling Target
//    Land_Target_Oval_F | Target - Oval (Ground)
//    Land_Target_Oval_Wall_Bottom_F | Target - Oval (Wall, Bottom)
//    Land_Target_Oval_Wall_Left_F | Target - Oval (Wall, Left)
//    Land_Target_Oval_Wall_Right_F | Target - Oval (Wall, Right)
//    Land_Target_Oval_Wall_Top_F | Target - Oval (Wall, Top)
//    Land_Target_PopUp_01_figure_F | Pop-Up Target (Disassembled, Board)
//    Land_Target_PopUp_01_mechanism_F | Pop-Up Target (Disassembled, Base)
//    Land_Target_Swivel_01_F | Swivel Target
//    Metal_Pole_F | Metal Pole
//    Metal_Pole_Platform_F | Metal Pole (Platform)
//    Metal_Pole_Skeet_F | Metal Pole (Skeet)
//    ShootingPos_F | Shooting Position
//    Skeet_Clay_F | Skeet Clay
//    Steel_Plate_F | Steel Plate
//    Steel_Plate_L_F | Steel Plate (Large)
//    Steel_Plate_L_Stand_F | Steel Plate (Large - Stand)
//    Steel_Plate_S_F | Steel Plate (Small)
//    Steel_Plate_S_Stand_F | Steel Plate (Small - Stand)
//    Steel_Plate_Stand_F | Steel Plate (Stand)
//    Target_F | Simple Target
//    Target_PopUp2_Moving_90deg_Acc1_F | Moving Target 2 (Front - Zones)
//    Target_PopUp2_Moving_90deg_Acc2_F | Moving Target 2 (Front - Accuracy)
//    Target_PopUp2_Moving_90deg_F | Moving Target 2 (Front)
//    Target_PopUp2_Moving_Acc1_F | Moving Target 2 (Side - Zones)
//    Target_PopUp2_Moving_Acc2_F | Moving Target 2 (Side - Accuracy)
//    Target_PopUp2_Moving_F | Moving Target 2 (Side)
//    Target_PopUp3_Moving_90deg_Acc1_F | Moving Target 3 (Front - Zones)
//    Target_PopUp3_Moving_90deg_Acc2_F | Moving Target 3 (Front - Accuracy)
//    Target_PopUp3_Moving_90deg_F | Moving Target 3 (Front)
//    Target_PopUp3_Moving_Acc1_F | Moving Target 3 (Side - Zones)
//    Target_PopUp3_Moving_Acc2_F | Moving Target 3 (Side - Accuracy)
//    Target_PopUp3_Moving_F | Moving Target 3 (Side)
//    Target_PopUp4_Moving_90deg_Acc1_F | Moving Target 4 (Front - Zones)
//    Target_PopUp4_Moving_90deg_Acc2_F | Moving Target 4 (Front - Accuracy)
//    Target_PopUp4_Moving_90deg_F | Moving Target 4 (Front)
//    Target_PopUp4_Moving_Acc1_F | Moving Target 4 (Side - Zones)
//    Target_PopUp4_Moving_Acc2_F | Moving Target 4 (Side - Accuracy)
//    Target_PopUp4_Moving_F | Moving Target 4 (Side)
//    Target_PopUp7_Moving_90deg_Acc1_F | Moving Target 7 (Front - Zones)
//    Target_PopUp7_Moving_90deg_Acc2_F | Moving Target 7 (Front - Accuracy)
//    Target_PopUp7_Moving_90deg_F | Moving Target 7 (Front)
//    Target_PopUp7_Moving_Acc1_F | Moving Target 7 (Side - Zones)
//    Target_PopUp7_Moving_Acc2_F | Moving Target 7 (Side - Accuracy)
//    Target_PopUp7_Moving_F | Moving Target 7 (Side)
//    Target_PopUp8_Moving_90deg_Acc1_F | Moving Target 8 (Front - Zones)
//    Target_PopUp8_Moving_90deg_Acc2_F | Moving Target 8 (Front - Accuracy)
//    Target_PopUp8_Moving_90deg_F | Moving Target 8 (Front)
//    Target_PopUp8_Moving_Acc1_F | Moving Target 8 (Side - Zones)
//    Target_PopUp8_Moving_Acc2_F | Moving Target 8 (Side - Accuracy)
//    Target_PopUp8_Moving_F | Moving Target 8 (Side)
//    Target_PopUp9_Moving_90deg_Acc1_F | Moving Target 9 (Front - Zones)
//    Target_PopUp9_Moving_90deg_Acc2_F | Moving Target 9 (Front - Accuracy)
//    Target_PopUp9_Moving_90deg_F | Moving Target 9 (Front)
//    Target_PopUp9_Moving_Acc1_F | Moving Target 9 (Side - Zones)
//    Target_PopUp9_Moving_Acc2_F | Moving Target 9 (Side - Accuracy)
//    Target_PopUp9_Moving_F | Moving Target 9 (Side)
//    Target_PopUp_Alien1_Moving_90deg_Acc1_F | Moving Alien 1 (Front - Zones)
//    Target_PopUp_Alien1_Moving_90deg_F | Moving Alien 1 (Front)
//    Target_PopUp_Alien1_Moving_Acc1_F | Moving Alien 1 (Side - Zones)
//    Target_PopUp_Alien1_Moving_F | Moving Alien 1 (Side)
//    Target_PopUp_HVT1_Moving_90deg_F | Moving Target 5 (Front)
//    Target_PopUp_HVT1_Moving_F | Moving Target 5 (Side)
//    Target_PopUp_HVT2_Moving_90deg_F | Moving Target 6 (Front)
//    Target_PopUp_HVT2_Moving_F | Moving Target 6 (Side)
//    Target_PopUp_Moving_90deg_Acc1_F | Moving Target 1 (Front - Zones)
//    Target_PopUp_Moving_90deg_Acc2_F | Moving Target 1 (Front - Accuracy)
//    Target_PopUp_Moving_90deg_F | Moving Target 1 (Front)
//    Target_PopUp_Moving_Acc1_F | Moving Target 1 (Side - Zones)
//    Target_PopUp_Moving_Acc2_F | Moving Target 1 (Side - Accuracy)
//    Target_PopUp_Moving_F | Moving Target 1 (Side)
//    Target_Rail_End_F | Rails (End)
//    Target_Rail_F | Rails
//    Target_Swivel_01_ground_F | Swivel Target (Ground)
//    Target_Swivel_01_left_F | Swivel Target (Left)
//    Target_Swivel_01_right_F | Swivel Target (Right)
//    TargetP_Alien1_Acc1_F | Pop-Up Alien 1 (Zones)
//    TargetP_Alien1_F | Pop-Up Alien 1
//    TargetP_Civ2_F | Pop-Up Hostage 2
//    TargetP_Civ3_F | Pop-Up Hostage 3
//    TargetP_Civ_F | Pop-Up Hostage 1
//    TargetP_HVT1_F | Pop-Up Target 5
//    TargetP_HVT2_F | Pop-Up Target 6
//    TargetP_Inf2_Acc1_F | Pop-Up Target 2 (Zones)
//    TargetP_Inf2_Acc2_F | Pop-Up Target 2 (Accuracy)
//    TargetP_Inf2_F | Pop-Up Target 2
//    TargetP_Inf3_Acc1_F | Pop-Up Target 3 (Zones)
//    TargetP_Inf3_Acc2_F | Pop-Up Target 3 (Accuracy)
//    TargetP_Inf3_F | Pop-Up Target 3
//    TargetP_Inf4_Acc1_F | Pop-Up Target 4 (Zones)
//    TargetP_Inf4_Acc2_F | Pop-Up Target 4 (Accuracy)
//    TargetP_Inf4_F | Pop-Up Target 4
//    TargetP_Inf7_Acc1_F | Pop-Up Target 7 (Zones)
//    TargetP_Inf7_Acc2_F | Pop-Up Target 7 (Accuracy)
//    TargetP_Inf7_F | Pop-Up Target 7
//    TargetP_Inf8_Acc1_F | Pop-Up Target 8 (Zones)
//    TargetP_Inf8_Acc2_F | Pop-Up Target 8 (Accuracy)
//    TargetP_Inf8_F | Pop-Up Target 8
//    TargetP_Inf9_Acc1_F | Pop-Up Target 9 (Zones)
//    TargetP_Inf9_Acc2_F | Pop-Up Target 9 (Accuracy)
//    TargetP_Inf9_F | Pop-Up Target 9
//    TargetP_Inf_Acc1_F | Pop-Up Target 1 (Zones)
//    TargetP_Inf_Acc2_F | Pop-Up Target 1 (Accuracy)
//    TargetP_Inf_F | Pop-Up Target 1
//    TargetP_Zom_Acc1_F | Pop-Up Zombie 1 (Zones)
//    TargetP_Zom_F | Pop-Up Zombie 1
//    Zombie_PopUp_Moving_90deg_Acc1_F | Moving Zombie 1 (Front - Zones)
//    Zombie_PopUp_Moving_90deg_F | Moving Zombie 1 (Front)
//    Zombie_PopUp_Moving_Acc1_F | Moving Zombie 1 (Side - Zones)
//    Zombie_PopUp_Moving_F | Moving Zombie 1 (Side)
//
// -- WeaponAccessories (357) --
//    ACE_Item_Chemlight_Shield | Chemlight Shield (Empty)
//    ACE_Item_Chemlight_Shield_Blue | Chemlight Shield (Blue)
//    ACE_Item_Chemlight_Shield_Green | Chemlight Shield (Green)
//    ACE_Item_Chemlight_Shield_Orange | Chemlight Shield (Orange)
//    ACE_Item_Chemlight_Shield_Red | Chemlight Shield (Red)
//    ACE_Item_Chemlight_Shield_White | Chemlight Shield (White)
//    ACE_Item_Chemlight_Shield_Yellow | Chemlight Shield (Yellow)
//    ghost_optics_Item_optic_AMS | [Ghost] AMS (Black)
//    ghost_optics_Item_optic_AMS_khk | [Ghost] AMS (Khaki)
//    ghost_optics_Item_optic_AMS_snd | [Ghost] AMS (Sand)
//    ghost_optics_Item_optic_AMSTI | [Ghost] AMS-TI (Black)
//    ghost_optics_Item_optic_AMSTI_khk | [Ghost] AMS-TI (Khaki)
//    ghost_optics_Item_optic_AMSTI_snd | [Ghost] AMS-TI (Sand)
//    ghost_optics_Item_optic_Nightstalker | [Ghost] Nightstalker
//    Item_acc_flashlight | UTG Defender 126
//    Item_acc_flashlight_ir | IR Flashlight
//    Item_acc_flashlight_IR_pistol_RF | Pistol IR Flashlight
//    Item_acc_flashlight_pistol | Pistol Flashlight
//    Item_acc_o_FMS | FMS
//    Item_acc_pointer_IR | IR Laser Pointer
//    Item_acc_pointer_IR_arid_lxWS | IR Laser Pointer (Arid)
//    Item_acc_pointer_IR_lush_lxWS | IR Laser Pointer (Lush)
//    Item_acc_pointer_IR_pistol_RF | Pistol IR Laser Pointer
//    Item_acc_pointer_IR_sand_lxWS | IR Laser Pointer (Sand)
//    Item_acc_pointer_IR_snake_lxWS | IR Laser Pointer (Snake)
//    Item_bipod_01_F_blk | Bipod (Black) [NATO]
//    Item_bipod_01_F_khk | Bipod (Khaki) [NATO]
//    Item_bipod_01_F_mtp | Bipod (MTP) [NATO]
//    Item_bipod_01_F_snd | Bipod (Sand) [NATO]
//    Item_bipod_02_F_arid | Bipod (Arid) [Russia]
//    Item_bipod_02_F_blk | Bipod (Black) [CSAT]
//    Item_bipod_02_F_hex | Bipod (Hex) [CSAT]
//    Item_bipod_02_F_lush | Bipod (Lush) [Russia]
//    Item_bipod_02_F_tan | Bipod (Tan) [CSAT]
//    Item_bipod_03_F_blk | Bipod (Black) [AAF]
//    Item_bipod_03_F_oli | Bipod (Olive) [AAF]
//    Item_EF_acc_pointer_IR_coy | IR Laser Pointer (Coyote)
//    Item_ef_optic_Holosight_coy | Mk17 Holosight (Coyote)
//    Item_ef_optic_Holosight_smg_coy | Mk17 Holosight SMG (Coyote)
//    Item_ef_optic_mbs | MBS
//    Item_ef_optic_mbs_coy | MBS (Coyote)
//    Item_ef_optic_mbs_khk | MBS (Khaki)
//    Item_ef_optic_mbs_remote | MBS (Remote)
//    Item_ef_optic_mbs_remote_coy | MBS (Coyote/Remote)
//    Item_ef_optic_mbs_remote_khk | MBS (Khaki/Remote)
//    Item_ef_optic_mbs_remote_sand | MBS (Sand/Remote)
//    Item_ef_optic_mbs_sand | MBS (Sand)
//    Item_ef_optic_microsight | MicroSight
//    Item_ef_optic_microsight_coy | MicroSight (Coyote)
//    Item_ef_optic_microsight_khk | MicroSight (Khaki)
//    Item_ef_optic_microsight_pistol | MicroSight (Pistol Mount)
//    Item_ef_optic_microsight_pistol_coy | MicroSight (Coyote/Pistol Mount)
//    Item_ef_optic_microsight_pistol_khk | MicroSight (Khaki/Pistol Mount)
//    Item_ef_optic_microsight_pistol_sand | MicroSight (Sand/Pistol Mount)
//    Item_ef_optic_microsight_sand | MicroSight (Sand)
//    Item_ef_snds_diplomat | Diplomat Sound Suppressor (9 mm)
//    Item_ef_snds_diplomat_coy | Diplomat Sound Suppressor (9 mm, Coyote)
//    Item_ef_snds_mxar | MXAR Sound Suppressor (6.5mm)
//    Item_ef_snds_mxar_coy | MXAR Sound Suppressor (6.5mm, Coyote)
//    Item_ef_snds_mxar_khk | MXAR Sound Suppressor (6.5mm, Khaki)
//    Item_ef_snds_mxar_sand | MXAR Sound Suppressor (6.5mm, Sand)
//    Item_JCA_acc_DualMount_black_Pointer | Dual Mount (Black)
//    Item_JCA_acc_DualMount_olive_Pointer | Dual Mount (Olive)
//    Item_JCA_acc_DualMount_sand_Pointer | Dual Mount (Sand)
//    Item_JCA_acc_flashlight_MP5_black | MP5 Flashlight (Black)
//    Item_JCA_acc_flashlight_tactical_black | Tactical Flashlight (Black)
//    Item_JCA_acc_flashlight_tactical_olive | Tactical Flashlight (Olive)
//    Item_JCA_acc_flashlight_tactical_sand | Tactical Flashlight (Sand)
//    Item_JCA_acc_LaserModule_black_Pointer | Laser Module (Black)
//    Item_JCA_acc_LaserModule_Mk23_black_Pointer | Laser Module (Black)
//    Item_JCA_acc_LaserModule_Mk23_olive_Pointer | Laser Module (Olive)
//    Item_JCA_acc_LaserModule_Mk23_sand_Pointer | Laser Module (Sand)
//    Item_JCA_acc_LaserModule_olive_Pointer | Laser Module (Olive)
//    Item_JCA_acc_LaserModule_sand_Pointer | Laser Module (Sand)
//    Item_JCA_acc_LightModule_Pistol_black | Light Module (Black)
//    Item_JCA_acc_LightModule_Pistol_olive | Light Module (Olive)
//    Item_JCA_acc_LightModule_Pistol_sand | Light Module (Sand)
//    Item_JCA_acc_LightMount_Pistol_black | Light Mount (Black)
//    Item_JCA_acc_LightMount_Pistol_olive | Light Mount (Olive)
//    Item_JCA_acc_LightMount_Pistol_sand | Light Mount (Sand)
//    Item_JCA_bipod_04_black | Tactical Bipod (Black)
//    Item_JCA_bipod_04_olive | Tactical Bipod (Olive)
//    Item_JCA_bipod_04_sand | Tactical Bipod (Sand)
//    Item_JCA_bipod_AWM_01_black | M115A3 Bipod (Forward)
//    Item_JCA_bipod_AWM_02_black | M115A3 Bipod (Rearward)
//    Item_JCA_bipod_M107_black | M107 Bipod (Black)
//    Item_JCA_bipod_M107_olive | M107 Bipod (Olive)
//    Item_JCA_bipod_M107_sand | M107 Bipod (Sand)
//    Item_JCA_muzzle_snds_300_enhanced_black | Enhanced Sound Suppressor (.300 BLK, Black)
//    Item_JCA_muzzle_snds_300_enhanced_olive | Enhanced Sound Suppressor (.300 BLK, Olive)
//    Item_JCA_muzzle_snds_300_enhanced_sand | Enhanced Sound Suppressor (.300 BLK, Sand)
//    Item_JCA_muzzle_snds_45_tactical_black | Tactical Sound Suppressor (.45 ACP, Black)
//    Item_JCA_muzzle_snds_45_tactical_olive | Tactical Sound Suppressor (.45 ACP, Olive)
//    Item_JCA_muzzle_snds_45_tactical_sand | Tactical Sound Suppressor (.45 ACP, Sand)
//    Item_JCA_muzzle_snds_556_advanced_black | Advanced Sound Suppressor (5.56 mm, Black)
//    Item_JCA_muzzle_snds_556_advanced_olive | Advanced Sound Suppressor (5.56 mm, Olive)
//    Item_JCA_muzzle_snds_556_advanced_sand | Advanced Sound Suppressor (5.56 mm, Sand)
//    Item_JCA_muzzle_snds_556_enhanced_black | Enhanced Sound Suppressor (5.56 mm, Black)
//    Item_JCA_muzzle_snds_556_enhanced_olive | Enhanced Sound Suppressor (5.56 mm, Olive)
//    Item_JCA_muzzle_snds_556_enhanced_sand | Enhanced Sound Suppressor (5.56 mm, Sand)
//    Item_JCA_muzzle_snds_762_tactical_black | Tactical Sound Suppressor (7.62 mm, Black)
//    Item_JCA_muzzle_snds_762_tactical_olive | Tactical Sound Suppressor (7.62 mm, Olive)
//    Item_JCA_muzzle_snds_762_tactical_sand | Tactical Sound Suppressor (7.62 mm, Sand)
//    Item_JCA_muzzle_snds_9MM_enhanced_black | Enhanced Sound Suppressor (9 mm, Black)
//    Item_JCA_muzzle_snds_9MM_enhanced_olive | Enhanced Sound Suppressor (9 mm, Olive)
//    Item_JCA_muzzle_snds_9MM_enhanced_sand | Enhanced Sound Suppressor (9 mm, Sand)
//    Item_JCA_muzzle_snds_9MM_tactical_black | Tactical Sound Suppressor (9 mm, Black)
//    Item_JCA_muzzle_snds_9MM_tactical_olive | Tactical Sound Suppressor (9 mm, Olive)
//    Item_JCA_muzzle_snds_9MM_tactical_sand | Tactical Sound Suppressor (9 mm, Sand)
//    Item_JCA_muzzle_snds_AWM_black | M115A3 Suppressor (Black)
//    Item_JCA_muzzle_snds_AWM_olive | M115A3 Suppressor (Olive)
//    Item_JCA_muzzle_snds_AWM_sand | M115A3 Suppressor (Sand)
//    Item_JCA_muzzle_snds_M107_black | M107 Suppressor (Black)
//    Item_JCA_muzzle_snds_M107_olive | M107 Suppressor (Olive)
//    Item_JCA_muzzle_snds_M107_sand | M107 Suppressor (Sand)
//    Item_JCA_muzzle_snds_MP5_black | MP5 Suppressor (9 mm, Black)
//    Item_JCA_muzzle_snds_MP5_olive | MP5 Suppressor (9 mm, Olive)
//    Item_JCA_muzzle_snds_MP5_sand | MP5 Suppressor (9 mm, Sand)
//    Item_JCA_muzzle_snds_SR25_black | Mk11 Suppressor (Black)
//    Item_JCA_muzzle_snds_SR25_olive | Mk11 Suppressor (Olive)
//    Item_JCA_muzzle_snds_SR25_sand | Mk11 Suppressor (Sand)
//    Item_JCA_optic_ACOG_black | ACOG (Black)
//    Item_JCA_optic_ACOG_olive | ACOG (Olive)
//    Item_JCA_optic_ACOG_sand | ACOG (Sand)
//    Item_JCA_optic_AHO_black | AHO (Black)
//    Item_JCA_optic_AHO_olive | AHO (Olive)
//    Item_JCA_optic_AHO_sand | AHO (Sand)
//    Item_JCA_optic_AICO_black | AICO (Black)
//    Item_JCA_optic_AICO_olive | AICO (Olive)
//    Item_JCA_optic_AICO_sand | AICO (Sand)
//    Item_JCA_optic_ARO_black | ARO (Black)
//    Item_JCA_optic_ARO_olive | ARO (Olive)
//    Item_JCA_optic_ARO_sand | ARO (Sand)
//    Item_JCA_optic_ARS_black | ARS (Black)
//    Item_JCA_optic_ARS_olive | ARS (Olive)
//    Item_JCA_optic_ARS_sand | ARS (Sand)
//    Item_JCA_optic_CRBS_black | CRBS (Black)
//    Item_JCA_optic_CRBS_olive | CRBS (Olive)
//    Item_JCA_optic_CRBS_sand | CRBS (Sand)
//    Item_JCA_optic_CRO_black | CRO (Black)
//    Item_JCA_optic_CRO_olive | CRO (Olive)
//    Item_JCA_optic_CRO_sand | CRO (Sand)
//    Item_JCA_optic_HPCS_black | HPCS (Black)
//    Item_JCA_optic_HPCS_olive | HPCS (Olive)
//    Item_JCA_optic_HPCS_sand | HPCS (Sand)
//    Item_JCA_optic_HPPO_black | HPPO (Black)
//    Item_JCA_optic_HPPO_olive | HPPO (Olive)
//    Item_JCA_optic_HPPO_RAD_black | HPPO (Black, RAD)
//    Item_JCA_optic_HPPO_RAD_olive | HPPO (Olive, RAD)
//    Item_JCA_optic_HPPO_RAD_sand | HPPO (Sand, RAD)
//    Item_JCA_optic_HPPO_sand | HPPO (Sand)
//    Item_JCA_optic_ICO_black | ICO (Black)
//    Item_JCA_optic_ICO_olive | ICO (Olive)
//    Item_JCA_optic_ICO_sand | ICO (Sand)
//    Item_JCA_optic_IHO_black | IHO (Black)
//    Item_JCA_optic_IHO_black_magnifier | IHO (Black, Magnifier)
//    Item_JCA_optic_IHO_olive | IHO (Olive)
//    Item_JCA_optic_IHO_olive_magnifier | IHO (Olive, Magnifier)
//    Item_JCA_optic_IHO_sand | IHO (Sand)
//    Item_JCA_optic_IHO_sand_magnifier | IHO (Sand, Magnifier)
//    Item_JCA_optic_MPO_black | MPO (Black)
//    Item_JCA_optic_MRCS_black | MRCS (Black)
//    Item_JCA_optic_MRCS_olive | MRCS (Olive)
//    Item_JCA_optic_MRCS_sand | MRCS (Sand)
//    Item_JCA_optic_MRO_black | MRO (Black)
//    Item_JCA_optic_MROS_black | MROS (Black)
//    Item_JCA_optic_MROS_black_magnifier | MROS (Black, Magnifier)
//    Item_JCA_optic_MROS_olive | MROS (Olive)
//    Item_JCA_optic_MROS_olive_magnifier | MROS (Olive, Magnifier)
//    Item_JCA_optic_MROS_sand | MROS (Sand)
//    Item_JCA_optic_MROS_sand_magnifier | MROS (Sand, Magnifier)
//    Item_JCA_optic_MRPS_black | MRPS (Black)
//    Item_JCA_optic_MRPS_olive | MRPS (Olive)
//    Item_JCA_optic_MRPS_sand | MRPS (Sand)
//    Item_JCA_optic_PRO_black | PRO (Black)
//    Item_JCA_optic_ROS_black | ROS (Black)
//    Item_muzzle_antenna_03_f | SD Jammer Antenna (433 MHz)
//    Item_muzzle_mzls_545 | Flash Suppressor (5.45 mm)
//    Item_muzzle_mzls_58_F | Flash Suppressor (5.8 mm)
//    Item_muzzle_mzls_acp | Flash Suppressor (.45 ACP)
//    Item_muzzle_mzls_B | Flash Suppressor (7.62 mm)
//    Item_muzzle_mzls_H | Flash Suppressor (6.5 mm)
//    Item_muzzle_mzls_L | Flash Suppressor (9 mm)
//    Item_muzzle_mzls_M | Flash Suppressor (5.56 mm)
//    Item_muzzle_mzls_smg_01 | Vermin Flash Suppressor (.45 ACP)
//    Item_muzzle_snds_12Gauge_lxWS | Sound Suppressor (12 Gauge)
//    Item_muzzle_snds_12Gauge_snake_lxWS | Sound Suppressor (12 Gauge, Snake)
//    Item_muzzle_snds_338_black | Sound Suppressor (.338, Black)
//    Item_muzzle_snds_338_green | Sound Suppressor (.338, Green)
//    Item_muzzle_snds_338_sand | Sound Suppressor (.338, Sand)
//    Item_muzzle_snds_408_black | Sound Suppressor (.408, Black)
//    Item_muzzle_snds_408_green | Sound Suppressor (.408, Green)
//    Item_muzzle_snds_408_sand | Sound Suppressor (.408, Sand)
//    Item_muzzle_snds_460 | Sound Suppressor (4.6 mm)
//    Item_muzzle_snds_545 | Sound Suppressor (5.45 mm)
//    Item_muzzle_snds_545_arid_F | Sound Suppressor (5.45 mm, Arid)
//    Item_muzzle_snds_545_lush_F | Sound Suppressor (5.45 mm, Lush)
//    Item_muzzle_snds_545_wdm_F | Sound Suppressor (5.45 mm, Green Hex)
//    Item_muzzle_snds_570 | Sound Suppressor (5.7 mm)
//    Item_muzzle_snds_58_blk_F | Stealth Sound Suppressor (5.8 mm, Black)
//    Item_muzzle_snds_58_wdm_F | Stealth Sound Suppressor (5.8 mm, Green Hex)
//    Item_muzzle_snds_65_TI_blk_F | Stealth Sound Suppressor (6.5 mm, Black)
//    Item_muzzle_snds_65_TI_ghex_F | Stealth Sound Suppressor (6.5 mm, Green Hex)
//    Item_muzzle_snds_65_TI_hex_F | Stealth Sound Suppressor (6.5 mm, Hex)
//    Item_muzzle_snds_93mmg | Sound Suppressor (9.3mm, Black)
//    Item_muzzle_snds_93mmg_tan | Sound Suppressor (9.3mm, Tan)
//    Item_muzzle_snds_acp | Sound Suppressor (.45 ACP)
//    Item_muzzle_snds_B | Sound Suppressor (7.62 mm)
//    Item_muzzle_snds_B_arid_F | Sound Suppressor (7.62 mm, Arid)
//    Item_muzzle_snds_B_khk_F | Sound Suppressor (7.62 mm, Khaki)
//    Item_muzzle_snds_B_lush_F | Sound Suppressor (7.62 mm, Lush)
//    Item_muzzle_snds_B_snd_F | Sound Suppressor (7.62 mm, Sand)
//    Item_muzzle_snds_B_wdm_F | Sound Suppressor (7.62 mm, Green Hex)
//    Item_muzzle_snds_H | Sound Suppressor (6.5 mm)
//    Item_muzzle_snds_H_khk_F | Sound Suppressor (6.5 mm, Khaki)
//    Item_muzzle_snds_H_MG | Sound Suppressor LMG (6.5 mm)
//    Item_muzzle_snds_H_MG_blk_F | Sound Suppressor LMG (6.5 mm, Black)
//    Item_muzzle_snds_H_MG_khk_F | Sound Suppressor LMG (6.5 mm, Khaki)
//    Item_muzzle_snds_H_snd_F | Sound Suppressor (6.5 mm, Sand)
//    Item_muzzle_snds_L | Sound Suppressor (9 mm)
//    Item_muzzle_snds_M | Sound Suppressor (5.56 mm)
//    Item_muzzle_snds_m_khk_F | Sound Suppressor (5.56 mm, Khaki)
//    Item_muzzle_snds_m_snd_F | Sound Suppressor (5.56 mm, Sand)
//    Item_muzzle_snds_pistol_heavy_01 | Tactical Sound Suppressor (.45 ACP)
//    Item_optic_Aco | C-More Railway (Red)
//    Item_optic_ACO_camo_lxWS | ACO (Red, Stripes)
//    Item_optic_ACO_desert_RF | ACO (Red, Desert)
//    Item_optic_ACO_grn | C-More Railway (Green)
//    Item_optic_ACO_grn_AK_F | ACO AK (Green)
//    Item_optic_ACO_grn_camo_lxWS | ACO (Green, Stripes)
//    Item_optic_ACO_grn_desert_RF | ACO (Green, Desert)
//    Item_optic_ACO_grn_smg | C-More Railway SMG (Green)
//    Item_optic_ACO_grn_wood_RF | ACO (Green, Wood)
//    Item_optic_Aco_smg | C-More Railway SMG (Red)
//    Item_optic_ACO_wood_RF | ACO (Red, Wood)
//    Item_optic_AMS | US Optics MR-10 (Black)
//    Item_optic_AMS_khk | US Optics MR-10 (Khaki)
//    Item_optic_AMS_snd | US Optics MR-10 (Sand)
//    Item_optic_Arco | ELCAN SpecterOS (Tan)
//    Item_optic_Arco_AK_arid_F | ELCAN SpecterOS 7.62 (Arid)
//    Item_optic_Arco_AK_blk_F | ELCAN SpecterOS 7.62 (Black)
//    Item_optic_Arco_AK_lush_F | ELCAN SpecterOS 7.62 (Lush)
//    Item_optic_Arco_arid_F | ELCAN SpecterOS (Arid)
//    Item_optic_Arco_blk_F | ELCAN SpecterOS (Black)
//    Item_optic_Arco_ghex_F | ELCAN SpecterOS (Green Hex)
//    Item_optic_Arco_hex_lxWS | ELCAN SpecterOS (Hex)
//    Item_optic_Arco_lush_F | ELCAN SpecterOS (Lush)
//    Item_optic_dcl | DCL-120
//    Item_optic_DMS | Burris XTR II
//    Item_optic_DMS_ghex_F | Burris XTR II (Green Hex)
//    Item_optic_DMS_snake_lxWS | Burris XTR II (Snake)
//    Item_optic_DMS_weathered_F | Burris XTR II (Old)
//    Item_optic_DMS_weathered_Kir_F | Burris XTR II (ASP-1 Kir)
//    Item_optic_ERCO_blk_F | SIG BRAVO4 / ROMEO3 (Black)
//    Item_optic_ERCO_khk_F | SIG BRAVO4 / ROMEO3 (Khaki)
//    Item_optic_ERCO_snd_F | SIG BRAVO4 / ROMEO3 (Sand)
//    Item_optic_Hamr | Leupold Mark 4 HAMR
//    Item_optic_Hamr_arid_lxWS | Leupold Mark 4 HAMR (Arid)
//    Item_optic_Hamr_khk_F | Leupold Mark 4 HAMR (Khaki)
//    Item_optic_Hamr_lush_lxWS | Leupold Mark 4 HAMR (Lush)
//    Item_optic_Hamr_sand_lxWS | Leupold Mark 4 HAMR (Sand)
//    Item_optic_Hamr_snake_lxWS | Leupold Mark 4 HAMR (Snake)
//    Item_optic_Holosight | EOTech XPS3 (Tan)
//    Item_optic_Holosight_arid_F | EOTech XPS3 (Arid)
//    Item_optic_Holosight_blk_F | EOTech XPS3 (Black)
//    Item_optic_Holosight_khk_F | EOTech XPS3 (Khaki)
//    Item_optic_Holosight_lush_F | EOTech XPS3 (Lush)
//    Item_optic_Holosight_smg | EOTech XPS3 SMG (Tan)
//    Item_optic_Holosight_smg_blk_F | EOTech XPS3 SMG (Black)
//    Item_optic_Holosight_smg_snake_lxWS | EOTech XPS3 SMG (Snake)
//    Item_optic_Holosight_snake_lxWS | EOTech XPS3 (Snake)
//    Item_optic_ico_01_black_f | Promet Modular Sight (Black)
//    Item_optic_ico_01_camo_f | Promet Modular Sight (Camo)
//    Item_optic_ico_01_f | Promet Modular Sight
//    Item_optic_ico_01_sand_f | Promet Modular Sight (Sand)
//    Item_optic_KHS_blk | KAHLES Helia (Black)
//    Item_optic_KHS_hex | KAHLES Helia (Hex)
//    Item_optic_KHS_old | KAHLES Helia (Old)
//    Item_optic_KHS_tan | KAHLES Helia (Tan)
//    Item_optic_LRCO_blk_F | LRCO (Black)
//    Item_optic_LRCO_snd_F | LRCO (Sand)
//    Item_optic_LRPS | Nightforce NXS
//    Item_optic_LRPS_ghex_F | Nightforce NXS (Green Hex)
//    Item_optic_LRPS_tna_F | Nightforce NXS (Jungle)
//    Item_optic_MRCO | IOR-Valdada Pitbull 2
//    Item_optic_MRD | EOTech MRDS
//    Item_optic_MRD_black | EOTech MRDS (Black)
//    Item_optic_MRD_khk_RF | MRD (Khaki)
//    Item_optic_MRD_tan_RF | MRD (Sand)
//    Item_optic_Nightstalker | Nightstalker
//    Item_optic_NVS | NVS
//    Item_optic_r1_high_arid_lxWS | Aimpoint Micro R-1 (High, Arid)
//    Item_optic_r1_high_black_sand_lxWS | Aimpoint Micro R-1 (High, Black/Sand)
//    Item_optic_r1_high_khaki_lxWS | Aimpoint Micro R-1 (High, Khaki)
//    Item_optic_r1_high_lush_lxWS | Aimpoint Micro R-1 (High, Lush)
//    Item_optic_r1_high_lxWS | Aimpoint Micro R-1 (High, Black)
//    Item_optic_r1_high_sand_lxWS | Aimpoint Micro R-1 (High, Sand)
//    Item_optic_r1_high_snake_lxWS | Aimpoint Micro R-1 (High, Snake)
//    Item_optic_r1_low_arid_lxWS | Aimpoint Micro R-1 (Low, Arid)
//    Item_optic_r1_low_khaki_lxWS | Aimpoint Micro R-1 (Low, Khaki)
//    Item_optic_r1_low_lush_lxWS | Aimpoint Micro R-1 (Low, Lush)
//    Item_optic_r1_low_lxWS | Aimpoint Micro R-1 (Low, Black)
//    Item_optic_r1_low_sand_lxWS | Aimpoint Micro R-1 (Low, Sand)
//    Item_optic_r1_low_snake_lxWS | Aimpoint Micro R-1 (Low, Snake)
//    Item_optic_rds_RF | RDS
//    Item_optic_SOS | MOS
//    Item_optic_SOS_khk_F | MOS (Khaki)
//    Item_optic_tws | TWS
//    Item_optic_tws_mg | TWS MG
//    Item_optic_tws_sniper | TWS Sniper
//    Item_optic_VRCO_khk_RF | VRCO (Khaki)
//    Item_optic_VRCO_pistol_RF | VRCO-S
//    Item_optic_VRCO_RF | VRCO (Black)
//    Item_optic_VRCO_tan_RF | VRCO (Sand)
//    Item_optic_Yorris | Burris FastFire 2
//    Item_saber_light_arid_lxWS | Saber Light (Arid)
//    Item_saber_light_ir_arid_lxWS | Saber Light IR (Arid)
//    Item_saber_light_ir_khaki_lxWS | Saber Light IR (Khaki)
//    Item_saber_light_ir_lush_lxWS | Saber Light IR (Lush)
//    Item_saber_light_ir_lxWS | Saber Light IR
//    Item_saber_light_ir_sand_lxWS | Saber Light IR (Sand)
//    Item_saber_light_ir_snake_lxWS | Saber Light IR (Snake)
//    Item_saber_light_khaki_lxWS | Saber Light (Khaki)
//    Item_saber_light_lush_lxWS | Saber Light (Lush)
//    Item_saber_light_lxWS | Saber Light
//    Item_saber_light_sand_lxWS | Saber Light (Sand)
//    Item_saber_light_snake_lxWS | Saber Light (Snake)
//    Item_suppressor_127x55_big_desert_RF | Large Sound Suppressor (12.7 mm, Desert)
//    Item_suppressor_127x55_big_RF | Large Sound Suppressor (12.7 mm)
//    Item_suppressor_127x55_big_wood_RF | Large Sound Suppressor (12.7 mm, Wood)
//    Item_suppressor_127x55_small_desert_RF | Sound Suppressor (12.7 mm, Desert)
//    Item_suppressor_127x55_small_RF | Sound Suppressor (12.7 mm)
//    Item_suppressor_127x55_small_wood_RF | Sound Suppressor (12.7 mm, Wood)
//    Item_suppressor_65_black_rf | Tactical Sound Suppressor (6.5 mm, Black)
//    Item_suppressor_65_green_rf | Tactical Sound Suppressor (6.5 mm, Green)
//    Item_suppressor_65_khaki_rf | Tactical Sound Suppressor (6.5 mm, Khaki)
//    Item_suppressor_65_sand_rf | Tactical Sound Suppressor (6.5 mm, Sand)
//    Item_suppressor_65_tan_rf | Tactical Sound Suppressor (6.5 mm, Tan)
//    Item_suppressor_h_arid_lxWS | Stubby Sound Suppressor (7.62 mm, Arid)
//    Item_suppressor_h_khaki_lxWS | Stubby Sound Suppressor (7.62 mm, Khaki)
//    Item_suppressor_h_lush_lxWS | Stubby Sound Suppressor (7.62 mm, Lush)
//    Item_suppressor_h_lxWS | Stubby Sound Suppressor (7.62 mm)
//    Item_suppressor_h_sand_lxWS | Stubby Sound Suppressor (7.62 mm, Sand)
//    Item_suppressor_h_snake_lxWS | Stubby Sound Suppressor (7.62 mm, Snake)
//    Item_suppressor_l_arid_lxWS | Stubby Sound Suppressor (5.56 mm, Arid)
//    Item_suppressor_l_camo_lxWS | Sound Suppressor (5.56 mm, Stripes)
//    Item_suppressor_l_khaki_lxWS | Stubby Sound Suppressor (5.56 mm, Khaki)
//    Item_suppressor_l_lush_lxWS | Stubby Sound Suppressor (5.56 mm, Lush)
//    Item_suppressor_l_lxWS | Stubby Sound Suppressor (5.56 mm)
//    Item_suppressor_l_sand_lxWS | Stubby Sound Suppressor (5.56 mm, Sand)
//    Item_suppressor_l_snake_lxWS | Stubby Sound Suppressor (5.56 mm, Snake)
//    Item_suppressor_m_arid_lxWS | Stubby Sound Suppressor (6.5 mm, Arid)
//    Item_suppressor_m_khaki_lxWS | Stubby Sound Suppressor (6.5 mm, Khaki)
//    Item_suppressor_m_lush_lxWS | Stubby Sound Suppressor (6.5 mm, Lush)
//    Item_suppressor_m_lxWS | Stubby Sound Suppressor (6.5 mm)
//    Item_suppressor_m_sand_lxWS | Stubby Sound Suppressor (6.5 mm, Sand)
//    Item_suppressor_m_snake_lxWS | Stubby Sound Suppressor (6.5 mm, Snake)
//
// -- WeaponsHandguns (41) --
//    Weapon_Aegis_hgun_P320_black_F | P320 9 mm (Black)
//    Weapon_Aegis_hgun_P320_khaki_F | P320 9 mm (Khaki)
//    Weapon_Aegis_hgun_P320_sand_F | P320 9 mm (Sand)
//    Weapon_Aegis_hgun_Pistol_R57_F | RP57 5.7 mm
//    Weapon_Aegis_hgun_Pistol_R57_olive_F | RP57 5.7 mm (Olive)
//    Weapon_Aegis_hgun_Pistol_R57_sand_F | RP57 5.7 mm (Sand)
//    Weapon_Aegis_hgun_Pistol_R57_silver_F | RP57 5.7 mm (Silver)
//    Weapon_ef_hgun_P07_coy | P07 9 mm (Coyote)
//    Weapon_ef_hgun_Pistol_heavy_01_coy | 4-five .45 ACP (Coyote)
//    Weapon_hgun_ACPC2_black_F | C-1911 .45 ACP
//    Weapon_hgun_ACPC2_F | Custom Covert II
//    Weapon_hgun_DEagle_bronze_RF | Mk26 L5 .50 AE (Bronze)
//    Weapon_hgun_DEagle_camo_RF | Mk26 L5 .50 AE (Stripes)
//    Weapon_hgun_DEagle_classic_RF | Mk26 L5 .50 AE (Classic)
//    Weapon_hgun_DEagle_copper_RF | Mk26 L5 .50 AE (Copper)
//    Weapon_hgun_DEagle_gold_RF | Mk26 L5 .50 AE (Gold)
//    Weapon_hgun_DEagle_RF | Mk26 L5 .50 AE
//    Weapon_hgun_esd_01_antenna_01_F | Spectrum Device (Military)
//    Weapon_hgun_esd_01_antenna_02_F | Spectrum Device (Experimental)
//    Weapon_hgun_esd_01_antenna_03_F | Spectrum Device (Jammer)
//    Weapon_hgun_esd_01_F | Spectrum Device
//    Weapon_hgun_G17_black_F | G17 9 mm (Black)
//    Weapon_hgun_G17_F | G17 9 mm (Sand)
//    Weapon_hgun_G17_khaki_F | G17 9 mm (Khaki)
//    Weapon_hgun_Glock19_auto_khk_RF | G19A 9 mm (Khaki)
//    Weapon_hgun_Glock19_auto_RF | G19A 9 mm
//    Weapon_hgun_Glock19_auto_tan_RF | G19A 9 mm (Sand)
//    Weapon_hgun_Glock19_khk_RF | G19 9 mm (Khaki)
//    Weapon_hgun_Glock19_RF | G19 9 mm
//    Weapon_hgun_Glock19_tan_RF | G19 9 mm (Sand)
//    Weapon_hgun_Mk26_F | Mk26 L4 .44 MAG
//    Weapon_hgun_P07_blk_F | P99 (Black)
//    Weapon_hgun_P07_F | P99
//    Weapon_hgun_P07_khk_F | P99 (Khaki)
//    Weapon_hgun_Pistol_01_F | Makarov PMM
//    Weapon_hgun_Pistol_heavy_01_black_F | 4-five .45 ACP (Black)
//    Weapon_hgun_Pistol_heavy_01_F | FNX-45 Tactical
//    Weapon_hgun_Pistol_heavy_01_green_F | FNX-45 Tactical (Green)
//    Weapon_hgun_Pistol_heavy_02_F | Chiappa Rhino 60DS
//    Weapon_hgun_Pistol_Signal_F | Taurus Judge
//    Weapon_hgun_Rook40_F | MP-443 Grach
//
// -- WeaponsPrimary (540) --
//    Weapon_AddGis_arifle_C7A2_F | C7A2 5.56 mm
//    Weapon_AddGis_arifle_C7A2_grip_F | C7A2 FG 5.56 mm
//    Weapon_AddGis_arifle_G433_F | G433 5.56 mm
//    Weapon_AddGis_arifle_G433_FG_F | G433 FG 5.56 mm
//    Weapon_AddGis_arifle_G433_FG_khk_F | G433 FG 5.56 mm (Khaki)
//    Weapon_AddGis_arifle_G433_FG_snd_F | G433 FG 5.56 mm (Sand)
//    Weapon_AddGis_arifle_G433_khk_F | G433 5.56 mm (Khaki)
//    Weapon_AddGis_arifle_G433_snd_F | G433 5.56 mm (Sand)
//    Weapon_AddGis_arifle_M16_A2_F | M16A2 5.56 mm
//    Weapon_AddGis_arifle_M16_A2_oli_F | M16A2 5.56 mm (Olive)
//    Weapon_AddGis_arifle_M16_A2_RIS_F | M16A2 RIS 5.56 mm
//    Weapon_AddGis_arifle_M16_A2_RIS_oli_F | M16A2 RIS 5.56 mm
//    Weapon_AddGis_arifle_M16_Carbine_F | M16A2 Carbine 5.56 mm
//    Weapon_AddGis_arifle_M16_Carbine_oli_F | M16A2 Carbine 5.56 mm (Olive)
//    Weapon_AddGis_arifle_M16_Carbine_RIS_F | M16A2 Carbine RIS 5.56 mm
//    Weapon_AddGis_arifle_M16_Carbine_RIS_oli_F | M16A2 Carbine RIS 5.56 mm (Olive)
//    Weapon_AddGis_arifle_Wieger_F | Seidel 5.56 mm
//    Weapon_AddGis_arifle_Wieger_khk_F | Seidel 5.56 mm (Khaki)
//    Weapon_AddGis_arifle_Wieger_snd_F | Seidel 5.56 mm (Sand)
//    Weapon_Aegis_arifle_AK103_F | AK-103 7.62 mm
//    Weapon_Aegis_arifle_AK103_GL_F | AK-103 GL 7.62 mm
//    Weapon_Aegis_arifle_AK103_GL_plum_F | AK-103 GL 7.62 mm (Plum)
//    Weapon_Aegis_arifle_AK103_plum_F | AK-103 7.62 mm (Plum)
//    Weapon_Aegis_arifle_AK74_F | AK-74 5.45 mm
//    Weapon_Aegis_arifle_AK74_GL_F | AK-74 GL 5.45 mm
//    Weapon_Aegis_arifle_AK74_GL_oak_F | AK-74 GL 5.45 mm (Oak)
//    Weapon_Aegis_arifle_AK74_gold_F | AK-74 5.45 mm (Golden)
//    Weapon_Aegis_arifle_AK74_oak_F | AK-74 5.45 mm (Oak)
//    Weapon_Aegis_arifle_AKM74_F | AK-74M 5.45 mm
//    Weapon_Aegis_arifle_AKM74_GL_F | AK-74M GL 5.45 mm
//    Weapon_Aegis_arifle_AKM74_plum_F | AK-74M 5.45 mm (Plum)
//    Weapon_Aegis_arifle_AKM74_plum_GL_F | AK-74M GL 5.45 mm (Plum)
//    Weapon_Aegis_arifle_AKM74_sand_F | AK-74M 5.45 mm (Sand)
//    Weapon_Aegis_arifle_AKM74_sand_GL_F | AK-74M GL 5.45 mm (Sand)
//    Weapon_Aegis_arifle_AKS74_F | AKS-74 5.45 mm
//    Weapon_Aegis_arifle_AKS74_gold_F | AKS-74 5.45 mm (Golden)
//    Weapon_Aegis_arifle_AKS74_oak_F | AKS-74 5.45 mm (Oak)
//    Weapon_Aegis_arifle_CTAR_GL_tan_f | CAR-95 GL 5.8 mm (Sand)
//    Weapon_Aegis_arifle_CTAR_tan_f | CAR-95 5.8 mm (Sand)
//    Weapon_Aegis_arifle_CTARS_tan_f | CAR-95-1 5.8mm (Sand)
//    Weapon_Aegis_arifle_M16A4_F | M16E4 5.56 mm
//    Weapon_Aegis_arifle_M16A4_FG_F | M16E4 FG 5.56 mm
//    Weapon_Aegis_arifle_M16A4_GL_F | M16E4 GL 5.56 mm
//    Weapon_Aegis_arifle_M4A1_F | M4A1 5.56 mm
//    Weapon_Aegis_arifle_M4A1_GL_F | M4A1 GL 5.56 mm
//    Weapon_Aegis_arifle_M4A1_GL_khaki_F | M4A1 GL 5.56 mm (Khaki)
//    Weapon_Aegis_arifle_M4A1_GL_sand_F | M4A1 GL 5.56 mm (Sand)
//    Weapon_Aegis_arifle_M4A1_grip_F | M4A1 FG 5.56 mm
//    Weapon_Aegis_arifle_M4A1_grip_khaki_F | M4A1 FG 5.56 mm (Khaki)
//    Weapon_Aegis_arifle_M4A1_grip_sand_F | M4A1 FG 5.56 mm (Sand)
//    Weapon_Aegis_arifle_M4A1_khaki_F | M4A1 5.56 mm (Khaki)
//    Weapon_Aegis_arifle_M4A1_sand_F | M4A1 5.56 mm (Sand)
//    Weapon_Aegis_arifle_M4A1_short_F | M4A1 SBR 5.56 mm
//    Weapon_Aegis_arifle_M4A1_short_khaki_F | M4A1 SBR 5.56 mm (Khaki)
//    Weapon_Aegis_arifle_M4A1_short_sand_F | M4A1 SBR 5.56 mm (Sand)
//    Weapon_Aegis_arifle_RPK12_545_arid_F | RPK-12 5.45 mm (Arid)
//    Weapon_Aegis_arifle_RPK12_545_F | RPK-12 5.45 mm
//    Weapon_Aegis_arifle_RPK12_545_lush_F | RPK-12 5.45 mm (Lush)
//    Weapon_Aegis_arifle_RPK12_545_tan_F | RPK-12 5.45 mm (Tan)
//    Weapon_Aegis_arifle_RPK74_F | RPK-74 5.45 mm
//    Weapon_Aegis_arifle_SPAR_02_inf_blk_F | SPAR-16 5.56 mm (Black)
//    Weapon_Aegis_arifle_SPAR_02_inf_khk_F | SPAR-16 5.56 mm (Khaki)
//    Weapon_Aegis_arifle_SPAR_02_inf_snd_F | SPAR-16 5.56 mm (Sand)
//    Weapon_Aegis_arifle_SR25_blk_F | Mk11 7.62 mm
//    Weapon_Aegis_arifle_SR25_khk_F | Mk11 7.62 mm (Khaki)
//    Weapon_Aegis_arifle_SR25_MR_blk_F | M110 7.62 mm
//    Weapon_Aegis_arifle_SR25_MR_khk_F | M110 7.62 mm (Khaki)
//    Weapon_Aegis_arifle_SR25_MR_snd_F | M110 7.62 mm (Sand)
//    Weapon_Aegis_arifle_SR25_snd_F | Mk11 7.62 mm (Sand)
//    Weapon_Aegis_arifle_Velko_oak | Velko R4 5.56 mm (Wood)
//    Weapon_Aegis_arifle_Velko_sand | Velko R4 5.56 mm (Sand)
//    Weapon_Aegis_arifle_VelkoR5_oak | Velko R5 5.56 mm (Wood)
//    Weapon_Aegis_arifle_VelkoR5_sand | Velko R5 5.56 mm (Sand)
//    Weapon_Aegis_launch_RPG7M_F | RPG-7M
//    Weapon_Aegis_MMG_FNMAG_240_F | LWM-240 7.62 mm
//    Weapon_Aegis_MMG_FNMAG_F | GPMG 7.62 mm
//    Weapon_Aegis_MMG_FNMAG_old_F | GPMG 7.62 mm (Classic)
//    Weapon_Aegis_sgun_aa40_khk_lxWS | AA40 12G (Khaki)
//    Weapon_Aegis_sgun_KSG_black_F | Bulldog 12G (Black)
//    Weapon_Aegis_SMG_Gepard_blk_F | PPL-20M Upyr 9 mm
//    Weapon_Aegis_srifle_GM6B_F | GM6B Cheetah .50 BMG
//    Weapon_Aegis_srifle_GM6B_olive_F | GM6B Cheetah .50 BMG (Khaki)
//    Weapon_Aegis_srifle_GM6B_sand_F | GM6B Cheetah .50 BMG (Sand)
//    Weapon_Aegis_srifle_M320_olive_F | M320 LRR .408 (Olive)
//    Weapon_Aegis_srifle_M320_sand_F | M320 LRR .408 (Sand)
//    Weapon_arifle_AK12_545_arid_F | AK-12 5.45 mm (Arid)
//    Weapon_arifle_AK12_545_F | AK-12 5.45 mm
//    Weapon_arifle_AK12_545_lush_F | AK-12 5.45 mm (Lush)
//    Weapon_arifle_AK12_545_tan_F | AK-12 5.45 mm (Tan)
//    Weapon_arifle_AK12_arid_f | AK-15 (Arid)
//    Weapon_arifle_AK12_F | AK-15
//    Weapon_arifle_AK12_GL_545_arid_F | AK-12 GL 5.45 mm (Arid)
//    Weapon_arifle_AK12_GL_545_F | AK-12 GL 5.45 mm
//    Weapon_arifle_AK12_GL_545_lush_F | AK-12 GL 5.45 mm (Lush)
//    Weapon_arifle_AK12_GL_545_tan_F | AK-12 GL 5.45 mm (Tan)
//    Weapon_arifle_AK12_GL_arid_F | AK-15 GL (Arid)
//    Weapon_arifle_AK12_GL_F | AK-15 GL
//    Weapon_arifle_AK12_GL_lush_F | AK-15 GL (Lush)
//    Weapon_arifle_AK12_lush_f | AK-15 (Lush)
//    Weapon_arifle_AK12U_545_arid_F | AKU-12 5.45 mm (Arid)
//    Weapon_arifle_AK12U_545_F | AKU-12 5.45 mm
//    Weapon_arifle_AK12U_545_lush_F | AKU-12 5.45 mm (Lush)
//    Weapon_arifle_AK12U_545_tan_F | AKU-12 5.45 mm (Tan)
//    Weapon_arifle_AK12U_arid_f | AK-15K (Arid)
//    Weapon_arifle_AK12U_F | AK-15K
//    Weapon_arifle_AK12U_lush_f | AK-15K (Lush)
//    Weapon_arifle_AKM_F | AKM
//    Weapon_arifle_AKS_alt_F | AKS-74U 5.45 mm (Oak)
//    Weapon_arifle_AKS_F | AKS-74U
//    Weapon_arifle_AKSM_alt_F | AKS-74MU 5.45 mm (Plum)
//    Weapon_arifle_AKSM_F | AKS-74MU 5.45 mm
//    Weapon_arifle_ARX_blk_F | Type 115 (Black)
//    Weapon_arifle_ARX_ghex_F | Type 115 (Green Hex)
//    Weapon_arifle_ARX_hex_F | Type 115 (Hex)
//    Weapon_arifle_ash12_blk_RF | Veles 12.7 mm
//    Weapon_arifle_ash12_desert_RF | Veles 12.7 mm (Desert)
//    Weapon_arifle_ash12_GL_blk_RF | Veles GL 12.7 mm
//    Weapon_arifle_ash12_GL_desert_RF | Veles GL 12.7 mm (Desert)
//    Weapon_arifle_ash12_GL_urban_RF | Veles GL 12.7 mm (Urban)
//    Weapon_arifle_ash12_GL_wood_RF | Veles GL 12.7 mm (Wood)
//    Weapon_arifle_ash12_LR_blk_RF | Veles-S 12.7 mm
//    Weapon_arifle_ash12_LR_desert_RF | Veles-S 12.7 mm (Desert)
//    Weapon_arifle_ash12_LR_urban_RF | Veles-S 12.7 mm (Urban)
//    Weapon_arifle_ash12_LR_wood_RF | Veles-S 12.7 mm (Wood)
//    Weapon_arifle_ash12_urban_RF | Veles 12.7 mm (Urban)
//    Weapon_arifle_ash12_wood_RF | Veles 12.7 mm (Wood)
//    Weapon_arifle_AUG_black_F | AUR 90 5.56 mm (Black)
//    Weapon_arifle_AUG_C_black_F | AUR 90C 5.56 mm (Black)
//    Weapon_arifle_AUG_C_F | AUR 90C 5.56 mm
//    Weapon_arifle_AUG_F | AUR 90 5.56 mm
//    Weapon_arifle_AUG_GL_black_F | AUR 90 GL 5.56 mm (Black)
//    Weapon_arifle_AUG_GL_F | AUR 90 GL 5.56 mm
//    Weapon_arifle_CTAR_blk_F | QBZ-95-1 (Black)
//    Weapon_arifle_CTAR_ghex_F | QBZ-95-1 (Green Hex)
//    Weapon_arifle_CTAR_GL_blk_F | QBZ-95-1 GL (Black)
//    Weapon_arifle_CTAR_GL_ghex_F | QBZ-95-1 GL (Green Hex)
//    Weapon_arifle_CTAR_GL_hex_F | QBZ-95-1 GL (Hex)
//    Weapon_arifle_CTAR_hex_F | QBZ-95-1 (Hex)
//    Weapon_arifle_CTARS_blk_F | QBZ-95-1 LSW (Black)
//    Weapon_arifle_CTARS_ghex_F | QBZ-95-1 LSW (Green Hex)
//    Weapon_arifle_CTARS_hex_F | QBZ-95-1 LSW (Hex)
//    Weapon_arifle_FORT651_F | Fort-651 6.5 mm
//    Weapon_arifle_FORT652_F | Fort-652 6.5 mm
//    Weapon_arifle_FORT652_GL_F | Fort-652 GL 6.5 mm
//    Weapon_arifle_G36_F | G36K 6.5 mm
//    Weapon_arifle_G36_GL_F | G36K GL 6.5 mm
//    Weapon_arifle_G36_GL_Sand_F | G36K GL 6.5 mm (Sand)
//    Weapon_arifle_G36_Sand_F | G36K 6.5 mm (Sand)
//    Weapon_arifle_G36C_F | G36C 6.5 mm
//    Weapon_arifle_G36C_Sand_F | G36C 6.5 mm (Sand)
//    Weapon_arifle_Galat_lxWS | Galil ARM
//    Weapon_arifle_Galat_worn_lxWS | Galil ARM (Old)
//    Weapon_arifle_Katiba_C_F | KH2002C Sama
//    Weapon_arifle_Katiba_F | KH2002 Sama
//    Weapon_arifle_Katiba_GL_F | KH2002 Sama KGL
//    Weapon_arifle_Mk20_black_F | Mk20 5.56 mm (Black)
//    Weapon_arifle_Mk20_F | F2000 (Camo)
//    Weapon_arifle_Mk20_GL_black_F | Mk20C EGLM 5.56 mm (Black)
//    Weapon_arifle_Mk20_GL_F | F2000 EGLM (Camo)
//    Weapon_arifle_Mk20_GL_hex_F | Mk20C EGLM 5.56 mm (Hex)
//    Weapon_arifle_Mk20_GL_plain_F | F2000 EGLM
//    Weapon_arifle_Mk20_hex_F | Mk20 5.56 mm (Hex)
//    Weapon_arifle_Mk20_plain_F | F2000
//    Weapon_arifle_Mk20C_black_F | Mk20C 5.56 mm (Black)
//    Weapon_arifle_Mk20C_F | F2000 Tactical (Camo)
//    Weapon_arifle_Mk20C_hex_F | Mk20C 5.56 mm (Hex)
//    Weapon_arifle_Mk20C_plain_F | F2000 Tactical
//    Weapon_arifle_MSBS65_black_F | MSBS Grot (Black)
//    Weapon_arifle_MSBS65_camo_F | MSBS Grot (Camo)
//    Weapon_arifle_MSBS65_F | MSBS Grot
//    Weapon_arifle_MSBS65_GL_black_F | MSBS Grot GL (Black)
//    Weapon_arifle_MSBS65_GL_camo_F | MSBS Grot GL (Camo)
//    Weapon_arifle_MSBS65_GL_F | MSBS Grot GL
//    Weapon_arifle_MSBS65_GL_sand_F | MSBS Grot GL (Sand)
//    Weapon_arifle_MSBS65_Mark_black_F | MSBS Grot MR (Black)
//    Weapon_arifle_MSBS65_Mark_camo_F | MSBS Grot MR (Camo)
//    Weapon_arifle_MSBS65_Mark_F | MSBS Grot MR
//    Weapon_arifle_MSBS65_Mark_sand_F | MSBS Grot MR (Sand)
//    Weapon_arifle_MSBS65_sand_F | MSBS Grot (Sand)
//    Weapon_arifle_MSBS65_UBS_black_F | MSBS Grot SG (Black)
//    Weapon_arifle_MSBS65_UBS_camo_F | MSBS Grot SG (Camo)
//    Weapon_arifle_MSBS65_UBS_F | MSBS Grot SG
//    Weapon_arifle_MSBS65_UBS_sand_F | MSBS Grot SG (Sand)
//    Weapon_arifle_MX_Black_F | MX (Black)
//    Weapon_arifle_MX_F | MX
//    Weapon_arifle_MX_GL_Black_F | MX 3GL (Black)
//    Weapon_arifle_MX_GL_F | MX 3GL
//    Weapon_arifle_MX_GL_khk_F | MX 3GL (Khaki)
//    Weapon_arifle_MX_khk_F | MX (Khaki)
//    Weapon_arifle_MX_SW_Black_F | MX LSW (Black)
//    Weapon_arifle_MX_SW_F | MX LSW
//    Weapon_arifle_MX_SW_khk_F | MX LSW (Khaki)
//    Weapon_arifle_MXC_Black_F | MXC (Black)
//    Weapon_arifle_MXC_F | MXC
//    Weapon_arifle_MXC_khk_F | MXC (Khaki)
//    Weapon_arifle_MXM_Black_F | MXM (Black)
//    Weapon_arifle_MXM_F | MXM
//    Weapon_arifle_MXM_khk_F | MXM (Khaki)
//    Weapon_arifle_NCAR15_F | NCAR-15 5.8 mm
//    Weapon_arifle_NCAR15_GL_F | NCAR-15 GL 5.8 mm
//    Weapon_arifle_NCAR15_MG_F | NCAR-15-1 5.8 mm
//    Weapon_arifle_NCAR15B_F | NCAR-15B 5.8 mm
//    Weapon_arifle_RPK12_arid_f | RPK (Arid)
//    Weapon_arifle_RPK12_F | RPK
//    Weapon_arifle_RPK12_lush_f | RPK (Lush)
//    Weapon_arifle_RPK_F | RPK 7.62 mm
//    Weapon_arifle_SA80_blk_F | L85A3 6.5 mm (Black)
//    Weapon_arifle_SA80_C_blk_F | L22A3 6.5 mm (Black)
//    Weapon_arifle_SA80_C_khk_F | L22A3 6.5 mm (Khaki)
//    Weapon_arifle_SA80_C_snd_F | L22A3 6.5 mm (Sand)
//    Weapon_arifle_SA80_GL_blk_F | L85A3 GL 6.5 mm (Black)
//    Weapon_arifle_SA80_GL_khk_F | L85A3 GL 6.5 mm (Khaki)
//    Weapon_arifle_SA80_GL_snd_F | L85A3 GL 6.5 mm (Sand)
//    Weapon_arifle_SA80_khk_F | L85A3 6.5 mm (Khaki)
//    Weapon_arifle_SA80_snd_F | L85A3 6.5 mm (Sand)
//    Weapon_arifle_SCAR_black_F | Mk17 7.62 mm (Black)
//    Weapon_arifle_SCAR_F | Mk17 7.62 mm
//    Weapon_arifle_SCAR_GL_black_F | Mk17C GL 7.62 mm (Black)
//    Weapon_arifle_SCAR_GL_F | Mk17C GL 7.62 mm
//    Weapon_arifle_SCAR_GL_khaki_F | Mk17C GL 7.62 mm (Khaki)
//    Weapon_arifle_SCAR_grip_black_F | Mk17 FG 7.62 mm (Black)
//    Weapon_arifle_SCAR_grip_F | Mk17 FG 7.62 mm
//    Weapon_arifle_SCAR_grip_khaki_F | Mk17 FG 7.62 mm (Khaki)
//    Weapon_arifle_SCAR_khaki_F | Mk17 7.62 mm (Khaki)
//    Weapon_arifle_SCAR_L_black_F | Mk16 5.56 mm (Black)
//    Weapon_arifle_SCAR_L_F | Mk16 5.56 mm
//    Weapon_arifle_SCAR_L_GL_black_F | Mk16C GL 5.56 mm (Black)
//    Weapon_arifle_SCAR_L_GL_F | Mk16C GL 5.56 mm
//    Weapon_arifle_SCAR_L_GL_khaki_F | Mk16C GL 5.56 mm (Khaki)
//    Weapon_arifle_SCAR_L_grip_black_F | Mk16 FG 5.56 mm (Black)
//    Weapon_arifle_SCAR_L_grip_F | Mk16 FG 5.56 mm
//    Weapon_arifle_SCAR_L_grip_khaki_F | Mk16 FG 5.56 mm (Khaki)
//    Weapon_arifle_SCAR_L_khaki_F | Mk16 5.56 mm (Khaki)
//    Weapon_arifle_SCAR_L_short_black_F | Mk16C 5.56 mm (Black)
//    Weapon_arifle_SCAR_L_short_F | Mk16C 5.56 mm
//    Weapon_arifle_SCAR_L_short_khaki_F | Mk16C 5.56 mm (Khaki)
//    Weapon_arifle_SCAR_short_black_F | Mk17C 7.62 mm (Black)
//    Weapon_arifle_SCAR_short_F | Mk17C 7.62 mm
//    Weapon_arifle_SCAR_short_khaki_F | Mk17C 7.62 mm (Khaki)
//    Weapon_arifle_SDAR_F | RFB SDAR
//    Weapon_arifle_SLR_D_lxWS | FN FAL 50.00 (Desert)
//    Weapon_arifle_SLR_GL_lxWS | FN FAL 50.00 GL (Wood)
//    Weapon_arifle_SLR_lxWS | FN FAL 50.00 (Wood)
//    Weapon_arifle_SLR_Para_lxWS | FN FAL OSW Para
//    Weapon_arifle_SLR_Para_snake_lxWS | FN FAL OSW Para (Snake)
//    Weapon_arifle_SLR_V_camo_lxWS | FN FAL 50.00 (Jungle)
//    Weapon_arifle_SLR_V_GL_lxWS | FN FAL 50.00 GL
//    Weapon_arifle_SLR_V_lxWS | FN FAL 50.00
//    Weapon_arifle_SPAR_01_blk_F | HK416A5 11 " (Black)
//    Weapon_arifle_SPAR_01_GL_blk_F | HK416A5 11 " GL (Black)
//    Weapon_arifle_SPAR_01_GL_khk_F | HK416A5 11 " GL (Khaki)
//    Weapon_arifle_SPAR_01_GL_snd_F | HK416A5 11 " GL (Sand)
//    Weapon_arifle_SPAR_01_khk_F | HK416A5 11 " (Khaki)
//    Weapon_arifle_SPAR_01_snd_F | HK416A5 11 " (Sand)
//    Weapon_arifle_SPAR_02_blk_F | HK416A5 14.5 " (Black)
//    Weapon_arifle_SPAR_02_khk_F | HK416A5 14.5 " (Khaki)
//    Weapon_arifle_SPAR_02_snd_F | HK416A5 14.5 " (Sand)
//    Weapon_arifle_SPAR_03_blk_F | HK417A2 20 " (Black)
//    Weapon_arifle_SPAR_03_khk_F | HK417A2 20 " (Khaki)
//    Weapon_arifle_SPAR_03_snd_F | HK417A2 20 " (Sand)
//    Weapon_arifle_TRG20_black_F | TRG-20 5.56 mm (Black)
//    Weapon_arifle_TRG20_F | CTAR-21
//    Weapon_arifle_TRG21_black_F | TRG-21 5.56 mm (Black)
//    Weapon_arifle_TRG21_F | TAR-21
//    Weapon_arifle_TRG21_GL_black_F | TRG-21 EGLM 5.56 mm (Black)
//    Weapon_arifle_TRG21_GL_F | GTAR-21 EGLM
//    Weapon_arifle_Velko_lxWS | Vektor R4
//    Weapon_arifle_VelkoR5_GL_lxWS | Vektor R5 Carbine GL
//    Weapon_arifle_VelkoR5_GL_snake_lxWS | Vektor R5 Carbine GL (Snake)
//    Weapon_arifle_VelkoR5_lxWS | Vektor R5 Carbine
//    Weapon_arifle_VelkoR5_snake_lxWS | Vektor R5 Carbine (Snake)
//    Weapon_arifle_XMS_Base_khk_lxWS | XMS (Khaki)
//    Weapon_arifle_XMS_camo_lxWS | XMS 5.56 mm (Stripes)
//    Weapon_arifle_XMS_GL_camo_lxWS | XMS GL 5.56 mm (Stripes)
//    Weapon_arifle_XMS_GL_Gray_lxWS | XMS GL 5.56 mm (Gray)
//    Weapon_arifle_XMS_GL_khk_lxWS | XMS GL (Khaki)
//    Weapon_arifle_XMS_GL_lxWS | XMS GL
//    Weapon_arifle_XMS_GL_Sand_lxWS | XMS GL (Sand)
//    Weapon_arifle_XMS_Gray_lxWS | XMS 5.56 mm (Gray)
//    Weapon_arifle_XMS_lxWS | XMS 5.56 mm
//    Weapon_arifle_XMS_M_camo_lxWS | XMS SW 5.56 mm (Stripes)
//    Weapon_arifle_XMS_M_Gray_lxWS | XMS SW 5.56 mm (Gray)
//    Weapon_arifle_XMS_M_khk_lxWS | XMS SW 5.56 mm (Khaki)
//    Weapon_arifle_XMS_M_lxWS | XMS SW
//    Weapon_arifle_XMS_M_Sand_lxWS | XMS SW (Sand)
//    Weapon_arifle_XMS_Sand_lxWS | XMS 5.56 mm (Sand)
//    Weapon_arifle_XMS_Shot_camo_lxWS | XMS SG 5.56 mm (Stripes)
//    Weapon_arifle_XMS_Shot_Gray_lxWS | XMS SG 5.56 mm (Gray)
//    Weapon_arifle_XMS_Shot_khk_lxWS | XMS SG (Khaki)
//    Weapon_arifle_XMS_Shot_lxWS | XMS SG
//    Weapon_arifle_XMS_Shot_Sand_lxWS | XMS SG (Sand)
//    Weapon_Atlas_Arifle_famasF1_F | FAMAS F1 5.56 mm
//    Weapon_Atlas_Arifle_famasF1_GL_F | FAMAS F1 GL 5.56 mm
//    Weapon_Atlas_Arifle_famasF1_Grip_F | FAMAS F1 FG 5.56 mm
//    Weapon_Atlas_Arifle_famasF1_RIS_F | FAMAS F1 RIS 5.56 mm
//    Weapon_Atlas_Arifle_famasG2_F | FAMAS G2 5.56 mm
//    Weapon_Atlas_Arifle_famasG2_GL_F | FAMAS G2 GL 5.56 mm
//    Weapon_Atlas_Arifle_famasG2_Grip_F | FAMAS G2 FG 5.56 mm
//    Weapon_Atlas_Arifle_famasG4_GL_F | FAMAS G4 GL 6.5 mm
//    Weapon_Atlas_Arifle_famasG4_Grip_F | FAMAS G4 6.5 mm
//    Weapon_Atlas_Launch_Pzf3_F | Panzerfaust 3
//    Weapon_Atlas_LMG_Negev_black | TNG-7 7.62 mm (Black)
//    Weapon_ef_arifle_mx_coy | MX 6.5 mm (Coyote)
//    Weapon_ef_arifle_mx_gl_coy | MX 3GL 6.5 mm (Coyote)
//    Weapon_ef_arifle_mx_grip | MX 6.5 mm (Grip)
//    Weapon_ef_arifle_mx_grip_black | MX 6.5 mm (Grip/Black)
//    Weapon_ef_arifle_mx_grip_coy | MX 6.5 mm (Grip/Coyote)
//    Weapon_ef_arifle_mx_grip_khk | MX 6.5 mm (Grip/Khaki)
//    Weapon_ef_arifle_mx_sw_coy | MX SW 6.5 mm (Coyote)
//    Weapon_ef_arifle_mxar | MXAR 6.5 mm
//    Weapon_ef_arifle_mxar_black | MXAR 6.5 mm (Black)
//    Weapon_ef_arifle_mxar_coy | MXAR 6.5 mm (Coyote)
//    Weapon_ef_arifle_mxar_gl | MXAR 3GL 6.5 mm
//    Weapon_ef_arifle_mxar_gl_black | MXAR 3GL 6.5 mm (Black)
//    Weapon_ef_arifle_mxar_gl_coy | MXAR 3GL 6.5 mm (Coyote)
//    Weapon_ef_arifle_mxar_gl_khk | MXAR 3GL 6.5 mm (Khaki)
//    Weapon_ef_arifle_mxar_khk | MXAR 6.5 mm (Khaki)
//    Weapon_ef_arifle_mxc_coy | MXC 6.5 mm (Coyote)
//    Weapon_ef_arifle_mxm_coy | MXM 6.5 mm (Coyote)
//    Weapon_ef_smg_diplomat | Diplomat 9 mm
//    Weapon_ef_smg_diplomat_coy | Diplomat 9 mm (Coyote)
//    Weapon_ef_smg_diplomat_ghex | Diplomat 9 mm (Green Hex)
//    Weapon_ef_smg_diplomat_hex | Diplomat 9 mm (Hex)
//    Weapon_GL_M32_F | M32 40 mm
//    Weapon_GL_XM25_F | Punisher 25 mm
//    Weapon_glaunch_GLX_camo_lxWS | GLX 160 (Camo)
//    Weapon_glaunch_GLX_ghex_lxWS | GLX 160 (Green Hex)
//    Weapon_glaunch_GLX_hex_lxWS | GLX 160 (Hex)
//    Weapon_glaunch_GLX_lxWS | GLX 160
//    Weapon_glaunch_GLX_olive_lxWS | GLX 40 mm (Olive)
//    Weapon_glaunch_GLX_snake_lxWS | GLX 160 (Snake)
//    Weapon_glaunch_GLX_tan_lxWS | GLX 160 (Sand)
//    Weapon_hgun_PDW2000_F | CPW
//    Weapon_JCA_arifle_M16A4_black_F | M16A4 5.56 mm (Black)
//    Weapon_JCA_arifle_M16A4_FG_black_F | M16A4 5.56 mm FG (Black)
//    Weapon_JCA_arifle_M16A4_FG_olive_F | M16A4 5.56 mm FG (Olive)
//    Weapon_JCA_arifle_M16A4_FG_sand_F | M16A4 5.56 mm FG (Sand)
//    Weapon_JCA_arifle_M16A4_GL_black_F | M16A4 5.56 mm GL (Black)
//    Weapon_JCA_arifle_M16A4_GL_olive_F | M16A4 5.56 mm GL (Olive)
//    Weapon_JCA_arifle_M16A4_GL_sand_F | M16A4 5.56 mm GL (Sand)
//    Weapon_JCA_arifle_M16A4_olive_F | M16A4 5.56 mm (Olive)
//    Weapon_JCA_arifle_M16A4_sand_F | M16A4 5.56 mm (Sand)
//    Weapon_JCA_hgun_G17_black_F | G17 9 mm (Black)
//    Weapon_JCA_hgun_G17_olive_F | G17 9 mm (Olive)
//    Weapon_JCA_hgun_G17_sand_F | G17 9 mm (Sand)
//    Weapon_JCA_hgun_M9A1_black_F | M9A1 9 mm (Black)
//    Weapon_JCA_hgun_M9A1_olive_F | M9A1 9 mm (Olive)
//    Weapon_JCA_hgun_M9A1_sand_F | M9A1 9 mm (Sand)
//    Weapon_JCA_hgun_Mk23_black_F | Mk23 .45 ACP (Black)
//    Weapon_JCA_hgun_Mk23_black_LAM_F | Mk23 .45 ACP (Black, LAM)
//    Weapon_JCA_hgun_Mk23_olive_F | Mk23 .45 ACP (Olive)
//    Weapon_JCA_hgun_Mk23_olive_LAM_F | Mk23 .45 ACP (Olive, LAM)
//    Weapon_JCA_hgun_Mk23_sand_F | Mk23 .45 ACP (Sand)
//    Weapon_JCA_hgun_Mk23_sand_LAM_F | Mk23 .45 ACP (Sand, LAM)
//    Weapon_JCA_hgun_P226_black_F | P226 9 mm (Black)
//    Weapon_JCA_hgun_P226_black_flashlight_F | P226 9 mm (Black, Flashlight)
//    Weapon_JCA_hgun_P226_black_flashlight_snds_F | P226 9 mm (Black, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P226_black_MPO_F | P226 9 mm (Black, MPO)
//    Weapon_JCA_hgun_P226_black_MPO_flashlight_F | P226 9 mm (Black, MPO, Flashlight)
//    Weapon_JCA_hgun_P226_black_MPO_flashlight_snds_F | P226 9 mm (Black, MPO, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P226_black_MPO_snds_F | P226 9 mm (Black, MPO, Suppressor)
//    Weapon_JCA_hgun_P226_black_snds_F | P226 9 mm (Black, Suppressor)
//    Weapon_JCA_hgun_P226_olive_F | P226 9 mm (Olive)
//    Weapon_JCA_hgun_P226_olive_flashlight_F | P226 9 mm (Olive, Flashlight)
//    Weapon_JCA_hgun_P226_olive_flashlight_snds_F | P226 9 mm (Olive, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P226_olive_MPO_F | P226 9 mm (Olive, MPO)
//    Weapon_JCA_hgun_P226_olive_MPO_flashlight_F | P226 9 mm (Olive, MPO, Flashlight)
//    Weapon_JCA_hgun_P226_olive_MPO_flashlight_snds_F | P226 9 mm (Olive, MPO, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P226_olive_MPO_snds_F | P226 9 mm (Olive, MPO, Suppressor)
//    Weapon_JCA_hgun_P226_olive_snds_F | P226 9 mm (Olive, Suppressor)
//    Weapon_JCA_hgun_P226_sand_F | P226 9 mm (Sand)
//    Weapon_JCA_hgun_P226_sand_flashlight_F | P226 9 mm (Sand, Flashlight)
//    Weapon_JCA_hgun_P226_sand_flashlight_snds_F | P226 9 mm (Sand, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P226_sand_MPO_F | P226 9 mm (Sand, MPO)
//    Weapon_JCA_hgun_P226_sand_MPO_flashlight_F | P226 9 mm (Sand, MPO, Flashlight)
//    Weapon_JCA_hgun_P226_sand_MPO_flashlight_snds_F | P226 9 mm (Sand, MPO, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P226_sand_MPO_snds_F | P226 9 mm (Sand, MPO, Suppressor)
//    Weapon_JCA_hgun_P226_sand_snds_F | P226 9 mm (Sand, Suppressor)
//    Weapon_JCA_hgun_P320_black_F | P320 9 mm (Black)
//    Weapon_JCA_hgun_P320_black_flashlight_F | P320 9 mm (Black, Flashlight)
//    Weapon_JCA_hgun_P320_black_flashlight_snds_F | P320 9 mm (Black, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P320_black_PRO_F | P320 9 mm (Black, PRO)
//    Weapon_JCA_hgun_P320_black_PRO_flashlight_F | P320 9 mm (Black, PRO, Flashlight)
//    Weapon_JCA_hgun_P320_black_PRO_flashlight_snds_F | P320 9 mm (Black, PRO, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P320_black_PRO_snds_F | P320 9 mm (Black, PRO, Suppressor)
//    Weapon_JCA_hgun_P320_black_snds_F | P320 9 mm (Black, Suppressor)
//    Weapon_JCA_hgun_P320_olive_F | P320 9 mm (Olive)
//    Weapon_JCA_hgun_P320_olive_flashlight_F | P320 9 mm (Olive, Flashlight)
//    Weapon_JCA_hgun_P320_olive_flashlight_snds_F | P320 9 mm (Olive, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P320_olive_PRO_F | P320 9 mm (Olive, PRO)
//    Weapon_JCA_hgun_P320_olive_PRO_flashlight_F | P320 9 mm (Olive, PRO, Flashlight)
//    Weapon_JCA_hgun_P320_olive_PRO_flashlight_snds_F | P320 9 mm (Olive, PRO, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P320_olive_PRO_snds_F | P320 9 mm (Olive, PRO, Suppressor)
//    Weapon_JCA_hgun_P320_olive_snds_F | P320 9 mm (Olive, Suppressor)
//    Weapon_JCA_hgun_P320_sand_F | P320 9 mm (Sand)
//    Weapon_JCA_hgun_P320_sand_flashlight_F | P320 9 mm (Sand, Flashlight)
//    Weapon_JCA_hgun_P320_sand_flashlight_snds_F | P320 9 mm (Sand, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P320_sand_PRO_F | P320 9 mm (Sand, PRO)
//    Weapon_JCA_hgun_P320_sand_PRO_flashlight_F | P320 9 mm (Sand, PRO, Flashlight)
//    Weapon_JCA_hgun_P320_sand_PRO_flashlight_snds_F | P320 9 mm (Sand, PRO, Flashlight, Suppressor)
//    Weapon_JCA_hgun_P320_sand_PRO_snds_F | P320 9 mm (Sand, PRO, Suppressor)
//    Weapon_JCA_hgun_P320_sand_snds_F | P320 9 mm (Sand, Suppressor)
//    Weapon_JCA_srifle_AWM_black_F | M115A3 .338 LM (Black)
//    Weapon_JCA_srifle_AWM_black_HPPO_F | M115A3 .338 LM (Black, HPPO)
//    Weapon_JCA_srifle_AWM_black_HPPO_RAD_F | M115A3 .338 LM (Black, HPPO-RAD)
//    Weapon_JCA_srifle_AWM_black_HPPO_RAD_snds_F | M115A3 .338 LM (Black, HPPO-RAD, Suppressor)
//    Weapon_JCA_srifle_AWM_black_HPPO_snds_F | M115A3 .338 LM (Black, HPPO, Suppressor)
//    Weapon_JCA_srifle_AWM_black_MRPS_F | M115A3 .338 LM (Black, MRPS)
//    Weapon_JCA_srifle_AWM_black_MRPS_snds_F | M115A3 .338 LM (Black, MRPS, Suppressor)
//    Weapon_JCA_srifle_AWM_olive_F | M115A3 .338 LM (Olive)
//    Weapon_JCA_srifle_AWM_olive_HPPO_F | M115A3 .338 LM (Olive, HPPO)
//    Weapon_JCA_srifle_AWM_olive_HPPO_RAD_F | M115A3 .338 LM (Olive, HPPO-RAD)
//    Weapon_JCA_srifle_AWM_olive_HPPO_RAD_snds_F | M115A3 .338 LM (Olive, HPPO-RAD, Suppressor)
//    Weapon_JCA_srifle_AWM_olive_HPPO_snds_F | M115A3 .338 LM (Olive, HPPO, Suppressor)
//    Weapon_JCA_srifle_AWM_olive_MRPS_F | M115A3 .338 LM (Olive, MRPS)
//    Weapon_JCA_srifle_AWM_olive_MRPS_snds_F | M115A3 .338 LM (Olive, MRPS, Suppressor)
//    Weapon_JCA_srifle_AWM_sand_F | M115A3 .338 LM (Sand)
//    Weapon_JCA_srifle_AWM_sand_HPPO_F | M115A3 .338 LM (Sand, HPPO)
//    Weapon_JCA_srifle_AWM_sand_HPPO_RAD_F | M115A3 .338 LM (Sand, HPPO-RAD)
//    Weapon_JCA_srifle_AWM_sand_HPPO_RAD_snds_F | M115A3 .338 LM (Sand, HPPO-RAD, Suppressor)
//    Weapon_JCA_srifle_AWM_sand_HPPO_snds_F | M115A3 .338 LM (Sand, HPPO, Suppressor)
//    Weapon_JCA_srifle_AWM_sand_MRPS_F | M115A3 .338 LM (Sand, MRPS)
//    Weapon_JCA_srifle_AWM_sand_MRPS_snds_F | M115A3 .338 LM (Sand, MRPS, Suppressor)
//    Weapon_JCA_srifle_M107_black_F | M107A1 12.7 mm (Black)
//    Weapon_JCA_srifle_M107_black_HPCS_F | M107A1 12.7 mm (Black, HPCS)
//    Weapon_JCA_srifle_M107_black_HPCS_snds_F | M107A1 12.7 mm (Black, HPCS, Suppressor)
//    Weapon_JCA_srifle_M107_olive_F | M107A1 12.7 mm (Olive)
//    Weapon_JCA_srifle_M107_olive_HPCS_F | M107A1 12.7 mm (Olive, HPCS)
//    Weapon_JCA_srifle_M107_olive_HPCS_snds_F | M107A1 12.7 mm (Olive, HPCS, Suppressor)
//    Weapon_JCA_srifle_M107_sand_F | M107A1 12.7 mm (Sand)
//    Weapon_JCA_srifle_M107_sand_HPCS_F | M107A1 12.7 mm (Sand, HPCS)
//    Weapon_JCA_srifle_M107_sand_HPCS_snds_F | M107A1 12.7 mm (Sand, HPCS, Suppressor)
//    Weapon_LMG_03_F | FN Minimi SPW
//    Weapon_LMG_03_khk_F | LIM-85 5.56 mm (Khaki)
//    Weapon_LMG_03_snd_F | LIM-85 5.56 mm (Sand)
//    Weapon_LMG_Mk200_black_F | Stoner 99 LMG (Black)
//    Weapon_LMG_Mk200_F | Stoner 99 LMG
//    Weapon_LMG_Mk200_khk_F | M200 6.5 mm (Khaki)
//    Weapon_LMG_Mk200_plain_F | M200 6.5 mm (Sand)
//    Weapon_LMG_S77_AAF_lxWS | Vektor SS-77 (Camo)
//    Weapon_LMG_S77_Compact_lxWS | Vektor SS-77 Compact
//    Weapon_LMG_S77_Compact_Snakeskin_lxWS | Vektor SS-77 Compact (Snake)
//    Weapon_LMG_S77_Desert_lxWS | Vektor SS-77 (Desert)
//    Weapon_LMG_S77_GHex_lxWS | Vektor SS-77 (Green Hex)
//    Weapon_LMG_S77_Hex_lxWS | Vektor SS-77 (Hex)
//    Weapon_LMG_S77_lxWS | Vektor SS-77
//    Weapon_LMG_Zafir_black_F | Zafir 7.62 mm (Black)
//    Weapon_LMG_Zafir_F | Negev NG7
//    Weapon_LMG_Zafir_ghex_F | Zafir 7.62 mm (Green Hex)
//    Weapon_MMG_01_black_F | Navid 9.3 mm (Black)
//    Weapon_MMG_01_ghex_F | Navid 9.3 mm (Green Hex)
//    Weapon_MMG_01_hex_F | HK121 (Hex)
//    Weapon_MMG_01_tan_F | HK121 (Tan)
//    Weapon_MMG_02_black_F | LWMMG (Black)
//    Weapon_MMG_02_camo_F | LWMMG (MTP)
//    Weapon_MMG_02_khaki_F | SPMG .338 (Khaki)
//    Weapon_MMG_02_sand_F | LWMMG (Sand)
//    Weapon_Opf_arifle_RFB_F | RFL 7.62 mm
//    Weapon_Opf_arifle_SKS_F | SKS-M 7.62 mm
//    Weapon_sgun_aa40_lxWS | AA12
//    Weapon_sgun_aa40_snake_lxWS | AA12 (Snake)
//    Weapon_sgun_aa40_tan_lxWS | AA12 (Sand)
//    Weapon_sgun_HunterShotgun_01_F | CZ 581
//    Weapon_sgun_HunterShotgun_01_sawedoff_F | CZ 581 (Sawed-Off)
//    Weapon_sgun_KSG_F | Bulldog 12G
//    Weapon_sgun_M4_F | M4 SSAS 12G
//    Weapon_sgun_Mp153_black_F | BK-153 12G
//    Weapon_sgun_Mp153_classic_F | BK-153 12G (Classic)
//    Weapon_SMG_01_black_F | Vermin SMG .45 ACP (Black)
//    Weapon_SMG_01_black_RF | Vermin SMG .45 ACP (Black)
//    Weapon_SMG_01_F | Vector SMG
//    Weapon_SMG_01_khk_F | Vermin SMG .45 ACP (Khaki)
//    Weapon_SMG_02_F | Scorpion Evo 3 A1
//    Weapon_SMG_03_black | PS90 (Black)
//    Weapon_SMG_03_camo | PS90 (Camo)
//    Weapon_SMG_03_hex | PS90 (Hex)
//    Weapon_SMG_03_khaki | PS90 (Khaki)
//    Weapon_SMG_03_TR_black | PS90 TR (Black)
//    Weapon_SMG_03_TR_camo | PS90 TR (Camo)
//    Weapon_SMG_03_TR_hex | PS90 TR (Hex)
//    Weapon_SMG_03_TR_khaki | PS90 TR (Khaki)
//    Weapon_SMG_03C_black | P90 (Black)
//    Weapon_SMG_03C_camo | P90 (Camo)
//    Weapon_SMG_03C_hex | P90 (Hex)
//    Weapon_SMG_03C_khaki | P90 (Khaki)
//    Weapon_SMG_03C_TR_black | P90 TR (Black)
//    Weapon_SMG_03C_TR_camo | P90 TR (Camo)
//    Weapon_SMG_03C_TR_hex | P90 TR (Hex)
//    Weapon_SMG_03C_TR_khaki | P90 TR (Khaki)
//    Weapon_SMG_04_blk_F | MP7 4.6 mm (Black)
//    Weapon_SMG_04_khk_F | MP7 4.6 mm (Khaki)
//    Weapon_SMG_04_snd_F | MP7 4.6 mm (Sand)
//    Weapon_SMG_05_F | MP5K
//    Weapon_srifle_DMR_01_black_F | SV-122 7.62 mm (Black)
//    Weapon_srifle_DMR_01_black_RF | Rahim 7.62 mm (Black)
//    Weapon_srifle_DMR_01_F | VS-121
//    Weapon_srifle_DMR_01_tan_RF | Rahim 7.62 mm (Tan)
//    Weapon_srifle_DMR_02_camo_F | Noreen "Bad News" ULR (Camo)
//    Weapon_srifle_DMR_02_F | Noreen "Bad News" ULR (Black)
//    Weapon_srifle_DMR_02_sniper_F | Noreen "Bad News" ULR (Sand)
//    Weapon_srifle_DMR_02_tna_F | MAR-10 .338 (Tropic)
//    Weapon_srifle_DMR_03_F | SIG 556 (Black)
//    Weapon_srifle_DMR_03_khaki_F | SIG 556 (Khaki)
//    Weapon_srifle_DMR_03_multicam_F | SIG 556 (Camo)
//    Weapon_srifle_DMR_03_tan_F | SIG 556 (Sand)
//    Weapon_srifle_DMR_03_woodland_F | SIG 556 (Woodland)
//    Weapon_srifle_DMR_04_F | ASP-1 Kir (Black)
//    Weapon_srifle_DMR_04_Tan_F | ASP-1 Kir (Tan)
//    Weapon_srifle_DMR_05_blk_F | Cyrus (Black)
//    Weapon_srifle_DMR_05_ghex_F | Cyrus 9.3 mm (Green Hex)
//    Weapon_srifle_DMR_05_hex_F | Cyrus (Hex)
//    Weapon_srifle_DMR_05_tan_f | Cyrus (Tan)
//    Weapon_srifle_DMR_06_black_F | Mk14 7.62 mm (Black)
//    Weapon_srifle_DMR_06_camo_F | M14 (Camo)
//    Weapon_srifle_DMR_06_hunter_F | M14 (classic)
//    Weapon_srifle_DMR_06_olive_F | M14 (Olive)
//    Weapon_srifle_DMR_07_blk_F | QBU-88 (Black)
//    Weapon_srifle_DMR_07_ghex_F | QBU-88 (Green Hex)
//    Weapon_srifle_DMR_07_hex_F | QBU-88 (Hex)
//    Weapon_srifle_EBR_blk_F | Mk18 ABR 7.62 mm (Grey)
//    Weapon_srifle_EBR_blk_lxWS | Mk14 Mod 1 EBR (Black)
//    Weapon_srifle_EBR_cbr_F | Mk18 ABR 7.62 mm (Coyote)
//    Weapon_srifle_EBR_F | Mk14 Mod 1 EBR
//    Weapon_srifle_EBR_khk_F | Mk18 ABR 7.62 mm (Khaki)
//    Weapon_srifle_EBR_snake_lxWS | Mk14 Mod 1 EBR (Snake)
//    Weapon_srifle_GM6_camo_F | GM6 Lynx (Camo)
//    Weapon_srifle_GM6_F | GM6 Lynx
//    Weapon_srifle_GM6_ghex_F | GM6 Lynx (Green Hex)
//    Weapon_srifle_GM6_snake_lxWS | GM6 Lynx (Snake)
//    Weapon_srifle_h6_blk_rf | HADES H6 5.56 mm
//    Weapon_srifle_h6_digi_rf | HADES H6 5.56 mm (Digital)
//    Weapon_srifle_h6_gold_rf | HADES H6 5.56 mm (Gold)
//    Weapon_srifle_h6_oli_rf | HADES H6 5.56 mm (Olive)
//    Weapon_srifle_h6_tan_rf | HADES H6 5.56 mm (Sand)
//    Weapon_srifle_LRR_camo_F | M200 Intervention (Camo)
//    Weapon_srifle_LRR_F | M200 Intervention
//    Weapon_srifle_LRR_tna_F | M200 Intervention (Tropic)
//    Weapon_srifle_WF50_camo_F | Warfare-50 12.7 mm (Camo)
//    Weapon_srifle_WF50_F | Warfare-50 12.7 mm (WIP: DO NOT USE)
//    Weapon_srifle_WF50_tna_F | Warfare-50 12.7 mm (Tropic)
//
// -- WeaponsSecondary (51) --
//    Weapon_EF_launch_B_Titan_Coy | Titan MPRL (Coyote)
//    Weapon_JCA_launch_M72_black_F | M72A7 (Black)
//    Weapon_JCA_launch_M72_olive_F | M72A7 (Olive)
//    Weapon_JCA_launch_M72_sand_F | M72A7 (Sand)
//    Weapon_JCA_launch_Mk153_black_F | Mk153 (Black)
//    Weapon_JCA_launch_Mk153_olive_F | Mk153 (Olive)
//    Weapon_JCA_launch_Mk153_PWS_black_F | Mk153 PWS (Black)
//    Weapon_JCA_launch_Mk153_PWS_olive_F | Mk153 PWS (Olive)
//    Weapon_JCA_launch_Mk153_PWS_sand_F | Mk153 PWS (Sand)
//    Weapon_JCA_launch_Mk153_sand_F | Mk153 (Sand)
//    Weapon_launch_B_Titan_coyote_F | Titan MPRL (Coyote)
//    Weapon_launch_B_Titan_olive_F | Titan MPRL (Olive)
//    Weapon_launch_B_Titan_short_tna_F | Titan MPRL Compact (Tropic)
//    Weapon_launch_B_Titan_tna_F | Titan MPRL (Tropic)
//    Weapon_launch_I_Titan_eaf_F | Titan MPRL (Geometric)
//    Weapon_launch_MRAWS_black_F | MAAWS Mk4 Mod 1 (Black)
//    Weapon_launch_MRAWS_black_rail_F | MAAWS Mk4 Mod 0 (Black)
//    Weapon_launch_MRAWS_coyote_F | MAAWS Mk4 Mod 1 (Coyote)
//    Weapon_launch_MRAWS_coyote_rail_F | MAAWS Mk4 Mod 0 (Coyote)
//    Weapon_launch_MRAWS_green_F | MAAWS Mk4 Mod 1 (Green)
//    Weapon_launch_MRAWS_green_rail_F | MAAWS Mk4 Mod 0 (Green)
//    Weapon_launch_MRAWS_olive_F | MAAWS Mk4 Mod 1 (Olive)
//    Weapon_launch_MRAWS_olive_rail_F | MAAWS Mk4 Mod 0 (Olive)
//    Weapon_launch_MRAWS_sand_F | MAAWS Mk4 Mod 1 (Sand)
//    Weapon_launch_MRAWS_sand_rail_F | MAAWS Mk4 Mod 0 (Sand)
//    Weapon_launch_NLAW_F | NLAW
//    Weapon_launch_O_Titan_camo_F | Titan MPRL (Camo)
//    Weapon_launch_O_Titan_ghex_F | Titan MPRL (Green Hex)
//    Weapon_launch_O_Titan_short_camo_F | Titan MPRL Compact (Camo)
//    Weapon_launch_O_Titan_short_ghex_F | Titan MPRL Compact (Green Hex)
//    Weapon_launch_O_Vorona_brown_F | Metis-M (Brown)
//    Weapon_launch_O_Vorona_green_F | Metis-M (Green)
//    Weapon_launch_PSRL1_black_RF | PSRL-1 (Black)
//    Weapon_launch_PSRL1_digi_RF | PSRL-1 (Digital)
//    Weapon_launch_PSRL1_geo_RF | PSRL-1 (Geometric)
//    Weapon_launch_PSRL1_olive_RF | PSRL-1 (Olive)
//    Weapon_launch_PSRL1_PWS_black_RF | PSRL-1 PWS (Black)
//    Weapon_launch_PSRL1_PWS_digi_RF | PSRL-1 PWS (Digital)
//    Weapon_launch_PSRL1_PWS_geo_RF | PSRL-1 PWS (Geometric)
//    Weapon_launch_PSRL1_PWS_olive_RF | PSRL-1 PWS (Olive)
//    Weapon_launch_PSRL1_PWS_sand_RF | PSRL-1 PWS (Sand)
//    Weapon_launch_PSRL1_sand_RF | PSRL-1 (Sand)
//    Weapon_launch_RPG32_black_F | RPG-42 Alamut (Black)
//    Weapon_launch_RPG32_camo_F | RPG-42 (Camo)
//    Weapon_launch_RPG32_F | RPG-32
//    Weapon_launch_RPG32_ghex_F | RPG-32 (Green Hex)
//    Weapon_launch_RPG32_green_F | RPG-32 (Green)
//    Weapon_launch_RPG32_tan_lxWS | RPG-32 (Sand)
//    Weapon_launch_RPG7_F | RPG-7
//    Weapon_launch_Titan_blk_F | Titan MPRL (Black)
//    Weapon_launch_Titan_short_blk_F | Titan MPRL Compact (Black)
//
// -- Wreck (71) --
//    Land_Boat_01_abandoned_blue_F | Abandoned Boat (Blue)
//    Land_Boat_01_abandoned_red_F | Abandoned Boat (Red)
//    Land_Boat_02_abandoned_F | Abandoned Boat (Engine)
//    Land_Boat_03_abandoned_F | Abandoned Boat (Dry Dock)
//    Land_Boat_04_wreck_F | Old Boat Wreck
//    Land_Boat_05_wreck_F | Wooden Boat Wreck
//    Land_Boat_06_wreck_F | Metal Boat Wreck
//    Land_Bulldozer_01_abandoned_F | Locked Bulldozer
//    Land_Bulldozer_01_wreck_F | Abandoned Bulldozer
//    Land_CombineHarvester_01_wreck_F | Abandoned Combine Harvester
//    Land_Excavator_01_abandoned_F | Locked Digger
//    Land_Excavator_01_wreck_F | Abandoned Digger
//    Land_HaulTruck_01_abandoned_F | Haul Truck
//    Land_HistoricalPlaneDebris_01_F | Plane Wreck Debris 1
//    Land_HistoricalPlaneDebris_02_F | Plane Wreck Debris 2
//    Land_HistoricalPlaneDebris_03_F | Plane Wreck Debris 3
//    Land_HistoricalPlaneDebris_04_F | Plane Wreck Debris 4
//    Land_HistoricalPlaneWreck_01_F | Plane Wreck (A6M)
//    Land_HistoricalPlaneWreck_02_front_F | Plane Wreck (G4M, Front)
//    Land_HistoricalPlaneWreck_02_rear_F | Plane Wreck (G4M, Back)
//    Land_HistoricalPlaneWreck_02_wing_left_F | Plane Wreck (G4M, Left Wing)
//    Land_HistoricalPlaneWreck_02_wing_right_F | Plane Wreck (G4M, Right Wing)
//    Land_HistoricalPlaneWreck_03_F | Plane Wreck (B-25)
//    Land_Locomotive_01_v1_F | Locomotive (Grey)
//    Land_Locomotive_01_v2_F | Locomotive (Yellow)
//    Land_Locomotive_01_v3_F | Locomotive (Orange)
//    Land_Mi8_wreck_F | Mi-17 Wreck
//    Land_MiningShovel_01_abandoned_F | Mining Shovel
//    Land_PowerGenerator_wreck_F | Power Generator Wreck
//    Land_RailwayCar_01_passenger_F | Railway Car (Passenger)
//    Land_RailwayCar_01_sugarcane_empty_F | Railway Car (Sugarcane, Empty)
//    Land_RailwayCar_01_sugarcane_F | Railway Car (Sugarcane, Loaded)
//    Land_RailwayCar_01_tank_F | Railway Car (Tank)
//    Land_RailwayCar_01_tanker_lxWS | Tanker
//    Land_TrailerCistern_wreck_F | Old Cistern Trailer
//    Land_V3S_wreck_F | V3S Wreck
//    Land_Wreck_AFV_Wheeled_01_F | Rhino MGS Wreck
//    Land_Wreck_BMP2_F | BMP2 Wreck
//    Land_Wreck_BRDM2_F | BRDM-2 Wreck
//    Land_Wreck_Car2_F | Hatchback Wreck (Tilted)
//    Land_Wreck_Car3_F | Hatchback Wreck 2
//    Land_Wreck_Car_F | Hatchback Wreck 1
//    Land_Wreck_CarDismantled_F | Dismantled car
//    Land_Wreck_datsun01T_F | Rusty Offroad Wreck 1
//    Land_Wreck_datsun02T_F | Rusty Offroad Wreck (Tilted)
//    Land_Wreck_Heli_02_Wreck_01_F | PO-30 Wreck (Fuselage)
//    Land_Wreck_Heli_02_Wreck_02_F | PO-30 Wreck (Tail)
//    Land_Wreck_Heli_02_Wreck_03_F | PO-30 Wreck (Rotor Blade)
//    Land_Wreck_Heli_02_Wreck_04_F | PO-30 Wreck (Door)
//    Land_Wreck_Heli_Attack_01_F | Blackfoot Wreck
//    Land_Wreck_Heli_Attack_02_F | Mi-48 Wreck
//    Land_Wreck_hiluxT_F | Rusty Offroad Wreck 2
//    Land_Wreck_HMMWV_F | Army Car Wreck
//    Land_Wreck_Hunter_F | Hunter Wreck
//    Land_Wreck_LT_01_F | Nyx Wreck
//    Land_Wreck_MBT_04_F | Angara Wreck
//    Land_Wreck_Offroad2_F | Offroad Wreck (Doorless)
//    Land_Wreck_Offroad_F | Offroad Wreck
//    Land_Wreck_Plane_Transport_01_crashed_F | C-192 Crashsite
//    Land_Wreck_Plane_Transport_01_F | C-192 Wreck
//    Land_Wreck_Skodovka_F | Car Wreck
//    Land_Wreck_Slammer_F | Slammer Wreck
//    Land_Wreck_Slammer_hull_F | Slammer Wreck (Hull)
//    Land_Wreck_Slammer_turret_F | Slammer Wreck (Turret)
//    Land_Wreck_T72_hull_F | T-72 Wreck (Hull)
//    Land_Wreck_T72_turret_F | T-72 Wreck (Turret)
//    Land_Wreck_Truck_dropside_F | Truck Wreck
//    Land_Wreck_Truck_F | Fuel Truck Wreck
//    Land_Wreck_UAZ_F | Rusty Car Wreck
//    Land_Wreck_Ural_F | Rusty Truck Wreck
//    Land_Wreck_Van_F | Minivan Wreck
//
// -- Wreck_sub (5) --
//    Land_UWreck_FishingBoat_F | Small Fishing Boat Wreck
//    Land_UWreck_Heli_Attack_02_F | Mi-48 Wreck (Underwater)
//    Land_UWreck_MV22_F | V/STOL Wreck
//    Land_Wreck_Traw2_F | Trawler Wreck (Back)
//    Land_Wreck_Traw_F | Trawler Wreck (Front)
//
// -- ace_respawn_Rallypoints (6) --
//    ACE_Rallypoint_East | Rallypoint East
//    ACE_Rallypoint_East_Base | Rallypoint East (Base)
//    ACE_Rallypoint_Independent | Rallypoint Independent
//    ACE_Rallypoint_Independent_Base | Rallypoint Independent (Base)
//    ACE_Rallypoint_West | Rallypoint West
//    ACE_Rallypoint_West_Base | Rallypoint West (Base)
//
// -- ghost (1) --
//    ghost_vs17_vs17_item | vs17 Panel
//
// -- ghost_Vehicles (2) --
//    ghost_hacking_drop | Intel Drop
//    ghost_satcom_deployed | SatCom Mast
//
