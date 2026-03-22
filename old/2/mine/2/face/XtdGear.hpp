#include "script_component.hpp"
class XtdGearModels {
    class CfgGlasses {
        class balaclava {
            options[] = { "camo", "profile", "goggle" };
            label = "Balaclava";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_Black", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_Tan", "Solid_White", "US_DCU", "US_M81", "US_Tigerstripe" };
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Multicam {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Solid_CoyoteBrown {
                    label = "BRN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_Olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class Solid_Ranger_Green {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class Solid_Tan {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_White {
                    label = "White";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class US_DCU {
                    label = "DCU";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class US_M81 {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class US_Tigerstripe {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
            class goggle {
                alwaysSelectable = 1;
                values[] = { "none", "yes", "low" };
            };
        };
        class sbalaclava {
            options[] = { "camo", "goggle" };
            label = "Stealth Balaclava";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_Black", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_Tan", "Solid_White", "US_DCU", "US_M81", "US_Tigerstripe" };
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Multicam {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Solid_CoyoteBrown {
                    label = "BRN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_Olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class Solid_Ranger_Green {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class Solid_Tan {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_White {
                    label = "White";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class US_DCU {
                    label = "DCU";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class US_M81 {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class US_Tigerstripe {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
            class goggle {
                alwaysSelectable = 1;
                values[] = { "yes", "no" };
            };
        };
        class goggle {
            options[] = { "camo" };
            label = "Goggles";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_Black", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_Tan", "Solid_White", "US_DCU", "US_M81", "US_Tigerstripe" };
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Multicam {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Solid_CoyoteBrown {
                    label = "BRN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_Olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class Solid_Ranger_Green {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class Solid_Tan {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_White {
                    label = "White";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class US_DCU {
                    label = "DCU";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class US_M81 {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class US_Tigerstripe {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgGlasses {
        // goggles
        class GVAR(G_Combat_Multicam) {
            model = "goggle";
            camo = "Multicam";
        };
        class GVAR(G_Combat_Multicam_Snow) {
            model = "goggle";
            camo = "Multicam_Snow";
        };
        class GVAR(G_Combat_Multicam_Woodland) {
            model = "goggle";
            camo = "Multicam_Woodland";
        };
        class GVAR(G_Combat_Solid_Black) {
            model = "goggle";
            camo = "Solid_Black";
        };
        class GVAR(G_Combat_Solid_CoyoteBrown) {
            model = "goggle";
            camo = "Solid_CoyoteBrown";
        };
        class GVAR(G_Combat_Solid_Olive) {
            model = "goggle";
            camo = "Solid_Olive";
        };
        class GVAR(G_Combat_Solid_Ranger_Green) {
            model = "goggle";
            camo = "Solid_Ranger_Green";
        };
        class GVAR(G_Combat_Solid_Tan) {
            model = "goggle";
            camo = "Solid_Tan";
        };
        class GVAR(G_Combat_Solid_White) {
            model = "goggle";
            camo = "Solid_White";
        };
        class GVAR(G_Combat_US_DCU) {
            model = "goggle";
            camo = "US_DCU";
        };
        class GVAR(G_Combat_US_M81) {
            model = "goggle";
            camo = "US_M81";
        };
        class GVAR(G_Combat_US_Tigerstripe) {
            model = "goggle";
            camo = "US_Tigerstripe";
        };

        // Stealth Balaclava
        class GVAR(G_Balaclava_TI_G_Multicam_F) {
            model = "sbalaclava";
            camo = "Multicam";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_Multicam_Snow_F) {
            model = "sbalaclava";
            camo = "Multicam_Snow";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_Multicam_Woodland_F) {
            model = "sbalaclava";
            camo = "Multicam_Woodland";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_Solid_Black_F) {
            model = "sbalaclava";
            camo = "Solid_Black";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_Solid_CoyoteBrown_F) {
            model = "sbalaclava";
            camo = "Solid_CoyoteBrown";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_Solid_Olive_F) {
            model = "sbalaclava";
            camo = "Solid_Olive";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_Solid_Ranger_Green_F) {
            model = "sbalaclava";
            camo = "Solid_Ranger_Green";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_Solid_Tan_F) {
            model = "sbalaclava";
            camo = "Solid_Tan";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_Solid_White_F) {
            model = "sbalaclava";
            camo = "Solid_White";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_US_DCU_F) {
            model = "sbalaclava";
            camo = "US_DCU";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_US_M81_F) {
            model = "sbalaclava";
            camo = "US_M81";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_TI_G_US_Tigerstripe_F) {
            model = "sbalaclava";
            camo = "US_Tigerstripe";
            goggle ="yes";
        };

        class GVAR(G_Balaclava_TI_Multicam_F) {
            model = "sbalaclava";
            camo = "Multicam";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_Multicam_Snow_F) {
            model = "sbalaclava";
            camo = "Multicam_Snow";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_Multicam_Woodland_F) {
            model = "sbalaclava";
            camo = "Multicam_Woodland";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_Solid_Black_F) {
            model = "sbalaclava";
            camo = "Solid_Black";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_Solid_CoyoteBrown_F) {
            model = "sbalaclava";
            camo = "Solid_CoyoteBrown";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_Solid_Olive_F) {
            model = "sbalaclava";
            camo = "Solid_Olive";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_Solid_Ranger_Green_F) {
            model = "sbalaclava";
            camo = "Solid_Ranger_Green";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_Solid_Tan_F) {
            model = "sbalaclava";
            camo = "Solid_Tan";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_Solid_White_F) {
            model = "sbalaclava";
            camo = "Solid_White";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_US_DCU_F) {
            model = "sbalaclava";
            camo = "US_DCU";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_US_M81_F) {
            model = "sbalaclava";
            camo = "US_M81";
            goggle = "no";
        };
        class GVAR(G_Balaclava_TI_US_Tigerstripe_F) {
            model = "sbalaclava";
            camo = "US_Tigerstripe";
            goggle = "no";
        };

        // Balaclava
        class GVAR(G_Balaclava_combat_Multicam) {
            model = "balaclava";
            camo = "Multicam";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_Multicam_Snow) {
            model = "balaclava";
            camo = "Multicam_Snow";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_Multicam_Woodland) {
            model = "balaclava";
            camo = "Multicam_Woodland";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_Solid_Black) {
            model = "balaclava";
            camo = "Solid_Black";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_Solid_CoyoteBrown) {
            model = "balaclava";
            camo = "Solid_CoyoteBrown";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_Solid_Olive) {
            model = "balaclava";
            camo = "Solid_Olive";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_Solid_Ranger_Green) {
            model = "balaclava";
            camo = "Solid_Ranger_Green";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_Solid_Tan) {
            model = "balaclava";
            camo = "Solid_Tan";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_Solid_White) {
            model = "balaclava";
            camo = "Solid_White";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_US_DCU) {
            model = "balaclava";
            camo = "US_DCU";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_US_M81) {
            model = "balaclava";
            camo = "US_M81";
            goggle ="yes";
        };
        class GVAR(G_Balaclava_combat_US_Tigerstripe) {
            model = "balaclava";
            camo = "US_Tigerstripe";
            goggle ="yes";
        };

        class GVAR(G_Balaclava_lowprofile_Multicam) {
            model = "balaclava";
            camo = "Multicam";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_Multicam_Snow) {
            model = "balaclava";
            camo = "Multicam_Snow";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_Multicam_Woodland) {
            model = "balaclava";
            camo = "Multicam_Woodland";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_Solid_Black) {
            model = "balaclava";
            camo = "Solid_Black";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_Solid_CoyoteBrown) {
            model = "balaclava";
            camo = "Solid_CoyoteBrown";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_Solid_Olive) {
            model = "balaclava";
            camo = "Solid_Olive";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_Solid_Ranger_Green) {
            model = "balaclava";
            camo = "Solid_Ranger_Green";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_Solid_Tan) {
            model = "balaclava";
            camo = "Solid_Tan";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_Solid_White) {
            model = "balaclava";
            camo = "Solid_White";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_US_DCU) {
            model = "balaclava";
            camo = "US_DCU";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_US_M81) {
            model = "balaclava";
            camo = "US_M81";
            goggle = "low";
        };
        class GVAR(G_Balaclava_lowprofile_US_Tigerstripe) {
            model = "balaclava";
            camo = "US_Tigerstripe";
            goggle = "low";
        };

        class GVAR(G_Balaclava_Multicam) {
            model = "balaclava";
            camo = "Multicam";
            goggle = "none";
        };
        class GVAR(G_Balaclava_Multicam_Snow) {
            model = "balaclava";
            camo = "Multicam_Snow";
            goggle = "none";
        };
        class GVAR(G_Balaclava_Multicam_Woodland) {
            model = "balaclava";
            camo = "Multicam_Woodland";
            goggle = "none";
        };
        class GVAR(G_Balaclava_Solid_Black) {
            model = "balaclava";
            camo = "Solid_Black";
            goggle = "none";
        };
        class GVAR(G_Balaclava_Solid_CoyoteBrown) {
            model = "balaclava";
            camo = "Solid_CoyoteBrown";
            goggle = "none";
        };
        class GVAR(G_Balaclava_Solid_Olive) {
            model = "balaclava";
            camo = "Solid_Olive";
            goggle = "none";
        };
        class GVAR(G_Balaclava_Solid_Ranger_Green) {
            model = "balaclava";
            camo = "Solid_Ranger_Green";
            goggle = "none";
        };
        class GVAR(G_Balaclava_Solid_Tan) {
            model = "balaclava";
            camo = "Solid_Tan";
            goggle = "none";
        };
        class GVAR(G_Balaclava_Solid_White) {
            model = "balaclava";
            camo = "Solid_White";
            goggle = "none";
        };
        class GVAR(G_Balaclava_US_DCU) {
            model = "balaclava";
            camo = "US_DCU";
            goggle = "none";
        };
        class GVAR(G_Balaclava_US_M81) {
            model = "balaclava";
            camo = "US_M81";
            goggle = "none";
        };
        class GVAR(G_Balaclava_US_Tigerstripe) {
            model = "balaclava";
            camo = "US_Tigerstripe";
            goggle = "none";
        };
    };
};
