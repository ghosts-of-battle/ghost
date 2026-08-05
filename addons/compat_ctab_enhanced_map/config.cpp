#include "script_component.hpp"

// DIS Enhanced Map palette on the cTab map. Palette (c) Hoplite, APL-SA.
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
            "DIS_enhanced_map"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        authors[] = {"YonV"};
    };
};

class cTab_RscMapControl {
    showCountourInterval = 1;
    scaleMax = 1.3;
    scaleDefault = 0.095;
    maxSatelliteAlpha = 1;
    sizeExGrid = 0.0375;
    sizeExLevel = 0.03;
    drawShaded = 0.15;
    shadedSea = 1;
    ptsPerSquareFor = 2.8;
    ptsPerSquareForEdge = 4;
    ptsPerSquareForLod1 = 2;
    ptsPerSquareForLod2 = 1;
    ptsPerSquareMainRoad = 4;
    ptsPerSquareMainRoadSimple = 1;
    ptsPerSquareObj = 11;
    ptsPerSquareObjLod1 = 2.8;
    ptsPerSquareRoad = 5.5;
    ptsPerSquareRoadSimple = 1;
    ptsPerSquareTxt = 18;
    colorBackground[] = {0.92,0.92,0.90,1};
    colorOutside[] = {0,0.18,0.33,1};
    colorNames[] = {0.1,0.1,0.1,1};
    colorLevels[] = {0.68,0.43,0.27,1};
    colorGrid[] = {0.1,0.1,0.1,1};
    colorGridMap[] = {0.1,0.1,0.1,0.275};
    colorSea[] = {0,0.27,0.50,0.3};
    colorForest[] = {0.56,0.81,0,0.5};
    colorForestBorder[] = {0.22,0.50,0,0.5};
    colorForestTextured[] = {0.624,0.78,0.388,0};
    colorRocks[] = {0.33,0.33,0.33,1};
    colorMainCountlines[] = {0.73,0.48,0.31,1};
    colorCountlines[] = {0.73,0.48,0.31,0.5};
    colorMainCountlinesWater[] = {0,0.27,0.50,1};
    colorCountlinesWater[] = {0,0.27,0.50,0.25};
    widthRailWay = 10;
    colorMainRoads[] = {0.88,0.31,0,1};
    colorMainRoadsFill[] = {1,0.48,0.16,1};
    colorRoads[] = {0.74,0.59,0,1};
    colorRoadsFill[] = {1,1,0,1};
    colorTracks[] = {0,0,0,1};
    colorTracksFill[] = {0.69,0.69,0.69,1};
    colorTrails[] = {0.51,0.41,0.33,0};
    colorTrailsFill[] = {0.51,0.41,0.33,1};
};
