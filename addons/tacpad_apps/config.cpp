#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // ghost_messaging feeds the reader and ghost_hacking feeds two of the
        // tiles, but neither is required: a panel whose source is absent draws
        // its rest state and says so, rather than refusing to load.
        requiredAddons[] = {
            "ghost_main",
            "ghost_common",
            "ghost_tacpad",
            "cba_xeh"
        };
        author = QAUTHOR;
        authors[] = {"Ghost"};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class RscText;
#include "dialog.hpp"

