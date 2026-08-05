class CfgWeapons {
#include "acp_full_externs.hpp"
    class HeadgearItem;
    class H_HelmetB;
    class H_Booniehat_khk;
    class H_Booniehat_khk_hs;

    class GVAR(H_Helmet_FASTMT_base_F): H_HelmetB {
        // Every helmet in this mod carries a camera: cTab auto-detects
        // ctab_camera on any headgear, which beats the userconfig array -
        // no server file to edit and nothing for a mission to override.
        ctab_camera = 1;
        scope = 0;
        displayName = "Operator Helmet";
        model = QPATHTOF(H_HelmetFASTMT_F);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\H_HelmetFASTMT.rvmat)};
        class ItemInfo: HeadgearItem {
            mass = 24;
            hiddenSelections[] = {"camo"};
            uniformModel = QPATHTOF(H_HelmetFASTMT_F.p3d);
            heatReduction = 1;
            modelSides[] = {1, 3};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 9;
                    passThrough = 0.5;
                };
            };
        };
    };
    class GVAR(H_Helmet_FASTMT_Headset_base_F): GVAR(H_Helmet_FASTMT_base_F) {
        scope = 0;
        displayName = "Operator Helmet (Headset)";
        model = QPATHTOF(H_HelmetFASTMT_Headset_F);
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\H_HelmetFASTMT.rvmat), QPATHTOF(data\H_HeadsetWest.rvmat)};
        class ItemInfo: HeadgearItem {
            mass = 24;
            hiddenSelections[] = {"camo", "camo1", "camo2"};
            uniformModel = QPATHTOF(H_HelmetFASTMT_Headset_F.p3d);
            heatReduction = 1;
            modelSides[] = {1, 3};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 9;
                    passThrough = 0.5;
                };
            };
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_base_F): GVAR(H_Helmet_FASTMT_base_F) {
        scope = 0;
        displayName = "Operator Helmet (Cover)";
        model = QPATHTOF(H_HelmetFASTMT_Cover_F);
        hiddenSelections[] = {"camo", "camo1", "camo2"};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\H_HelmetFASTMT.rvmat), QPATHTOF(data\H_HelmetFASTMT_Cover.rvmat), QPATHTOF(data\H_HeadsetWest.rvmat)};
        class ItemInfo: HeadgearItem {
            mass = 24;
            hiddenSelections[] = {"camo", "camo1", "camo2"};
            uniformModel = QPATHTOF(H_HelmetFASTMT_Cover_F.p3d);
            heatReduction = 1;
            modelSides[] = {1, 3};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 9;
                    passThrough = 0.5;
                };
            };
        };
    };

    /* FAST-MT Helmet */
    class GVAR(H_Helmet_FASTMT_tan_F): GVAR(H_Helmet_FASTMT_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        displayName = "[Ghost] FAST-MT Helmet (Tan)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_tan_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_rgr_F): GVAR(H_Helmet_FASTMT_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        displayName = "[Ghost] FAST-MT Helmet (Ranger Green)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_rgr_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_rgr_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_blk_F): GVAR(H_Helmet_FASTMT_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        displayName = "[Ghost] FAST-MT Helmet (Black)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_blk_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_blk_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_cbr_F): GVAR(H_Helmet_FASTMT_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        displayName = "[Ghost] FAST-MT Helmet (Coyote Brown)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_cbr_CO.paa)
        };
    };

    /* FAST-MT Helmet w/ Headset */
    class GVAR(H_Helmet_FASTMT_Headset_tan_F): GVAR(H_Helmet_FASTMT_Headset_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Headset (Tan)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Headset_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_tan_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Headset_rgr_F): GVAR(H_Helmet_FASTMT_Headset_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Headset (Ranger Green)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Headset_rgr_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_rgr_CO.paa),
            QPATHTOF(data\H_HeadsetWest_oli_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Headset_blk_F): GVAR(H_Helmet_FASTMT_Headset_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Headset (Black)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Headset_blk_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_blk_CO.paa),
            QPATHTOF(data\H_HeadsetWest_blk_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Headset_cbr_F): GVAR(H_Helmet_FASTMT_Headset_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Headset (Coyote Brown)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Headset_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_cbr_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Headset_Multicam_F): GVAR(H_Helmet_FASTMT_Headset_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Headset (Multicam)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Headset_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_Multicam_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Headset_Multicam_Snow_F): GVAR(H_Helmet_FASTMT_Headset_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Headset (Multicam Alpine)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Headset_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_Multicam_Snow_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Headset_A3_Multicam_Woodland_F): GVAR(H_Helmet_FASTMT_Headset_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Headset (Multicam Woodland)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Headset_rgr_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_A3_Multicam_Woodland_CO.paa),
            QPATHTOF(data\H_HeadsetWest_oli_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Headset_US_OCP_F): GVAR(H_Helmet_FASTMT_Headset_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Headset (US OCP)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Headset_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_US_OCP_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };

    /* FAST-MT Helmet w/ Cover */
    class GVAR(H_Helmet_FASTMT_Cover_tan_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (Tan)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_tan_CO.paa),
            QPATHTOF(data\H_HelmetFASTMT_Cover_tan_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_rgr_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (Ranger Green)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_rgr_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_rgr_CO.paa),
            QPATHTOF(data\H_HelmetFASTMT_Cover_rgr_CO.paa),
            QPATHTOF(data\H_HeadsetWest_oli_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_blk_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (Black)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_blk_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_blk_CO.paa),
            QPATHTOF(data\H_HelmetFASTMT_Cover_blk_CO.paa),
            QPATHTOF(data\H_HeadsetWest_blk_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_mtp_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (MTP)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_mtp_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_tan_CO.paa),
            QPATHTOF(data\H_ghost_HelmetFASTMT_Cover_mtp_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_tna_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (Tropic)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_tna_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_rgr_CO.paa),
            QPATHTOF(data\H_ghost_HelmetFASTMT_Cover_tna_CO.paa),
            QPATHTOF(data\H_HeadsetWest_oli_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_wdl_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (Woodland)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_wdl_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_rgr_CO.paa),
            QPATHTOF(data\H_ghost_HelmetFASTMT_Cover_wdl_CO.paa),
            QPATHTOF(data\H_HeadsetWest_oli_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_desert_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (Desert)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_Desert_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_tan_CO.paa),
            QPATHTOF(data\H_ghost_HelmetFASTMT_Cover_desert_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };
    /* FAST-MT Helmet - ACP Variants */
    class GVAR(H_Helmet_FASTMT_Multicam_F): GVAR(H_Helmet_FASTMT_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        displayName = "[Ghost] FAST-MT Helmet (Multicam)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_Multicam_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Multicam_Snow_F): GVAR(H_Helmet_FASTMT_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        displayName = "[Ghost] FAST-MT Helmet (Multicam Alpine)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_Multicam_Snow_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_A3_Multicam_Woodland_F): GVAR(H_Helmet_FASTMT_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        displayName = "[Ghost] FAST-MT Helmet (Multicam Woodland)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_rgr_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_A3_Multicam_Woodland_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_US_OCP_F): GVAR(H_Helmet_FASTMT_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        displayName = "[Ghost] FAST-MT Helmet (US OCP)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_US_OCP_CO.paa)
        };
    };

    /* FAST-MT Helmet w/ Cover - ACP Variants */
    class GVAR(H_Helmet_FASTMT_Cover_Multicam_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (Multicam)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_Multicam_CO.paa),
            QPATHTOF(data\H_HelmetFASTMT_Cover_Multicam_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_Multicam_Snow_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (Multicam Alpine)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_Multicam_Snow_CO.paa),
            QPATHTOF(data\H_HelmetFASTMT_Cover_Multicam_Snow_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_A3_Multicam_Woodland_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (Multicam Woodland)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_rgr_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_A3_Multicam_Woodland_CO.paa),
            QPATHTOF(data\H_HelmetFASTMT_Cover_A3_Multicam_Woodland_CO.paa),
            QPATHTOF(data\H_HeadsetWest_oli_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_US_OCP_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (US OCP)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_US_OCP_CO.paa),
            QPATHTOF(data\H_HelmetFASTMT_Cover_US_OCP_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };
    class GVAR(H_Helmet_FASTMT_Cover_ghost_US_OCP_F): GVAR(H_Helmet_FASTMT_Cover_base_F) {
        author = QAUTHOR;
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
        displayName = "[Ghost] FAST-MT Helmet w/ Cover (Ghost US OCP)";
        heatReduction = 1;
        picture = QPATHTOF(data\ui\Aegis_H_Helmet_FASTMT_Cover_tan_F_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\H_HelmetFASTMT_US_OCP_CO.paa),
            QPATHTOF(data\H_ghost_HelmetFASTMT_Cover_US_OCP_CO.paa),
            QPATHTOF(data\H_HeadsetWest_tan_CO.paa)
        };
    };

    /* Ghost Boonie Hats */
    class GVAR(H_Booniehat_Multicam_F): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_multicam_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(H_Booniehat_Multicam_hs_F): H_Booniehat_khk_hs {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Booniehat (Headset)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_multicam_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_multicam_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class GVAR(H_Booniehat_ocp_F): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Ghost] (OCP) Booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_ocp_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_ocp_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(H_Booniehat_ocp_hs_F): H_Booniehat_khk_hs {
        author = QAUTHOR;
        displayName = "[Ghost] (OCP) Booniehat (Headset)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_ocp_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_ocp_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class GVAR(H_Booniehat_Multicam_Snow_F): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_multicam_snow_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_multicam_snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(H_Booniehat_Multicam_Snow_hs_F): H_Booniehat_khk_hs {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Booniehat (Headset)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_multicam_snow_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_multicam_snow_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class GVAR(H_Booniehat_Multicam_Woodland_F): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_multicam_woodland_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_multicam_woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(H_Booniehat_Multicam_Woodland_hs_F): H_Booniehat_khk_hs {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Booniehat (Headset)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_multicam_woodland_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_multicam_woodland_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class GVAR(H_Booniehat_Solid_CoyoteBrown_F): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Ghost] (Coyote) Booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_solid_coyotebrown_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_solid_coyotebrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(H_Booniehat_Solid_CoyoteBrown_hs_F): H_Booniehat_khk_hs {
        author = QAUTHOR;
        displayName = "[Ghost] (Coyote) Booniehat (Headset)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_solid_coyotebrown_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_solid_coyotebrown_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class GVAR(H_Booniehat_Solid_Ranger_Green_F): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Ghost] (Ranger Green) Booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_solid_ranger_green_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_solid_ranger_green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(H_Booniehat_Solid_Ranger_Green_hs_F): H_Booniehat_khk_hs {
        author = QAUTHOR;
        displayName = "[Ghost] (Ranger Green) Booniehat (Headset)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_solid_ranger_green_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_solid_ranger_green_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class GVAR(H_Booniehat_Solid_Olive_F): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Ghost] (Olive) Booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_solid_olive_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_solid_olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(H_Booniehat_Solid_Olive_hs_F): H_Booniehat_khk_hs {
        author = QAUTHOR;
        displayName = "[Ghost] (Olive) Booniehat (Headset)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_solid_olive_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_solid_olive_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class GVAR(H_Booniehat_Solid_Tan_F): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Ghost] (Tan) Booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_solid_tan_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_solid_tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(H_Booniehat_Solid_Tan_hs_F): H_Booniehat_khk_hs {
        author = QAUTHOR;
        displayName = "[Ghost] (Tan) Booniehat (Headset)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_solid_tan_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_solid_tan_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class GVAR(H_Booniehat_Solid_White_F): H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Ghost] (White) Booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_solid_white_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_solid_white_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(H_Booniehat_Solid_White_hs_F): H_Booniehat_khk_hs {
        author = QAUTHOR;
        displayName = "[Ghost] (White) Booniehat (Headset)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_solid_white_co.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\booniehat.rvmat)};
        heatReduction = 1;
        picture = QPATHTOF(data\ui\icon_h_booniehat_solid_white_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
#include "acp_full.hpp"
};
