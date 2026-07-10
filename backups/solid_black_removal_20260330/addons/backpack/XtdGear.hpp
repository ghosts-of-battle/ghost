class XtdGearModels {
    class CfgVehicles {
        class ghost_backpack_standard {
            label = "Backpack";
            options[] = {"camo", "type"};

            class camo {
                alwaysSelectable = 1;
                values[] = {"Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_Black", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_White"};

                class Multicam { label = "MC"; image = "z\aceax\addons\gearinfo\data\camo\mc.paa"; };
                class Multicam_Snow { label = "MCS"; image = "z\aceax\addons\gearinfo\data\camo\wht.paa"; };
                class Multicam_Woodland { label = "MCW"; image = "z\aceax\addons\gearinfo\data\camo\mcw.paa"; };
                class Solid_Black { label = "BLK"; image = "z\aceax\addons\gearinfo\data\camo\blk.paa"; };
                class Solid_CoyoteBrown { label = "BRN"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Solid_Olive { label = "Olive"; image = "z\aceax\addons\gearinfo\data\camo\sage.paa"; };
                class Solid_Ranger_Green { label = "Ranger"; image = "z\aceax\addons\gearinfo\data\camo\rgr.paa"; };
                class Solid_White { label = "White"; image = "z\aceax\addons\gearinfo\data\camo\wht.paa"; };
            };

            class type {
                alwaysSelectable = 1;
                values[] = {"assault", "assault_enhanced", "carryall", "kitbag", "tactical"};

                class assault { label = "Assault"; };
                class assault_enhanced { label = "Assault +"; };
                class carryall { label = "Carryall"; };
                class kitbag { label = "Kitbag"; };
                class tactical { label = "Tactical"; };
            };
        };

        class ghost_backpack_field {
            label = "Backpack";
            options[] = {"camo", "type"};

            class camo {
                alwaysSelectable = 1;
                values[] = {"Multicam", "Multicam_Snow", "Multicam_Woodland"};

                class Multicam { label = "MC"; image = "z\aceax\addons\gearinfo\data\camo\mc.paa"; };
                class Multicam_Snow { label = "MCS"; image = "z\aceax\addons\gearinfo\data\camo\wht.paa"; };
                class Multicam_Woodland { label = "MCW"; image = "z\aceax\addons\gearinfo\data\camo\mcw.paa"; };
            };

            class type {
                alwaysSelectable = 1;
                values[] = {"fieldpack", "bergen"};

                class fieldpack { label = "Field Pack"; };
                class bergen { label = "Bergen"; };
            };
        };

        class ghost_backpack_medic_kitbag {
            label = "Medic Kitbag";
            options[] = {"camo"};

            class camo {
                alwaysSelectable = 1;
                values[] = {"BLK", "MTP", "COY", "RGR", "WHT", "GRN", "SAGE", "TAN"};

                class BLK { label = "BLK"; image = "z\aceax\addons\gearinfo\data\camo\blk.paa"; };
                class MTP { label = "MTP"; image = "z\aceax\addons\gearinfo\data\camo\mc.paa"; };
                class COY { label = "COY"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class RGR { label = "RGR"; image = "z\aceax\addons\gearinfo\data\camo\rgr.paa"; };
                class WHT { label = "WHT"; image = "z\aceax\addons\gearinfo\data\camo\wht.paa"; };
                class GRN { label = "GRN"; image = "z\aceax\addons\gearinfo\data\camo\sage.paa"; };
                class SAGE { label = "SAGE"; image = "z\aceax\addons\gearinfo\data\camo\sage.paa"; };
                class TAN { label = "TAN"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
            };
        };

        class ghost_backpack_radiobag {
            label = "Radio Bag";
            options[] = {"camo"};

            class camo {
                alwaysSelectable = 1;
                values[] = {"Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_Black", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_Tan", "Solid_White"};

                class Multicam { label = "MC"; image = "z\aceax\addons\gearinfo\data\camo\mc.paa"; };
                class Multicam_Snow { label = "MCS"; image = "z\aceax\addons\gearinfo\data\camo\wht.paa"; };
                class Multicam_Woodland { label = "MCW"; image = "z\aceax\addons\gearinfo\data\camo\mcw.paa"; };
                class Solid_Black { label = "BLK"; image = "z\aceax\addons\gearinfo\data\camo\blk.paa"; };
                class Solid_CoyoteBrown { label = "BRN"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Solid_Olive { label = "Olive"; image = "z\aceax\addons\gearinfo\data\camo\sage.paa"; };
                class Solid_Ranger_Green { label = "Ranger"; image = "z\aceax\addons\gearinfo\data\camo\rgr.paa"; };
                class Solid_Tan { label = "Tan"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Solid_White { label = "White"; image = "z\aceax\addons\gearinfo\data\camo\wht.paa"; };
            };
        };
    };
};

class XtdGearInfos {
    class CfgVehicles {
        class GVAR(AssaultPack_Multicam) { model = "ghost_backpack_standard"; camo = "Multicam"; type = "assault"; };
        class GVAR(AssaultPack_Multicam_Snow) { model = "ghost_backpack_standard"; camo = "Multicam_Snow"; type = "assault"; };
        class GVAR(AssaultPack_Multicam_Woodland) { model = "ghost_backpack_standard"; camo = "Multicam_Woodland"; type = "assault"; };
        class GVAR(AssaultPack_Solid_Black) { model = "ghost_backpack_standard"; camo = "Solid_Black"; type = "assault"; };
        class GVAR(AssaultPack_Solid_CoyoteBrown) { model = "ghost_backpack_standard"; camo = "Solid_CoyoteBrown"; type = "assault"; };
        class GVAR(AssaultPack_Solid_Olive) { model = "ghost_backpack_standard"; camo = "Solid_Olive"; type = "assault"; };
        class GVAR(AssaultPack_Solid_Ranger_Green) { model = "ghost_backpack_standard"; camo = "Solid_Ranger_Green"; type = "assault"; };
        class GVAR(AssaultPack_Solid_White) { model = "ghost_backpack_standard"; camo = "Solid_White"; type = "assault"; };
        class GVAR(AssaultPackEnhanced_Multicam) { model = "ghost_backpack_standard"; camo = "Multicam"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Multicam_Snow) { model = "ghost_backpack_standard"; camo = "Multicam_Snow"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Multicam_Woodland) { model = "ghost_backpack_standard"; camo = "Multicam_Woodland"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Solid_Black) { model = "ghost_backpack_standard"; camo = "Solid_Black"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Solid_CoyoteBrown) { model = "ghost_backpack_standard"; camo = "Solid_CoyoteBrown"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Solid_Olive) { model = "ghost_backpack_standard"; camo = "Solid_Olive"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Solid_Ranger_Green) { model = "ghost_backpack_standard"; camo = "Solid_Ranger_Green"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Solid_White) { model = "ghost_backpack_standard"; camo = "Solid_White"; type = "assault_enhanced"; };
        class GVAR(Carryall_Multicam) { model = "ghost_backpack_standard"; camo = "Multicam"; type = "carryall"; };
        class GVAR(Carryall_Multicam_Snow) { model = "ghost_backpack_standard"; camo = "Multicam_Snow"; type = "carryall"; };
        class GVAR(Carryall_Multicam_Woodland) { model = "ghost_backpack_standard"; camo = "Multicam_Woodland"; type = "carryall"; };
        class GVAR(Carryall_Solid_Black) { model = "ghost_backpack_standard"; camo = "Solid_Black"; type = "carryall"; };
        class GVAR(Carryall_Solid_CoyoteBrown) { model = "ghost_backpack_standard"; camo = "Solid_CoyoteBrown"; type = "carryall"; };
        class GVAR(Carryall_Solid_Olive) { model = "ghost_backpack_standard"; camo = "Solid_Olive"; type = "carryall"; };
        class GVAR(Carryall_Solid_Ranger_Green) { model = "ghost_backpack_standard"; camo = "Solid_Ranger_Green"; type = "carryall"; };
        class GVAR(Carryall_Solid_White) { model = "ghost_backpack_standard"; camo = "Solid_White"; type = "carryall"; };
        class GVAR(Kitbag_Multicam) { model = "ghost_backpack_standard"; camo = "Multicam"; type = "kitbag"; };
        class GVAR(Kitbag_Multicam_Snow) { model = "ghost_backpack_standard"; camo = "Multicam_Snow"; type = "kitbag"; };
        class GVAR(Kitbag_Multicam_Woodland) { model = "ghost_backpack_standard"; camo = "Multicam_Woodland"; type = "kitbag"; };
        class GVAR(Kitbag_Solid_Black) { model = "ghost_backpack_standard"; camo = "Solid_Black"; type = "kitbag"; };
        class GVAR(Kitbag_Solid_CoyoteBrown) { model = "ghost_backpack_standard"; camo = "Solid_CoyoteBrown"; type = "kitbag"; };
        class GVAR(Kitbag_Solid_Olive) { model = "ghost_backpack_standard"; camo = "Solid_Olive"; type = "kitbag"; };
        class GVAR(Kitbag_Solid_Ranger_Green) { model = "ghost_backpack_standard"; camo = "Solid_Ranger_Green"; type = "kitbag"; };
        class GVAR(Kitbag_Solid_White) { model = "ghost_backpack_standard"; camo = "Solid_White"; type = "kitbag"; };
        class GVAR(TacticalPack_Multicam) { model = "ghost_backpack_standard"; camo = "Multicam"; type = "tactical"; };
        class GVAR(TacticalPack_Multicam_Snow) { model = "ghost_backpack_standard"; camo = "Multicam_Snow"; type = "tactical"; };
        class GVAR(TacticalPack_Multicam_Woodland) { model = "ghost_backpack_standard"; camo = "Multicam_Woodland"; type = "tactical"; };
        class GVAR(TacticalPack_Solid_Black) { model = "ghost_backpack_standard"; camo = "Solid_Black"; type = "tactical"; };
        class GVAR(TacticalPack_Solid_CoyoteBrown) { model = "ghost_backpack_standard"; camo = "Solid_CoyoteBrown"; type = "tactical"; };
        class GVAR(TacticalPack_Solid_Olive) { model = "ghost_backpack_standard"; camo = "Solid_Olive"; type = "tactical"; };
        class GVAR(TacticalPack_Solid_Ranger_Green) { model = "ghost_backpack_standard"; camo = "Solid_Ranger_Green"; type = "tactical"; };
        class GVAR(TacticalPack_Solid_White) { model = "ghost_backpack_standard"; camo = "Solid_White"; type = "tactical"; };
        class GVAR(FieldPack_Multicam) { model = "ghost_backpack_field"; camo = "Multicam"; type = "fieldpack"; };
        class GVAR(Bergen_Multicam) { model = "ghost_backpack_field"; camo = "Multicam"; type = "bergen"; };
        class GVAR(FieldPack_Multicam_Snow) { model = "ghost_backpack_field"; camo = "Multicam_Snow"; type = "fieldpack"; };
        class GVAR(Bergen_Multicam_Snow) { model = "ghost_backpack_field"; camo = "Multicam_Snow"; type = "bergen"; };
        class GVAR(FieldPack_Multicam_Woodland) { model = "ghost_backpack_field"; camo = "Multicam_Woodland"; type = "fieldpack"; };
        class GVAR(Bergen_Multicam_Woodland) { model = "ghost_backpack_field"; camo = "Multicam_Woodland"; type = "bergen"; };
        class GVAR(Backpack_Kitbag_Medic_Black) { model = "ghost_backpack_medic_kitbag"; camo = "BLK"; };
        class GVAR(Backpack_Kitbag_Medic_Coyote) { model = "ghost_backpack_medic_kitbag"; camo = "COY"; };
        class GVAR(Backpack_Kitbag_Medic_Green) { model = "ghost_backpack_medic_kitbag"; camo = "GRN"; };
        class GVAR(Backpack_Kitbag_Medic_MTP) { model = "ghost_backpack_medic_kitbag"; camo = "MTP"; };
        class GVAR(Backpack_Kitbag_Medic_RGR) { model = "ghost_backpack_medic_kitbag"; camo = "RGR"; };
        class GVAR(Backpack_Kitbag_Medic_Sage) { model = "ghost_backpack_medic_kitbag"; camo = "SAGE"; };
        class GVAR(Backpack_Kitbag_Medic_Tan) { model = "ghost_backpack_medic_kitbag"; camo = "TAN"; };
        class GVAR(Backpack_Kitbag_Medic_White) { model = "ghost_backpack_medic_kitbag"; camo = "WHT"; };

        class GVAR(B_RadioBag_01_Multicam) { model = "ghost_backpack_radiobag"; camo = "Multicam"; };
        class GVAR(B_RadioBag_01_Multicam_Snow) { model = "ghost_backpack_radiobag"; camo = "Multicam_Snow"; };
        class GVAR(B_RadioBag_01_Multicam_Woodland) { model = "ghost_backpack_radiobag"; camo = "Multicam_Woodland"; };
        class GVAR(B_RadioBag_01_Solid_Black) { model = "ghost_backpack_radiobag"; camo = "Solid_Black"; };
        class GVAR(B_RadioBag_01_Solid_CoyoteBrown) { model = "ghost_backpack_radiobag"; camo = "Solid_CoyoteBrown"; };
        class GVAR(B_RadioBag_01_Solid_Olive) { model = "ghost_backpack_radiobag"; camo = "Solid_Olive"; };
        class GVAR(B_RadioBag_01_Solid_Ranger_Green) { model = "ghost_backpack_radiobag"; camo = "Solid_Ranger_Green"; };
        class GVAR(B_RadioBag_01_Solid_Tan) { model = "ghost_backpack_radiobag"; camo = "Solid_Tan"; };
        class GVAR(B_RadioBag_01_Solid_White) { model = "ghost_backpack_radiobag"; camo = "Solid_White"; };
    };
};
