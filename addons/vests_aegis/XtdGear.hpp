class XtdGearModels {
    class CfgWeapons {
        class GVAR(CarrierRigCDF) {
            label = "Defender Rig [CDF]";
            options[] = {"type"};
            class type {
                alwaysSelectable = 1;
                values[] = {"Std", "Lite", "MG"};
                class Std {
                    label = "Std";
                };
                class Lite {
                    label = "Lite";
                };
                class MG {
                    label = "MG";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class GVAR(V_CF_CarrierRig_F) {
            model = QGVAR(CarrierRigCDF);
            type = "Std";
        };
        class GVAR(V_CF_CarrierRig_Lite_F) {
            model = QGVAR(CarrierRigCDF);
            type = "Lite";
        };
        class GVAR(V_CF_CarrierRig_MG_F) {
            model = QGVAR(CarrierRigCDF);
            type = "MG";
        };
    };
};
