class XtdGearModels {
    class CfgWeapons {
        class GVAR(AVSCarrier) {
            label = "SOF AVS";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"RGR", "MTP", "TNA", "WDL", "OCP"};
                class RGR {
                    label = "RGR";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class MTP {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\mtp.paa";
                };
                class TNA {
                    label = "TNA";
                    image = "z\aceax\addons\gearinfo\data\camo\tropic.paa";
                };
                class WDL {
                    label = "WDL";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class OCP {
                    label = "OCP";
                    image = "z\aceax\addons\gearinfo\data\camo\ocp.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"Flag", "NoFlag"};
                class Flag {
                    label = "Flag";
                };
                class NoFlag {
                    label = "NoFlag";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class GVAR(SOF_V_AVSCarrier_Lite_rgr) {
            model = QGVAR(AVSCarrier);
            camo = "RGR";
            type = "Flag";
        };
        class GVAR(SOF_V_AVSCarrier_Lite_rgr_noflag) {
            model = QGVAR(AVSCarrier);
            camo = "RGR";
            type = "NoFlag";
        };
        class GVAR(SOF_V_AVSCarrier_Lite_mcam) {
            model = QGVAR(AVSCarrier);
            camo = "MTP";
            type = "Flag";
        };
        class GVAR(SOF_V_AVSCarrier_Lite_tna) {
            model = QGVAR(AVSCarrier);
            camo = "TNA";
            type = "Flag";
        };
        class GVAR(SOF_V_AVSCarrier_Lite_wdl) {
            model = QGVAR(AVSCarrier);
            camo = "WDL";
            type = "Flag";
        };
        class GVAR(SOF_V_AVSCarrier_Lite_ocp) {
            model = QGVAR(AVSCarrier);
            camo = "OCP";
            type = "Flag";
        };
    };
};
