#include "script_component.hpp"

class cfgPatches {
    class ADDON
    {
        name = COMPONENT_NAME;
        author = "Snippers";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_common",
            "ghost_main"
        };
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgDiary.hpp"
#include "CfgEventHandlers.hpp"

#include "display3DEN.hpp"

class GHOST_autotest {
    class GVAR(test) {
        code = QUOTE([] call FUNC(testBriefings));
    };
};
