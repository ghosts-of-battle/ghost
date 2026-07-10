class CfgWeapons {
    class ItemCore;
    class H_HelmetB_plain_mcamo;
    class H_Booniehat_khk;
    class H_Booniehat_khk_hs;
    class H_HelmetB: ItemCore {};
    class H_HelmetSpecB: H_HelmetB_plain_mcamo {};
    class H_HelmetB_camo;
    class ghost_Multicam_H_Booniehat_Multicam: H_Booniehat_khk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\booniehat_Multicam_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_H_booniehat_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Multicam_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Multicam_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_Multicam: H_HelmetB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Multicam_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetSpecB_Multicam: H_HelmetSpecB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Multicam_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_Booniehat_Multicam_Snow: H_Booniehat_khk {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam Snow) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Multicam_Snow_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam Snow) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Multicam_Snow_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_Multicam_Snow: H_HelmetB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam Snow) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetSpecB_Multicam_Snow: H_HelmetSpecB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam Snow) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_Booniehat_Multicam_Woodland: H_Booniehat_khk {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam Woodland) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Multicam_Woodland_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam Woodland) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Multicam_Woodland_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_Multicam_Woodland: H_HelmetB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam Woodland) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetSpecB_Multicam_Woodland: H_HelmetSpecB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Multicam Woodland) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_Booniehat_Solid_CoyoteBrown: H_Booniehat_khk {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Coyote) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_CoyoteBrown_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Coyote) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_CoyoteBrown_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_Solid_CoyoteBrown: H_HelmetB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Coyote) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetSpecB_Solid_CoyoteBrown: H_HelmetSpecB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Coyote) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_Booniehat_Solid_Ranger_Green: H_Booniehat_khk {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Ranger Green) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_Ranger_Green_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Ranger Green) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_Ranger_Green_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_Solid_Ranger_Green: H_HelmetB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Ranger Green) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetSpecB_Solid_Ranger_Green: H_HelmetSpecB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Ranger Green) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_Booniehat_Solid_Olive: H_Booniehat_khk {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Olive) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_Olive_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Olive) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_Olive_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_Solid_Olive: H_HelmetB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Olive) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetSpecB_Solid_Olive: H_HelmetSpecB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Olive) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_Booniehat_Solid_Tan: H_Booniehat_khk {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Tan) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_Tan_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Tan) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_Tan_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_Solid_Tan: H_HelmetB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Tan) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetSpecB_Solid_Tan: H_HelmetSpecB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (Tan) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_Booniehat_Solid_White: H_Booniehat_khk {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (White) Booniehat ";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_booniehat_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghost_H_Booniehat_Solid_White_hs: H_Booniehat_khk_hs {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (White) Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\booniehat_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_Booniehat_Solid_White_hs_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_Solid_White: H_HelmetB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (White) Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetSpecB_Solid_White: H_HelmetSpecB {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo"
        };
        displayName="[Ghost] (White) Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetSpecB_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_camo_Multicam: H_HelmetB_camo {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[Ghost] (Multicam) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_co.paa),
            QPATHTOF(data\ghillie_2_Multicam_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Multicam_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_camo_Multicam_Snow: H_HelmetB_camo {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[Ghost] (Multicam Snow) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Snow_co.paa),
            QPATHTOF(data\ghillie_2_Multicam_Snow_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_camo_Multicam_Woodland: H_HelmetB_camo {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[Ghost] (Multicam Woodland) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Multicam_Woodland_co.paa),
            QPATHTOF(data\ghillie_2_Multicam_Woodland_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_camo_Solid_CoyoteBrown: H_HelmetB_camo {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[Ghost] (Coyote) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_CoyoteBrown_co.paa),
            QPATHTOF(data\ghillie_2_Solid_CoyoteBrown_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_camo_Solid_Ranger_Green: H_HelmetB_camo {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[Ghost] (Ranger Green) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Ranger_Green_co.paa),
            QPATHTOF(data\ghillie_2_Solid_Ranger_Green_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_camo_Solid_Olive: H_HelmetB_camo {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[Ghost] (Olive) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Olive_co.paa),
            QPATHTOF(data\ghillie_2_Solid_Olive_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_camo_Solid_Tan: H_HelmetB_camo {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[Ghost] (Tan) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_Tan_co.paa),
            QPATHTOF(data\ghillie_2_Solid_Tan_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class ghost_H_HelmetB_camo_Solid_White: H_HelmetB_camo {
        author = QAUTHOR;
        hiddenSelections[]= {
            "camo",
            "camo2"
        };
        displayName="[Ghost] (White) Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\equip1_Solid_White_co.paa),
            QPATHTOF(data\ghillie_2_Solid_White_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_H_HelmetB_camo_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
        MACRO_ACE_HEARING
    };
    class opscore_sf_black: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_black_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_black_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_mc: opscore_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_mc_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_mc_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_od: opscore_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_od_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_od_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_rgr: opscore_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_rgr_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_rgr_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_tan: opscore_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_tan_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_tan_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_01_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_02_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_03_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_04_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_RGR_hexagon {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_05_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_airframe_06_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_goggles_khk_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_goggles_CB_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_goggles_RGR_hexagon: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_01_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_02_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_03_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_04_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_05_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_opscore_06_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_02_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_03_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_goggles_khk: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_goggles_RGR: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_goggles_CB: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_02_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class milgp_h_cap_backwards_03_goggles_MC: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
// fox2
    class FPGP_2_opscoreMar_Snakeskin_blk_amp_1: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_amp_1_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_amp_2: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_amp_2_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_amp_3: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_amp_3_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_amp_4: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_amp_4_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_amp_5: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_amp_5_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_Ct_1: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_Ct_1_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_ct_2: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_ct_2_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_ct_3: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_ct_3_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_ct_4: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_ct_4_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_ct_5: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_blk_ct_5_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_amp_1: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_amp_1_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_Amp_2: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_Amp_2_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_Amp_3: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_Amp_3_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_Amp_4: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_Amp_4_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_Amp_5: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_Amp_5_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_Ct_1: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_Ct_1_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_ct_2: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_ct_2_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_ct_3: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_ct_3_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_ct_4: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_ct_4_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_ct_5: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class FPGP_2_opscoreMar_Snakeskin_Tan_ct_5_us: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };





















};
