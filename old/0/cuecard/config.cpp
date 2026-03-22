#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"GHOST_main","ghost_common"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};



#include "CfgEventHandlers.hpp"
#include "dialogs\CfgDisplays.hpp"

class CfgScriptPaths {
    GHOSTisplays = "z\ghost\addons\cuecard\Scripts\UI\Displays\";
};

