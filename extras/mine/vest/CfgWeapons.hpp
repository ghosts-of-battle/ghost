class CfgWeapons {
    class ItemCore;
    class Vest_NoCamo_Base;
    class Vest_Camo_Base: ItemCore     {
        class ItemInfo;
    };
    class V_PlateCarrierSpec_rgr: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_PlateCarrierGL_rgr: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier1_blk: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
        class ItemInfo;
    };    
    class V_PlateCarrierSpec_blk: V_PlateCarrierSpec_rgr {
        class ItemInfo;
    };
    class V_PlateCarrierGL_blk: V_PlateCarrierGL_rgr {
        class ItemInfo;
    };
    class V_PlateCarrier2_blk: V_PlateCarrier2_rgr {
        class ItemInfo;
    };
    class V_BandollierB_blk: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_base_F: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_heavy_base_F: V_CarrierRigKBT_01_base_F {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_heavy_Olive_F: V_CarrierRigKBT_01_heavy_base_F {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_light_base_F: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_light_Olive_F: V_CarrierRigKBT_01_light_base_F {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_Olive_F: V_CarrierRigKBT_01_base_F {
        class ItemInfo;
    };

    class Crye_AVS_1: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class Crye_AVS_1_1: Crye_AVS_1 {
        class ItemInfo;
    };
    class Crye_AVS_1_2: Crye_AVS_1 {
        class ItemInfo;
    };
    class Crye_AVS_1_3: Crye_AVS_1 {
        class ItemInfo;
    };
    class Crye_AVS_2: Crye_AVS_1 {
        class ItemInfo;
    };

    class GVAR(Crye_AVS_1_Multicam): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam.paa),
            QPATHTOF(data\AVS_Belt556_Multicam.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam.paa),
            QPATHTOF(data\AVS_Radio_Multicam.paa),
            QPATHTOF(data\AVS_glockMags_Multicam.paa),
            QPATHTOF(data\AVS_pouch556_Multicam.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam.paa),
            QPATHTOF(data\AVS_S20_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Multicam): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam.paa),
            QPATHTOF(data\AVS_Belt556_Multicam.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam.paa),
            QPATHTOF(data\AVS_Radio_Multicam.paa),
            QPATHTOF(data\AVS_Kangaroo_Multicam.paa),
            QPATHTOF(data\AVS_glockMags_Multicam.paa),
            QPATHTOF(data\AVS_pouch556_Multicam.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam.paa),
            QPATHTOF(data\AVS_S20_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Multicam): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam.paa),
            QPATHTOF(data\AVS_Mk4_Multicam.paa),
            QPATHTOF(data\AVS_Belt556_Multicam.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam.paa),
            QPATHTOF(data\AVS_Radio_Multicam.paa),
            QPATHTOF(data\AVS_glockMags_Multicam.paa),
            QPATHTOF(data\AVS_pouch556_Multicam.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam.paa),
            QPATHTOF(data\AVS_S20_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Multicam): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam.paa),
            QPATHTOF(data\AVS_AVSPouchT_Multicam.paa),
            QPATHTOF(data\AVS_Belt556_Multicam.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam.paa),
            QPATHTOF(data\AVS_Radio_Multicam.paa),
            QPATHTOF(data\AVS_glockMags_Multicam.paa),
            QPATHTOF(data\AVS_pouch556_Multicam.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam.paa),
            QPATHTOF(data\AVS_S20_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Multicam): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam.paa),
            QPATHTOF(data\AVS_Radio_Multicam.paa),
            QPATHTOF(data\AVS_LMGpouches_Multicam.paa),
            QPATHTOF(data\AVS_glockMags_Multicam.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam.paa),
            QPATHTOF(data\AVS_S20_Multicam.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Multicam_Snow): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Multicam Snow) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Snow.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Snow.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Snow.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Snow.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Snow.paa),
            QPATHTOF(data\AVS_S20_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Snow.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Multicam_Snow): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Multicam Snow) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Snow.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Kangaroo_Multicam_Snow.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Snow.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Snow.paa),
            QPATHTOF(data\AVS_S20_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Snow.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Multicam_Snow): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Multicam Snow) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Mk4_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Snow.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Snow.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Snow.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Snow.paa),
            QPATHTOF(data\AVS_S20_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Snow.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Multicam_Snow): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Multicam Snow) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Snow.paa),
            QPATHTOF(data\AVS_AVSPouchT_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Snow.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Snow.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Snow.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Snow.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Snow.paa),
            QPATHTOF(data\AVS_S20_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Crye_AVS_2_Multicam_Snow): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Multicam Snow) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Snow.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Snow.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Snow.paa),
            QPATHTOF(data\AVS_LMGpouches_Multicam_Snow.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Snow.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Snow.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Snow.paa),
            QPATHTOF(data\AVS_S20_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Snow.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Multicam_Woodland): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Multicam Woodland) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_S20_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Multicam_Woodland): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Multicam Woodland) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Kangaroo_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_S20_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Multicam_Woodland): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Multicam Woodland) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Mk4_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_S20_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Multicam_Woodland): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Multicam Woodland) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_AVSPouchT_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Belt556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_GPpouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_pouch556_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_S20_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Multicam_Woodland): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Multicam Woodland) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_AVSPouch_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BluforMed_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Cumberbands_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_BeltGBRS_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Radio_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_LMGpouches_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_glockMags_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_SFL_Holster_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_Sideplate_Multicam_Woodland.paa),
            QPATHTOF(data\AVS_S20_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Solid_CoyoteBrown): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Coyote) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Belt556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Radio_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_glockMags_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_pouch556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_S20_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Solid_CoyoteBrown): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Coyote) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Belt556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Radio_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Kangaroo_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_glockMags_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_pouch556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_S20_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Solid_CoyoteBrown): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Coyote) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Mk4_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Belt556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Radio_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_glockMags_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_pouch556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_S20_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Solid_CoyoteBrown): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Coyote) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_AVSPouchT_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Belt556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Radio_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_glockMags_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_pouch556_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_S20_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Solid_CoyoteBrown): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Coyote) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Radio_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_LMGpouches_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_glockMags_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_CoyoteBrown.paa),
            QPATHTOF(data\AVS_S20_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Solid_Ranger_Green): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Ranger) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Radio_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_S20_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Solid_Ranger_Green): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Ranger) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Radio_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Kangaroo_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_S20_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Solid_Ranger_Green): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Ranger) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Mk4_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Radio_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_S20_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Solid_Ranger_Green): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Ranger) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_AVSPouchT_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Radio_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_S20_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Solid_Ranger_Green): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Ranger) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Radio_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_LMGpouches_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Ranger_Green.paa),
            QPATHTOF(data\AVS_S20_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_US_Tigerstripe): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Tigerstripe) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_AVSPouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Belt556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BluforMed_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Cumberbands_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_GPpouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Radio_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_glockMags_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_pouch556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Sideplate_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_S20_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_US_Tigerstripe): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Tigerstripe) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Belt556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BluforMed_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Cumberbands_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_GPpouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Radio_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Kangaroo_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_glockMags_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_pouch556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Sideplate_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_S20_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_US_Tigerstripe): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Tigerstripe) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Mk4_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Belt556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BluforMed_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Cumberbands_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_GPpouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Radio_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_glockMags_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_pouch556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Sideplate_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_S20_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_US_Tigerstripe): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Tigerstripe) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_AVSPouchT_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Belt556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BluforMed_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Cumberbands_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_GPpouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Radio_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_glockMags_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_pouch556_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Sideplate_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_S20_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_US_Tigerstripe): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Tigerstripe) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_AVSPouch_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BluforMed_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Cumberbands_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Radio_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_LMGpouches_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_glockMags_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_Sideplate_US_Tigerstripe.paa),
            QPATHTOF(data\AVS_S20_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Solid_Olive): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Olive) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Olive.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Olive.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Olive.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Olive.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Olive.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_Radio_Solid_Olive.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Olive.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Olive.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Olive.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Olive.paa),
            QPATHTOF(data\AVS_S20_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Olive.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Solid_Olive): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Olive) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Olive.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Olive.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Olive.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Olive.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Olive.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_Radio_Solid_Olive.paa),
            QPATHTOF(data\AVS_Kangaroo_Solid_Olive.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Olive.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Olive.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Olive.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Olive.paa),
            QPATHTOF(data\AVS_S20_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Olive.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Solid_Olive): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Olive) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Olive.paa),
            QPATHTOF(data\AVS_Mk4_Solid_Olive.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Olive.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Olive.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Olive.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Olive.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_Radio_Solid_Olive.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Olive.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Olive.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Olive.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Olive.paa),
            QPATHTOF(data\AVS_S20_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Olive.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Solid_Olive): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Olive) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Olive.paa),
            QPATHTOF(data\AVS_AVSPouchT_Solid_Olive.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Olive.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Olive.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Olive.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Olive.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_Radio_Solid_Olive.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Olive.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Olive.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Olive.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Olive.paa),
            QPATHTOF(data\AVS_S20_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Olive.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Solid_Olive): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Olive) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Olive.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Olive.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Olive.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Olive.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Olive.paa),
            QPATHTOF(data\AVS_Radio_Solid_Olive.paa),
            QPATHTOF(data\AVS_LMGpouches_Solid_Olive.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Olive.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Olive.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Olive.paa),
            QPATHTOF(data\AVS_S20_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Olive.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Solid_Tan): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Tan) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Tan.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Tan.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Tan.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Tan.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Tan.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_Radio_Solid_Tan.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Tan.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Tan.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Tan.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Tan.paa),
            QPATHTOF(data\AVS_S20_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Tan.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Solid_Tan): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Tan) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Tan.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Tan.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Tan.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Tan.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Tan.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_Radio_Solid_Tan.paa),
            QPATHTOF(data\AVS_Kangaroo_Solid_Tan.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Tan.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Tan.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Tan.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Tan.paa),
            QPATHTOF(data\AVS_S20_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Tan.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Solid_Tan): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Tan) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Tan.paa),
            QPATHTOF(data\AVS_Mk4_Solid_Tan.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Tan.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Tan.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Tan.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Tan.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_Radio_Solid_Tan.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Tan.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Tan.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Tan.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Tan.paa),
            QPATHTOF(data\AVS_S20_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Tan.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Solid_Tan): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Tan) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Tan.paa),
            QPATHTOF(data\AVS_AVSPouchT_Solid_Tan.paa),
            QPATHTOF(data\AVS_Belt556_Solid_Tan.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Tan.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Tan.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Tan.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_Radio_Solid_Tan.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Tan.paa),
            QPATHTOF(data\AVS_pouch556_Solid_Tan.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Tan.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Tan.paa),
            QPATHTOF(data\AVS_S20_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Tan.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Solid_Tan): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (Tan) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_Tan.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_Tan.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_Tan.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_Tan.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_Tan.paa),
            QPATHTOF(data\AVS_Radio_Solid_Tan.paa),
            QPATHTOF(data\AVS_LMGpouches_Solid_Tan.paa),
            QPATHTOF(data\AVS_glockMags_Solid_Tan.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_Tan.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_Tan.paa),
            QPATHTOF(data\AVS_S20_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_Tan.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_Solid_White): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (White) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_White.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_White.paa),
            QPATHTOF(data\AVS_Belt556_Solid_White.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_White.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_White.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_White.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_White.paa),
            QPATHTOF(data\AVS_Radio_Solid_White.paa),
            QPATHTOF(data\AVS_glockMags_Solid_White.paa),
            QPATHTOF(data\AVS_pouch556_Solid_White.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_White.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_White.paa),
            QPATHTOF(data\AVS_S20_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_White.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_Solid_White): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (White) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_White.paa),
            QPATHTOF(data\AVS_Belt556_Solid_White.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_White.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_White.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_White.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_White.paa),
            QPATHTOF(data\AVS_Radio_Solid_White.paa),
            QPATHTOF(data\AVS_Kangaroo_Solid_White.paa),
            QPATHTOF(data\AVS_glockMags_Solid_White.paa),
            QPATHTOF(data\AVS_pouch556_Solid_White.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_White.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_White.paa),
            QPATHTOF(data\AVS_S20_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_White.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_Solid_White): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (White) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_White.paa),
            QPATHTOF(data\AVS_Mk4_Solid_White.paa),
            QPATHTOF(data\AVS_Belt556_Solid_White.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_White.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_White.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_White.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_White.paa),
            QPATHTOF(data\AVS_Radio_Solid_White.paa),
            QPATHTOF(data\AVS_glockMags_Solid_White.paa),
            QPATHTOF(data\AVS_pouch556_Solid_White.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_White.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_White.paa),
            QPATHTOF(data\AVS_S20_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_White.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_Solid_White): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (White) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_White.paa),
            QPATHTOF(data\AVS_AVSPouchT_Solid_White.paa),
            QPATHTOF(data\AVS_Belt556_Solid_White.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_White.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_White.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_White.paa),
            QPATHTOF(data\AVS_GPpouch_Solid_White.paa),
            QPATHTOF(data\AVS_Radio_Solid_White.paa),
            QPATHTOF(data\AVS_glockMags_Solid_White.paa),
            QPATHTOF(data\AVS_pouch556_Solid_White.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_White.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_White.paa),
            QPATHTOF(data\AVS_S20_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_White.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_Solid_White): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (White) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_Solid_White.paa),
            QPATHTOF(data\AVS_AVSPouch_Solid_White.paa),
            QPATHTOF(data\AVS_BluforMed_Solid_White.paa),
            QPATHTOF(data\AVS_Cumberbands_Solid_White.paa),
            QPATHTOF(data\AVS_BeltGBRS_Solid_White.paa),
            QPATHTOF(data\AVS_Radio_Solid_White.paa),
            QPATHTOF(data\AVS_LMGpouches_Solid_White.paa),
            QPATHTOF(data\AVS_glockMags_Solid_White.paa),
            QPATHTOF(data\AVS_SFL_Holster_Solid_White.paa),
            QPATHTOF(data\AVS_Sideplate_Solid_White.paa),
            QPATHTOF(data\AVS_S20_Solid_White.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_Solid_White.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_US_DCU): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (DCU) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_DCU.paa),
            QPATHTOF(data\AVS_AVSPouch_US_DCU.paa),
            QPATHTOF(data\AVS_Belt556_US_DCU.paa),
            QPATHTOF(data\AVS_BluforMed_US_DCU.paa),
            QPATHTOF(data\AVS_Cumberbands_US_DCU.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_DCU.paa),
            QPATHTOF(data\AVS_GPpouch_US_DCU.paa),
            QPATHTOF(data\AVS_Radio_US_DCU.paa),
            QPATHTOF(data\AVS_glockMags_US_DCU.paa),
            QPATHTOF(data\AVS_pouch556_US_DCU.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_DCU.paa),
            QPATHTOF(data\AVS_Sideplate_US_DCU.paa),
            QPATHTOF(data\AVS_S20_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_DCU.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_1_US_DCU): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (DCU) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_DCU.paa),
            QPATHTOF(data\AVS_Belt556_US_DCU.paa),
            QPATHTOF(data\AVS_BluforMed_US_DCU.paa),
            QPATHTOF(data\AVS_Cumberbands_US_DCU.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_DCU.paa),
            QPATHTOF(data\AVS_GPpouch_US_DCU.paa),
            QPATHTOF(data\AVS_Radio_US_DCU.paa),
            QPATHTOF(data\AVS_Kangaroo_US_DCU.paa),
            QPATHTOF(data\AVS_glockMags_US_DCU.paa),
            QPATHTOF(data\AVS_pouch556_US_DCU.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_DCU.paa),
            QPATHTOF(data\AVS_Sideplate_US_DCU.paa),
            QPATHTOF(data\AVS_S20_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_DCU.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_2_US_DCU): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (DCU) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_DCU.paa),
            QPATHTOF(data\AVS_Mk4_US_DCU.paa),
            QPATHTOF(data\AVS_Belt556_US_DCU.paa),
            QPATHTOF(data\AVS_BluforMed_US_DCU.paa),
            QPATHTOF(data\AVS_Cumberbands_US_DCU.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_DCU.paa),
            QPATHTOF(data\AVS_GPpouch_US_DCU.paa),
            QPATHTOF(data\AVS_Radio_US_DCU.paa),
            QPATHTOF(data\AVS_glockMags_US_DCU.paa),
            QPATHTOF(data\AVS_pouch556_US_DCU.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_DCU.paa),
            QPATHTOF(data\AVS_Sideplate_US_DCU.paa),
            QPATHTOF(data\AVS_S20_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_DCU.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_3_US_DCU): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (DCU) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_DCU.paa),
            QPATHTOF(data\AVS_AVSPouchT_US_DCU.paa),
            QPATHTOF(data\AVS_Belt556_US_DCU.paa),
            QPATHTOF(data\AVS_BluforMed_US_DCU.paa),
            QPATHTOF(data\AVS_Cumberbands_US_DCU.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_DCU.paa),
            QPATHTOF(data\AVS_GPpouch_US_DCU.paa),
            QPATHTOF(data\AVS_Radio_US_DCU.paa),
            QPATHTOF(data\AVS_glockMags_US_DCU.paa),
            QPATHTOF(data\AVS_pouch556_US_DCU.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_DCU.paa),
            QPATHTOF(data\AVS_Sideplate_US_DCU.paa),
            QPATHTOF(data\AVS_S20_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_DCU.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_2_US_DCU): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (DCU) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_DCU.paa),
            QPATHTOF(data\AVS_AVSPouch_US_DCU.paa),
            QPATHTOF(data\AVS_BluforMed_US_DCU.paa),
            QPATHTOF(data\AVS_Cumberbands_US_DCU.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_DCU.paa),
            QPATHTOF(data\AVS_Radio_US_DCU.paa),
            QPATHTOF(data\AVS_LMGpouches_US_DCU.paa),
            QPATHTOF(data\AVS_glockMags_US_DCU.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_DCU.paa),
            QPATHTOF(data\AVS_Sideplate_US_DCU.paa),
            QPATHTOF(data\AVS_S20_US_DCU.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_DCU.paa);
        MACRO_ITEM_COMMON

    };
    class GVAR(Crye_AVS_1_US_M81): Crye_AVS_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (M81) Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_M81.paa),
            QPATHTOF(data\AVS_AVSPouch_US_M81.paa),
            QPATHTOF(data\AVS_Belt556_US_M81.paa),
            QPATHTOF(data\AVS_BluforMed_US_M81.paa),
            QPATHTOF(data\AVS_Cumberbands_US_M81.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_M81.paa),
            QPATHTOF(data\AVS_GPpouch_US_M81.paa),
            QPATHTOF(data\AVS_Radio_US_M81.paa),
            QPATHTOF(data\AVS_glockMags_US_M81.paa),
            QPATHTOF(data\AVS_pouch556_US_M81.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_M81.paa),
            QPATHTOF(data\AVS_Sideplate_US_M81.paa),
            QPATHTOF(data\AVS_S20_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_M81.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(Crye_AVS_1_1_US_M81): Crye_AVS_1_1 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (M81) Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_M81.paa),
            QPATHTOF(data\AVS_Belt556_US_M81.paa),
            QPATHTOF(data\AVS_BluforMed_US_M81.paa),
            QPATHTOF(data\AVS_Cumberbands_US_M81.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_M81.paa),
            QPATHTOF(data\AVS_GPpouch_US_M81.paa),
            QPATHTOF(data\AVS_Radio_US_M81.paa),
            QPATHTOF(data\AVS_Kangaroo_US_M81.paa),
            QPATHTOF(data\AVS_glockMags_US_M81.paa),
            QPATHTOF(data\AVS_pouch556_US_M81.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_M81.paa),
            QPATHTOF(data\AVS_Sideplate_US_M81.paa),
            QPATHTOF(data\AVS_S20_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_M81.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(Crye_AVS_1_2_US_M81): Crye_AVS_1_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (M81) Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_M81.paa),
            QPATHTOF(data\AVS_Mk4_US_M81.paa),
            QPATHTOF(data\AVS_Belt556_US_M81.paa),
            QPATHTOF(data\AVS_BluforMed_US_M81.paa),
            QPATHTOF(data\AVS_Cumberbands_US_M81.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_M81.paa),
            QPATHTOF(data\AVS_GPpouch_US_M81.paa),
            QPATHTOF(data\AVS_Radio_US_M81.paa),
            QPATHTOF(data\AVS_glockMags_US_M81.paa),
            QPATHTOF(data\AVS_pouch556_US_M81.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_M81.paa),
            QPATHTOF(data\AVS_Sideplate_US_M81.paa),
            QPATHTOF(data\AVS_S20_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Crye_AVS_1_3_US_M81): Crye_AVS_1_3 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (M81) Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_M81.paa),
            QPATHTOF(data\AVS_AVSPouchT_US_M81.paa),
            QPATHTOF(data\AVS_Belt556_US_M81.paa),
            QPATHTOF(data\AVS_BluforMed_US_M81.paa),
            QPATHTOF(data\AVS_Cumberbands_US_M81.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_M81.paa),
            QPATHTOF(data\AVS_GPpouch_US_M81.paa),
            QPATHTOF(data\AVS_Radio_US_M81.paa),
            QPATHTOF(data\AVS_glockMags_US_M81.paa),
            QPATHTOF(data\AVS_pouch556_US_M81.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_M81.paa),
            QPATHTOF(data\AVS_Sideplate_US_M81.paa),
            QPATHTOF(data\AVS_S20_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_M81.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(Crye_AVS_2_US_M81): Crye_AVS_2 {
        author = QAUTHOR;
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
        };
        displayName="[GHOST] (M81) Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AVS_Vest_US_M81.paa),
            QPATHTOF(data\AVS_AVSPouch_US_M81.paa),
            QPATHTOF(data\AVS_BluforMed_US_M81.paa),
            QPATHTOF(data\AVS_Cumberbands_US_M81.paa),
            QPATHTOF(data\AVS_BeltGBRS_US_M81.paa),
            QPATHTOF(data\AVS_Radio_US_M81.paa),
            QPATHTOF(data\AVS_LMGpouches_US_M81.paa),
            QPATHTOF(data\AVS_glockMags_US_M81.paa),
            QPATHTOF(data\AVS_SFL_Holster_US_M81.paa),
            QPATHTOF(data\AVS_Sideplate_US_M81.paa),
            QPATHTOF(data\AVS_S20_US_M81.paa)
        };
        picture=QPATHTOF(data\ui\icon_V_AVS_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    ////////////////////////////////////////////

    class JPC2_MC: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
            };
    };
    class JPC22: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class JPC23: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class JPC24: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class JPC25: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    ////////////////////////////////
    class LV119: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class LV1192: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class LV1193: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
    class LV1194: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass="Supply300";
        };
    };
};
