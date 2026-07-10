class XtdGearModels {
    class CfgWeapons {
        class GVAR(MX) {
            label = "MX";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Green", "Black", "Khaki", "Coyote"};
                class Green {
                    label = "Green";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class Black {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Khaki {
                    label = "Khaki";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Coyote {
                    label = "Coyote";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"MX", "MX_GL", "MX_Grip", "MX_SW", "MXAR", "MXAR_GL", "MXC", "MXM"};
                class MX {
                    label = "MX";
                };
                class MX_GL {
                    label = "MX GL";
                };
                class MX_Grip {
                    label = "MX Grip";
                };
                class MX_SW {
                    label = "MX SW";
                };
                class MXAR {
                    label = "MXAR";
                };
                class MXAR_GL {
                    label = "MXAR GL";
                };
                class MXC {
                    label = "MXC";
                };
                class MXM {
                    label = "MXM";
                };
            };
        };
        class GVAR(KSG) {
            label = "KSG";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Grey", "Black"};
                class Grey { label = "Green"; image = "z\aceax\addons\gearinfo\data\camo\gry.paa"; };
                class Black { label = "Black"; image = "z\aceax\addons\gearinfo\data\camo\blk.paa"; };
            };
        };
        class GVAR(LMG_03) {
            label = "SPMG";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Black", "Sand", "Khaki"};
                class Black { label = "Black"; image = "z\aceax\addons\gearinfo\data\camo\blk.paa"; };
                class Sand { label = "Sand"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Khaki { label = "Khaki"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
            };
        };
        class GVAR(GLX) {
            label = "GLX";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Black", "Tan", "Olive"};
                class Black { label = "Black"; image = "z\aceax\addons\gearinfo\data\camo\blk.paa"; };
                class Tan { label = "Tan"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Olive { label = "Olive"; image = "z\aceax\addons\gearinfo\data\camo\sage.paa"; };
            };
        };
        class GVAR(SPAR) {
            label = "SPAR";
            options[] = {"camo", "type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Black", "Khaki", "Sand"};
                class Black { label = "Black"; image = "z\aceax\addons\gearinfo\data\camo\blk.paa"; };
                class Khaki { label = "Khaki"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Sand { label = "Sand"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"SPAR_01", "SPAR_01_GL", "SPAR_02"};
                class SPAR_01 { label = "SPAR-01"; };
                class SPAR_01_GL { label = "SPAR-01 GL"; };
                class SPAR_02 { label = "SPAR-02"; };
            };
        };
        class GVAR(SPAR_03) {
            label = "SPAR-03";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Black", "Khaki", "Sand"};
                class Black { label = "Black"; image = "z\aceax\addons\gearinfo\data\camo\blk.paa"; };
                class Khaki { label = "Khaki"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Sand { label = "Sand"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
            };
        };
        class GVAR(Mk200) {
            label = "Mk200";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Green", "Plain", "Black", "Khaki"};
                class Green { label = "Green"; image = "z\aceax\addons\gearinfo\data\camo\sage.paa"; };
                class Plain { label = "Plain"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Black { label = "Black"; image = "z\aceax\addons\gearinfo\data\camo\blk.paa"; };
                class Khaki { label = "Khaki"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
            };
        };
        class GVAR(MMG_02) {
            label = "SPMG ";
            options[] = {"camo"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Sand", "Khaki", "Black", "Camo"};
                class Sand { label = "Sand"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Khaki { label = "Khaki"; image = "z\aceax\addons\gearinfo\data\camo\khk.paa"; };
                class Black { label = "Black"; image = "z\aceax\addons\gearinfo\data\camo\blk.paa"; };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        // MX
        class arifle_MX_F {
            model = QGVAR(MX);
            camo = "Green";
            type = "MX";
        };
        class arifle_MX_Black_F {
            model = QGVAR(MX);
            camo = "Black";
            type = "MX";
        };
        class arifle_MX_khk_F {
            model = QGVAR(MX);
            camo = "Khaki";
            type = "MX";
        };
        class ef_arifle_mx_coy {
            model = QGVAR(MX);
            camo = "Coyote";
            type = "MX";
        };
        // MX GL
        class arifle_MX_GL_F {
            model = QGVAR(MX);
            camo = "Green";
            type = "MX_GL";
        };
        class arifle_MX_GL_Black_F {
            model = QGVAR(MX);
            camo = "Black";
            type = "MX_GL";
        };
        class arifle_MX_GL_khk_F {
            model = QGVAR(MX);
            camo = "Khaki";
            type = "MX_GL";
        };
        class ef_arifle_mx_gl_coy {
            model = QGVAR(MX);
            camo = "Coyote";
            type = "MX_GL";
        };
        // MX Grip
        class ef_arifle_mx_grip {
            model = QGVAR(MX);
            camo = "Green";
            type = "MX_Grip";
        };
        class ef_arifle_mx_grip_black {
            model = QGVAR(MX);
            camo = "Black";
            type = "MX_Grip";
        };
        class ef_arifle_mx_grip_coy {
            model = QGVAR(MX);
            camo = "Coyote";
            type = "MX_Grip";
        };
        class ef_arifle_mx_grip_khk {
            model = QGVAR(MX);
            camo = "Khaki";
            type = "MX_Grip";
        };
        // MX SW
        class arifle_MX_SW_F {
            model = QGVAR(MX);
            camo = "Green";
            type = "MX_SW";
        };
        class arifle_MX_SW_Black_F {
            model = QGVAR(MX);
            camo = "Black";
            type = "MX_SW";
        };
        class arifle_MX_SW_khk_F {
            model = QGVAR(MX);
            camo = "Khaki";
            type = "MX_SW";
        };
        class ef_arifle_mx_sw_coy {
            model = QGVAR(MX);
            camo = "Coyote";
            type = "MX_SW";
        };
        // MXAR GL
        class ef_arifle_mxar_gl {
            model = QGVAR(MX);
            camo = "Green";
            type = "MXAR_GL";
        };
        class ef_arifle_mxar_gl_black {
            model = QGVAR(MX);
            camo = "Black";
            type = "MXAR_GL";
        };
        class ef_arifle_mxar_gl_coy {
            model = QGVAR(MX);
            camo = "Coyote";
            type = "MXAR_GL";
        };
        class ef_arifle_mxar_gl_khk {
            model = QGVAR(MX);
            camo = "Khaki";
            type = "MXAR_GL";
        };
        // MXAR
        class ef_arifle_mxar {
            model = QGVAR(MX);
            camo = "Green";
            type = "MXAR";
        };
        class ef_arifle_mxar_black {
            model = QGVAR(MX);
            camo = "Black";
            type = "MXAR";
        };
        class ef_arifle_mxar_coy {
            model = QGVAR(MX);
            camo = "Coyote";
            type = "MXAR";
        };
        class ef_arifle_mxar_khk {
            model = QGVAR(MX);
            camo = "Khaki";
            type = "MXAR";
        };
        // MXC
        class arifle_MXC_F {
            model = QGVAR(MX);
            camo = "Green";
            type = "MXC";
        };
        class arifle_MXC_Black_F {
            model = QGVAR(MX);
            camo = "Black";
            type = "MXC";
        };
        class arifle_MXC_khk_F {
            model = QGVAR(MX);
            camo = "Khaki";
            type = "MXC";
        };
        class ef_arifle_mxc_coy {
            model = QGVAR(MX);
            camo = "Coyote";
            type = "MXC";
        };
        // MXM
        class arifle_MXM_F {
            model = QGVAR(MX);
            camo = "Green";
            type = "MXM";
        };
        class arifle_MXM_Black_F {
            model = QGVAR(MX);
            camo = "Black";
            type = "MXM";
        };
        class arifle_MXM_khk_F {
            model = QGVAR(MX);
            camo = "Khaki";
            type = "MXM";
        };
        class ef_arifle_mxm_coy {
            model = QGVAR(MX);
            camo = "Coyote";
            type = "MXM";
        };
        // KSG
        class Aegis_sgun_KSG_black_F {
            model = QGVAR(KSG);
            camo = "Black";
        };
        class sgun_KSG_F {
            model = QGVAR(KSG);
            camo = "Grey";
        };
        // SPMG (LMG_03)
        class LMG_03_F {
            model = QGVAR(LMG_03);
            camo = "Black";
        };
        class LMG_03_snd_F {
            model = QGVAR(LMG_03);
            camo = "Sand";
        };
        class LMG_03_khk_F {
            model = QGVAR(LMG_03);
            camo = "Khaki";
        };
        // GLX
        class glaunch_GLX_lxWS {
            model = QGVAR(GLX);
            camo = "Black";
        };
        class glaunch_GLX_tan_lxWS {
            model = QGVAR(GLX);
            camo = "Tan";
        };
        class glaunch_GLX_olive_lxWS {
            model = QGVAR(GLX);
            camo = "Olive";
        };
        // SPAR-01 / SPAR-02
        class arifle_SPAR_01_blk_F {
            model = QGVAR(SPAR);
            camo = "Black";
            type = "SPAR_01";
        };
        class arifle_SPAR_01_khk_F {
            model = QGVAR(SPAR);
            camo = "Khaki";
            type = "SPAR_01";
        };
        class arifle_SPAR_01_snd_F {
            model = QGVAR(SPAR);
            camo = "Sand";
            type = "SPAR_01";
        };
        class arifle_SPAR_01_GL_blk_F {
            model = QGVAR(SPAR);
            camo = "Black";
            type = "SPAR_01_GL";
        };
        class arifle_SPAR_01_GL_khk_F {
            model = QGVAR(SPAR);
            camo = "Khaki";
            type = "SPAR_01_GL";
        };
        class arifle_SPAR_01_GL_snd_F {
            model = QGVAR(SPAR);
            camo = "Sand";
            type = "SPAR_01_GL";
        };
        class arifle_SPAR_02_blk_F {
            model = QGVAR(SPAR);
            camo = "Black";
            type = "SPAR_02";
        };
        class arifle_SPAR_02_khk_F {
            model = QGVAR(SPAR);
            camo = "Khaki";
            type = "SPAR_02";
        };
        class arifle_SPAR_02_snd_F {
            model = QGVAR(SPAR);
            camo = "Sand";
            type = "SPAR_02";
        };
        // SPAR-03
        class arifle_SPAR_03_blk_F {
            model = QGVAR(SPAR_03);
            camo = "Black";
        };
        class arifle_SPAR_03_khk_F {
            model = QGVAR(SPAR_03);
            camo = "Khaki";
        };
        class arifle_SPAR_03_snd_F {
            model = QGVAR(SPAR_03);
            camo = "Sand";
        };
        // Mk200
        class LMG_Mk200_F {
            model = QGVAR(Mk200);
            camo = "Green";
        };
        class LMG_Mk200_plain_F {
            model = QGVAR(Mk200);
            camo = "Plain";
        };
        class LMG_Mk200_black_F {
            model = QGVAR(Mk200);
            camo = "Black";
        };
        class LMG_Mk200_khk_F {
            model = QGVAR(Mk200);
            camo = "Khaki";
        };
        // MMG_02 (Navid)
        class MMG_02_sand_F {
            model = QGVAR(MMG_02);
            camo = "Sand";
        };
        class MMG_02_khaki_F {
            model = QGVAR(MMG_02);
            camo = "Khaki";
        };
        class MMG_02_black_F {
            model = QGVAR(MMG_02);
            camo = "Black";
        };
    };
};
