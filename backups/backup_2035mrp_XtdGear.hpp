class XtdGearModels {
    class CfgWeapons {
        class opscoreHighCut {
            label = "HighCut Helmet";
            options[] = {"variant", "camo", "flag"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"no_cover", "plain", "covered", "stealth"};
                class no_cover {
                    label = "Standard";
                };
                class plain {
                    label = "Plain";
                };
                class covered {
                    label = "Covered";
                };
                class stealth {
                    label = "Stealth";
                };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"blk", "gry", "mcbk", "rgr", "od", "coy", "tan", "aor1", "aor2", "mc", "mcwdl", "mctp", "mcarid", "ctrgarid", "ctrgtropic", "m81", "mtp", "dpm", "nightdesert", "digital", "geometric", "tan_snake", "coy_snake", "od_snake", "rgr_snake", "alt_mc"};
                class blk {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class gry {
                    label = "Grey";
                    image = "z\aceax\addons\gearinfo\data\camo\gry.paa";
                };
                class mcbk {
                    label = "Multicam Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class rgr {
                    label = "Ranger Green";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class od {
                    label = "Olive Drab";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class coy {
                    label = "Coyote";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class tan {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class aor1 {
                    label = "AOR-1";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class aor2 {
                    label = "AOR-2";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class mc {
                    label = "Multicam";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class mcwdl {
                    label = "Multicam Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class mctp {
                    label = "Multicam Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class mcarid {
                    label = "Multicam Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class ctrgarid {
                    label = "CTRG Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class ctrgtropic {
                    label = "CTRG Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class m81 {
                    label = "M81 Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
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
                    label = "Night Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class digital {
                    label = "Digital";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class geometric {
                    label = "Geometric";
                    image = "z\aceax\addons\gearinfo\data\camo\gry.paa";
                };
                class tan_snake {
                    label = "Tan SnakeSkin";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class coy_snake {
                    label = "Coyote SnakeSkin";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class od_snake {
                    label = "Olive Drab SnakeSkin";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class rgr_snake {
                    label = "Ranger Green SnakeSkin";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class alt_mc {
                    label = "Black & Multicam";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
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
        class opscore_highcut_aor1_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "aor1";
            flag = "us";
        };
        class opscore_highcut_mc_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "mc";
            flag = "us";
        };
        class opscore_highcut_aor2_US {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "aor2";
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
        class opscore_highcut_cover_aor2_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "aor2";
            flag = "us";
        };
        class opscore_highcut_cover_CTRGtropic_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "ctrgtropic";
            flag = "us";
        };
        class opscore_highcut_cover_CTRGtropic_UK {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "ctrgtropic";
            flag = "uk";
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
        class opscore_highcut_cover_DPM_UK {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "dpm";
            flag = "uk";
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
        class opscore_highcut_cover_CTRGarid_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "ctrgarid";
            flag = "us";
        };
        class opscore_highcut_cover_CTRGarid_UK {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "ctrgarid";
            flag = "uk";
        };
        class opscore_highcut_cover_NightDesert_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "nightdesert";
            flag = "us";
        };
        class opscore_highcut_cover_aor1_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "aor1";
            flag = "us";
        };
        class opscore_highcut_cover_mcarid_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mcarid";
            flag = "us";
        };
        class opscore_highcut_cover_mtp_UK {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mtp";
            flag = "uk";
        };
        class opscore_highcut_cover_mc_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "mc";
            flag = "us";
        };
        class opscore_highcut_cover_m81_US {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "m81";
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
        class opscore_highcut_CTRGarid_US_TI {
            model = "opscoreHighCut";
            variant = "stealth";
            camo = "ctrgarid";
            flag = "us";
        };
        class opscore_highcut_CTRGarid_UK_TI {
            model = "opscoreHighCut";
            variant = "stealth";
            camo = "ctrgarid";
            flag = "uk";
        };
        class opscore_highcut_CTRGtropic_US_TI {
            model = "opscoreHighCut";
            variant = "stealth";
            camo = "ctrgtropic";
            flag = "us";
        };
        class opscore_highcut_CTRGtropic_UK_TI {
            model = "opscoreHighCut";
            variant = "stealth";
            camo = "ctrgtropic";
            flag = "uk";
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
        class opscore_highcut_aor1 {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "aor1";
            flag = "none";
        };
        class opscore_highcut_mc {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "mc";
            flag = "none";
        };
        class opscore_highcut_aor2 {
            model = "opscoreHighCut";
            variant = "no_cover";
            camo = "aor2";
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
        class opscore_highcut_cover_aor2 {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "aor2";
            flag = "none";
        };
        class opscore_highcut_cover_CTRGtropic {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "ctrgtropic";
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
        class opscore_highcut_cover_CTRGarid {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "ctrgarid";
            flag = "none";
        };
        class opscore_highcut_cover_NightDesert {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "nightdesert";
            flag = "none";
        };
        class opscore_highcut_cover_aor1 {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "aor1";
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
        class opscore_highcut_cover_m81 {
            model = "opscoreHighCut";
            variant = "covered";
            camo = "m81";
            flag = "none";
        };
        class opscore_highcut_CTRGarid_TI {
            model = "opscoreHighCut";
            variant = "stealth";
            camo = "ctrgarid";
            flag = "none";
        };
        class opscore_highcut_CTRGtropic_TI {
            model = "opscoreHighCut";
            variant = "stealth";
            camo = "ctrgtropic";
            flag = "none";
        };
    };
};
