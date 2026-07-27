#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {QGVAR(item)};
        requiredVersion = REQUIRED_VERSION;
        // ace_interact_menu supplies the ACE_SelfActions >> ACE_Equipment entry
        // the scope is opened from; CBA_MiscItem comes from cba_xeh.
        requiredAddons[] = {
            "ghost_main",
            "ace_interact_menu",
            "cba_xeh"
        };
        skipWhenMissingDependencies = 1;
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {"Mr H.", "Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ui\RscTitles.hpp"
