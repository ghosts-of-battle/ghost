class CfgVehicles {
    class B_Soldier_F;
    class B_Soldier_SL_F;
    class B_T_Soldier_AR_F;

    class GVAR(Soldier_CombatUniform_Multicam): B_Soldier_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (Multicam) Combat Fatigues [NATO]";
        uniformClass = QGVAR(CombatUniform_Multicam);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_Multicam.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_ca.paa);
    };

    class GVAR(Soldier_CombatUniformRolled_Multicam): B_Soldier_SL_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (Multicam) Combat Fatigues [NATO] (Rolled-up)";
        uniformClass = QGVAR(CombatUniformRolled_Multicam);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_Multicam.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_vest_ca.paa);
    };

    class GVAR(Soldier_CombatUniformTee_Multicam): B_T_Soldier_AR_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (Multicam) Combat Fatigues [NATO] (Tee)";
        uniformClass = QGVAR(CombatUniformTee_Multicam);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nato_tshirt_Multicam.paa),
            QPATHTOF(data\clothing1_Multicam.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_tshirt_ca.paa);
    };

    class GVAR(Soldier_CombatUniform_Multicam_Snow): B_Soldier_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (Multicam Snow) Combat Fatigues [NATO]";
        uniformClass = QGVAR(CombatUniform_Multicam_Snow);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_Multicam_Snow.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_Snow_ca.paa);
    };

    class GVAR(Soldier_CombatUniformRolled_Multicam_Snow): B_Soldier_SL_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (Multicam Snow) Combat Fatigues [NATO] (Rolled-up)";
        uniformClass = QGVAR(CombatUniformRolled_Multicam_Snow);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_Multicam_Snow.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_Snow_vest_ca.paa);
    };

    class GVAR(Soldier_CombatUniformTee_Multicam_Snow): B_T_Soldier_AR_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (Multicam Snow) Combat Fatigues [NATO] (Tee)";
        uniformClass = QGVAR(CombatUniformTee_Multicam_Snow);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nato_tshirt_Multicam_Snow.paa),
            QPATHTOF(data\clothing1_Multicam_Snow.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_Multicam_Snow_tshirt_ca.paa);
    };

    class GVAR(Soldier_CombatUniform_Multicam_Woodland): B_Soldier_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (Multicam Woodland) Combat Fatigues [NATO]";
        uniformClass = QGVAR(CombatUniform_Multicam_Woodland);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_A3_Multicam_Woodland.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_A3_Multicam_Woodland_ca.paa);
    };

    class GVAR(Soldier_CombatUniformRolled_Multicam_Woodland): B_Soldier_SL_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (Multicam Woodland) Combat Fatigues [NATO] (Rolled-up)";
        uniformClass = QGVAR(CombatUniformRolled_Multicam_Woodland);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_A3_Multicam_Woodland.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_A3_Multicam_Woodland_vest_ca.paa);
    };

    class GVAR(Soldier_CombatUniformTee_Multicam_Woodland): B_T_Soldier_AR_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (Multicam Woodland) Combat Fatigues [NATO] (Tee)";
        uniformClass = QGVAR(CombatUniformTee_Multicam_Woodland);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nato_tshirt_A3_Multicam_Woodland.paa),
            QPATHTOF(data\clothing1_A3_Multicam_Woodland.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_A3_Multicam_Woodland_tshirt_ca.paa);
    };

    class GVAR(Soldier_CombatUniform_US_OCP): B_Soldier_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (US OCP) Combat Fatigues [NATO]";
        uniformClass = QGVAR(CombatUniform_US_OCP);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_US_OCP.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_US_OCP_ca.paa);
    };

    class GVAR(Soldier_CombatUniformRolled_US_OCP): B_Soldier_SL_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (US OCP) Combat Fatigues [NATO] (Rolled-up)";
        uniformClass = QGVAR(CombatUniformRolled_US_OCP);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing1_US_OCP.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_US_OCP_vest_ca.paa);
    };

    class GVAR(Soldier_CombatUniformTee_US_OCP): B_T_Soldier_AR_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Unit [Ghost] (US OCP) Combat Fatigues [NATO] (Tee)";
        uniformClass = QGVAR(CombatUniformTee_US_OCP);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nato_tshirt_US_OCP.paa),
            QPATHTOF(data\clothing1_US_OCP.paa)
        };
        picture = QPATHTOF(data\ui\icon_U_B_CombatUniform_US_OCP_tshirt_ca.paa);
    };







};
