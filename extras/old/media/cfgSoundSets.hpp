class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class Pistol_Shot_Base_SoundSet;
	class Pistol_Tail_Base_SoundSet;
	class Pistol_InteriorTail_Base_SoundSet;
	class Pistol_silencerShot_Base_SoundSet;
	class Pistol_silencerTail_Base_SoundSet;
	class Pistol_silencerInteriorTail_Base_SoundSet;


	class GM6Lynx_Shot_SoundSet: Rifle_Shot_Base_SoundSet {
		soundShaders[] += {"GM6Lynx_Bolt_SoundShader"};
	};

	class M320_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet {
		soundShaders[] = {
			"M320_Closure_SoundShader",
			"M320_Bolt_SoundShader",
			"M320_silencerShot_SoundShader"
		};
	};
	class M320_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet {
		soundShaders[] = {
			"M320_silencerTailTrees_SoundShader",
			"M320_silencerTailForest_SoundShader",
			"M320_silencerTailMeadows_SoundShader",
			"M320_silencerTailHouses_SoundShader"
		};
	};
	class M320_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet {
		soundShaders[] = {"M320_silencerTailInterior_SoundShader"};
	};

	class WF50_Shot_SoundSet: Rifle_Shot_Base_SoundSet {
		soundShaders[] = {
			"WF50_Closure_SoundShader",
			"WF50_Bolt_SoundShader",
			"WF50_closeShot_SoundShader",
			"WF50_midShot_SoundShader",
			"WF50_distShot_SoundShader"
		};
	};
	class WF50_Tail_SoundSet: Rifle_Tail_Base_SoundSet {
		soundShaders[] = {
			"WF50_tailDistant_SoundShader",
			"WF50_tailForest_SoundShader",
			"WF50_tailHouses_SoundShader",
			"WF50_tailMeadows_SoundShader",
			"WF50_tailTrees_SoundShader"
		};
	};
	class WF50_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet {
		soundShaders[] = {"WF50_tailInterior_SoundShader"};
	};

	class Zafir_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet {
		soundShaders[] = {
			"Zafir_Closure_SoundShader",
			"Zafir_silencerShot_SoundShader"
		};
	};
	class Zafir_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet {
		soundShaders[] = {
			"Zafir_silencerTailTrees_SoundShader",
			"Zafir_silencerTailForest_SoundShader",
			"Zafir_silencerTailMeadows_SoundShader",
			"Zafir_silencerTailHouses_SoundShader"
		};
	};
	class Zafir_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet {
		soundShaders[] = {"Zafir_silencerTailInterior_SoundShader"};
	};

	class G17_Shot_SoundSet: Pistol_Shot_Base_SoundSet {
		soundShaders[] = {
			"G17_Closure_SoundShader",
			"G17_closeShot_SoundShader",
			"G17_midShot_SoundShader",
			"G17_distShot_SoundShader"
		};
	};
	class G17_Tail_SoundSet: Pistol_Tail_Base_SoundSet {
		soundShaders[] = {
			"G17_tailDistant_SoundShader",
			"G17_tailForest_SoundShader",
			"G17_tailHouses_SoundShader",
			"G17_tailMeadows_SoundShader",
			"G17_tailTrees_SoundShader"
		};
	};
	class G17_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet {
		soundShaders[] = {"G17_tailInterior_SoundShader"};
	};
	class G17_silencerShot_SoundSet: Pistol_silencerShot_Base_SoundSet {
		soundShaders[] = {
			"G17_Closure_SoundShader",
			"G17_silencerShot_SoundShader"
		};
	};
	class G17_silencerTail_SoundSet: Pistol_silencerTail_Base_SoundSet {
		soundShaders[] = {
			"G17_silencerTailTrees_SoundShader",
			"G17_silencerTailForest_SoundShader",
			"G17_silencerTailMeadows_SoundShader",
			"G17_silencerTailHouses_SoundShader"
		};
	};
	class G17_silencerInteriorTail_SoundSet: Pistol_silencerInteriorTail_Base_SoundSet {
		soundShaders[] = {"G17_silencerTailInterior_SoundShader"};
	};
	class Mk26_Shot_SoundSet: Pistol_Shot_Base_SoundSet {
		soundShaders[] = {
			"Mk26_Closure_SoundShader",
			"Mk26_closeShot_SoundShader",
			"Mk26_midShot_SoundShader",
			"Mk26_distShot_SoundShader"
		};
	};
	class Mk26_Tail_SoundSet: Pistol_Tail_Base_SoundSet {
		soundShaders[] = {
			"Mk26_tailForest_SoundShader",
			"Mk26_tailHouses_SoundShader",
			"Mk26_tailMeadows_SoundShader",
			"Mk26_tailTrees_SoundShader"
		};
	};
	class Mk26_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet {
		soundShaders[] = {"Mk26_tailInterior_SoundShader"};
	};
	class RFL_Shot_SoundSet: Rifle_Shot_Base_SoundSet {
		soundShaders[] = {
			"RFL_closure_SoundShader",
			"RFL_closeShot_SoundShader",
			"RFL_midShot_SoundShader",
			"RFL_distShot_SoundShader"
		};
	};
	class RFL_Tail_SoundSet: Rifle_Tail_Base_SoundSet {
		soundShaders[] = {
			"RFL_tailDistant_SoundShader",
			"RFL_tailForest_SoundShader",
			"RFL_tailHouses_SoundShader",
			"RFL_tailMeadows_SoundShader",
			"RFL_tailTrees_SoundShader"
		};
	};
	class RFL_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet {
		soundShaders[] = {"RFL_tailInterior_SoundShader"};
	};
	class L85A3_Shot_SoundSet: Rifle_Shot_Base_SoundSet {
		soundShaders[] = {
			"L85A3_closure_SoundShader",
			"L85A3_closeShot_SoundShader",
			"L85A3_midShot_SoundShader",
			"L85A3_distShot_SoundShader"
		};
	};
	class L85A3_Tail_SoundSet: Rifle_Tail_Base_SoundSet {
		soundShaders[] = {
			"L85A3_tailDistant_SoundShader",
			"L85A3_tailForest_SoundShader",
			"L85A3_tailHouses_SoundShader",
			"L85A3_tailMeadows_SoundShader",
			"L85A3_tailTrees_SoundShader"
		};
	};
	class L85A3_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet {
		soundShaders[] = {"L85A3_tailInterior_SoundShader"};
	};
	class L85A3_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet {
		soundShaders[] = {
			"L85A3_closure_SoundShader",
			"L85A3_silencerShot_SoundShader"
		};
	};
	class L85A3_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet {
		soundShaders[] = {
			"L85A3_silencerTailTrees_SoundShader",
			"L85A3_silencerTailForest_SoundShader",
			"L85A3_silencerTailMeadows_SoundShader",
			"L85A3_silencerTailHouses_SoundShader"
		};
	};
	class L85A3_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet {
		soundShaders[] = {"L85A3_silencerTailInterior_SoundShader"};
	};
	class SCAR_Shot_SoundSet: Rifle_Shot_Base_SoundSet {
		soundShaders[] = {
			"SCAR_closure_SoundShader",
			"SCAR_closeShot_SoundShader",
			"SCAR_midShot_SoundShader",
			"SCAR_distShot_SoundShader"
		};
	};
	class SCAR_Tail_SoundSet: Rifle_Tail_Base_SoundSet {
		soundShaders[] = {
			"SCAR_tailDistant_SoundShader",
			"SCAR_tailForest_SoundShader",
			"SCAR_tailHouses_SoundShader",
			"SCAR_tailMeadows_SoundShader",
			"SCAR_tailTrees_SoundShader"
		};
	};
	class SCAR_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet {
		soundShaders[] = {"SCAR_tailInterior_SoundShader"};
	};
	class SCAR_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet {
		soundShaders[] = {
			"SCAR_closure_SoundShader",
			"SCAR_silencerShot_SoundShader"
		};
	};
	class SCAR_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet {
		soundShaders[] = {
			"SCAR_silencerTailTrees_SoundShader",
			"SCAR_silencerTailForest_SoundShader",
			"SCAR_silencerTailMeadows_SoundShader",
			"SCAR_silencerTailHouses_SoundShader"
		};
	};
	class SCAR_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet {
		soundShaders[] = {"SCAR_silencerTailInterior_SoundShader"};
	};

	class AA12_Shot_SoundSet: Rifle_Shot_Base_SoundSet {
		soundShaders[] = {
			"AA12_Closure_SoundShader",
			"AA12_closeShot_SoundShader",
			"AA12_midShot_SoundShader",
			"AA12_distShot_SoundShader"
		};
	};
	class AA12_Tail_SoundSet: Rifle_Tail_Base_SoundSet {
		soundShaders[] = {
			"AA12_tailForest_SoundShader",
			"AA12_tailHouses_SoundShader",
			"AA12_tailMeadows_SoundShader",
			"AA12_tailTrees_SoundShader"
		};
	};
	class AA12_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet {
		soundShaders[] = {"AA12_tailInterior_SoundShader"};
	};

	class KSG_Shot_SoundSet: Rifle_Shot_Base_SoundSet {
		soundShaders[] = {
			"KSG_Closure_SoundShader",
			"KSG_Pump_SoundShader",
			"KSG_closeShot_SoundShader",
			"KSG_midShot_SoundShader",
			"KSG_distShot_SoundShader"
		};
	};
	class KSG_Tail_SoundSet: Rifle_Tail_Base_SoundSet {
		soundShaders[] = {
			"KSG_tailForest_SoundShader",
			"KSG_tailHouses_SoundShader",
			"KSG_tailMeadows_SoundShader",
			"KSG_tailTrees_SoundShader"
		};
	};
	class KSG_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet {
		soundShaders[] = {"KSG_tailInterior_SoundShader"};
	};

	class M4_SSAS_Shot_SoundSet: Rifle_Shot_Base_SoundSet {
		soundShaders[] = {
			"M4_SSAS_Closure_SoundShader",
			"M4_SSAS_closeShot_SoundShader",
			"M4_SSAS_midShot_SoundShader",
			"M4_SSAS_distShot_SoundShader"
		};
	};
	class M4_SSAS_Tail_SoundSet: Rifle_Tail_Base_SoundSet {
		soundShaders[] = {
			"M4_SSAS_tailForest_SoundShader",
			"M4_SSAS_tailHouses_SoundShader",
			"M4_SSAS_tailMeadows_SoundShader",
			"M4_SSAS_tailTrees_SoundShader"
		};
	};
	class M4_SSAS_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet {
		soundShaders[] = {"M4_SSAS_tailInterior_SoundShader"};
	};
	class SMG04_Shot_SoundSet: Rifle_Shot_Base_SoundSet {
		soundShaders[] = {
			"SMG04_closure_SoundShader",
			"SMG04_closeShot_SoundShader",
			"SMG04_midShot_SoundShader",
			"SMG04_distShot_SoundShader"
		};
	};
	class SMG04_Tail_SoundSet: Rifle_Tail_Base_SoundSet {
		soundShaders[] = {
			"SMG04_tailDistant_SoundShader",
			"SMG04_tailForest_SoundShader",
			"SMG04_tailHouses_SoundShader",
			"SMG04_tailMeadows_SoundShader",
			"SMG04_tailTrees_SoundShader"
		};
	};
	class SMG04_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet {
		soundShaders[] = {"SMG04_tailInterior_SoundShader"};
	};
	class SMG04_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet {
		soundShaders[] = {
			"SMG04_closure_SoundShader",
			"SMG04_silencerShot_SoundShader"
		};
	};
	class SMG04_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet {
		soundShaders[] = {
			"SMG04_silencerTailTrees_SoundShader",
			"SMG04_silencerTailForest_SoundShader",
			"SMG04_silencerTailMeadows_SoundShader",
			"SMG04_silencerTailHouses_SoundShader"
		};
	};
	class SMG04_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet {
		soundShaders[] = {"SMG04_silencerTailInterior_SoundShader"};
	};
};