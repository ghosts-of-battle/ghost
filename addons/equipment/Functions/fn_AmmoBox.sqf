/*
Function: GHOST_fnc_Ammobox

Description:
 Used to configure basic container Ammo state.

Arguments:
 _container - Container the setup is applied to. <OBJECT>
 _Type - Equipment setup to add. <STRING>

Examples:
 (begin example)
  [this] call GHOST_fnc_Ammobox;
  [this, "Aegis"] call GHOST_fnc_Ammobox;
 (end)

Author:
 MitchJC
*/
if (!isServer) exitwith {};



params [
 "_container",
 ["_Type", "None"]
];

private _Type = _container getVariable ["GHOST_LimitedAmmoSelect", -1];

if ((_Type isEqualto -1) || (_Type isEqualTo "None")) exitwith {};

call {
  if (_Type isEqualto 0) exitwith {_Type = "Vanilla"};
  if (_Type isEqualto 1) exitwith {_Type = "Ghost"};
  if (_Type isEqualto 2) exitwith {_Type = "RHS"};
};

private ["_ContainerItems"];

call {
 if (_Type isEqualTo "Vanilla") exitwith {
   _ContainerItems = [];
 };
if (_Type isEqualTo "Ghost") exitwith {
      _ContainerItems = [
        "16Rnd_9x21_green_Mag",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_red_Mag",
        "16Rnd_9x21_yellow_Mag",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_Smoke_Grenade_shell",
        "1Rnd_SmokeBlue_Grenade_shell",
        "1Rnd_SmokeGreen_Grenade_shell",
        "1Rnd_SmokeOrange_Grenade_shell",
        "1Rnd_SmokePurple_Grenade_shell",
        "1Rnd_SmokeRed_Grenade_shell",
        "1Rnd_SmokeYellow_Grenade_shell",
        "30Rnd_9x21_Green_Mag",
        "30Rnd_9x21_Mag",
        "30Rnd_9x21_Red_Mag",
        "30Rnd_9x21_Yellow_Mag",
        "ACE_40mm_Flare_green",
        "ACE_40mm_Flare_ir",
        "ACE_40mm_Flare_red",
        "ACE_40mm_Flare_white",
        "ACE_Chemlight_HiBlue",
        "ACE_Chemlight_HiGreen",
        "ACE_Chemlight_HiRed",
        "ACE_Chemlight_HiWhite",
        "ACE_Chemlight_HiYellow",
        "ACE_Chemlight_IR",
        "ACE_Chemlight_Orange",
        "ACE_Chemlight_UltraHiOrange",
        "ACE_Chemlight_White",
        "ACE_CTS9",
        "ACE_FlareTripMine_Mag",
        "ACE_HandFlare_Green",
        "ACE_HandFlare_Red",
        "ACE_HandFlare_White",
        "ACE_HandFlare_Yellow",
        "ACE_HuntIR_M203",
        "ACE_M14",
        "ACE_M84",
        "ATMine_Range_Mag",
        "B_IR_Grenade",
        "Chemlight_blue",
        "Chemlight_green",
        "Chemlight_red",
        "Chemlight_yellow",
        "ClaymoreDirectionalMine_Remote_Mag",
        "DemoCharge_Remote_Mag",
        "HandGrenade",
        "MRAWS_HE_F",
        "MRAWS_HEAT55_F",
        "MRAWS_HEAT_F",
        "MS_Strobe_Mag_1",
        "MS_Strobe_Mag_2",
        "SatchelCharge_Remote_Mag",
        "SLAMDirectionalMine_Wire_Mag",
        "SmokeShell",
        "SmokeShellBlue",
        "SmokeShellGreen",
        "SmokeShellOrange",
        "SmokeShellPurple",
        "SmokeShellRed",
        "SmokeShellYellow",
        "sps_16Rnd_75x27_FK_95gr_jhp",
        "SPS_20Rnd_762x51mm_M80A1_EPR",
        "SPS_20Rnd_762x51mm_M80A1_EPR_IR",
        "SPS_20Rnd_762x51mm_M80A1_EPR_Tracer",
        "SPS_AI_AXMC_338_250gr_Naturalis_IR_Mag",
        "SPS_AI_AXMC_338_250gr_Naturalis_Mag",
        "SPS_AI_AXMC_338_250gr_Naturalis_Tracer_Mag",
        "SPS_AI_AXMC_338_300gr_Berger_Mag",
        "SPS_AI_AXMC_338_300gr_Berger_Mag_IR",
        "SPS_AI_AXMC_338_300gr_Berger_Mag_Tracer",
        "SPS_AI_AXMC_338_300gr_HPBT_Mag",
        "SPS_AI_AXMC_338_300gr_Scenar_IR_Mag",
        "SPS_AI_AXMC_338_300gr_Scenar_Mag",
        "SPS_AI_AXMC_338_300gr_Scenar_Tracer_Mag",
        "SPS_AI_AXMC_338_API526_Mag",
        "SPS_AI_AXMC_338_Mag",
        "SPS_AI_AXMC_762x51_Berger_JOTM_Mag",
        "SPS_AI_AXMC_762x51_Berger_JOTM_Mag_IR",
        "SPS_AI_AXMC_762x51_Berger_JOTM_Mag_Tracer",
        "SPS_AI_AXMC_762x51_M118LR_Mag",
        "SPS_AI_AXMC_762x51_M993_AP_Mag",
        "SPS_AI_AXMC_762x51_Mk316_Mod_0_Mag",
        "SPS_AI_AXMC_762x51_Mk319_Mod_0_Mag",
        "SPS_AI_AXMC_762x51mm_M80_Mag",
        "SPS_AI_AXMC_762x51mm_M80A1_EPR_IR_Mag",
        "SPS_AI_AXMC_762x51mm_M80A1_EPR_Mag",
        "SPS_AI_AXMC_762x51mm_M80A1_EPR_Tracer_Mag",
        "SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_IR_Mag",
        "SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Mag",
        "SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Tracer_Mag",
        "SPS_AI_AXMC_762x67_Mk248_Mod_0_Mag",
        "SPS_AI_AXMC_762x67_Mk248_Mod_1_Mag",
        "SPS_HKG3PMAG_30Rnd_300BLK_124_B",
        "SPS_HKG3PMAG_30Rnd_300BLK_124_S",
        "SPS_HKG3PMAG_30Rnd_300BLK_124_T",
        "SPS_HKG3PMAG_30Rnd_300BLK_147_B",
        "SPS_HKG3PMAG_30Rnd_300BLK_147_S",
        "SPS_HKG3PMAG_30Rnd_300BLK_147_T",
        "SPS_HKG3PMAG_30Rnd_300BLK_230_B",
        "SPS_HKG3PMAG_30Rnd_300BLK_230_S",
        "SPS_HKG3PMAG_30Rnd_300BLK_230_T",
        "SPS_KAC_LAMG_150rnd_Box",
        "SPS_KAC_LAMG_150rnd_Box_Tan",
        "SPS_KAC_LAMG_150rnd_IR_Box",
        "SPS_KAC_LAMG_150rnd_IR_Box_Tan",
        "SPS_KAC_LAMG_150rnd_M_Box",
        "SPS_KAC_LAMG_150rnd_M_Box_Tan",
        "SPS_KAC_LAMG_150rnd_T_Box",
        "SPS_KAC_LAMG_150rnd_T_Box_Tan",
        "SPS_KAC_LAMG_M855A1_150rnd_Box",
        "SPS_KAC_LAMG_M855A1_150rnd_Box_Tan",
        "SPS_KAC_LAMG_M855A1_150rnd_M_Box",
        "SPS_KAC_LAMG_M855A1_150rnd_M_Box_Tan",
        "SPS_KAC_LAMG_M856A1_150rnd_IR_Box",
        "SPS_KAC_LAMG_M856A1_150rnd_IR_Box_Tan",
        "SPS_KAC_LAMG_M856A1_150rnd_T_Box",
        "SPS_KAC_LAMG_M856A1_150rnd_T_Box_Tan",
        "SPS_KAC_LWAMG_100rnd_Box",
        "SPS_KAC_LWAMG_100rnd_Box_IRDIM",
        "SPS_KAC_LWAMG_100rnd_Box_M",
        "SPS_KAC_LWAMG_100rnd_Box_M62A1",
        "SPS_KAC_LWAMG_100rnd_Box_M80A1",
        "SPS_KAC_LWAMG_100rnd_Box_M80A1M62A1",
        "SPS_KAC_LWAMG_100rnd_Box_T",
        "Titan_AA",
        "Titan_AP",
        "Titan_AT",
        "tsp_frameCharge_mag",
        "tsp_popperCharge_auto_mag",
        "tsp_popperCharge_mag",
        "tsp_stickCharge_auto_mag",
        "tsp_stickCharge_mag",
        "UGL_FlareCIR_F",
        "UGL_FlareGreen_F",
        "UGL_FlareRed_F",
        "UGL_FlareWhite_F",
        "UGL_FlareYellow_F"
      ];
  };
 if (_Type isEqualTo "RHS") exitwith {
   _ContainerItems = [];
 };
};
 {_container addItemCargoGlobal _x} foreach _ContainerItems;
