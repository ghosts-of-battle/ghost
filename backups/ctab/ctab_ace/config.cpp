#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_xeh",
            "ghost_main",
            "ace_map_gestures"
        };
        // ACE's gesture module is the whole point of this addon; without it
        // there is nothing to draw, so it skips
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        authors[] = {"YonV", "Aaren"};
    };
};

#include "CfgEventHandlers.hpp"
