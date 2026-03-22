class XtdGearModels {
    class CfgWeapons {
        class sof_opscore {
            options[] = {"camo", "setup"};
            label = "Opscore";

            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"blk", "rgr", "oli", "snd", "mcam", "tna", "wdl"};

                class blk {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class rgr {
                    label = "Ranger Green";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class oli {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class snd {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class mcam {
                    label = "Multicam";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class tna {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class wdl {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
            };

            class setup {
                label = "Setup";
                alwaysSelectable = 1;
                values[] = {"bare", "spec", "cover", "covercamo", "coverspec"};

                class bare {
                    label = "Bare";
                };
                class spec {
                    label = "Spec";
                };
                class cover {
                    label = "Cover";
                };
                class covercamo {
                    label = "Camo Cover";
                };
                class coverspec {
                    label = "Spec Cover";
                };
            };
        };

        class sof_sf_fatigues {
            options[] = {"camo", "sleeves"};
            label = "SF Fatigues";

            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"mcam", "tna", "wdl"};

                class mcam {
                    label = "Multicam";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class tna {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class wdl {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
            };

            class sleeves {
                label = "Sleeves";
                alwaysSelectable = 1;
                values[] = {"long", "short"};

                class long {
                    label = "Long";
                };
                class short {
                    label = "Short";
                };
            };
        };

        class sof_avs_lite {
            options[] = {"camo", "flag"};
            label = "AVS Carrier Lite";

            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"wdl", "mcam", "rgr", "tna"};

                class wdl {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class mcam {
                    label = "Multicam";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class rgr {
                    label = "Ranger Green";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class tna {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
            };

            class flag {
                label = "Flag";
                alwaysSelectable = 1;
                values[] = {"yes", "no"};

                class yes {
                    label = "Flag";
                };
                class no {
                    label = "No Flag";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class SOF_H_OpscoreSpec_blk {
            model = "sof_opscore";
            camo = "blk";
            setup = "spec";
        };
        class SOF_H_Opscore_CoverSpec_rgr {
            model = "sof_opscore";
            camo = "rgr";
            setup = "coverspec";
        };
        class SOF_H_Opscore_CoverSpec_mcam {
            model = "sof_opscore";
            camo = "mcam";
            setup = "coverspec";
        };
        class SOF_H_Opscore_CoverSpec_tna {
            model = "sof_opscore";
            camo = "tna";
            setup = "coverspec";
        };
        class SOF_H_Opscore_CoverSpec_wdl {
            model = "sof_opscore";
            camo = "wdl";
            setup = "coverspec";
        };
        class SOF_H_OpscoreSpec_rgr {
            model = "sof_opscore";
            camo = "rgr";
            setup = "spec";
        };
        class SOF_H_OpscoreSpec_oli {
            model = "sof_opscore";
            camo = "oli";
            setup = "spec";
        };
        class SOF_H_OpscoreSpec_snd {
            model = "sof_opscore";
            camo = "snd";
            setup = "spec";
        };
        class SOF_H_Opscore_snd {
            model = "sof_opscore";
            camo = "snd";
            setup = "bare";
        };
        class SOF_H_Opscore_oli {
            model = "sof_opscore";
            camo = "oli";
            setup = "bare";
        };
        class SOF_H_Opscore_rgr {
            model = "sof_opscore";
            camo = "rgr";
            setup = "bare";
        };
        class SOF_H_Opscore_Cover_wdl {
            model = "sof_opscore";
            camo = "wdl";
            setup = "cover";
        };
        class SOF_H_Opscore_Cover_tna {
            model = "sof_opscore";
            camo = "tna";
            setup = "cover";
        };
        class SOF_H_Opscore_CoverCamo_mcam {
            model = "sof_opscore";
            camo = "mcam";
            setup = "covercamo";
        };
        class SOF_H_Opscore_CoverCamo_rgr {
            model = "sof_opscore";
            camo = "rgr";
            setup = "covercamo";
        };
        class SOF_H_Opscore_Cover_mcam {
            model = "sof_opscore";
            camo = "mcam";
            setup = "cover";
        };
        class SOF_H_Opscore_Cover_rgr {
            model = "sof_opscore";
            camo = "rgr";
            setup = "cover";
        };
        class SOF_H_Opscore_blk {
            model = "sof_opscore";
            camo = "blk";
            setup = "bare";
        };

        class SOF_U_B_SFFatigues_mcam {
            model = "sof_sf_fatigues";
            camo = "mcam";
            sleeves = "long";
        };
        class SOF_U_B_SFFatigues_Shortsleeve_mcam {
            model = "sof_sf_fatigues";
            camo = "mcam";
            sleeves = "short";
        };
        class SOF_U_B_SFFatigues_tna {
            model = "sof_sf_fatigues";
            camo = "tna";
            sleeves = "long";
        };
        class SOF_U_B_SFFatigues_Shortsleeve_tna {
            model = "sof_sf_fatigues";
            camo = "tna";
            sleeves = "short";
        };
        class SOF_U_B_SFFatigues_wdl {
            model = "sof_sf_fatigues";
            camo = "wdl";
            sleeves = "long";
        };
        class SOF_U_B_SFFatigues_Shortsleeve_wdl {
            model = "sof_sf_fatigues";
            camo = "wdl";
            sleeves = "short";
        };

        class SOF_V_AVSCarrier_Lite_wdl {
            model = "sof_avs_lite";
            camo = "wdl";
            flag = "yes";
        };
        class SOF_V_AVSCarrier_Lite_mcam {
            model = "sof_avs_lite";
            camo = "mcam";
            flag = "yes";
        };
        class SOF_V_AVSCarrier_Lite_rgr_noflag {
            model = "sof_avs_lite";
            camo = "rgr";
            flag = "no";
        };
        class SOF_V_AVSCarrier_Lite_rgr {
            model = "sof_avs_lite";
            camo = "rgr";
            flag = "yes";
        };
        class SOF_V_AVSCarrier_Lite_tna {
            model = "sof_avs_lite";
            camo = "tna";
            flag = "yes";
        };
    };
};
