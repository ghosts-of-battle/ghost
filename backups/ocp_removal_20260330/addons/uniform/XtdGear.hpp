class XtdGearModels {
    class CfgWeapons {
        class ghost_uniform_selected {
            label = "Uniform";
            options[] = {"camo","type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Multicam", "Multicam_Snow", "Multicam_Woodland", "US_OCP"};
                class Multicam {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow {
                    label = "MCS";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class US_OCP {
                    label = "OCP";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"base","rolled","tee"};
                class base { label = "Base"; };
                class rolled { label = "Rolled"; };
                class tee { label = "Tee"; };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class GVAR(CombatUniform_Multicam) {
            model = "ghost_uniform_selected";
            camo = "Multicam";
            type = "base";
        };
        class GVAR(CombatUniformRolled_Multicam) {
            model = "ghost_uniform_selected";
            camo = "Multicam";
            type = "rolled";
        };
        class GVAR(CombatUniformTee_Multicam) {
            model = "ghost_uniform_selected";
            camo = "Multicam";
            type = "tee";
        };
        class GVAR(CombatUniform_Multicam_Snow) {
            model = "ghost_uniform_selected";
            camo = "Multicam_Snow";
            type = "base";
        };
        class GVAR(CombatUniformRolled_Multicam_Snow) {
            model = "ghost_uniform_selected";
            camo = "Multicam_Snow";
            type = "rolled";
        };
        class GVAR(CombatUniformTee_Multicam_Snow) {
            model = "ghost_uniform_selected";
            camo = "Multicam_Snow";
            type = "tee";
        };
        class GVAR(CombatUniform_Multicam_Woodland) {
            model = "ghost_uniform_selected";
            camo = "Multicam_Woodland";
            type = "base";
        };
        class GVAR(CombatUniformRolled_Multicam_Woodland) {
            model = "ghost_uniform_selected";
            camo = "Multicam_Woodland";
            type = "rolled";
        };
        class GVAR(CombatUniformTee_Multicam_Woodland) {
            model = "ghost_uniform_selected";
            camo = "Multicam_Woodland";
            type = "tee";
        };
        class GVAR(CombatUniform_US_OCP) {
            model = "ghost_uniform_selected";
            camo = "US_OCP";
            type = "base";
        };
        class GVAR(CombatUniformRolled_US_OCP) {
            model = "ghost_uniform_selected";
            camo = "US_OCP";
            type = "rolled";
        };
        class GVAR(CombatUniformTee_US_OCP) {
            model = "ghost_uniform_selected";
            camo = "US_OCP";
            type = "tee";
        };
    };
};
