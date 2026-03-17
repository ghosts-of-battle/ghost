class XtdGearModels {
    class CfgWeapons {
        class GFPGP_2_Assulycar {
            options[] = {"type"};
            label = "Assult Carrier";
            class type {
                alwaysSelectable = 1;
                values[] = { "s1", "s2", "s3", "s4", "s5" , "s6" , "s7" };
                label = "Style";
                class s1 {
                    label = "Style 1";
                };
                class s2 {
                    label = "Style 2";
                };
                class s3 {
                    label = "Style 3";
                };
                class s4 {
                    label = "Style 4";
                };
                class s5 {
                    label = "Style 5";
                };
                class s6 {
                    label = "Style 6";
                };
                class s7 {
                    label = "Style 7";
                };
            };
        };
    };
    class CfgGlasses {
        class GFPGP_2_Faceware {
            options[] = {"eye","neck"};
            label = "FaceWare";
            class eye {
                alwaysSelectable = 1;
                values[] = { "none", "ESS", "gatorz" };
                label = "Shades";
                class none {
                    label = "None";
                };
                class ESS {
                    label = "ESS";
                };
                class gatorz {
                    label = "gatorz";
                };
            };
            class neck {
                alwaysSelectable = 1;
                values[] = { "none", "blk", "cbr","rgr" };
                label = "Shemagh";
                class none {
                    label = "None";
                };
                class rgr {
                    label = "RGR";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class cbr {
                    label = "Coyote brown";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class blk {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class FPGP_PC_Tan_7 {
            model = "GFPGP_2_Assulycar";
            type = "s7";
        };
        class FPGP_PC_Tan_5 {
            model = "GFPGP_2_Assulycar";
            type = "s5";
        };
        class FPGP_PC_Tan_4 {
            model = "GFPGP_2_Assulycar";
            type = "s4";
        };
        class FPGP_PC_Tan_3 {
            model = "GFPGP_2_Assulycar";
            type = "s3";
        };
        class FPGP_PC_Tan_2 {
            model = "GFPGP_2_Assulycar";
            type = "s2";
        };
        class FPGP_PC_Tan_1 {
            model = "GFPGP_2_Assulycar";
            type = "s1";
        };
        class FPGP_PC_Tan_6 {
            model = "GFPGP_2_Assulycar";
            type = "s6";
        };
    };
    class CfgGlasses {
      class FPGP2_Headgear_Face_ESS_1 {
        model = "GFPGP_2_Faceware";
        eye = "ESS";
        neck = "none";
      };
      class FPGP2_Headgear_Face_Shemagh_BLK_ess_1 {
        model = "GFPGP_2_Faceware";
        eye = "ESS";
        neck = "blk";
      };
      class FPGP2_Headgear_Face_Shemagh_cbr_ess_1 {
        model = "GFPGP_2_Faceware";
        eye = "ESS";
        neck = "cbr";
      };
      class FPGP2_Headgear_Face_Shemagh_rgr_ess_1 {
        model = "GFPGP_2_Faceware";
        eye = "ESS";
        neck = "rgr";
      };
      class FPGP2_Headgear_Face_gatorz_1 {
        model = "GFPGP_2_Faceware";
        eye = "gatorz";
        neck = "none";
      };
      class FPGP2_Headgear_Face_Shemagh_BLK_gatorz_1 {
        model = "GFPGP_2_Faceware";
        eye = "gatorz";
        neck = "blk";
      };
      class FPGP2_Headgear_Face_Shemagh_cbr_gatorz_1 {
        model = "GFPGP_2_Faceware";
        eye = "gatorz";
        neck = "cbr";
      };
      class FPGP2_Headgear_Face_Shemagh_rgr_gatorz_1 {
        model = "GFPGP_2_Faceware";
        eye = "gatorz";
        neck = "rgr";
      };
      class FPGP2_Headgear_Face_Shemagh_rgr_1 {
        model = "GFPGP_2_Faceware";
        eye = "none";
        neck = "rgr";
      };
      class FPGP2_Headgear_Face_Shemagh_cbr_1 {
        model = "GFPGP_2_Faceware";
        eye = "none";
        neck = "cbr";
      };
      class FPGP2_Headgear_Face_Shemagh_BLK_1 {
        model = "GFPGP_2_Faceware";
        eye = "none";
        neck = "blk";
      };
    };
};
