#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // ACM's own addons, so this preInit runs after theirs have registered
        // the settings it re-defaults; skipped whole when ACM is not loaded.
        requiredAddons[] = {
            "ghost_main",
            "ghost_medbags",
            "cba_settings",
            "ace_medical_treatment",
            "ACM_main",
            "ACM_core",
            "ACM_airway",
            "ACM_breathing",
            "ACM_cbrn",
            "ACM_circulation",
            "ACM_damage",
            "ACM_disability",
            "ACM_evacuation"
        };
        skipWhenMissingDependencies = 1;
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
