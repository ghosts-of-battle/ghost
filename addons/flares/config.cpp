#include "script_component.hpp"

#ifndef GHOST_LEAN_RHS_CUP_HLC

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_common"};
        author = QAUTHOR;
        authors[] = {"PabstMirror"};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"

#endif
