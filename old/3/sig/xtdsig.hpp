/*
 * Author: AUTHOR
 * Function description
 *
 * Arguments:
 * 0: Objects <ARRAY>
 * 1: All <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[bob, ted], false] call ghost_main_fnc_example
 *
 * Public: No
 */

class XtdGearModels {
    class CfgWeapons {    
        class sigm7 {
            options[] = {"color" };
            label="SIG M7";
            class color {
                label = "Color";
                values[] = { "Arid", "Black", "Khaki" };
                alwaysSelectable=1;
                class Black {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Khaki {
                    label = "Khaki";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class ctrg_arid {
                    label = "Arid";
                    image = "z\aceax\addons\gearinfo\data\camo\ctrg_arid.paa";
                };
                class ctrg_trop {
                    label = "Khaki";
                    image = "z\aceax\addons\gearinfo\data\camo\ctrg_trop.paa";
                };
            };
        };
        class sigm250 {
            options[] = { "color" };
            label="SIG M250";
            class color {
                label = "Color";
                values[] = { "Solid_Tan", "Solid_Black" };
                alwaysSelectable=1;
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Solid_Tan {
                    label = "Tan-ish ?";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class ghost_sig_XM7 {
            model = "sigm7";
            color = "Arid";
        };
        class ghost_sig_XM7_BLK {
            model = "sigm7";
            color = "Black";
        };
        class ghost_sig_XM7_KHK {
            model = "sigm7";
            color = "Khaki";
        };
        class ghost_sig_XM7_CTRG_Tropic {
            model = "sigm7";
            color = "ctrg_trop";
        };
        class ghost_sig_XM7_CTRG_Arid {
            model = "sigm7";
            color = "ctrg_trop";
        };
        class ghost_sig_M250 {
            model = "sigm250";
            color = "Solid_Tan";
        };
        class ghost_sig_M250_BLK {
            model = "sigm250";
            color = "Solid_Black";
        };
    };
};
