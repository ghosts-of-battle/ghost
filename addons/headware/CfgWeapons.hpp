#include "script_component.hpp"
class CfgWeapons {
    class ItemCore;
    class headgearItem;
    class H_Booniehat_khk;
    class H_Booniehat_khk_hs;
    class H_Cap_oli;
    class H_Cap_oli_hs;
    class ghost_Multicam_H_Booniehat_Multicam: H_Booniehat_khk {
        author = "Seb";
        displayName = "[GHOST] (Multicam) Booniehat ";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_Multicam_co.paa)
            };
        picture = QPATHTOF(data\UI\icon_H_booniehat_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Multicam_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Multicam_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Multicam: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Multicam_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Multicam_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Multicam_Snow: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Snow) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Multicam_Snow_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Snow) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Multicam_Snow_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Multicam_Snow: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Snow) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Multicam_Snow_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Snow) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Multicam_Snow_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Multicam_Woodland: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Woodland) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Multicam_Woodland_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Woodland) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Multicam_Woodland_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Multicam_Woodland: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Woodland) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Multicam_Woodland_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Woodland) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Multicam_Woodland_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_Black: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Black) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_Black_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Black) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_Black_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_Black: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Black) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_Black_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Black) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_Black_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_CoyoteBrown: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Coyote) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_CoyoteBrown_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Coyote) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_CoyoteBrown_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_CoyoteBrown: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Coyote) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_CoyoteBrown_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Coyote) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_CoyoteBrown_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_Ranger_Green: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Ranger Green) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_Ranger_Green_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Ranger Green) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_Ranger_Green_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_Ranger_Green: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Ranger Green) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_Ranger_Green_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Ranger Green) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_Ranger_Green_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_US_Tigerstripe: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tigerstripe) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_US_Tigerstripe_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tigerstripe) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_US_Tigerstripe_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_US_Tigerstripe: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tigerstripe) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_US_Tigerstripe_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tigerstripe) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_US_Tigerstripe_hs_ca.paa);
        MACRO_ITEM_COMMON
    };

    class ghost_H_Booniehat_Solid_Olive: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Olive) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_Olive_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Olive) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_Olive_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_Olive: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Olive) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_Olive_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Olive) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_Olive_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_Tan: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tan) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_Tan_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tan) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_Tan_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_Tan: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tan) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_Tan_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tan) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_Tan_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_White: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (White) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_White_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (White) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_White_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_White: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (White) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_Solid_White_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (White) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_Solid_White_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_US_DCU: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (DCU) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_US_DCU_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (DCU) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_US_DCU_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_US_DCU: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (DCU) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_US_DCU_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (DCU) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_US_DCU_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_US_M81: H_Booniehat_khk {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (M81) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_US_M81_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (M81) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_US_M81_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_US_M81: H_Cap_oli {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (M81) Cap";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Cap_US_M81_hs: H_Cap_oli_hs {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (M81) Cap (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\capb_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Cap_US_M81_hs_ca.paa);
        MACRO_ITEM_COMMON
    };
};
