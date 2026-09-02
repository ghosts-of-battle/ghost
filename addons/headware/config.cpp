#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Item_H_Helmet_FASTMT_Headset_Multicam_F),
            QGVAR(Item_H_Helmet_FASTMT_Headset_Multicam_Snow_F),
            QGVAR(Item_H_Helmet_FASTMT_Headset_A3_Multicam_Woodland_F),
            QGVAR(Item_H_Helmet_FASTMT_Headset_US_OCP_F),
            QGVAR(Item_H_Helmet_FASTMT_Cover_mtp_F),
            QGVAR(Item_H_Helmet_FASTMT_Cover_tna_F),
            QGVAR(Item_H_Helmet_FASTMT_Cover_wdl_F),
            QGVAR(Item_H_Helmet_FASTMT_Cover_desert_F),
            QGVAR(Item_H_Helmet_FASTMT_Multicam_F),
            QGVAR(Item_H_Helmet_FASTMT_Multicam_Snow_F),
            QGVAR(Item_H_Helmet_FASTMT_A3_Multicam_Woodland_F),
            QGVAR(Item_H_Helmet_FASTMT_US_OCP_F),
            QGVAR(Item_H_Helmet_FASTMT_Cover_Multicam_F),
            QGVAR(Item_H_Helmet_FASTMT_Cover_Multicam_Snow_F),
            QGVAR(Item_H_Helmet_FASTMT_Cover_A3_Multicam_Woodland_F),
            QGVAR(Item_H_Helmet_FASTMT_Cover_US_OCP_F),
            QGVAR(Item_H_Helmet_FASTMT_Cover_ghost_US_OCP_F),
            QGVAR(Item_H_Booniehat_Multicam_F),
            QGVAR(Item_H_Booniehat_Multicam_hs_F),
            QGVAR(Item_H_Booniehat_Multicam_Snow_F),
            QGVAR(Item_H_Booniehat_Multicam_Snow_hs_F),
            QGVAR(Item_H_Booniehat_Multicam_Woodland_F),
            QGVAR(Item_H_Booniehat_Multicam_Woodland_hs_F),
            QGVAR(Item_H_Booniehat_Solid_CoyoteBrown_F),
            QGVAR(Item_H_Booniehat_Solid_CoyoteBrown_hs_F),
            QGVAR(Item_H_Booniehat_Solid_Ranger_Green_F),
            QGVAR(Item_H_Booniehat_Solid_Ranger_Green_hs_F),
            QGVAR(Item_H_Booniehat_Solid_Olive_F),
            QGVAR(Item_H_Booniehat_Solid_Olive_hs_F),
            QGVAR(Item_H_Booniehat_Solid_Tan_F),
            QGVAR(Item_H_Booniehat_Solid_Tan_hs_F),
            QGVAR(Item_H_Booniehat_Solid_White_F),
            QGVAR(Item_H_Booniehat_Solid_White_hs_F),
            QGVAR(Item_H_Booniehat_ocp_F),
            QGVAR(Item_H_Booniehat_ocp_hs_F)
        };
        weapons[] = {
            QGVAR(H_Helmet_FASTMT_Headset_Multicam_F),
            QGVAR(H_Helmet_FASTMT_Headset_Multicam_Snow_F),
            QGVAR(H_Helmet_FASTMT_Headset_A3_Multicam_Woodland_F),
            QGVAR(H_Helmet_FASTMT_Headset_US_OCP_F),
            QGVAR(H_Helmet_FASTMT_Cover_mtp_F),
            QGVAR(H_Helmet_FASTMT_Cover_tna_F),
            QGVAR(H_Helmet_FASTMT_Cover_wdl_F),
            QGVAR(H_Helmet_FASTMT_Cover_desert_F),
            QGVAR(H_Helmet_FASTMT_Multicam_F),
            QGVAR(H_Helmet_FASTMT_Multicam_Snow_F),
            QGVAR(H_Helmet_FASTMT_A3_Multicam_Woodland_F),
            QGVAR(H_Helmet_FASTMT_US_OCP_F),
            QGVAR(H_Helmet_FASTMT_Cover_Multicam_F),
            QGVAR(H_Helmet_FASTMT_Cover_Multicam_Snow_F),
            QGVAR(H_Helmet_FASTMT_Cover_A3_Multicam_Woodland_F),
            QGVAR(H_Helmet_FASTMT_Cover_US_OCP_F),
            QGVAR(H_Helmet_FASTMT_Cover_ghost_US_OCP_F),
            QGVAR(H_Booniehat_Multicam_F),
            QGVAR(H_Booniehat_Multicam_hs_F),
            QGVAR(H_Booniehat_Multicam_Snow_F),
            QGVAR(H_Booniehat_Multicam_Snow_hs_F),
            QGVAR(H_Booniehat_Multicam_Woodland_F),
            QGVAR(H_Booniehat_Multicam_Woodland_hs_F),
            QGVAR(H_Booniehat_Solid_CoyoteBrown_F),
            QGVAR(H_Booniehat_Solid_CoyoteBrown_hs_F),
            QGVAR(H_Booniehat_Solid_Ranger_Green_F),
            QGVAR(H_Booniehat_Solid_Ranger_Green_hs_F),
            QGVAR(H_Booniehat_Solid_Olive_F),
            QGVAR(H_Booniehat_Solid_Olive_hs_F),
            QGVAR(H_Booniehat_Solid_Tan_F),
            QGVAR(H_Booniehat_Solid_Tan_hs_F),
            QGVAR(H_Booniehat_Solid_White_F),
            QGVAR(H_Booniehat_Solid_White_hs_F),
            QGVAR(H_Booniehat_ocp_F),
            QGVAR(H_Booniehat_ocp_hs_F)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "ace_hearing",
            "A3_Aegis_Characters_F_Aegis_Headgear"   // the FAST-MT is Aegis's, linked (2026-08-29)
        };
        skipWhenMissingDependencies = 1;
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

class CfgEditorSubcategories {
    class EdSubcat_Headgear {
        displayName = "Headgear";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
#include "XtdGear.hpp"
