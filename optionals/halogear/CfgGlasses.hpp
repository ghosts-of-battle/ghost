class CfgGlasses {
    class G_Combat;

    // HALO mask without the ESS lens: supplies oxygen but no HUD and no tint.
    class GVAR(maskNoESS): G_Combat {
        author = QAUTHOR;
        scope = 2;
        displayName = CSTRING(maskNoESS);
        model = QPATHTOF(models\haloMaskNOESS.p3d);
        picture = QPATHTOF(data\haloMaskNoESSIcon.paa);
        identityTypes[] = {
            "NoGlasses", 0,
            "B_T_Soldier_PG_F", 300,
            "O_soldier_PG_F", 300,
            "O_T_Soldier_PG_F", 300,
            "B_soldier_PG_F", 300
        };
        _generalMacro = "G_Combat";
        name = "None";
        mass = 4;

        ACE_Color[] = {0, 0, 0};
        ACE_TintAmount = 0;
        ACE_Overlay = "";
        ACE_OverlayDirt = "";
        ACE_OverlayCracked = "";
        ACE_Resistance = 1;
        ACE_Protection = 0;
        ACE_DustPath = "";

        GVAR(rebreather) = 1;
    };

    // Full HALO mask: oxygen, tinted ESS lens, dirt/crack overlays and the
    // altimeter/compass HUD.
    class GVAR(mask): G_Combat {
        author = QAUTHOR;
        scope = 2;
        displayName = CSTRING(mask);
        model = QPATHTOF(models\haloMask.p3d);
        picture = QPATHTOF(data\halomaskIcon.paa);
        identityTypes[] = {
            "NoGlasses", 0,
            "B_T_Soldier_PG_F", 300,
            "O_soldier_PG_F", 300,
            "O_T_Soldier_PG_F", 300,
            "B_soldier_PG_F", 300
        };
        _generalMacro = "G_Combat";
        name = "None";
        mass = 4;

        ACE_Color[] = {0, 0, 0};
        ACE_TintAmount = 16;
        ACE_Overlay = QPATHTOF(data\filters\halomask.paa);
        ACE_OverlayDirt = QPATHTOF(data\filters\halomaskdirty.paa);
        ACE_OverlayCracked = QPATHTOF(data\filters\halomaskdamaged.paa);
        ACE_Resistance = 1;
        ACE_Protection = 0;
        ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

        GVAR(rebreather) = 1;
    };

    // What GVAR(mask) is swapped for once it cracks. scope 0: never selectable
    // directly, and no rebreather property, so it stops supplying oxygen.
    class GVAR(maskBroken): GVAR(mask) {
        author = QAUTHOR;
        scope = 0;
        displayName = CSTRING(maskBroken);
        picture = QPATHTOF(data\halomaskIconBroken.paa);
        identityTypes[] = {};
        mass = 4;

        ACE_Color[] = {0, 0, 0};
        ACE_TintAmount = 16;
        ACE_Overlay = QPATHTOF(data\filters\halomaskdamaged.paa);
        ACE_OverlayDirt = QPATHTOF(data\filters\halomaskdamaged.paa);
        ACE_OverlayCracked = QPATHTOF(data\filters\halomaskdamaged.paa);

        hiddenSelections[] = {"camo1", "camo2", "maskSide"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(models\HalomaskTexture_co.paa),
            QPATHTOF(models\glass_broken_ca.paa)
        };

        GVAR(rebreather) = 0;
    };
};
