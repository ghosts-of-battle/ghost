#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {QGVAR(factory), QGVAR(attackBeacon), QGVAR(place_fireteam), QGVAR(place_squad), QGVAR(place_platoon)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_core"};
        author = "Ghost";
        authors[] = {"PabstMirror"};
        authorUrl = "https://github.com/BourbonWarfare/GHOST";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgZeusFactory.hpp"
#include "UI_RscAttributes.hpp"
