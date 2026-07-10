class CfgWeapons {
    class ItemCore;
    class Vest_NoCamo_Base;
    class Vest_Camo_Base: ItemCore {};
    class V_PlateCarrierSpec_rgr: Vest_Camo_Base {
    };
    class V_PlateCarrierGL_rgr: Vest_Camo_Base {
    };
    class V_PlateCarrier1_blk: Vest_Camo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
    };
    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
    };
    class V_Rangemaster_belt;
    class V_Chestrig_oli;
    class V_PlateCarrierSpec_blk: V_PlateCarrierSpec_rgr {
        class ItemInfo;
    };
    class V_PlateCarrierGL_blk: V_PlateCarrierGL_rgr {
        class ItemInfo;
    };
    class V_PlateCarrier2_blk: V_PlateCarrier2_rgr {
        class ItemInfo;
    };
    class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class JCA_V_CarrierRigKBT_01_compact_olive_F;
    class JCA_V_CarrierRigKBT_01_CQB_olive_F;
    class JCA_V_CarrierRigKBT_01_crew_olive_F;
    class JCA_V_CarrierRigKBT_01_command_olive_F;
    class JCA_V_CarrierRigKBT_01_holster_olive_F;
    class JCA_V_CarrierRigKBT_01_recon_olive_F;
    class JCA_V_CarrierRigKBT_01_tactical_olive_F;

    class GVAR(V_CarrierSpec_Multicam): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Carrier Special Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\carrier_gl_rig_Multicam.paa)
        };
        picture = QPATHTOF(data\ui\icon_carrier_spec_rig_Multicam.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierGL_Multicam): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Carrier GL Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\carrier_gl_rig_Multicam.paa)
        };
        picture = QPATHTOF(data\ui\icon_carrier_gl_rig_Multicam.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierLite_Multicam): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Carrier Lite";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_plate_carrier_1_Multicam_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierRig_Multicam): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Carrier Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_plate_carrier_2_Multicam_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierLiteNoBelt_Multicam): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Carrier Lite (No belt)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_plate_carrier_1_Multicam_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_Rangemaster_Multicam): V_Rangemaster_belt {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Rangemaster Belt";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_Rangemaster_belt_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_ChestRig_Multicam): V_Chestrig_oli {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Chest Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equip_chestrig_Multicam.paa),
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_ChestrigF_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_CarrierSpec_Multicam_Snow): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Carrier Special Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\carrier_gl_rig_Multicam_Snow.paa)
        };
        picture = QPATHTOF(data\ui\icon_carrier_spec_rig_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierGL_Multicam_Snow): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Carrier GL Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\carrier_gl_rig_Multicam_Snow.paa)
        };
        picture = QPATHTOF(data\ui\icon_carrier_gl_rig_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierLite_Multicam_Snow): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Carrier Lite";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_plate_carrier_1_Multicam_Snow_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierRig_Multicam_Snow): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Carrier Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_plate_carrier_2_Multicam_Snow_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierLiteNoBelt_Multicam_Snow): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Carrier Lite (No belt)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_plate_carrier_1_Multicam_Snow_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_Rangemaster_Multicam_Snow): V_Rangemaster_belt {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Rangemaster Belt";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_Rangemaster_belt_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_ChestRig_Multicam_Snow): V_Chestrig_oli {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Chest Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equip_chestrig_Multicam_Snow.paa),
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_ChestrigF_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_CarrierSpec_Multicam_Woodland): V_PlateCarrierSpec_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Carrier Special Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\carrier_gl_rig_A3_Multicam_Woodland.paa)
        };
        picture = QPATHTOF(data\ui\icon_carrier_spec_rig_A3_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierGL_Multicam_Woodland): V_PlateCarrierGL_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Carrier GL Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\carrier_gl_rig_A3_Multicam_Woodland.paa)
        };
        picture = QPATHTOF(data\ui\icon_carrier_gl_rig_A3_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierLite_Multicam_Woodland): V_PlateCarrier1_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Carrier Lite";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_A3_Multicam_Woodland_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_plate_carrier_1_A3_Multicam_Woodland_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierRig_Multicam_Woodland): V_PlateCarrier2_blk {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Carrier Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_A3_Multicam_Woodland_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_plate_carrier_2_A3_Multicam_Woodland_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_CarrierLiteNoBelt_Multicam_Woodland): V_PlateCarrier_Kerry {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Carrier Lite (No belt)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_A3_Multicam_Woodland_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_plate_carrier_1_A3_Multicam_Woodland_CA.paa);
        MACRO_ITEM_COMMON
        hiddenSelections[] = {
            "camo"
        };
        class ItemInfo: ItemInfo {
            containerClass = "Supply300";
            hiddenSelections[] = {
                "camo"
            };
        };
    };

    class GVAR(V_Rangemaster_Multicam_Woodland): V_Rangemaster_belt {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Rangemaster Belt";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests_A3_Multicam_Woodland_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_Rangemaster_belt_A3_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_ChestRig_Multicam_Woodland): V_Chestrig_oli {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Chest Rig";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equip_chestrig_A3_Multicam_Woodland.paa),
            QPATHTOF(data\vests_A3_Multicam_Woodland_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_V_ChestrigF_A3_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACompact_Multicam): JCA_V_CarrierRigKBT_01_compact_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Modular Carrier JCA Compact";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_compact_Multicam_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACQB_Multicam): JCA_V_CarrierRigKBT_01_CQB_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Modular Carrier JCA CQB";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_cqb_Multicam_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACrew_Multicam): JCA_V_CarrierRigKBT_01_crew_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Modular Carrier JCA Crew";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_CO.paa),
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_crew_Multicam_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACommand_Multicam): JCA_V_CarrierRigKBT_01_command_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Modular Carrier JCA Command";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_CO.paa),
            "",
            "",
            ""
        };
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCAHolster_Multicam): JCA_V_CarrierRigKBT_01_holster_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Modular Carrier JCA Holster";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_CO.paa)
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_holster_Multicam_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCARecon_Multicam): JCA_V_CarrierRigKBT_01_recon_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Modular Carrier JCA Recon";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_recon_Multicam_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCATactical_Multicam): JCA_V_CarrierRigKBT_01_tactical_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam) Modular Carrier JCA Tactical";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_CO.paa),
            "",
            "",
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_tactical_Multicam_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACompact_Multicam_Snow): JCA_V_CarrierRigKBT_01_compact_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Modular Carrier JCA Compact";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Snow_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_compact_Multicam_Snow_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACQB_Multicam_Snow): JCA_V_CarrierRigKBT_01_CQB_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Modular Carrier JCA CQB";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Snow_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_cqb_Multicam_Snow_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACrew_Multicam_Snow): JCA_V_CarrierRigKBT_01_crew_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Modular Carrier JCA Crew";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Snow_CO.paa),
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_crew_Multicam_Snow_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACommand_Multicam_Snow): JCA_V_CarrierRigKBT_01_command_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Modular Carrier JCA Command";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Snow_CO.paa),
            "",
            "",
            ""
        };
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCAHolster_Multicam_Snow): JCA_V_CarrierRigKBT_01_holster_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Modular Carrier JCA Holster";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Snow_CO.paa)
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_holster_Multicam_Snow_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCARecon_Multicam_Snow): JCA_V_CarrierRigKBT_01_recon_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Modular Carrier JCA Recon";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Snow_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_recon_Multicam_Snow_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCATactical_Multicam_Snow): JCA_V_CarrierRigKBT_01_tactical_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Snow) Modular Carrier JCA Tactical";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Snow_CO.paa),
            "",
            "",
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_tactical_Multicam_Snow_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACompact_Multicam_Woodland): JCA_V_CarrierRigKBT_01_compact_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Modular Carrier JCA Compact";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_A3_Multicam_Woodland_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_compact_A3_Multicam_Woodland_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACQB_Multicam_Woodland): JCA_V_CarrierRigKBT_01_CQB_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Modular Carrier JCA CQB";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_A3_Multicam_Woodland_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_cqb_A3_Multicam_Woodland_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACrew_Multicam_Woodland): JCA_V_CarrierRigKBT_01_crew_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Modular Carrier JCA Crew";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_A3_Multicam_Woodland_CO.paa),
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_crew_A3_Multicam_Woodland_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACommand_Multicam_Woodland): JCA_V_CarrierRigKBT_01_command_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Modular Carrier JCA Command";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_A3_Multicam_Woodland_CO.paa),
            "",
            "",
            ""
        };
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCAHolster_Multicam_Woodland): JCA_V_CarrierRigKBT_01_holster_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Modular Carrier JCA Holster";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_A3_Multicam_Woodland_CO.paa)
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_holster_A3_Multicam_Woodland_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCARecon_Multicam_Woodland): JCA_V_CarrierRigKBT_01_recon_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Modular Carrier JCA Recon";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_A3_Multicam_Woodland_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_recon_A3_Multicam_Woodland_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCATactical_Multicam_Woodland): JCA_V_CarrierRigKBT_01_tactical_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (Multicam Woodland) Modular Carrier JCA Tactical";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_A3_Multicam_Woodland_CO.paa),
            "",
            "",
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_tactical_A3_Multicam_Woodland_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACompact_GB_MTP): JCA_V_CarrierRigKBT_01_compact_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (GB MTP) Modular Carrier JCA Compact";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_GB_MTP_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_compact_GB_MTP_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACQB_GB_MTP): JCA_V_CarrierRigKBT_01_CQB_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (GB MTP) Modular Carrier JCA CQB";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_GB_MTP_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_cqb_GB_MTP_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACrew_GB_MTP): JCA_V_CarrierRigKBT_01_crew_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (GB MTP) Modular Carrier JCA Crew";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_GB_MTP_CO.paa),
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_crew_GB_MTP_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCACommand_GB_MTP): JCA_V_CarrierRigKBT_01_command_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (GB MTP) Modular Carrier JCA Command";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_GB_MTP_CO.paa),
            "",
            "",
            ""
        };
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCAHolster_GB_MTP): JCA_V_CarrierRigKBT_01_holster_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (GB MTP) Modular Carrier JCA Holster";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_GB_MTP_CO.paa)
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_holster_GB_MTP_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCARecon_GB_MTP): JCA_V_CarrierRigKBT_01_recon_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (GB MTP) Modular Carrier JCA Recon";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_GB_MTP_CO.paa),
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_recon_GB_MTP_F_CA.paa);
        MACRO_ITEM_COMMON
    };

    class GVAR(V_JCATactical_GB_MTP): JCA_V_CarrierRigKBT_01_tactical_olive_F {
        author = QAUTHOR;
        displayName = "[Ghost] (GB MTP) Modular Carrier JCA Tactical";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\CarrierRigKBT_01_GB_MTP_CO.paa),
            "",
            "",
            "",
            ""
        };
        picture = QPATHTOF(data\ui\Icon_CarrierRigKBT_01_tactical_GB_MTP_F_CA.paa);
        MACRO_ITEM_COMMON
    };
};
