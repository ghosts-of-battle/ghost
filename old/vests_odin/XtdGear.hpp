class XtdGearModels {
    class CfgWeapons {
        class GVAR(Odin) {
            label = "Odin Rig";
            options[] = {"type", "camo"};
            class type {
                alwaysSelectable = 1;
                values[] = {"Base", "Lite", "CQB", "GL"};
                class Base { label = "Rig"; };
                class Lite { label = "Lite"; };
                class CQB { label = "CQB"; };
                class GL { label = "GL"; };
            };
            class camo {
                alwaysSelectable = 1;
                values[] = {"OCP", "MTP", "Multicam", "Multicam_Woodland", "Multicam_Snow"};
                class OCP {
                    label = "OCP";
                    image = "z\aceax\addons\gearinfo\data\camo\ocp.paa";
                };
                class MTP {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\mtp.paa";
                };
                class Multicam {
                    label = "Multicam";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Woodland {
                    label = "MC-Wdl";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Multicam_Snow {
                    label = "MC-Snow";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class GVAR(V_OdinRig_ocp) {
            model = QGVAR(Odin);
            type = "Base";
            camo = "OCP";
        };
        class GVAR(V_OdinRig_mtp) {
            model = QGVAR(Odin);
            type = "Base";
            camo = "MTP";
        };
        class GVAR(V_OdinRig_mcam) {
            model = QGVAR(Odin);
            type = "Base";
            camo = "Multicam";
        };
        class GVAR(V_OdinRig_mcam_wdl) {
            model = QGVAR(Odin);
            type = "Base";
            camo = "Multicam_Woodland";
        };
        class GVAR(V_OdinRig_mcam_snow) {
            model = QGVAR(Odin);
            type = "Base";
            camo = "Multicam_Snow";
        };
        class GVAR(V_OdinRig_Lite_ocp) {
            model = QGVAR(Odin);
            type = "Lite";
            camo = "OCP";
        };
        class GVAR(V_OdinRig_Lite_mtp) {
            model = QGVAR(Odin);
            type = "Lite";
            camo = "MTP";
        };
        class GVAR(V_OdinRig_Lite_mcam) {
            model = QGVAR(Odin);
            type = "Lite";
            camo = "Multicam";
        };
        class GVAR(V_OdinRig_Lite_mcam_wdl) {
            model = QGVAR(Odin);
            type = "Lite";
            camo = "Multicam_Woodland";
        };
        class GVAR(V_OdinRig_Lite_mcam_snow) {
            model = QGVAR(Odin);
            type = "Lite";
            camo = "Multicam_Snow";
        };
        class GVAR(V_OdinRig_CQB_ocp) {
            model = QGVAR(Odin);
            type = "CQB";
            camo = "OCP";
        };
        class GVAR(V_OdinRig_CQB_mtp) {
            model = QGVAR(Odin);
            type = "CQB";
            camo = "MTP";
        };
        class GVAR(V_OdinRig_CQB_mcam) {
            model = QGVAR(Odin);
            type = "CQB";
            camo = "Multicam";
        };
        class GVAR(V_OdinRig_CQB_mcam_wdl) {
            model = QGVAR(Odin);
            type = "CQB";
            camo = "Multicam_Woodland";
        };
        class GVAR(V_OdinRig_CQB_mcam_snow) {
            model = QGVAR(Odin);
            type = "CQB";
            camo = "Multicam_Snow";
        };
        class GVAR(V_OdinRig_GL_ocp) {
            model = QGVAR(Odin);
            type = "GL";
            camo = "OCP";
        };
        class GVAR(V_OdinRig_GL_mtp) {
            model = QGVAR(Odin);
            type = "GL";
            camo = "MTP";
        };
        class GVAR(V_OdinRig_GL_mcam) {
            model = QGVAR(Odin);
            type = "GL";
            camo = "Multicam";
        };
        class GVAR(V_OdinRig_GL_mcam_wdl) {
            model = QGVAR(Odin);
            type = "GL";
            camo = "Multicam_Woodland";
        };
        class GVAR(V_OdinRig_GL_mcam_snow) {
            model = QGVAR(Odin);
            type = "GL";
            camo = "Multicam_Snow";
        };
    };
};
