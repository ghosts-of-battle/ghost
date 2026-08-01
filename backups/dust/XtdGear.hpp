// CBA / aceax Extended GearInfo: collapse the DUST OMCP hats (40) and
// backpacks (30) into grouped arsenal entries with camo (+ variant) selectors.
// XtdGearInfos maps the real external DUST classnames onto our model groups;
// only the model group names are namespaced (GVAR). Inert if aceax/CBA gearinfo
// isn't loaded.

class XtdGearModels {
    class CfgWeapons {
        class GVAR(Booniehat) {
            label = "Boonie Hat";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Plain", "Headset"};
                class Plain { label = "Plain"; };
                class Headset { label = "Headset"; };
            };
        };
        class GVAR(PatrolCap) {
            label = "Patrol Cap";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Plain", "Headset"};
                class Plain { label = "Plain"; };
                class Headset { label = "Headset"; };
            };
        };
        class GVAR(ECH) {
            label = "ECH Helmet";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
        };
        class GVAR(FAST) {
            label = "FAST Helmet";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Std", "E", "EP"};
                class Std { label = "Std"; };
                class E { label = "E"; };
                class EP { label = "EP"; };
            };
        };

        // ---- Vests ----
        class GVAR(CageRig) {
            label = "Cage Plate Carrier";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Light", "Std", "Heavy"};
                class Light { label = "Light"; };
                class Std { label = "Std"; };
                class Heavy { label = "Heavy"; };
            };
        };
        class GVAR(RangeBelt) {
            label = "Tactical Belt";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
        };

        // ---- Uniforms (NCU and Recon kept as separate configs) ----
        class GVAR(NCU) {
            label = "Combat Uniform";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Std", "Rolled", "Shirt"};
                class Std { label = "Std"; };
                class Rolled { label = "Rolled"; };
                class Shirt { label = "Shirt"; };
            };
        };
        class GVAR(Recon) {
            label = "Recon Uniform";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Std", "Neck", "Rolled", "Shirt", "SCUBA"};
                class Std { label = "Std"; };
                class Neck { label = "Neck"; };
                class Rolled { label = "Rolled"; };
                class Shirt { label = "Shirt"; };
                class SCUBA { label = "SCUBA"; };
            };
        };
        class GVAR(CBRN) {
            label = "CBRN Suit";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
        };
        class GVAR(FlightSuit) {
            label = "Flight Suit";
            options[] = {};
        };
    };

    class CfgVehicles {
        class GVAR(Assaultpack) {
            label = "Assault Pack";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Std", "Pouches", "Medic"};
                class Std { label = "Std"; };
                class Pouches { label = "Pouches"; };
                class Medic { label = "Medic"; };
            };
        };
        class GVAR(Bergen) {
            label = "Carryall Bergen";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
        };
        class GVAR(Kitbag) {
            label = "Kitbag";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
        };
        class GVAR(RadioBag) {
            label = "Radio Bag";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Arid", "Desert", "Snow", "Tropic", "Wood"};
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Desert {
                    label = "Desert";
                    image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class Snow {
                    label = "Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Tropic {
                    label = "Tropic";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class Wood {
                    label = "Wood";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        // Boonie hats (Plain) + headset variants
        class Dust_H_BH_OMCPA { model = QGVAR(Booniehat); camo = "Arid"; type = "Plain"; };
        class Dust_H_BH_OMCPD { model = QGVAR(Booniehat); camo = "Desert"; type = "Plain"; };
        class Dust_H_BH_OMCPS { model = QGVAR(Booniehat); camo = "Snow"; type = "Plain"; };
        class Dust_H_BH_OMCPT { model = QGVAR(Booniehat); camo = "Tropic"; type = "Plain"; };
        class Dust_H_BH_OMCPW { model = QGVAR(Booniehat); camo = "Wood"; type = "Plain"; };
        class Dust_H_BH_H_OMCPA { model = QGVAR(Booniehat); camo = "Arid"; type = "Headset"; };
        class Dust_H_BH_H_OMCPD { model = QGVAR(Booniehat); camo = "Desert"; type = "Headset"; };
        class Dust_H_BH_H_OMCPS { model = QGVAR(Booniehat); camo = "Snow"; type = "Headset"; };
        class Dust_H_BH_H_OMCPT { model = QGVAR(Booniehat); camo = "Tropic"; type = "Headset"; };
        class Dust_H_BH_H_OMCPW { model = QGVAR(Booniehat); camo = "Wood"; type = "Headset"; };

        // Patrol caps (Plain) + headset variants
        class Dust_H_PC_OMCPA { model = QGVAR(PatrolCap); camo = "Arid"; type = "Plain"; };
        class Dust_H_PC_OMCPD { model = QGVAR(PatrolCap); camo = "Desert"; type = "Plain"; };
        class Dust_H_PC_OMCPS { model = QGVAR(PatrolCap); camo = "Snow"; type = "Plain"; };
        class Dust_H_PC_OMCPT { model = QGVAR(PatrolCap); camo = "Tropic"; type = "Plain"; };
        class Dust_H_PC_OMCPW { model = QGVAR(PatrolCap); camo = "Wood"; type = "Plain"; };
        class Dust_H_PC_H_OMCPA { model = QGVAR(PatrolCap); camo = "Arid"; type = "Headset"; };
        class Dust_H_PC_H_OMCPD { model = QGVAR(PatrolCap); camo = "Desert"; type = "Headset"; };
        class Dust_H_PC_H_OMCPS { model = QGVAR(PatrolCap); camo = "Snow"; type = "Headset"; };
        class Dust_H_PC_H_OMCPT { model = QGVAR(PatrolCap); camo = "Tropic"; type = "Headset"; };
        class Dust_H_PC_H_OMCPW { model = QGVAR(PatrolCap); camo = "Wood"; type = "Headset"; };

        // ECH helmets
        class Dust_H_ECH_OMCPA { model = QGVAR(ECH); camo = "Arid"; };
        class Dust_H_ECH_OMCPD { model = QGVAR(ECH); camo = "Desert"; };
        class Dust_H_ECH_OMCPS { model = QGVAR(ECH); camo = "Snow"; };
        class Dust_H_ECH_OMCPT { model = QGVAR(ECH); camo = "Tropic"; };
        class Dust_H_ECH_OMCPW { model = QGVAR(ECH); camo = "Wood"; };

        // FAST helmets (Std / E / EP)
        class Dust_H_FAST_OMCPA { model = QGVAR(FAST); camo = "Arid"; type = "Std"; };
        class Dust_H_FAST_OMCPD { model = QGVAR(FAST); camo = "Desert"; type = "Std"; };
        class Dust_H_FAST_OMCPS { model = QGVAR(FAST); camo = "Snow"; type = "Std"; };
        class Dust_H_FAST_OMCPT { model = QGVAR(FAST); camo = "Tropic"; type = "Std"; };
        class Dust_H_FAST_OMCPW { model = QGVAR(FAST); camo = "Wood"; type = "Std"; };
        class Dust_H_FASTE_OMCPA { model = QGVAR(FAST); camo = "Arid"; type = "E"; };
        class Dust_H_FASTE_OMCPD { model = QGVAR(FAST); camo = "Desert"; type = "E"; };
        class Dust_H_FASTE_OMCPS { model = QGVAR(FAST); camo = "Snow"; type = "E"; };
        class Dust_H_FASTE_OMCPT { model = QGVAR(FAST); camo = "Tropic"; type = "E"; };
        class Dust_H_FASTE_OMCPW { model = QGVAR(FAST); camo = "Wood"; type = "E"; };
        class Dust_H_FASTEP_OMCPA { model = QGVAR(FAST); camo = "Arid"; type = "EP"; };
        class Dust_H_FASTEP_OMCPD { model = QGVAR(FAST); camo = "Desert"; type = "EP"; };
        class Dust_H_FASTEP_OMCPS { model = QGVAR(FAST); camo = "Snow"; type = "EP"; };
        class Dust_H_FASTEP_OMCPT { model = QGVAR(FAST); camo = "Tropic"; type = "EP"; };
        class Dust_H_FASTEP_OMCPW { model = QGVAR(FAST); camo = "Wood"; type = "EP"; };

        // Vests: Cage plate carriers (Light=1 / Std=2 / Heavy=3) + Tactical Belt
        class Dust_V_Cage1_OMCPA { model = QGVAR(CageRig); camo = "Arid"; type = "Light"; };
        class Dust_V_Cage1_OMCPD { model = QGVAR(CageRig); camo = "Desert"; type = "Light"; };
        class Dust_V_Cage1_OMCPS { model = QGVAR(CageRig); camo = "Snow"; type = "Light"; };
        class Dust_V_Cage1_OMCPT { model = QGVAR(CageRig); camo = "Tropic"; type = "Light"; };
        class Dust_V_Cage1_OMCPW { model = QGVAR(CageRig); camo = "Wood"; type = "Light"; };
        class Dust_V_Cage2_OMCPA { model = QGVAR(CageRig); camo = "Arid"; type = "Std"; };
        class Dust_V_Cage2_OMCPD { model = QGVAR(CageRig); camo = "Desert"; type = "Std"; };
        class Dust_V_Cage2_OMCPS { model = QGVAR(CageRig); camo = "Snow"; type = "Std"; };
        class Dust_V_Cage2_OMCPT { model = QGVAR(CageRig); camo = "Tropic"; type = "Std"; };
        class Dust_V_Cage2_OMCPW { model = QGVAR(CageRig); camo = "Wood"; type = "Std"; };
        class Dust_V_Cage3_OMCPA { model = QGVAR(CageRig); camo = "Arid"; type = "Heavy"; };
        class Dust_V_Cage3_OMCPD { model = QGVAR(CageRig); camo = "Desert"; type = "Heavy"; };
        class Dust_V_Cage3_OMCPS { model = QGVAR(CageRig); camo = "Snow"; type = "Heavy"; };
        class Dust_V_Cage3_OMCPT { model = QGVAR(CageRig); camo = "Tropic"; type = "Heavy"; };
        class Dust_V_Cage3_OMCPW { model = QGVAR(CageRig); camo = "Wood"; type = "Heavy"; };
        class Dust_V_RangeBelt_OMCPA { model = QGVAR(RangeBelt); camo = "Arid"; };
        class Dust_V_RangeBelt_OMCPD { model = QGVAR(RangeBelt); camo = "Desert"; };
        class Dust_V_RangeBelt_OMCPS { model = QGVAR(RangeBelt); camo = "Snow"; };
        class Dust_V_RangeBelt_OMCPT { model = QGVAR(RangeBelt); camo = "Tropic"; };
        class Dust_V_RangeBelt_OMCPW { model = QGVAR(RangeBelt); camo = "Wood"; };

        // Uniforms - NCU (Combat Uniform): Std / Rolled(_R) / Shirt(_T)
        class Dust_U_NCU_OMCPA { model = QGVAR(NCU); camo = "Arid"; type = "Std"; };
        class Dust_U_NCU_OMCPD { model = QGVAR(NCU); camo = "Desert"; type = "Std"; };
        class Dust_U_NCU_OMCPS { model = QGVAR(NCU); camo = "Snow"; type = "Std"; };
        class Dust_U_NCU_OMCPT { model = QGVAR(NCU); camo = "Tropic"; type = "Std"; };
        class Dust_U_NCU_OMCPW { model = QGVAR(NCU); camo = "Wood"; type = "Std"; };
        class Dust_U_NCU_R_OMCPA { model = QGVAR(NCU); camo = "Arid"; type = "Rolled"; };
        class Dust_U_NCU_R_OMCPD { model = QGVAR(NCU); camo = "Desert"; type = "Rolled"; };
        class Dust_U_NCU_R_OMCPS { model = QGVAR(NCU); camo = "Snow"; type = "Rolled"; };
        class Dust_U_NCU_R_OMCPT { model = QGVAR(NCU); camo = "Tropic"; type = "Rolled"; };
        class Dust_U_NCU_R_OMCPW { model = QGVAR(NCU); camo = "Wood"; type = "Rolled"; };
        class Dust_U_NCU_T_OMCPA { model = QGVAR(NCU); camo = "Arid"; type = "Shirt"; };
        class Dust_U_NCU_T_OMCPD { model = QGVAR(NCU); camo = "Desert"; type = "Shirt"; };
        class Dust_U_NCU_T_OMCPS { model = QGVAR(NCU); camo = "Snow"; type = "Shirt"; };
        class Dust_U_NCU_T_OMCPT { model = QGVAR(NCU); camo = "Tropic"; type = "Shirt"; };
        class Dust_U_NCU_T_OMCPW { model = QGVAR(NCU); camo = "Wood"; type = "Shirt"; };

        // Uniforms - Recon (Recon Uniform): CRYE Std / Neck(_N) / Rolled(_R) / Shirt(_T) + SCUBA
        class Dust_U_CRYE_OMCPA { model = QGVAR(Recon); camo = "Arid"; type = "Std"; };
        class Dust_U_CRYE_OMCPD { model = QGVAR(Recon); camo = "Desert"; type = "Std"; };
        class Dust_U_CRYE_OMCPS { model = QGVAR(Recon); camo = "Snow"; type = "Std"; };
        class Dust_U_CRYE_OMCPT { model = QGVAR(Recon); camo = "Tropic"; type = "Std"; };
        class Dust_U_CRYE_OMCPW { model = QGVAR(Recon); camo = "Wood"; type = "Std"; };
        class Dust_U_CRYE_N_OMCPA { model = QGVAR(Recon); camo = "Arid"; type = "Neck"; };
        class Dust_U_CRYE_N_OMCPD { model = QGVAR(Recon); camo = "Desert"; type = "Neck"; };
        class Dust_U_CRYE_N_OMCPS { model = QGVAR(Recon); camo = "Snow"; type = "Neck"; };
        class Dust_U_CRYE_N_OMCPT { model = QGVAR(Recon); camo = "Tropic"; type = "Neck"; };
        class Dust_U_CRYE_N_OMCPW { model = QGVAR(Recon); camo = "Wood"; type = "Neck"; };
        class Dust_U_CRYE_R_OMCPA { model = QGVAR(Recon); camo = "Arid"; type = "Rolled"; };
        class Dust_U_CRYE_R_OMCPD { model = QGVAR(Recon); camo = "Desert"; type = "Rolled"; };
        class Dust_U_CRYE_R_OMCPS { model = QGVAR(Recon); camo = "Snow"; type = "Rolled"; };
        class Dust_U_CRYE_R_OMCPT { model = QGVAR(Recon); camo = "Tropic"; type = "Rolled"; };
        class Dust_U_CRYE_R_OMCPW { model = QGVAR(Recon); camo = "Wood"; type = "Rolled"; };
        class Dust_U_CRYE_T_OMCPA { model = QGVAR(Recon); camo = "Arid"; type = "Shirt"; };
        class Dust_U_CRYE_T_OMCPD { model = QGVAR(Recon); camo = "Desert"; type = "Shirt"; };
        class Dust_U_CRYE_T_OMCPS { model = QGVAR(Recon); camo = "Snow"; type = "Shirt"; };
        class Dust_U_CRYE_T_OMCPT { model = QGVAR(Recon); camo = "Tropic"; type = "Shirt"; };
        class Dust_U_CRYE_T_OMCPW { model = QGVAR(Recon); camo = "Wood"; type = "Shirt"; };
        class Dust_U_SCUBA_OMCPA { model = QGVAR(Recon); camo = "Arid"; type = "SCUBA"; };
        class Dust_U_SCUBA_OMCPD { model = QGVAR(Recon); camo = "Desert"; type = "SCUBA"; };
        class Dust_U_SCUBA_OMCPS { model = QGVAR(Recon); camo = "Snow"; type = "SCUBA"; };
        class Dust_U_SCUBA_OMCPT { model = QGVAR(Recon); camo = "Tropic"; type = "SCUBA"; };
        class Dust_U_SCUBA_OMCPW { model = QGVAR(Recon); camo = "Wood"; type = "SCUBA"; };

        // Uniforms - CBRN Suit + NOMEX Flight Suit
        class Dust_U_CBRN_OMCPA { model = QGVAR(CBRN); camo = "Arid"; };
        class Dust_U_CBRN_OMCPD { model = QGVAR(CBRN); camo = "Desert"; };
        class Dust_U_CBRN_OMCPS { model = QGVAR(CBRN); camo = "Snow"; };
        class Dust_U_CBRN_OMCPT { model = QGVAR(CBRN); camo = "Tropic"; };
        class Dust_U_CBRN_OMCPW { model = QGVAR(CBRN); camo = "Wood"; };
        class Dust_U_NOMEX_US { model = QGVAR(FlightSuit); };
    };

    class CfgVehicles {
        // Assault packs (Std / Pouches / Medic)
        class Dust_Assaultpack_OMCPA { model = QGVAR(Assaultpack); camo = "Arid"; type = "Std"; };
        class Dust_Assaultpack_OMCPD { model = QGVAR(Assaultpack); camo = "Desert"; type = "Std"; };
        class Dust_Assaultpack_OMCPS { model = QGVAR(Assaultpack); camo = "Snow"; type = "Std"; };
        class Dust_Assaultpack_OMCPT { model = QGVAR(Assaultpack); camo = "Tropic"; type = "Std"; };
        class Dust_Assaultpack_OMCPW { model = QGVAR(Assaultpack); camo = "Wood"; type = "Std"; };
        class Dust_AssaultpackE_OMCPA { model = QGVAR(Assaultpack); camo = "Arid"; type = "Pouches"; };
        class Dust_AssaultpackE_OMCPD { model = QGVAR(Assaultpack); camo = "Desert"; type = "Pouches"; };
        class Dust_AssaultpackE_OMCPS { model = QGVAR(Assaultpack); camo = "Snow"; type = "Pouches"; };
        class Dust_AssaultpackE_OMCPT { model = QGVAR(Assaultpack); camo = "Tropic"; type = "Pouches"; };
        class Dust_AssaultpackE_OMCPW { model = QGVAR(Assaultpack); camo = "Wood"; type = "Pouches"; };
        class Dust_AssaultpackE_Medic_OMCPA { model = QGVAR(Assaultpack); camo = "Arid"; type = "Medic"; };
        class Dust_AssaultpackE_Medic_OMCPD { model = QGVAR(Assaultpack); camo = "Desert"; type = "Medic"; };
        class Dust_AssaultpackE_Medic_OMCPS { model = QGVAR(Assaultpack); camo = "Snow"; type = "Medic"; };
        class Dust_AssaultpackE_Medic_OMCPT { model = QGVAR(Assaultpack); camo = "Tropic"; type = "Medic"; };
        class Dust_AssaultpackE_Medic_OMCPW { model = QGVAR(Assaultpack); camo = "Wood"; type = "Medic"; };

        // Carryall Bergens
        class Dust_Bergen_OMCPA { model = QGVAR(Bergen); camo = "Arid"; };
        class Dust_Bergen_OMCPD { model = QGVAR(Bergen); camo = "Desert"; };
        class Dust_Bergen_OMCPS { model = QGVAR(Bergen); camo = "Snow"; };
        class Dust_Bergen_OMCPT { model = QGVAR(Bergen); camo = "Tropic"; };
        class Dust_Bergen_OMCPW { model = QGVAR(Bergen); camo = "Wood"; };

        // Kitbags
        class Dust_Kitbag_OMCPA { model = QGVAR(Kitbag); camo = "Arid"; };
        class Dust_Kitbag_OMCPD { model = QGVAR(Kitbag); camo = "Desert"; };
        class Dust_Kitbag_OMCPS { model = QGVAR(Kitbag); camo = "Snow"; };
        class Dust_Kitbag_OMCPT { model = QGVAR(Kitbag); camo = "Tropic"; };
        class Dust_Kitbag_OMCPW { model = QGVAR(Kitbag); camo = "Wood"; };

        // Radio bags
        class Dust_RadioBag_OMCPA { model = QGVAR(RadioBag); camo = "Arid"; };
        class Dust_RadioBag_OMCPD { model = QGVAR(RadioBag); camo = "Desert"; };
        class Dust_RadioBag_OMCPS { model = QGVAR(RadioBag); camo = "Snow"; };
        class Dust_RadioBag_OMCPT { model = QGVAR(RadioBag); camo = "Tropic"; };
        class Dust_RadioBag_OMCPW { model = QGVAR(RadioBag); camo = "Wood"; };
    };
};
