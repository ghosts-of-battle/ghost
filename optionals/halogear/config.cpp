#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(parachute),
            QGVAR(parachuteNS)
        };
        // the three masks are CfgGlasses, not CfgWeapons -- they are found
        // without being registered here (the original listed them and HEMTT
        // rightly flags that as a missing CfgWeapons class)
        weapons[] = {QGVAR(aad)};
        requiredVersion = REQUIRED_VERSION;
        // ace_goggles supplies the lens overlay/crack model the mask rides on,
        // ace_medical the suffocation damage and blackout, ace_interact_menu the
        // attach/detach actions, ace_attach the jump-light passenger.
        requiredAddons[] = {
            "ghost_main",
            "ghost_common",
            "ace_goggles",
            "ace_medical",
            "ace_interact_menu",
            "ace_attach",
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
#include "CfgGlasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ui\AADDialog.hpp"
