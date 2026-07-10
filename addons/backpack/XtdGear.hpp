class XtdGearModels {
    class CfgVehicles {
        class ghost_backpack_standard {
            label = "Backpack";
            options[] = {"camo", "type"};

            class camo {
                alwaysSelectable = 1;
                values[] = {"Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_White"};

                class Multicam { label = "MC"; image = "z\aceax\addons\gearinfo\data\camo\mc.paa"; };
                class Multicam_Snow { label = "MCS"; image = "z\aceax\addons\gearinfo\data\camo\wht.paa"; };
                class Multicam_Woodland { label = "MCW"; image = "z\aceax\addons\gearinfo\data\camo\mcw.paa"; };
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
                values[] = {"MTP", "COY", "RGR", "WHT", "GRN", "SAGE", "TAN"};

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
                values[] = {"Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_Tan", "Solid_White"};

                class Multicam { label = "MC"; image = "z\aceax\addons\gearinfo\data\camo\mc.paa"; };
                class Multicam_Snow { label = "MCS"; image = "z\aceax\addons\gearinfo\data\camo\wht.paa"; };
                class Multicam_Woodland { label = "MCW"; image = "z\aceax\addons\gearinfo\data\camo\mcw.paa"; };
                class Solid_CoyoteBrown { label = "BRN"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Solid_Olive { label = "Olive"; image = "z\aceax\addons\gearinfo\data\camo\sage.paa"; };
                class Solid_Ranger_Green { label = "Ranger"; image = "z\aceax\addons\gearinfo\data\camo\rgr.paa"; };
                class Solid_Tan { label = "Tan"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Solid_White { label = "White"; image = "z\aceax\addons\gearinfo\data\camo\wht.paa"; };
            };
        };
            class GVAR(bp_AssaultPack) {
            label = "AssaultPack";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"MC", "Desert", "Tropic"};
                class MC {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
            };
        };
        class GVAR(bp_AssaultPackSpec) {
            label = "AssaultPackSpec";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"MC", "Desert", "Coyote", "Black", "Ranger", "Woodland"};
                class MC {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Coyote {
                    label = "Coyote";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Black {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Ranger {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class Woodland {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
        };
        class GVAR(bp_Bergen) {
            label = "Bergen";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"MC", "Tropic", "Woodland"};
                class MC {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Woodland {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
        };
        class GVAR(bp_Carryall) {
            label = "Carryall";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"MC", "Desert", "Tropic", "Woodland", "Olive"};
                class MC {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Woodland {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class GVAR(bp_Static_GMG_01) {
            label = "Static GMG 01";
            options[] = {"type", "color"};
            class type {
                alwaysSelectable = 1;
                values[] = {"Assembly", "Weapon", "High"};
                class Assembly {
                    label = "Assembly";
                };
                class Weapon {
                    label = "Weapon";
                };
                class High {
                    label = "High";
                };
            };
            class color {
                alwaysSelectable = 1;
                values[] = {"Default", "Green"};
                class Default {
                    label = "Default";
                };
                class Green {
                    label = "Green";
                };
            };
        };
        class GVAR(bp_Static_HMG_01) {
            label = "Static HMG 01";
            options[] = {"type", "color"};
            class type {
                alwaysSelectable = 1;
                values[] = {"Assembly", "Weapon", "Support", "SupportHigh", "High"};
                class Assembly {
                    label = "Assembly";
                };
                class Weapon {
                    label = "Weapon";
                };
                class Support {
                    label = "Support";
                };
                class SupportHigh {
                    label = "Supp Hi";
                };
                class High {
                    label = "High";
                };
            };
            class color {
                alwaysSelectable = 1;
                values[] = {"Default", "Green"};
                class Default {
                    label = "Default";
                };
                class Green {
                    label = "Green";
                };
            };
        };
        class GVAR(bp_Static_HMG_02) {
            label = "Static HMG 02";
            options[] = {"type", "color"};
            class type {
                alwaysSelectable = 1;
                values[] = {"Weapon", "High", "Support", "SupportHigh"};
                class Weapon {
                    label = "Weapon";
                };
                class High {
                    label = "High";
                };
                class Support {
                    label = "Support";
                };
                class SupportHigh {
                    label = "Supp Hi";
                };
            };
            class color {
                alwaysSelectable = 1;
                values[] = {"Default", "Green"};
                class Default {
                    label = "Default";
                };
                class Green {
                    label = "Green";
                };
            };
        };
        class GVAR(bp_DuffleBag) {
            label = "DuffleBag";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"MTP", "Olive"};
                class MTP {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\mtp.paa";
                };
                class Olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class GVAR(bp_Static_Mortar_01) {
            label = "Static Mortar 01";
            options[] = {"type", "color"};
            class type {
                alwaysSelectable = 1;
                values[] = {"Support", "Weapon"};
                class Support {
                    label = "Support";
                };
                class Weapon {
                    label = "Weapon";
                };
            };
            class color {
                alwaysSelectable = 1;
                values[] = {"Default", "Green"};
                class Default {
                    label = "Default";
                };
                class Green {
                    label = "Green";
                };
            };
        };
        class GVAR(bp_patrolBackpack) {
            label = "patrolBackpack";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"MC", "MCU", "Woodland", "Tropic", "Green", "Coyote", "RUArid"};
                class MC {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class MCU {
                    label = "MCU";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Woodland {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Green {
                    label = "Green";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class Coyote {
                    label = "Coyote";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class RUArid {
                    label = "RU Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
            };
        };
        class GVAR(bp_RadioBag) {
            label = "RadioBag";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"MTP", "Tropic", "Woodland", "Desert"};
                class MTP {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\mtp.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Woodland {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
            };
        };
        class GVAR(bp_RallyPoint) {
            label = "RallyPoint";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Default", "Green"};
                class Default {
                    label = "Default";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Green {
                    label = "Green";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
        };
        class GVAR(bp_Static_AA_01) {
            label = "Static AA 01";
            options[] = {"type", "color"};
            class type {
                alwaysSelectable = 1;
                values[] = {"Weapon"};
                class Weapon {
                    label = "Weapon";
                };
            };
            class color {
                alwaysSelectable = 1;
                values[] = {"Default", "Green"};
                class Default {
                    label = "Default";
                };
                class Green {
                    label = "Green";
                };
            };
        };
        class GVAR(bp_Static_AT_01) {
            label = "Static AT 01";
            options[] = {"type", "color"};
            class type {
                alwaysSelectable = 1;
                values[] = {"Weapon"};
                class Weapon {
                    label = "Weapon";
                };
            };
            class color {
                alwaysSelectable = 1;
                values[] = {"Default", "Green"};
                class Default {
                    label = "Default";
                };
                class Green {
                    label = "Green";
                };
            };
        };
        class GVAR(bp_TacticalPack) {
            label = "TacticalPack";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"MC", "Tropic", "Ranger", "Coyote"};
                class MC {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Ranger {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class Coyote {
                    label = "Coyote";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };
        class GVAR(bp_Designator_01) {
            label = "Designator 01";
            options[] = {"faction"};
            class faction {
                alwaysSelectable = 1;
                values[] = {"NATO", "NATO_T", "NATO_W", "IND", "IND_I", "IND_E"};
                class NATO {
                    label = "NATO";
                };
                class NATO_T {
                    label = "NATO-T";
                };
                class NATO_W {
                    label = "NATO-W";
                };
                class IND {
                    label = "AAF";
                };
                class IND_I {
                    label = "AAF-I";
                };
                class IND_E {
                    label = "AAF-E";
                };
            };
        };
        class GVAR(bp_Kitbag) {
            label = "Kitbag";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"MC", "Desert", "Khaki", "Coyote", "Tropic", "Woodland"};
                class MC {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Khaki {
                    label = "Khaki";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Coyote {
                    label = "Coyote";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Woodland {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
        };
        class GVAR(bp_Designator_02) {
            label = "Designator 02";
            options[] = {"faction"};
            class faction {
                alwaysSelectable = 1;
                values[] = {"CSAT_T", "CSAT", "CSAT_R"};
                class CSAT_T {
                    label = "CSAT-T";
                };
                class CSAT {
                    label = "CSAT";
                };
                class CSAT_R {
                    label = "CSAT-R";
                };
            };
        };
        class GVAR(bp_UAV_06) {
            label = "UAV 06";
            options[] = {"type"};
            class type {
                alwaysSelectable = 1;
                values[] = {"Standard", "Medical"};
                class Standard {
                    label = "Standard";
                };
                class Medical {
                    label = "Medical";
                };
            };
        };
        class GVAR(bp_UAV_01) {
            label = "UAV 01";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Default", "Coyote"};
                class Default {
                    label = "Default";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Coyote {
                    label = "Coyote";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };
        class GVAR(bp_UGV_02) {
            label = "UGV 02";
            options[] = {"type"};
            class type {
                alwaysSelectable = 1;
                values[] = {"Demining", "Science"};
                class Demining {
                    label = "Demining";
                };
                class Science {
                    label = "Science";
                };
            };
        };
        class GVAR(bp_gunbag) {
            label = "gunbag";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Tan", "Default"};
                class Tan {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Default {
                    label = "Default";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
            };
        };
        class GVAR(bp_Parachute) {
            label = "Parachute";
            options[] = {"type"};
            class type {
                alwaysSelectable = 1;
                values[] = {"NonSteer", "Standard"};
                class NonSteer {
                    label = "Non-Steer";
                };
                class Standard {
                    label = "Standard";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgVehicles {
        #include "XtdGearInfos_Bags.hpp"
        class GVAR(AssaultPack_Multicam) { model = "ghost_backpack_standard"; camo = "Multicam"; type = "assault"; };
        class GVAR(AssaultPack_Multicam_Snow) { model = "ghost_backpack_standard"; camo = "Multicam_Snow"; type = "assault"; };
        class GVAR(AssaultPack_Multicam_Woodland) { model = "ghost_backpack_standard"; camo = "Multicam_Woodland"; type = "assault"; };
        class GVAR(AssaultPack_Solid_CoyoteBrown) { model = "ghost_backpack_standard"; camo = "Solid_CoyoteBrown"; type = "assault"; };
        class GVAR(AssaultPack_Solid_Olive) { model = "ghost_backpack_standard"; camo = "Solid_Olive"; type = "assault"; };
        class GVAR(AssaultPack_Solid_Ranger_Green) { model = "ghost_backpack_standard"; camo = "Solid_Ranger_Green"; type = "assault"; };
        class GVAR(AssaultPack_Solid_White) { model = "ghost_backpack_standard"; camo = "Solid_White"; type = "assault"; };
        class GVAR(AssaultPackEnhanced_Multicam) { model = "ghost_backpack_standard"; camo = "Multicam"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Multicam_Snow) { model = "ghost_backpack_standard"; camo = "Multicam_Snow"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Multicam_Woodland) { model = "ghost_backpack_standard"; camo = "Multicam_Woodland"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Solid_CoyoteBrown) { model = "ghost_backpack_standard"; camo = "Solid_CoyoteBrown"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Solid_Olive) { model = "ghost_backpack_standard"; camo = "Solid_Olive"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Solid_Ranger_Green) { model = "ghost_backpack_standard"; camo = "Solid_Ranger_Green"; type = "assault_enhanced"; };
        class GVAR(AssaultPackEnhanced_Solid_White) { model = "ghost_backpack_standard"; camo = "Solid_White"; type = "assault_enhanced"; };
        class GVAR(Carryall_Multicam) { model = "ghost_backpack_standard"; camo = "Multicam"; type = "carryall"; };
        class GVAR(Carryall_Multicam_Snow) { model = "ghost_backpack_standard"; camo = "Multicam_Snow"; type = "carryall"; };
        class GVAR(Carryall_Multicam_Woodland) { model = "ghost_backpack_standard"; camo = "Multicam_Woodland"; type = "carryall"; };
        class GVAR(Carryall_Solid_CoyoteBrown) { model = "ghost_backpack_standard"; camo = "Solid_CoyoteBrown"; type = "carryall"; };
        class GVAR(Carryall_Solid_Olive) { model = "ghost_backpack_standard"; camo = "Solid_Olive"; type = "carryall"; };
        class GVAR(Carryall_Solid_Ranger_Green) { model = "ghost_backpack_standard"; camo = "Solid_Ranger_Green"; type = "carryall"; };
        class GVAR(Carryall_Solid_White) { model = "ghost_backpack_standard"; camo = "Solid_White"; type = "carryall"; };
        class GVAR(Kitbag_Multicam) { model = "ghost_backpack_standard"; camo = "Multicam"; type = "kitbag"; };
        class GVAR(Kitbag_Multicam_Snow) { model = "ghost_backpack_standard"; camo = "Multicam_Snow"; type = "kitbag"; };
        class GVAR(Kitbag_Multicam_Woodland) { model = "ghost_backpack_standard"; camo = "Multicam_Woodland"; type = "kitbag"; };
        class GVAR(Kitbag_Solid_CoyoteBrown) { model = "ghost_backpack_standard"; camo = "Solid_CoyoteBrown"; type = "kitbag"; };
        class GVAR(Kitbag_Solid_Olive) { model = "ghost_backpack_standard"; camo = "Solid_Olive"; type = "kitbag"; };
        class GVAR(Kitbag_Solid_Ranger_Green) { model = "ghost_backpack_standard"; camo = "Solid_Ranger_Green"; type = "kitbag"; };
        class GVAR(Kitbag_Solid_White) { model = "ghost_backpack_standard"; camo = "Solid_White"; type = "kitbag"; };
        class GVAR(TacticalPack_Multicam) { model = "ghost_backpack_standard"; camo = "Multicam"; type = "tactical"; };
        class GVAR(TacticalPack_Multicam_Snow) { model = "ghost_backpack_standard"; camo = "Multicam_Snow"; type = "tactical"; };
        class GVAR(TacticalPack_Multicam_Woodland) { model = "ghost_backpack_standard"; camo = "Multicam_Woodland"; type = "tactical"; };
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
        class GVAR(B_RadioBag_01_Solid_CoyoteBrown) { model = "ghost_backpack_radiobag"; camo = "Solid_CoyoteBrown"; };
        class GVAR(B_RadioBag_01_Solid_Olive) { model = "ghost_backpack_radiobag"; camo = "Solid_Olive"; };
        class GVAR(B_RadioBag_01_Solid_Ranger_Green) { model = "ghost_backpack_radiobag"; camo = "Solid_Ranger_Green"; };
        class GVAR(B_RadioBag_01_Solid_Tan) { model = "ghost_backpack_radiobag"; camo = "Solid_Tan"; };
        class GVAR(B_RadioBag_01_Solid_White) { model = "ghost_backpack_radiobag"; camo = "Solid_White"; };
    };
};
