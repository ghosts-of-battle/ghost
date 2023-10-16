class XtdGearModels {

    class CfgWeapons {
        class CamoBase;
        class milgp_battle_belt {
            class BeltCamo {
                values[] = {
                    "blk",
                    "cb",
                    "khk",
                    "mc",
                    "mcar",
                    "mcb",
                    "mct",
                    "rgr",
                    "tan",
                    "wht"
                };
            };
        };

        class milgp_jpc {
            class VestCamo {
                values[] = {
                    "blk",
                    "cb",
                    "khk",
                    "mc",
                    "mcar",
                    "mcb",
                    "mct",
                    "rgr",
                    "wht"
                };
            };
            class GearCamo {
                label="Gear Camo";
                values[] = {
                    "blk",
                    "cb",
                    "khk",
                    "mc",
                    "mcar",
                    "mcb",
                    "mct",
                    "rgr",
                    "tan",
                    "wht"
                };
            };
        };

        class milgp_marciras {
            class VestCamo {
                values[] = {
                    "blk",
                    "cb",
                    "khk",
                    "mc",
                    "rgr",
                    "wht"
                };
            };
            class GearCamo {
                label="Gear Camo";
                values[] = {
                    "blk",
                    "cb",
                    "khk",
                    "mc",
                    "mcar",
                    "mcb",
                    "mct",
                    "rgr",
                    "tan",
                    "wht"
                };
            };
        };

        class milgp_mmac {
            class VestCamo {
                values[] = {
                    "blk",
                    "cb",
                    "khk",
                    "mc",
                    "rgr",
                    "wht"
                };
            };
            class GearCamo {
                label="Gear Camo";
                values[] = {
                    "blk",
                    "cb",
                    "khk",
                    "mc",
                    "mcar",
                    "mcb",
                    "mct",
                    "rgr",
                    "tan",
                    "wht"
                };
            };
        };

        class milgp_airframe {
            class HelmetCamo {
                values[] = {
                    "blk",
                    "CB",
                    "CB_hexagon",
                    "khk",
                    "khk_hexagon",
                    "m81",
                    "MC",
                    "RGR",
                    "RGR_hexagon",
                    "wht"
                };
            };
        };

        class milgp_cap {
            class CapCamo {
                values[] = {
                    "blk",
                    "cb",
                    "gry",
                    "khk",
                    "m81",
                    "mc",
                    "rgr",
                    "tan",
                    "wht"
                };
            };
        };

        class milgp_opscore {
            class HelmetCamo {
                values[] = {
                    "blk",
                    "CB",
                    "CB_hexagon",
                    "khk",
                    "khk_hexagon",
                    "m81",
                    "m81alt",
                    "MC",
                    "RGR",
                    "RGR_hexagon",
                    "wht"
                };
            };
        };

        class milgp_fleece {
            class PantsCamo {
                values[] = {
                    "threecd",
                    "blk",
                    "khk",
                    "M81",
                    "Multicam",
                    "mcar",
                    "alpine",
                    "MulticamTropic",
                    "rgr"
                };
            };
        };

        class milgp_pcu {
            class PantsCamo {
                values[] = {
                    "threecd",
                    "blk",
                    "khk",
                    "M81",
                    "Multicam",
                    "mcar",
                    "alpine",
                    "MulticamTropic",
                    "rgr"
                };
            };
            class PCUCamo {
                values[] = {
                    "grey",
                    "mc",
                    "tan"
                };
            };
        };

        class milgp_field_set {
            class ShirtCamo {
                values[] = {
                    "threecd",
                    "blk",
                    "khk",
                    "m81",
                    "mc",
                    "mcar",
                    "mcal",
                    "mct",
                    "rgr"
                };
            };
            class PantsCamo {
                values[] = {
                    "threecd",
                    "blk",
                    "khk",
                    "m81",
                    "mc",
                    "mcar",
                    "mcal",
                    "mct",
                    "rgr"
                };
            };
        };
    };

    class CfgVehicles {
        class milgp_back_panel {
            class patrol {
                values[] = {
                    "blk",
                    "cb",
                    "khk",
                    "mc",
                    "mcar",
                    "mcb",
                    "mct",
                    "rgr",
                    "tan",
                    "wht"
                };
            };
        };
    };
};



class XtdGearInfos {
    class CfgWeapons {};
    class CfgVehicles {
        class milgp_b_patrol_01_tan {
            model = "patrol";
            camo = "TAN";
        };
        class milgp_b_patrol_01_mcb {
            model = "patrol";
            camo = "MCB";
        };
        class milgp_b_patrol_01_mcal {
            model = "patrol";
            camo = "MCAL";
        };
        class milgp_b_patrol_01_mc {
            model = "patrol";
            camo = "MC";
        };
        class milgp_b_patrol_01_khk {
            model = "patrol";
            camo = "KHK";
        };
        class milgp_b_patrol_01_cb {
            model = "patrol";
            camo = "CB";
        };
        class milgp_b_patrol_01_blk {
            model = "patrol";
            camo = "BLK";
        };
        class milgp_b_patrol_01_rgr {
            model = "patrol";
            camo = "RGR";
        };
    };
    class CfgGlasses {
        class milgp_f_face_shield_khk {
            model = "faces";
            shades = "None";
            camo = "khk";
        };
        class milgp_f_face_shield_tactical_khk {
            model = "faces";
            shades = "TAC";
            camo = "khk";
        };
        class milgp_f_face_shield_goggles_khk {
            model = "faces";
            shades = "Goggles";
            camo = "khk";
        };
        class milgp_f_face_shield_shades_khk {
            model = "faces";
            shades = "Shades";
            camo = "khk";
        };
        class milgp_f_face_shield_shemagh_khk {
            model = "sfaces";
            shades = "None";
            camo = "khk";
        };
        class milgp_f_face_shield_tactical_shemagh_khk {
            model = "sfaces";
            shades = "Tac";
            camo = "khk";
        };
        class milgp_f_face_shield_goggles_shemagh_khk {
            model = "sfaces";
            shades = "Goggles";
            camo = "khk";
        };
        class milgp_f_face_shield_shades_shemagh_khk {
            model = "sfaces";
            shades = "Shades";
            camo = "khk";
        };
        class milgp_f_face_shield_RGR {
            model = "faces";
            shades = "None";
            camo = "rgr";
        };
        class milgp_f_face_shield_tactical_RGR {
            model = "faces";
            shades = "Tac";
            camo = "rgr";
        };
        class milgp_f_face_shield_goggles_RGR {
            model = "faces";
            shades = "Goggles";
            camo = "rgr";
        };
        class milgp_f_face_shield_shades_RGR {
            model = "faces";
            shades = "Shades";
            camo = "rgr";
        };
        class milgp_f_face_shield_shemagh_RGR {
            model = "sfaces";
            shades = "None";
            camo = "rgr";
        };
        class milgp_f_face_shield_tactical_shemagh_RGR {
            model = "sfaces";
            shades = "Tac";
            camo = "rgr";
        };
        class milgp_f_face_shield_goggles_shemagh_RGR {
            model = "sfaces";
            shades = "Goggles";
            camo = "rgr";
        };
        class milgp_f_face_shield_shades_shemagh_RGR {
            model = "sfaces";
            shades = "Shades";
            camo = "rgr";
        };
        class milgp_f_face_shield_CB {
            model = "faces";
            shades = "None";
            camo = "brn";
        };
        class milgp_f_face_shield_tactical_CB {
            model = "faces";
            shades = "Tac";
            camo = "brn";
        };
        class milgp_f_face_shield_goggles_CB {
            model = "faces";
            shades = "Goggles";
            camo = "brn";
        };
        class milgp_f_face_shield_shades_CB {
            model = "faces";
            shades = "Shades";
            camo = "brn";
        };
        class milgp_f_face_shield_shemagh_CB {
            model = "sfaces";
            shades = "None";
            camo = "brn";
        };
        class milgp_f_face_shield_tactical_shemagh_CB {
            model = "sfaces";
            shades = "Tac";
            camo = "brn";
        };
        class milgp_f_face_shield_goggles_shemagh_CB {
            model = "sfaces";
            shades = "Goggles";
            camo = "brn";
        };
        class milgp_f_face_shield_shades_shemagh_CB {
            model = "sfaces";
            shades = "Shades";
            camo = "brn";
        };
        class milgp_f_face_shield_MC {
            model = "faces";
            shades = "None";
            camo = "mc";
        };
        class milgp_f_face_shield_tactical_MC {
            model = "faces";
            shades = "Tac";
            camo = "mc";
        };
        class milgp_f_face_shield_goggles_MC {
            model = "faces";
            shades = "Goggles";
            camo = "mc";
        };
        class milgp_f_face_shield_shades_MC {
            model = "faces";
            shades = "Shades";
            camo = "mc";
        };
        class milgp_f_face_shield_shemagh_MC {
            model = "sfaces";
            shades = "None";
            camo = "mc";
        };
        class milgp_f_face_shield_tactical_shemagh_MC {
            model = "sfaces";
            shades = "Tac";
            camo = "mc";
        };
        class milgp_f_face_shield_goggles_shemagh_MC {
            model = "sfaces";
            shades = "Goggles";
            camo = "mc";
        };
        class milgp_f_face_shield_shades_shemagh_MC {
            model = "sfaces";
            shades = "Shades";
            camo = "mc";
        };
        class milgp_f_face_shield_BLK {
            model = "faces";
            shades = "none";
            camo = "blk";
        };
        class milgp_f_face_shield_tactical_BLK {
            model = "faces";
            shades = "Tac";
            camo = "blk";
        };
        class milgp_f_face_shield_goggles_BLK {
            model = "faces";
            shades = "Goggles";
            camo = "blk";
        };
        class milgp_f_face_shield_shades_BLK {
            model = "faces";
            shades = "Shades";
            camo = "blk";
        };
        class milgp_f_face_shield_shemagh_BLK {
            model = "sfaces";
            shades = "none";
            camo = "blk";
        };
        class milgp_f_face_shield_tactical_shemagh_BLK {
            model = "sfaces";
            shades = "Tac";
            camo = "blk";
        };
        class milgp_f_face_shield_goggles_shemagh_BLK {
            model = "sfaces";
            shades = "Goggles";
            camo = "blk";
        };
        class milgp_f_face_shield_shades_shemagh_BLK {
            model = "sfaces";
            shades = "Shades";
            camo = "blk";
        };
        class milgp_f_face_shield_WHT {
            model = "faces";
            shades = "None";
            camo = "wht";
        };
        class milgp_f_face_shield_tactical_WHT {
            model = "faces";
            shades = "Tac";
            camo = "wht";
        };
        class milgp_f_face_shield_goggles_WHT {
            model = "faces";
            shades = "Goggles";
            camo = "wht";
        };
        class milgp_f_face_shield_shades_WHT {
            model = "faces";
            shades = "Shades";
            camo = "wht";
        };
        class milgp_f_face_shield_shemagh_WHT {
            model = "sfaces";
            shades = "None";
            camo = "wht";
        };
        class milgp_f_face_shield_tactical_shemagh_WHT {
            model = "sfaces";
            shades = "Tac";
            camo = "wht";
        };
        class milgp_f_face_shield_goggles_shemagh_WHT {
            model = "sfaces";
            shades = "Goggles";
            camo = "wht";
        };
        class milgp_f_face_shield_shades_shemagh_WHT {
            model = "sfaces";
            shades = "Shades";
            camo = "wht";
        };
    };
};
