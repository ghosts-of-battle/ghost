#include "script_component.hpp"

// Dark Map (ACE) palette on the cTab map. Palette (c) the Dark Map authors, APL-SA.
// cTab's map control is a standalone class, so the source mod's vanilla
// RscMapControl patch never reaches it - this mirrors the palette across.
// Loads only when both cTab and the source mod are present.

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
            "cTab",
            "darkmap_ace_main"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        authors[] = {"YonV"};
    };
};

class cTab_RscMapControl {
    colorBackground[] = {0.128, 0.103, 0.086, 1};
    colorOutside[] = {0.85, 0.85, 0.85, 1};
    colorText[] = {0.85, 0.85, 0.85, 1};
    colorSea[] = {0.186, 0.317, 0.492, 0.5};
    colorForest[] = {0.428, 0.547, 0.248, 0.5};
    colorRocks[] = {0.85, 0.85, 0.85, 0.3};
    colorCountlines[] = {0.735, 0.531, 0.376, 0.25};
    colorMainCountlines[] = {0.735, 0.531, 0.376, 0.5};
    colorCountlinesWater[] = {0.307, 0.373, 0.469, 0.3};
    colorMainCountlinesWater[] = {0.307, 0.373, 0.469, 0.6};
    colorForestBorder[] = {0.85, 0.85, 0.85, 0};
    colorRocksBorder[] = {0.85, 0.85, 0.85, 0};
    colorPowerLines[] = {0.772, 0.772, 0.772, 1};
    colorRailWay[] = {0.908, 0.356, 0.172, 1};
    colorNames[] = {0.772, 0.772, 0.772, 0.9};
    colorInactive[] = {0.075, 0.075, 0.075, 0.5};
    colorLevels[] = {0.823, 0.686, 0.583, 0.5};
    colorTracks[] = {0.354, 0.285, 0.191, 0.15};
    colorRoads[] = {0.308, 0.308, 0.308, 1};
    colorMainRoads[] = {0.616, 0.308, 0.154, 1};
    colorTracksFill[] = {0.354, 0.285, 0.191, 1};
    colorRoadsFill[] = {0.075, 0.075, 0.075, 1};
    colorMainRoadsFill[] = {0.554, 0.226, 0.061, 1};
    colorGrid[] = {0.772, 0.772, 0.772, 0.6};
    colorGridMap[] = {0.772, 0.772, 0.772, 0.6};
    colorTrails[] = {0.354, 0.285, 0.191, 0.15};
    colorTrailsFill[] = {0.354, 0.285, 0.191, 0.65};
};
