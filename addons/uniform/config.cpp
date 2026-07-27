#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(B_JSOC_StealthUniform_soldier_F),
            QGVAR(B_D_JSOC_StealthUniform_soldier_F),
            QGVAR(B_T_JSOC_StealthUniform_soldier_F),
            QGVAR(B_W_JSOC_StealthUniform_soldier_F),
            QGVAR(B_OCP_JSOC_StealthUniform_soldier_F),
            QGVAR(B_Snow_JSOC_StealthUniform_soldier_F),
            QGVAR(B_JSOC_StealthUniform_RolledUp_soldier_F),
            QGVAR(B_D_JSOC_StealthUniform_RolledUp_soldier_F),
            QGVAR(B_T_JSOC_StealthUniform_RolledUp_soldier_F),
            QGVAR(B_W_JSOC_StealthUniform_RolledUp_soldier_F),
            QGVAR(B_OCP_JSOC_StealthUniform_RolledUp_soldier_F),
            QGVAR(B_Snow_JSOC_StealthUniform_RolledUp_soldier_F),
            QGVAR(Item_U_B_JSOC_StealthUniform_F),
            QGVAR(Item_U_B_JSOC_StealthUniform_RolledUp_F),
            QGVAR(Item_U_B_D_JSOC_StealthUniform_F),
            QGVAR(Item_U_B_D_JSOC_StealthUniform_RolledUp_F),
            QGVAR(Item_U_B_T_JSOC_StealthUniform_F),
            QGVAR(Item_U_B_T_JSOC_StealthUniform_RolledUp_F),
            QGVAR(Item_U_B_W_JSOC_StealthUniform_F),
            QGVAR(Item_U_B_W_JSOC_StealthUniform_RolledUp_F),
            QGVAR(Item_U_B_OCP_JSOC_StealthUniform_F),
            QGVAR(Item_U_B_OCP_JSOC_StealthUniform_RolledUp_F),
            QGVAR(Item_U_B_Snow_JSOC_StealthUniform_F),
            QGVAR(Item_U_B_Snow_JSOC_StealthUniform_RolledUp_F),
            QGVAR(B_CombatUniform_ocp_soldier_F),
            QGVAR(B_CombatUniform_snow_soldier_F)
        };
        weapons[] = {
            QGVAR(U_B_JSOC_StealthUniform_F),
            QGVAR(U_B_JSOC_StealthUniform_RolledUp_F),
            QGVAR(U_B_D_JSOC_StealthUniform_F),
            QGVAR(U_B_D_JSOC_StealthUniform_RolledUp_F),
            QGVAR(U_B_T_JSOC_StealthUniform_F),
            QGVAR(U_B_T_JSOC_StealthUniform_RolledUp_F),
            QGVAR(U_B_W_JSOC_StealthUniform_F),
            QGVAR(U_B_W_JSOC_StealthUniform_RolledUp_F),
            QGVAR(U_B_OCP_JSOC_StealthUniform_F),
            QGVAR(U_B_OCP_JSOC_StealthUniform_RolledUp_F),
            QGVAR(U_B_Snow_JSOC_StealthUniform_F),
            QGVAR(U_B_Snow_JSOC_StealthUniform_RolledUp_F),
            QGVAR(U_B_CombatUniform_ocp_F),
            QGVAR(U_B_CombatUniform_snow_F)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_main"};
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

class CfgEditorSubcategories {
    class EdSubcat_Uniforms {
        displayName = "Uniforms";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"
// #include "Xtdsmilgp.hpp"
