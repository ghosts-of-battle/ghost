class cfgGlasses
{
    class None;
    class g_combat;
     class GHOST_HaloMaskNoESS: g_combat
    {
        author = "Mr H.";
        displayname = $STR_MRH_MRHHaloGear_HaloMaskNoESSItem;
       model = "\mrhhalogear\Models\haloMaskNOESS.p3d";
      // model = "\A3\characters_f_beta\heads\glasses\g_combat";
        picture = "\mrhhalogear\paa\haloMaskNOESSIcon.paa";
        identityTypes[] =
        {
            "NoGlasses",0,"B_T_Soldier_PG_F",300,"O_soldier_PG_F",300,"O_T_Soldier_PG_F",300,"B_soldier_PG_F",300
        };
        ACE_Color[] = {0, 0, 0};
        ACE_TintAmount = 0;
        ACE_Overlay = "";
        ACE_OverlayDirt = "";
        ACE_OverlayCracked = "";
        ACE_Resistance = 1;
        ACE_Protection = 0;
        ACE_DustPath = "";
        MRH_hypoxiaRebreather = 1;
        // G_Combat
        _generalMacro = "G_Combat";
        //hiddenSelections[] = {"camo"};
        //hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\g_combat_ca.paa"};
        

	    // None
	    name = "None";
	    scope = 2;
        mass = 4;
    };
    class GHOST_HaloMask: g_combat
    {
        author = "Mr H.";
        displayname = $STR_MRH_MRHHaloGear_HaloMaskItem;
       model = "\mrhhalogear\Models\haloMask.p3d";
      // model = "\A3\characters_f_beta\heads\glasses\g_combat";
        picture = "\mrhhalogear\paa\halomaskIcon.paa";
        identityTypes[] =
        {
            "NoGlasses",0,"B_T_Soldier_PG_F",300,"O_soldier_PG_F",300,"O_T_Soldier_PG_F",300,"B_soldier_PG_F",300
        };
        ACE_Color[] = {0, 0, 0};
        ACE_TintAmount = 16;
        ACE_Overlay = "\mrhhalogear\paa\HaloMaskFilters\Halomask.paa";
        ACE_OverlayDirt = "\mrhhalogear\paa\HaloMaskFilters\Halomaskdirty.paa";
        ACE_OverlayCracked = "\mrhhalogear\paa\HaloMaskFilters\Halomaskdamaged.paa";
        ACE_Resistance = 1;
        ACE_Protection = 0;
        ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
        MRH_hypoxiaRebreather = 1;
        // G_Combat
        _generalMacro = "G_Combat";
        //hiddenSelections[] = {"camo"};
        //hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\g_combat_ca.paa"};
        

	    // None
	    name = "None";
	    scope = 2;
        mass = 4;
    };
       class GHOST_HaloMaskBroken: GHOST_HaloMask
    {
        author = "Mr H.";
        displayname = $STR_MRH_MRHHaloGear_HaloMaskBrokenItem;
        picture = "\mrhhalogear\paa\halomaskIconBroken.paa";
        identityTypes[] = {};
        ACE_Color[] = {0, 0, 0};
        ACE_TintAmount = 16;
        ACE_Overlay = "\mrhhalogear\paa\HaloMaskFilters\Halomaskdamaged.paa";
        ACE_OverlayDirt = "\mrhhalogear\paa\HaloMaskFilters\Halomaskdamaged.paa";
        ACE_OverlayCracked = "\mrhhalogear\paa\HaloMaskFilters\Halomaskdamaged.paa";
        MRH_hypoxiaRebreather = 0;
        hiddenSelections[] = {"camo1","camo2","maskSide"};
        hiddenSelectionsTextures[] = {"\mrhhalogear\Models\HalomaskTexture_co.paa","\mrhhalogear\Models\glass_broken_ca.paa"};

	    // None
	    name = "None";
	    scope = 0;
        mass = 4;
    };
  
};
