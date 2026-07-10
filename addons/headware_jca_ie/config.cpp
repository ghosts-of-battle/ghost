#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QGVAR(JCA_H_HelmetHBK_black_F),
            QGVAR(JCA_H_HelmetHBK_chops_black_F),
            QGVAR(JCA_H_HelmetHBK_ear_black_F),
            QGVAR(JCA_H_HelmetHBK_headset_black_F),
            QGVAR(JCA_H_HelmetHBK_olive_F),
            QGVAR(JCA_H_HelmetHBK_chops_olive_F),
            QGVAR(JCA_H_HelmetHBK_headset_olive_F),
            QGVAR(JCA_H_HelmetHBK_sand_F),
            QGVAR(JCA_H_HelmetHBK_chops_sand_F),
            QGVAR(JCA_H_HelmetHBK_ear_sand_F),
            QGVAR(JCA_H_HelmetHBK_headset_sand_F),
            QGVAR(JCA_H_Beanie_01_black_F),
            QGVAR(JCA_H_Beanie_01_headset_black_F),
            QGVAR(JCA_H_Beanie_01_olive_F),
            QGVAR(JCA_H_Beanie_01_headset_olive_F),
            QGVAR(JCA_H_Beanie_01_sand_F),
            QGVAR(JCA_H_Beanie_01_headset_sand_F),
            QGVAR(JCA_H_Beret_01_black_F),
            QGVAR(JCA_H_Beret_01_headset_black_F),
            QGVAR(JCA_H_Beret_01_olive_F),
            QGVAR(JCA_H_Beret_01_headset_olive_F),
            QGVAR(JCA_H_Beret_01_sand_F),
            QGVAR(JCA_H_Beret_01_headset_sand_F),
            QGVAR(JCA_H_Cap_01_black_F),
            QGVAR(JCA_H_Cap_01_olive_F),
            QGVAR(JCA_H_Cap_01_headset_olive_F),
            QGVAR(JCA_H_Cap_01_sand_F),
            QGVAR(JCA_H_Cap_01_headset_sand_F),
            QGVAR(JCA_H_Headset_Combat_01_olive_F),
            QGVAR(JCA_H_Headset_Combat_01_sand_F),
            QGVAR(JCA_H_Cap_Military_01_black_F),
            QGVAR(JCA_H_Cap_Military_01_headset_black_F),
            QGVAR(JCA_H_Cap_Military_01_olive_F),
            QGVAR(JCA_H_Cap_Military_01_headset_olive_F),
            QGVAR(JCA_H_Cap_Military_01_sand_F),
            QGVAR(JCA_H_Cap_Military_01_headset_sand_F),
            QGVAR(JCA_H_shemagh_01_black_F),
            QGVAR(JCA_H_shemagh_01_glasses_black_F),
            QGVAR(JCA_H_shemagh_01_headset_black_F),
            QGVAR(JCA_H_shemagh_01_headset_glasses_black_F),
            QGVAR(JCA_H_shemagh_01_olive_F),
            QGVAR(JCA_H_shemagh_01_glasses_olive_F),
            QGVAR(JCA_H_shemagh_01_headset_olive_F),
            QGVAR(JCA_H_shemagh_01_headset_glasses_olive_F),
            QGVAR(JCA_H_shemagh_01_sand_F),
            QGVAR(JCA_H_shemagh_01_glasses_sand_F),
            QGVAR(JCA_H_shemagh_01_headset_glasses_sand_F),
            QGVAR(JCA_H_balaclava_01_black_F),
            QGVAR(JCA_H_balaclava_01_glasses_black_F),
            QGVAR(JCA_H_balaclava_01_headset_black_F),
            QGVAR(JCA_H_balaclava_01_olive_F),
            QGVAR(JCA_H_balaclava_01_glasses_olive_F),
            QGVAR(JCA_H_balaclava_01_headset_olive_F),
            QGVAR(JCA_H_balaclava_01_headset_glasses_olive_F),
            QGVAR(JCA_H_balaclava_01_sand_F),
            QGVAR(JCA_H_balaclava_01_glasses_sand_F),
            QGVAR(JCA_H_balaclava_01_headset_sand_F),
            QGVAR(JCA_H_balaclava_01_headset_glasses_sand_F),
            QGVAR(JCA_H_balaclava_01_headset_glasses_black_F),
            QGVAR(JCA_H_shemagh_01_headset_sand_F),
            QGVAR(JCA_H_Headset_Combat_01_black_F),
            QGVAR(JCA_H_Cap_01_headset_black_F),
            QGVAR(JCA_H_HelmetHBK_ear_olive_F)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "Headwear_F_JCA_IE"
        };
        skipWhenMissingDependencies = 1;
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
