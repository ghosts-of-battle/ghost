#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_common","ghost_main", "acre_sys_core", "acre_api", "acre_sys_signal", "acre_sys_prc117f", "acre_sys_prc148", "acre_sys_prc152"};
        author[] = {"AACO"};
        VERSION_CONFIG;
    };
};

#include "CfgEden.hpp"
#include "CfgEventHandlers.hpp"
