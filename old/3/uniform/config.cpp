#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QGVAR(CombatUniform_Multicam),
            QGVAR(CombatUniformRolled_Multicam),
            QGVAR(CombatUniformTee_Multicam),
            QGVAR(CombatUniform_Multicam_Snow),
            QGVAR(CombatUniformRolled_Multicam_Snow),
            QGVAR(CombatUniformTee_Multicam_Snow),
            QGVAR(CombatUniform_Multicam_Woodland),
            QGVAR(CombatUniformRolled_Multicam_Woodland),
            QGVAR(CombatUniformTee_Multicam_Woodland)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "A3_Characters_F",
            "A3_Characters_F_Exp"
        };
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"
// #include "Xtdsmilgp.hpp"
