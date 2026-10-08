#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"ghost_moduleIADS"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // NO ADAPTER DEPENDENCY, AND THAT IS DELIBERATE. This addon manages
        // whatever radars are standing on the map, whoever put them there -
        // ALiVE placement, ghost_airdefence, or a mission maker's own Eden
        // hardware. It never asks who created anything, so it never has to
        // know ALiVE exists (docs/new.md rule 4) and it needs no event to
        // wait for: the rescan finds what arrived since last time.
        requiredAddons[] = {
            "ghost_main",
            "ghost_common",
            "cba_xeh"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        authors[] = {"Ghost"};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
