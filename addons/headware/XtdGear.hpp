class XtdGearModels {
    class CfgWeapons {
        class ghost_headware_Booniehat {
            label = "Ghost Booniehat";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"MC", "MCA", "MCW", "COY", "RGR", "OLV", "TAN", "WHT"};
                class MC {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class MCA {
                    label = "MC-A";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class MCW {
                    label = "MC-W";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class COY {
                    label = "COY";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class RGR {
                    label = "RGR";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class OLV {
                    label = "OLV";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class TAN {
                    label = "TAN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class WHT {
                    label = "WHT";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Plain", "Headset"};
                class Plain {
                    label = "Plain";
                };
                class Headset {
                    label = "Hdset";
                };
            };
        };
        class ghost_headware_FASTMT {
            label = "Ghost FSTMT";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"TAN", "RGR", "BLK", "CBR", "MTP", "MTP_T", "WDL", "DES", "OCP", "OCP_G", "MCA", "MC", "MCW"};
                class TAN {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class RGR {
                    label = "RGR";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class BLK {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class CBR {
                    label = "CBR";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class MTP {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\mtp.paa";
                };
                class MTP_T {
                    label = "MTP-T";
                    image = "z\aceax\addons\gearinfo\data\camo\tropic.paa";
                };
                class WDL {
                    label = "WDL";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class DES {
                    label = "DES";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class OCP {
                    label = "OCP";
                    image = "z\aceax\addons\gearinfo\data\camo\ocp.paa";
                };
                class OCP_G {
                    label = "OCP-G";
                    image = "z\aceax\addons\gearinfo\data\camo\ocp.paa";
                };
                class MCA {
                    label = "MC-A";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class MC {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class MCW {
                    label = "MC-W";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Plain", "Headset", "Cover"};
                class Plain {
                    label = "Plain";
                };
                class Headset {
                    label = "Hdset";
                };
                class Cover {
                    label = "Cover";
                };
            };
        };
        class ghost_headware_HBK {
            label = "Ghost HBK";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"sand", "olive", "black"};
                class sand {
                    label = "Sand";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class black {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Base", "Headset", "Ear", "Chops"};
                class Base {
                    label = "Plain";
                };
                class Headset {
                    label = "Hdset";
                };
                class Ear {
                    label = "Ear";
                };
                class Chops {
                    label = "Chops";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        /* Plain */
        class ghost_headware_H_Helmet_FASTMT_tan_F {
            model = "ghost_headware_FASTMT";
            camo = "TAN";
            type = "Plain";
        };
        class ghost_headware_H_Helmet_FASTMT_rgr_F {
            model = "ghost_headware_FASTMT";
            camo = "RGR";
            type = "Plain";
        };
        class ghost_headware_H_Helmet_FASTMT_blk_F {
            model = "ghost_headware_FASTMT";
            camo = "BLK";
            type = "Plain";
        };
        class ghost_headware_H_Helmet_FASTMT_cbr_F {
            model = "ghost_headware_FASTMT";
            camo = "CBR";
            type = "Plain";
        };
        class ghost_headware_H_Helmet_FASTMT_Multicam_F {
            model = "ghost_headware_FASTMT";
            camo = "MC";
            type = "Plain";
        };
        class ghost_headware_H_Helmet_FASTMT_Multicam_Snow_F {
            model = "ghost_headware_FASTMT";
            camo = "MCA";
            type = "Plain";
        };
        class ghost_headware_H_Helmet_FASTMT_A3_Multicam_Woodland_F {
            model = "ghost_headware_FASTMT";
            camo = "MCW";
            type = "Plain";
        };
        class ghost_headware_H_Helmet_FASTMT_US_OCP_F {
            model = "ghost_headware_FASTMT";
            camo = "OCP";
            type = "Plain";
        };

        /* Headset */
        class ghost_headware_H_Helmet_FASTMT_Headset_tan_F {
            model = "ghost_headware_FASTMT";
            camo = "TAN";
            type = "Headset";
        };
        class ghost_headware_H_Helmet_FASTMT_Headset_rgr_F {
            model = "ghost_headware_FASTMT";
            camo = "RGR";
            type = "Headset";
        };
        class ghost_headware_H_Helmet_FASTMT_Headset_blk_F {
            model = "ghost_headware_FASTMT";
            camo = "BLK";
            type = "Headset";
        };
        class ghost_headware_H_Helmet_FASTMT_Headset_cbr_F {
            model = "ghost_headware_FASTMT";
            camo = "CBR";
            type = "Headset";
        };
        class ghost_headware_H_Helmet_FASTMT_Headset_Multicam_F {
            model = "ghost_headware_FASTMT";
            camo = "MC";
            type = "Headset";
        };
        class ghost_headware_H_Helmet_FASTMT_Headset_Multicam_Snow_F {
            model = "ghost_headware_FASTMT";
            camo = "MCA";
            type = "Headset";
        };
        class ghost_headware_H_Helmet_FASTMT_Headset_A3_Multicam_Woodland_F {
            model = "ghost_headware_FASTMT";
            camo = "MCW";
            type = "Headset";
        };
        class ghost_headware_H_Helmet_FASTMT_Headset_US_OCP_F {
            model = "ghost_headware_FASTMT";
            camo = "OCP";
            type = "Headset";
        };

        /* Cover */
        class ghost_headware_H_Helmet_FASTMT_Cover_tan_F {
            model = "ghost_headware_FASTMT";
            camo = "TAN";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_rgr_F {
            model = "ghost_headware_FASTMT";
            camo = "RGR";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_blk_F {
            model = "ghost_headware_FASTMT";
            camo = "BLK";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_mtp_F {
            model = "ghost_headware_FASTMT";
            camo = "MTP";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_tna_F {
            model = "ghost_headware_FASTMT";
            camo = "MTP_T";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_wdl_F {
            model = "ghost_headware_FASTMT";
            camo = "WDL";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_desert_F {
            model = "ghost_headware_FASTMT";
            camo = "DES";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F {
            model = "ghost_headware_FASTMT";
            camo = "MC";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_Multicam_Snow_F {
            model = "ghost_headware_FASTMT";
            camo = "MCA";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_A3_Multicam_Woodland_F {
            model = "ghost_headware_FASTMT";
            camo = "MCW";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_US_OCP_F {
            model = "ghost_headware_FASTMT";
            camo = "OCP";
            type = "Cover";
        };
        class ghost_headware_H_Helmet_FASTMT_Cover_ghost_US_OCP_F {
            model = "ghost_headware_FASTMT";
            camo = "OCP_G";
            type = "Cover";
        };

        /* Boonie Hats */
        class ghost_headware_H_Booniehat_Multicam_F {
            model = "ghost_headware_Booniehat";
            camo = "MC";
            type = "Plain";
        };
        class ghost_headware_H_Booniehat_Multicam_hs_F {
            model = "ghost_headware_Booniehat";
            camo = "MC";
            type = "Headset";
        };
        class ghost_headware_H_Booniehat_Multicam_Snow_F {
            model = "ghost_headware_Booniehat";
            camo = "MCA";
            type = "Plain";
        };
        class ghost_headware_H_Booniehat_Multicam_Snow_hs_F {
            model = "ghost_headware_Booniehat";
            camo = "MCA";
            type = "Headset";
        };
        class ghost_headware_H_Booniehat_Multicam_Woodland_F {
            model = "ghost_headware_Booniehat";
            camo = "MCW";
            type = "Plain";
        };
        class ghost_headware_H_Booniehat_Multicam_Woodland_hs_F {
            model = "ghost_headware_Booniehat";
            camo = "MCW";
            type = "Headset";
        };
        class ghost_headware_H_Booniehat_Solid_CoyoteBrown_F {
            model = "ghost_headware_Booniehat";
            camo = "COY";
            type = "Plain";
        };
        class ghost_headware_H_Booniehat_Solid_CoyoteBrown_hs_F {
            model = "ghost_headware_Booniehat";
            camo = "COY";
            type = "Headset";
        };
        class ghost_headware_H_Booniehat_Solid_Ranger_Green_F {
            model = "ghost_headware_Booniehat";
            camo = "RGR";
            type = "Plain";
        };
        class ghost_headware_H_Booniehat_Solid_Ranger_Green_hs_F {
            model = "ghost_headware_Booniehat";
            camo = "RGR";
            type = "Headset";
        };
        class ghost_headware_H_Booniehat_Solid_Olive_F {
            model = "ghost_headware_Booniehat";
            camo = "OLV";
            type = "Plain";
        };
        class ghost_headware_H_Booniehat_Solid_Olive_hs_F {
            model = "ghost_headware_Booniehat";
            camo = "OLV";
            type = "Headset";
        };
        class ghost_headware_H_Booniehat_Solid_Tan_F {
            model = "ghost_headware_Booniehat";
            camo = "TAN";
            type = "Plain";
        };
        class ghost_headware_H_Booniehat_Solid_Tan_hs_F {
            model = "ghost_headware_Booniehat";
            camo = "TAN";
            type = "Headset";
        };
        class ghost_headware_H_Booniehat_Solid_White_F {
            model = "ghost_headware_Booniehat";
            camo = "WHT";
            type = "Plain";
        };
        class ghost_headware_H_Booniehat_Solid_White_hs_F {
            model = "ghost_headware_Booniehat";
            camo = "WHT";
            type = "Headset";
        };
    };
};
