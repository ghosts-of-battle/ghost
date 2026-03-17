#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main"
        };
        units[] = {
            QGVAR(B_Heli_Transport_01_F_grey),
            QGVAR(B_Heli_Transport_01_F_trop),
            QGVAR(B_Heli_Transport_01_F_sand),
            QGVAR(B_Heli_Transport_01_F_medic),
            QGVAR(B_Heli_Medevac_03dazt_F),
            QGVAR(B_Heli_Medevac_03daz_F),
            QGVAR(B_Heli_Medevac_031_F)
        };
        weapons[] = {};
        authors[] = {
            "YonV"
        };
        version = VERSION;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
