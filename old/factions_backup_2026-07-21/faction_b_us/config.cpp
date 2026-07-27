#include "script_component.hpp"

// faction_b_us — in-place futureAmmo RED-tracer conversion for the BLUFOR NATO
// factions BLU_F / BLU_T_F / BLU_W_F / BLU_NATO_lxWS.
// This addon defines NO new units and NO new faction; it re-opens the existing
// Aegis / Atlas unit classes and restates their magazines[] / respawnMagazines[]
// (and vehicle turret magazines) with FA red-tracer equivalents. Pistols (9x21),
// hand grenades, smoke, mines, launchers and ammo with no FA equivalent are kept.

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "ghost_medbags",   // ghost_medbags_FirstAid item added to every soldier
            "ghost_backpack",  // medic Kitbag + assault packs
            // --- source addons whose classes we override (load-order) ---
            "A3_Aegis_Characters_F_Aegis",
            "A3_Aegis_Static_F_Aegis_HMG_02",
            "A3_Atlas_Characters_F_Atlas",
            // --- futureAmmo: red-tracer magazines used by the conversion ---
            "ghostfa_ammo",
            "ghostfa_grenade_40mm",
            "ghostfa_missiles"
        };
        skipWhenMissingDependencies = 1;
        author = "Ghosts of Battle";
        authors[] = {QAUTHOR};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
