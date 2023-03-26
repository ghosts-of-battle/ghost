#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"ghost_cheezItBoxPlaceable", "ghost_serverPlaceable", "ghost_gamestopPlaceable"};
        weapons[] = {"ghost_cheezItBox", "ghost_serverBox", "ghost_funGun_red", "ghost_funGun_green"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_core"};
        author = "Ghost";
        authorUrl = "https://github.com/BourbonWarfare/GHOST";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgLeaflets.hpp"
