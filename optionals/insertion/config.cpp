#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // ghost_common holds the shared MRH-derived helpers; ghost_halogear owns
        // the AAD altitude variable and object watcher the HALO branch drives.
        requiredAddons[] = {
            "ghost_main",
            "ghost_common",
            "ghost_halogear",
            "ace_common",
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
#include "CfgVehicles.hpp"

#include "ui\BaseControls.hpp"
#include "ui\RscTitles.hpp"
#include "ui\InsertionMenu.hpp"
#include "ui\CargoPrep.hpp"
