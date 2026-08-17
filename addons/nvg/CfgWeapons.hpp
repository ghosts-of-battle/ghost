class CfgWeapons {
    class Default {};
    class Binocular: Default {};
    class NVGoggles;

    ///////////////////////
    // class rhsusf_ANPVS_14: NVGoggles {
    //     modelOptics="";
    //     ace_nightvision_bluRadius=-1;
    //     ace_nightvision_border=QPATHTOF(data\single.paa);
    // };
    // class rhsusf_ANPVS_15: rhsusf_ANPVS_14 {
    //     modelOptics="";
    //     ace_nightvision_bluRadius=-1;
    //     ace_nightvision_border=QPATHTOF(data\bi.paa);
    // };
    // class rhs_1PN138: NVGoggles {
    //     modelOptics="";
    //     ace_nightvision_bluRadius=-1;
    //     ace_nightvision_border=QPATHTOF(data\single.paa);
    // };
    class O_NVGoggles_hex_F: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\quad.paa);
    };
    class ACE_NVG_Biocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\single.paa);
    };
    class ACE_NVG_Monocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\single.paa);
    };
    class ACE_NVG_Binocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\bi.paa);
    };
    class ACE_NVG_Quadocular: NVGoggles {
        modelOptics="";
        ace_nightvision_bluRadius=-1;
        ace_nightvision_border=QPATHTOF(data\quad.paa);
    };
    ///////////////////////
    class NVGogglesB_blk_F;
    class NVGoggles_OPFOR;
    class NVGoggles_INDEP;
    class NVGogglesB_grn_F;
    class NVGogglesB_gry_F;

    class GVAR(anvgTI_blk): NVGogglesB_blk_F {
        displayName = "[Ghost] ADV NVG TI";
        visionMode[]= {"Normal","NVG","TI"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(anvgTI_gry): NVGogglesB_gry_F {
        displayName = "[Ghost] ADV NVG TI (Grey)";
        visionMode[]= {"Normal","NVG","TI"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(anvgTI_grn): NVGogglesB_grn_F {
        displayName = "[Ghost] ADV NVG TI (green)";
        visionMode[]= {"Normal","NVG","TI"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(nvg5TI_blk): NVGoggles_OPFOR {
        displayName = "[Ghost] NVG v5 TI";
        visionMode[]= {"Normal","NVG","TI"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(nvg5TI_brn): NVGoggles {
        displayName = "[Ghost] NVG v5 TI (Brown)";
        visionMode[]= {"Normal","NVG","TI"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(nvg5TI_grn): NVGoggles_INDEP {
        displayName = "[Ghost] NVG v5 TI (Green)";
        visionMode[]= {"Normal","NVG","TI"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(anvg_blk): NVGogglesB_blk_F {
        displayName = "[Ghost] ADV NVG";
        visionMode[]= {"Normal","NVG"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(anvg_gry): NVGogglesB_gry_F {
        displayName = "[Ghost] ADV NVG (Grey)";
        visionMode[]= {"Normal","NVG"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(anvg_grn): NVGogglesB_grn_F {
        displayName = "[Ghost] ADV NVG (green)";
        visionMode[]= {"Normal","NVG"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(nvg5_blk): NVGoggles_OPFOR {
        displayName = "[Ghost] NVG v5";
        visionMode[]= {"Normal","NVG"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(nvg5_brn): NVGoggles {
        displayName = "[Ghost] NVG v5 (Brown)";
        visionMode[]= {"Normal","NVG"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(nvg5_grn): NVGoggles_INDEP {
        displayName = "[Ghost] NVG v5 (Green)";
        visionMode[]= {"Normal","NVG"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };

    // --- EF LOW PROFILE NVG -------------------------------------------------
    //
    // FULL SCREEN, which is the whole reason these exist. The EF sets ship with
    // a modelled optic and ACE draws a four-tube mask over it, so what a player
    // gets is a picture of goggles rather than a view through them. Blanking
    // modelOptics to the empty reticle and clearing every ACE mask value gives
    // the edge-to-edge image the rest of the ghost NVGs already have.
    //
    // The MODEL is still EF's - these inherit the real thing, so a man wearing
    // one still looks like he is wearing one. Only what he sees changes.
    //
    // The T variants keep their thermal channel. Losing it would make the pair
    // pointless: TI is the only reason to carry the heavier set.
    class EF_LPNVG;
    class EF_LPNVG_Tan;
    class EF_LPNVG_T;
    class EF_LPNVG_T_Tan;

    class GVAR(lpnvg_blk): EF_LPNVG {
        displayName = "[Ghost] LP NVG";
        visionMode[] = {"Normal", "NVG"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(lpnvg_tan): EF_LPNVG_Tan {
        displayName = "[Ghost] LP NVG (Tan)";
        visionMode[] = {"Normal", "NVG"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(lpnvgTI_blk): EF_LPNVG_T {
        displayName = "[Ghost] LP NVG TI";
        visionMode[] = {"Normal", "NVG", "TI"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
    class GVAR(lpnvgTI_tan): EF_LPNVG_T_Tan {
        displayName = "[Ghost] LP NVG TI (Tan)";
        visionMode[] = {"Normal", "NVG", "TI"};
        modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
        ACE_nightVision_blur = 0;
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_border = "";
        ACE_nightvision_eyeCups = 0;
        ACE_nightVision_grain = 0;
        ACE_nightvision_generation = 4;
        ACE_nightVision_radBlur = 0;
    };
};


