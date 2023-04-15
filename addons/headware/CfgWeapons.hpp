#include "script_component.hpp"
class CfgWeapons {
    class ItemMain;
    class headgearItem;
    class H_HelmetB_plain_mcamo;
    class H_HelmetHBK_F;
    class H_HelmetHBK_headset_F;
    class H_HelmetHBK_ear_F;
    class H_HelmetHBK_chops_F;
    class H_Booniehat_khk;
    class H_Booniehat_khk_hs;
    class H_Cap_oli;
    class H_Cap_oli_hs;
    class H_HelmetB: ItemMain {
        class ItemInfo;
    };
    class H_HelmetB_plain_mcamo;
    class H_HelmetSpecB: H_HelmetB_plain_mcamo {
        class ItemInfo;
    };
    class H_HelmetB_camo;
    class H_HelmetB_light: H_HelmetB {
        class ItemInfo;
    };

    class ghost_main_H_HelmetB_light_basic_base: H_HelmetB_light {
        scope = 0;
        model = "\A3\Characters_F\Common\headgear_placeholder.p3d";
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\Common\headgear_placeholder.p3d";
        };
    };
    class ghost_main_H_HelmetB_light_base: H_HelmetB_light {
        scope = 0;
        model = "\A3\Characters_F\BLUFOR\headgear_B_Helmet_light.p3d";
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_B_Helmet_light.p3d";
        };
    };
    class ghost_H_HelmetB_light_solid_black: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](black) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equip1_solid_black_co.paa)
        };
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_solid_black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_basic_solid_black: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](black) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_solid_black_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_solid_black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_US_M81: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](M81) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equip1_US_M81_co.paa)
        };
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_basic_US_M81: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](M81) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_US_M81_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_Multicam: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Multicam) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equip1_Multicam_co.paa)
        };
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_basic_Multicam: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Multicam) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Multicam_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_Multicam_Snow: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Multicam Snow) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Multicam_Snow_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_basic_Multicam_Snow: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Multicam Snow) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Multicam_Snow_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_Multicam_Woodland: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Multicam Woodland) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Multicam_Woodland_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_basic_Multicam_Woodland: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Multicam Woodland) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Multicam_Woodland_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_Solid_CoyoteBrown: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](CoyoteBrown) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Solid_CoyoteBrown_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_basic_Solid_CoyoteBrown: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](CoyoteBrown) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Solid_CoyoteBrown_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_Solid_Olive: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Olive) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Solid_Olive_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_basic_Solid_Olive: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Olive) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Solid_Olive_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_Solid_Ranger_Green: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Ranger Green) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Solid_Ranger_Green_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_basic_Solid_Ranger_Green: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Ranger Green) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Solid_Ranger_Green_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_Solid_Tan: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Tan) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Solid_Tan_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_basic_Solid_Tan: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](Tan) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Solid_Tan_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_light_Solid_White: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](White) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Solid_White_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_HelmetB_light_basic_Solid_White: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST](White) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_Solid_White_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_US__H_HelmetB_light_US_DCU: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST][US DCU) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_US_DCU_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_US_H_HelmetB_light_DCU: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST][US DCU) Light Combat Helmet";
        hiddenSelectionsTextures[] = {QPATHTOF(data\equip1_US_DCU_co.paa)};
        picture = QPATHTOF(data\UI\icon_H_HelmetB_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_HelmetB_light_US_Tigerstripe: ghost_main_H_HelmetB_light_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST] (Tigerstripe) Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equip1_US_Tigerstripe_co.paa)
        };
        picture = QPATHTOF(data\UI\icon_H_HelmetB_light_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_HelmetB_light_Tigerstripe: ghost_main_H_HelmetB_light_basic_base {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName = "[GHOST] (Tigerstripe) Light Combat Helmet";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equip1_US_Tigerstripe_co.paa)
        };
        picture = QPATHTOF(data\UI\icon_H_HelmetB_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_Multicam: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_Solid_Olive: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Olive) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Olive_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_Solid_Tan: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tan) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Tan_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_Solid_White: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (White) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_White_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_US_DCU: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (DCU) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_DCU_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_US_M81: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (M81) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_M81_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_Multicam_Snow: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Snow) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_Snow_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_Multicam_Woodland: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Woodland) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_Woodland_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_Solid_Black: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Black) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Black_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_Solid_CoyoteBrown: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Coyote) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_CoyoteBrown_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_Solid_Ranger_Green: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Ranger Green) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Ranger_Green_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_F_US_Tigerstripe: H_HelmetHBK_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tigerstripe) Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_Tigerstripe_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_F_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_Multicam: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_Multicam_Snow: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Snow) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_Snow_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_Multicam_Woodland: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Woodland) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_Woodland_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_Solid_Black: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Black) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Black_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_Solid_CoyoteBrown: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Coyote) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_CoyoteBrown_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_Solid_Ranger_Green: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Ranger Green) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Ranger_Green_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_US_Tigerstripe: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tigerstripe) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_Tigerstripe_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_Solid_Olive: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Olive) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Olive_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_Solid_Tan: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tan) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Tan_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_Solid_White: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (White) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_White_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_US_DCU: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (DCU) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_DCU_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_headset_F_US_M81: H_HelmetHBK_headset_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (M81) Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_M81_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_headset_F_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_Multicam: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_Multicam_Snow: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Snow) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_Snow_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_Multicam_Woodland: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Woodland) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_Woodland_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_Solid_Black: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Black) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Black_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_Solid_CoyoteBrown: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Coyote) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_CoyoteBrown_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_Solid_Ranger_Green: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Ranger Green) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Ranger_Green_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_US_Tigerstripe: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tigerstripe) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_Tigerstripe_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_Solid_Olive: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Olive) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Olive_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_Solid_Tan: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tan) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Tan_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_Solid_White: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (White) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_White_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_US_DCU: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (DCU) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_DCU_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_ear_F_US_M81: H_HelmetHBK_ear_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (M81) Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_M81_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_ear_F_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_Multicam: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_Multicam_Snow: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Snow) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_Snow_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_Multicam_Woodland: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Woodland) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Multicam_Woodland_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_Solid_Black: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Black) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Black_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_Solid_CoyoteBrown: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Coyote) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_CoyoteBrown_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_Solid_Ranger_Green: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Ranger Green) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Ranger_Green_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_US_Tigerstripe: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tigerstripe) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_Tigerstripe_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_Solid_Olive: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Olive) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Olive_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_Solid_Tan: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tan) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_Tan_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_Solid_White: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (White) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_Solid_White_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_US_DCU: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (DCU) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_DCU_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetHBK_chops_F_US_M81: H_HelmetHBK_chops_F {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (M81) Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\H_HelmetHBK_01_US_M81_CO.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetHBK_chops_F_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
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
    class ghost_H_HelmetB_Multicam: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_Multicam: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Multicam_ca.paa);
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
    class ghost_H_HelmetB_Multicam_Snow: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Snow) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_Multicam_Snow: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Snow) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Multicam_Snow_ca.paa);
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
    class ghost_H_HelmetB_Multicam_Woodland: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Woodland) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_Multicam_Woodland: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Multicam Woodland) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Multicam_Woodland_ca.paa);
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
    class ghost_H_HelmetB_Solid_Black: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Black) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_Solid_Black: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Black) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_Black_ca.paa);
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
    class ghost_H_HelmetB_Solid_CoyoteBrown: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Coyote) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_Solid_CoyoteBrown: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Coyote) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_CoyoteBrown_ca.paa);
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
    class ghost_H_HelmetB_Solid_Ranger_Green: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Ranger Green) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_Solid_Ranger_Green: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Ranger Green) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_Ranger_Green_ca.paa);
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
    class ghost_H_HelmetB_US_Tigerstripe: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tigerstripe) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_US_Tigerstripe: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tigerstripe) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_US_Tigerstripe_ca.paa);
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
    class ghost_H_HelmetB_Solid_Olive: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Olive) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_Solid_Olive: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Olive) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_Olive_ca.paa);
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
    class ghost_H_HelmetB_Solid_Tan: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tan) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_Solid_Tan: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (Tan) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_Tan_ca.paa);
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
    class ghost_H_HelmetB_Solid_White: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (White) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_Solid_White: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (White) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_White_ca.paa);
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
    class ghost_H_HelmetB_US_DCU: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (DCU) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_US_DCU: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (DCU) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_US_DCU_ca.paa);
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
    class ghost_H_HelmetB_US_M81: H_HelmetB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (M81) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetSpecB_US_M81: H_HelmetSpecB {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo"
        };
        displayName="[GHOST] (M81) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_Multicam: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (Multicam) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_co.paa),
            QPATHTOF(data\ghillie_2_Multicam_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_Multicam_Snow: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (Multicam Snow) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Snow_co.paa),
            QPATHTOF(data\ghillie_2_Multicam_Snow_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_Multicam_Woodland: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (Multicam Woodland) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Woodland_co.paa),
            QPATHTOF(data\ghillie_2_Multicam_Woodland_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_Solid_Black: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (Black) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Black_co.paa),
            QPATHTOF(data\ghillie_2_Solid_Black_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_Solid_CoyoteBrown: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (Coyote) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_CoyoteBrown_co.paa),
            QPATHTOF(data\ghillie_2_Solid_CoyoteBrown_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_Solid_Ranger_Green: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (Ranger Green) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Ranger_Green_co.paa),
            QPATHTOF(data\ghillie_2_Solid_Ranger_Green_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_US_Tigerstripe: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (Tigerstripe) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_US_Tigerstripe_co.paa),
            QPATHTOF(data\ghillie_2_US_Tigerstripe_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_Solid_Olive: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (Olive) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Olive_co.paa),
            QPATHTOF(data\ghillie_2_Solid_Olive_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_Solid_Tan: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (Tan) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Tan_co.paa),
            QPATHTOF(data\ghillie_2_Solid_Tan_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_Solid_White: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (White) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_White_co.paa),
            QPATHTOF(data\ghillie_2_Solid_White_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_US_DCU: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (DCU) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_US_DCU_co.paa),
            QPATHTOF(data\ghillie_2_US_DCU_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_HelmetB_camo_US_M81: H_HelmetB_camo {
        author = QAUTHOR;
        Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left";
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[GHOST] (M81) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_US_M81_co.paa),
            QPATHTOF(data\ghillie_2_US_M81_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class opsmain_sf_arid: opsmain_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_arid_amp: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_arid_full: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_black: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_black_amp: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_black_full: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_mc: opsmain_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_mc_amp: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_mc_full: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_od: opsmain_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_od_amp: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_od_full: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_rgr: opsmain_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_rgr_amp: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_rgr_full: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_tan: opsmain_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_tan_amp: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opsmain_sf_tan_full: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_RGR_hexagon {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_goggles_khk_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_goggles_CB_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_goggles_RGR_hexagon: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_01_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_02_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_03_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_04_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_05_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opsmain_06_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_goggles_khk: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_goggles_RGR: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_goggles_CB: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_goggles_MC: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
// fox2
    class FPGP_2_OpsmainMar_Snakeskin_blk_amp_1: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_amp_1_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_amp_2: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_amp_2_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_amp_3: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_amp_3_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_amp_4: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_amp_4_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_amp_5: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_amp_5_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_Ct_1: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_Ct_1_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_ct_2: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_ct_2_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_ct_3: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_ct_3_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_ct_4: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_ct_4_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_ct_5: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_blk_ct_5_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_amp_1: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_amp_1_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_Amp_2: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_Amp_2_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_Amp_3: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_Amp_3_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_Amp_4: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_Amp_4_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_Amp_5: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_Amp_5_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_Ct_1: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_Ct_1_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_ct_2: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_ct_2_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_ct_3: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_ct_3_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_ct_4: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_ct_4_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_ct_5: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_OpsmainMar_Snakeskin_Tan_ct_5_us: ItemMain {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
};
