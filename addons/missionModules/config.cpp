#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {QGVAR(zeus_missionHint), QGVAR(zeus_globalSetSkill), QGVAR(sideMarker), QGVAR(zeus_banziCharge), QGVAR(zeus_bodyBag), QGVAR(moveHcsToModule), QGVAR(identity_module)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_core"};
        author = "Ghost";
        authors[] = {"PabstMirror", "AACO"};
        authorUrl = "https://github.com/BourbonWarfare/GHOST";
        VERSION_CONFIG;
    };
};

#include "CfgEden.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "Displays.hpp"
