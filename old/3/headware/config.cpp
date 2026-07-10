#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "ghost_Multicam_H_Booniehat_Multicam",
            "ghost_H_Booniehat_Multicam_hs",
            "ghost_H_HelmetB_Multicam",
            "ghost_H_HelmetSpecB_Multicam",
            "ghost_H_Booniehat_Multicam_Snow",
            "ghost_H_Booniehat_Multicam_Snow_hs",
            "ghost_H_HelmetB_Multicam_Snow",
            "ghost_H_HelmetSpecB_Multicam_Snow",
            "ghost_H_Booniehat_Multicam_Woodland",
            "ghost_H_Booniehat_Multicam_Woodland_hs",
            "ghost_H_HelmetB_Multicam_Woodland",
            "ghost_H_HelmetSpecB_Multicam_Woodland",
            "ghost_H_Booniehat_Solid_CoyoteBrown",
            "ghost_H_Booniehat_Solid_CoyoteBrown_hs",
            "ghost_H_HelmetB_Solid_CoyoteBrown",
            "ghost_H_HelmetSpecB_Solid_CoyoteBrown",
            "ghost_H_Booniehat_Solid_Ranger_Green",
            "ghost_H_Booniehat_Solid_Ranger_Green_hs",
            "ghost_H_HelmetB_Solid_Ranger_Green",
            "ghost_H_HelmetSpecB_Solid_Ranger_Green",
            "ghost_H_Booniehat_Solid_Olive",
            "ghost_H_Booniehat_Solid_Olive_hs",
            "ghost_H_HelmetB_Solid_Olive",
            "ghost_H_HelmetSpecB_Solid_Olive",
            "ghost_H_Booniehat_Solid_Tan",
            "ghost_H_Booniehat_Solid_Tan_hs",
            "ghost_H_HelmetB_Solid_Tan",
            "ghost_H_HelmetSpecB_Solid_Tan",
            "ghost_H_Booniehat_Solid_White",
            "ghost_H_Booniehat_Solid_White_hs",
            "ghost_H_HelmetB_Solid_White",
            "ghost_H_HelmetSpecB_Solid_White",
            "ghost_H_HelmetB_camo_Multicam",
            "ghost_H_HelmetB_camo_Multicam_Snow",
            "ghost_H_HelmetB_camo_Multicam_Woodland",
            "ghost_H_HelmetB_camo_Solid_CoyoteBrown",
            "ghost_H_HelmetB_camo_Solid_Ranger_Green",
            "ghost_H_HelmetB_camo_Solid_Olive",
            "ghost_H_HelmetB_camo_Solid_Tan",
            "ghost_H_HelmetB_camo_Solid_White"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "A3_Characters_F",
            "ace_hearing"
            };
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"

class Headlamps_Presets {
    class Headlamps_Preset_Full {
        offset[] = {-0.5,0.06,0.13};
        colorCycle[] = {
            "Headlamp_light_white_low",
            "Headlamp_light_red_low",
            "Headlamp_light_blue_low"
        };
    };

    class Headlamps_Preset_Helmet_Surefire_HL1_Right: Headlamps_Preset_Full {
        offset[] = {0.04,0,0.15};
    };

    class Headlamps_Preset_Helmet_Surefire_HL1_Left: Headlamps_Preset_Helmet_Surefire_HL1_Right {
        offset[] = {-0.185,-0.08,0.09};
    };

    class Headlamps_Preset_Helmet_Surefire_HL1_Left_ARC: Headlamps_Preset_Helmet_Surefire_HL1_Left {
        offset[] = {-0.185,-0.08,0.15};
    };

    class Headlamps_Preset_Helmet_Surefire_HL1_Right_ARC: Headlamps_Preset_Helmet_Surefire_HL1_Left {
        offset[] = {0.04,0,0.19};
    };
};
