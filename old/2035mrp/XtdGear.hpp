class XtdGearModels {
    class CfgWeapons {
        class opscoreHighCut {
            label = "HighCut Helmet";
            options[] = {"variant", "camo", "flag"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"no_cover", "plain", "covered"};
                class no_cover {
                    label = "Std";
                };
                class plain {
                    label = "Plain";
                };
                class covered {
                    label = "Cover";
                };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"blk", "gry", "mcbk", "rgr", "od", "coy", "tan", "mc", "mcwdl", "mctp", "mcarid", "mtp", "dpm", "nightdesert", "digital", "geometric", "tan_snake", "coy_snake", "od_snake", "rgr_snake", "alt_mc", "aor1", "aor2", "CTRGtropic", "CTRGarid", "m81"};
                class blk {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class gry {
                    label = "GRY";
                    image = "z\aceax\addons\gearinfo\data\camo\gry.paa";
                };
                class mcbk {
                    label = "MC-BK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class rgr {
                    label = "RGR";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class od {
                    label = "OD";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class coy {
                    label = "COY";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class tan {
                    label = "TAN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class mc {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class mcwdl {
                    label = "MC-W";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class mctp {
                    label = "MC-T";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class mcarid {
                    label = "MC-A";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class mtp {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class dpm {
                    label = "DPM";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class nightdesert {
                    label = "N-DES";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class digital {
                    label = "DIG";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class geometric {
                    label = "GEO";
                    image = "z\aceax\addons\gearinfo\data\camo\gry.paa";
                };
                class tan_snake {
                    label = "SS-TAN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class coy_snake {
                    label = "SS-COY";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class od_snake {
                    label = "SS-OD";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class rgr_snake {
                    label = "SS-RGR";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class alt_mc {
                    label = "MC-BK";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class aor1 {
                    label = "AOR-1";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class aor2 {
                    label = "AOR-2";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class CTRGtropic {
                    label = "CTRG-T";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class CTRGarid {
                    label = "CTRG-A";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class m81 {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class flag {
                label = "Flag";
                alwaysSelectable = 1;
                values[] = {"none", "us", "uk", "aaf", "ldf"};
                class none {
                    label = "None";
                };
                class us {
                    label = "US";
                };
                class uk {
                    label = "UK";
                };
                class aaf {
                    label = "AAF";
                };
                class ldf {
                    label = "LDF";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class opscore_highcut_blk_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "blk";
            flag = "us";
        };
        class opscore_highcut_od_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "od";
            flag = "us";
        };
        class opscore_highcut_rgr_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "rgr";
            flag = "us";
        };
        class opscore_highcut_coy_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "coy";
            flag = "us";
        };
        class opscore_highcut_tan_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "tan";
            flag = "us";
        };
        class opscore_highcut_tan_snake_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "tan_snake";
            flag = "us";
        };
        class opscore_highcut_coy_snake_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "coy_snake";
            flag = "us";
        };
        class opscore_highcut_od_snake_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "od_snake";
            flag = "us";
        };
        class opscore_highcut_rgr_snake_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "rgr_snake";
            flag = "us";
        };
        class opscore_highcut_mc_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "mc";
            flag = "us";
        };
        class opscore_highcut_blk_plain {
            model = "opscoreHighCut";
            variant = "plain";
            camo = "blk";
            flag = "none";
        };
        class opscore_highcut_tan_plain {
            model = "opscoreHighCut";
            variant = "plain";
            camo = "tan";
            flag = "none";
        };
        class opscore_highcut_tan_snake_plain {
            model = "opscoreHighCut";
            variant = "plain";
            camo = "tan_snake";
            flag = "none";
        };
        class opscore_highcut_coy_plain {
            model = "opscoreHighCut";
            variant = "plain";
            camo = "coy";
            flag = "none";
        };
        class opscore_highcut_coy_snake_plain {
            model = "opscoreHighCut";
            variant = "plain";
            camo = "coy_snake";
            flag = "none";
        };
        class opscore_highcut_rgr_plain {
            model = "opscoreHighCut";
            variant = "plain";
            camo = "rgr";
            flag = "none";
        };
        class opscore_highcut_rgr_snake_plain {
            model = "opscoreHighCut";
            variant = "plain";
            camo = "rgr_snake";
            flag = "none";
        };
        class opscore_highcut_od_plain {
            model = "opscoreHighCut";
            variant = "plain";
            camo = "od";
            flag = "none";
        };
        class opscore_highcut_od_snake_plain {
            model = "opscoreHighCut";
            variant = "plain";
            camo = "od_snake";
            flag = "none";
        };
        class opscore_highcut_cover_blk_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "blk";
            flag = "us";
        };
        class opscore_highcut_cover_gry_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "gry";
            flag = "us";
        };
        class opscore_highcut_cover_mcbk_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mcbk";
            flag = "us";
        };
        class opscore_highcut_cover_rgr_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "rgr";
            flag = "us";
        };
        class opscore_highcut_cover_od_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "od";
            flag = "us";
        };
        class opscore_highcut_cover_mcwdl_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mcwdl";
            flag = "us";
        };
        class opscore_highcut_cover_mctp_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mctp";
            flag = "us";
        };
        class opscore_highcut_cover_coy_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "coy";
            flag = "us";
        };
        class opscore_highcut_cover_tan_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "tan";
            flag = "us";
        };
        class opscore_highcut_cover_NightDesert_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "nightdesert";
            flag = "us";
        };
        class opscore_highcut_cover_mcarid_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mcarid";
            flag = "us";
        };
        class opscore_highcut_cover_mc_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mc";
            flag = "us";
        };
        class opscore_highcut_cover_alt_AAF {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "digital";
            flag = "aaf";
        };
        class opscore_highcut_cover_alt_LDF {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "geometric";
            flag = "ldf";
        };
        class opscore_highcut_cover_alt_mc {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "alt_mc";
            flag = "none";
        };
        class opscore_highcut_blk {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "blk";
            flag = "none";
        };
        class opscore_highcut_od {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "od";
            flag = "none";
        };
        class opscore_highcut_rgr {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "rgr";
            flag = "none";
        };
        class opscore_highcut_coy {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "coy";
            flag = "none";
        };
        class opscore_highcut_tan {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "tan";
            flag = "none";
        };
        class opscore_highcut_tan_snake {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "tan_snake";
            flag = "none";
        };
        class opscore_highcut_coy_snake {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "coy_snake";
            flag = "none";
        };
        class opscore_highcut_od_snake {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "od_snake";
            flag = "none";
        };
        class opscore_highcut_rgr_snake {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "rgr_snake";
            flag = "none";
        };
        class opscore_highcut_mc {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "mc";
            flag = "none";
        };
        class opscore_highcut_cover_blk {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "blk";
            flag = "none";
        };
        class opscore_highcut_cover_gry {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "gry";
            flag = "none";
        };
        class opscore_highcut_cover_mcbk {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mcbk";
            flag = "none";
        };
        class opscore_highcut_cover_rgr {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "rgr";
            flag = "none";
        };
        class opscore_highcut_cover_od {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "od";
            flag = "none";
        };
        class opscore_highcut_cover_mcwdl {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mcwdl";
            flag = "none";
        };
        class opscore_highcut_cover_mctp {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mctp";
            flag = "none";
        };
        class opscore_highcut_cover_DPM {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "dpm";
            flag = "none";
        };
        class opscore_highcut_cover_coy {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "coy";
            flag = "none";
        };
        class opscore_highcut_cover_tan {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "tan";
            flag = "none";
        };
        class opscore_highcut_cover_NightDesert {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "nightdesert";
            flag = "none";
        };
        class opscore_highcut_cover_mcarid {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mcarid";
            flag = "none";
        };
        class opscore_highcut_cover_mtp {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mtp";
            flag = "none";
        };
        class opscore_highcut_cover_mc {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mc";
            flag = "none";
        };
        class opscore_highcut_aor1_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "aor1";
            flag = "us";
        };
        class opscore_highcut_aor2_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "aor2";
            flag = "us";
        };
        class opscore_highcut_aor1 {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "aor1";
            flag = "none";
        };
        class opscore_highcut_aor2 {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "aor2";
            flag = "none";
        };
        class opscore_highcut_cover_aor1_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "aor1";
            flag = "us";
        };
        class opscore_highcut_cover_aor2_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "aor2";
            flag = "us";
        };
        class opscore_highcut_cover_aor1 {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "aor1";
            flag = "none";
        };
        class opscore_highcut_cover_aor2 {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "aor2";
            flag = "none";
        };
        class opscore_highcut_cover_CTRGtropic_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "CTRGtropic";
            flag = "us";
        };
        class opscore_highcut_cover_CTRGtropic_UK {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "CTRGtropic";
            flag = "uk";
        };
        class opscore_highcut_cover_CTRGtropic {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "CTRGtropic";
            flag = "none";
        };
        class opscore_highcut_cover_CTRGarid_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "CTRGarid";
            flag = "us";
        };
        class opscore_highcut_cover_CTRGarid_UK {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "CTRGarid";
            flag = "uk";
        };
        class opscore_highcut_cover_CTRGarid {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "CTRGarid";
            flag = "none";
        };
        class opscore_highcut_cover_DPM_UK {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "dpm";
            flag = "uk";
        };
        class opscore_highcut_cover_mtp_UK {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mtp";
            flag = "uk";
        };
        class opscore_highcut_cover_m81_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "m81";
            flag = "us";
        };
        class opscore_highcut_cover_m81 {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "m81";
            flag = "none";
        };
    };
};
