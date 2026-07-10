class CfgVehicles {
    // external base classes (models inherited from Aegis/Atlas)
    class Atlas_CombatUniformNCU_01_mcam_F;
    class Atlas_CombatUniformNCU_02_mcam_F;

    class GVAR(CombatUniformNCU_01_mcam_F): Atlas_CombatUniformNCU_01_mcam_F {
        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(U_CombatUniformNCU_01_mcam_F);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing_ncu_mcam_co.paa),
            QPATHTOF(data\combatgloves_khk_co.paa)
        };
    };
    class GVAR(CombatUniformNCU_02_mcam_F): Atlas_CombatUniformNCU_02_mcam_F {
        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(U_CombatUniformNCU_02_mcam_F);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing_ncu_mcam_co.paa),
            QPATHTOF(data\combatgloves_khk_co.paa)
        };
    };
    class GVAR(CombatUniformNCU_01_mcam_wdl_F): Atlas_CombatUniformNCU_01_mcam_F {
        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(U_CombatUniformNCU_01_mcam_wdl_F);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing_ncu_mcam_wdl_co.paa),
            QPATHTOF(data\combatgloves_grn_co.paa)
        };
    };
    class GVAR(CombatUniformNCU_02_mcam_wdl_F): Atlas_CombatUniformNCU_02_mcam_F {
        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(U_CombatUniformNCU_02_mcam_wdl_F);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing_ncu_mcam_wdl_co.paa),
            QPATHTOF(data\combatgloves_grn_co.paa)
        };
    };
    class GVAR(CombatUniformNCU_01_ocp_F): Atlas_CombatUniformNCU_01_mcam_F {
        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(U_CombatUniformNCU_01_ocp_F);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing_ncu_ocp_co.paa),
            QPATHTOF(data\combatgloves_khk_co.paa)
        };
    };
    class GVAR(CombatUniformNCU_02_ocp_F): Atlas_CombatUniformNCU_02_mcam_F {
        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(U_CombatUniformNCU_02_ocp_F);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clothing_ncu_ocp_co.paa),
            QPATHTOF(data\combatgloves_khk_co.paa)
        };
    };
};
