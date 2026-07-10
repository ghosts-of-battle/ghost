class CfgWeapons {
    class Uniform_Base;
    class UniformItem;
    class U_B_CombatUniform_mcam: Uniform_Base {};
    class U_B_CombatUniform_mcam_vest: Uniform_Base {};
    class U_B_T_Soldier_AR_F: Uniform_Base {};

    class GVAR(CombatUniform_Multicam): U_B_CombatUniform_mcam {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Combat Fatigues [NATO]";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_Multicam.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniform_Multicam);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniformRolled_Multicam): U_B_CombatUniform_mcam_vest {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Combat Fatigues [NATO] (Rolled-up)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_Multicam.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_vest_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniformRolled_Multicam);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniformTee_Multicam): U_B_T_Soldier_AR_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Combat Fatigues [NATO] (Tee)";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nato_tshirt_Multicam.paa),
            QPATHTOF(data\clothing1_Multicam.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_tshirt_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniformTee_Multicam);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniform_Multicam_Snow): U_B_CombatUniform_mcam {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Combat Fatigues [NATO]";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_Multicam_Snow.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniform_Multicam_Snow);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniformRolled_Multicam_Snow): U_B_CombatUniform_mcam_vest {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Combat Fatigues [NATO] (Rolled-up)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_Multicam_Snow.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_Snow_vest_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniformRolled_Multicam_Snow);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniformTee_Multicam_Snow): U_B_T_Soldier_AR_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Combat Fatigues [NATO] (Tee)";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nato_tshirt_Multicam_Snow.paa),
            QPATHTOF(data\clothing1_Multicam_Snow.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_Snow_tshirt_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniformTee_Multicam_Snow);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniform_Multicam_Woodland): U_B_CombatUniform_mcam {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Combat Fatigues [NATO]";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_A3_Multicam_Woodland.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_A3_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniform_Multicam_Woodland);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniformRolled_Multicam_Woodland): U_B_CombatUniform_mcam_vest {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Combat Fatigues [NATO] (Rolled-up)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_A3_Multicam_Woodland.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_A3_Multicam_Woodland_vest_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniformRolled_Multicam_Woodland);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniformTee_Multicam_Woodland): U_B_T_Soldier_AR_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Combat Fatigues [NATO] (Tee)";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nato_tshirt_A3_Multicam_Woodland.paa),
            QPATHTOF(data\clothing1_A3_Multicam_Woodland.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_A3_Multicam_Woodland_tshirt_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniformTee_Multicam_Woodland);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniform_US_OCP): U_B_CombatUniform_mcam {
        author = QAUTHOR;
        displayName = "[Ghost] (US OCP) Combat Fatigues [NATO]";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_US_OCP.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_US_OCP_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniform_US_OCP);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniformRolled_US_OCP): U_B_CombatUniform_mcam_vest {
        author = QAUTHOR;
        displayName = "[Ghost] (US OCP) Combat Fatigues [NATO] (Rolled-up)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_US_OCP.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_US_OCP_vest_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniformRolled_US_OCP);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(CombatUniformTee_US_OCP): U_B_T_Soldier_AR_F {
        author = QAUTHOR;
        displayName = "[Ghost] (US OCP) Combat Fatigues [NATO] (Tee)";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nato_tshirt_US_OCP.paa),
            QPATHTOF(data\clothing1_US_OCP.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_US_OCP_tshirt_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QGVAR(Soldier_CombatUniformTee_US_OCP);
            containerClass = "Supply40";
            mass = 40;
        };
    };







};
