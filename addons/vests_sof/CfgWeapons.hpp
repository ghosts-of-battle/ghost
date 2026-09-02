class CfgWeapons {
    class VestItem;
    class V_PlateCarrier1_rgr;

    class GVAR(SOF_V_AVSCarrier_Lite_rgr): V_PlateCarrier1_rgr {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Green)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        hiddenSelections[] = {
            "camo",
            "camo1"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_rgr_co.paa),
            ""
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\v_carrieravs.rvmat),
            ""
        };
        model = "\SOFGear\sof_characters\Vests\V_CarrierAVS_Lite.p3d";
        class ItemInfo: VestItem {
            uniformModel = "\SOFGear\sof_characters\Vests\V_CarrierAVS_Lite.p3d";
            hiddenSelections[] = {
                "camo",
                "camo1"
            };
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\v_carrieravs_rgr_co.paa),
                ""
            };
            containerClass = "Supply110";
            mass = 60;
            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 14;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 14;
                    passThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 14;
                    passThrough = 0.1;
                };
            };
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_rgr_noflag): GVAR(SOF_V_AVSCarrier_Lite_rgr) {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Green, No Flag)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_rgr_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_mcam): GVAR(SOF_V_AVSCarrier_Lite_rgr) {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (MTP)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_mcam_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_tna): GVAR(SOF_V_AVSCarrier_Lite_rgr) {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Tropic)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_tna_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_wdl): GVAR(SOF_V_AVSCarrier_Lite_rgr) {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Woodland)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_wdl_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_ocp): GVAR(SOF_V_AVSCarrier_Lite_rgr) {
        displayName = "[Ghost] Light Carrier Vest (OCP)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_ocp_co.paa),
            ""
        };
    };

    // ===== The reworked AVS (JAM SOF, 31 August) =====
    // Three NEW p3ds - V_CarrierAVS_{Lite,Rifle,Gunner}_new - beside the
    // original V_CarrierAVS_Lite the six above wear, and a third hidden
    // selection with them: camo1 is the pouches, camo2 the flag patch.
    // That is why these are their own base classes and not variants of
    // the Lite above - a different model with a different selection list.
    //
    // The flag is REAL here, unlike on the six above, which blank camo1 on
    // both their flagged and their _noflag rows and so wear no patch
    // either way. The mod's own _noflag variants blank the slot and the
    // flagged ones wear FlagPatch_us; both are reproduced, so the XtdGear
    // Flag / NoFlag buttons pick out an actual difference on these.
    //
    // No hiddenSelectionsMaterials: the mod sets none on the reworked set,
    // so the p3d's own apply and the pouch rvmat need not be vendored.
    class GVAR(SOF_V_AVSCarrier_Lite_new_rgr): V_PlateCarrier1_rgr {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Lite, Green)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        model = "\SOFGear\sof_characters\Vests\V_CarrierAVS_Lite_new.p3d";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_rgr_co.paa),
            QPATHTOF(data\pouches_generic_rgr_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
        class ItemInfo: VestItem {
            uniformModel = "\SOFGear\sof_characters\Vests\V_CarrierAVS_Lite_new.p3d";
            hiddenSelections[] = {
                "camo",
                "camo1",
                "camo2"
            };
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\v_carrieravs_rgr_co.paa),
                QPATHTOF(data\pouches_generic_rgr_co.paa),
                QPATHTOF(data\flagpatch_us_co.paa)
            };
            containerClass = "Supply110";
            mass = 60;
            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 14;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 14;
                    passThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 14;
                    passThrough = 0.1;
                };
            };
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_new_mcam): GVAR(SOF_V_AVSCarrier_Lite_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Lite, MTP)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_mcam_co.paa),
            QPATHTOF(data\pouches_generic_mcam_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_new_tna): GVAR(SOF_V_AVSCarrier_Lite_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Lite, Tropic)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_tna_co.paa),
            QPATHTOF(data\pouches_generic_tna_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_new_wdl): GVAR(SOF_V_AVSCarrier_Lite_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Lite, Woodland)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_wdl_co.paa),
            QPATHTOF(data\pouches_generic_wdl_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_new_blk): GVAR(SOF_V_AVSCarrier_Lite_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Lite, Black)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_blk_co.paa),
            QPATHTOF(data\pouches_generic_blk_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_new_cbr): GVAR(SOF_V_AVSCarrier_Lite_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Lite, Coyote)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_cbr_co.paa),
            QPATHTOF(data\pouches_generic_cbr_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_new_snd): GVAR(SOF_V_AVSCarrier_Lite_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Lite, Sand)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_snd_co.paa),
            QPATHTOF(data\pouches_generic_snd_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Rifle_new_rgr): V_PlateCarrier1_rgr {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Rifleman, Green)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        model = "\SOFGear\sof_characters\Vests\V_CarrierAVS_Rifle_new.p3d";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_rgr_co.paa),
            QPATHTOF(data\pouches_generic_rgr_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
        class ItemInfo: VestItem {
            uniformModel = "\SOFGear\sof_characters\Vests\V_CarrierAVS_Rifle_new.p3d";
            hiddenSelections[] = {
                "camo",
                "camo1",
                "camo2"
            };
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\v_carrieravs_rgr_co.paa),
                QPATHTOF(data\pouches_generic_rgr_co.paa),
                QPATHTOF(data\flagpatch_us_co.paa)
            };
            containerClass = "Supply110";
            mass = 60;
            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 14;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 14;
                    passThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 14;
                    passThrough = 0.1;
                };
            };
        };
    };
    class GVAR(SOF_V_AVSCarrier_Rifle_new_mcam): GVAR(SOF_V_AVSCarrier_Rifle_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Rifleman, MTP)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_mcam_co.paa),
            QPATHTOF(data\pouches_generic_mcam_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Rifle_new_tna): GVAR(SOF_V_AVSCarrier_Rifle_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Rifleman, Tropic)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_tna_co.paa),
            QPATHTOF(data\pouches_generic_tna_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Rifle_new_wdl): GVAR(SOF_V_AVSCarrier_Rifle_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Rifleman, Woodland)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_wdl_co.paa),
            QPATHTOF(data\pouches_generic_wdl_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Rifle_new_blk): GVAR(SOF_V_AVSCarrier_Rifle_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Rifleman, Black)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_blk_co.paa),
            QPATHTOF(data\pouches_generic_blk_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Rifle_new_cbr): GVAR(SOF_V_AVSCarrier_Rifle_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Rifleman, Coyote)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_cbr_co.paa),
            QPATHTOF(data\pouches_generic_cbr_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Rifle_new_snd): GVAR(SOF_V_AVSCarrier_Rifle_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Rifleman, Sand)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_snd_co.paa),
            QPATHTOF(data\pouches_generic_snd_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Rifle_new_rgr_noflag): GVAR(SOF_V_AVSCarrier_Rifle_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Rifleman, Green, No Flag)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_rgr_co.paa),
            QPATHTOF(data\pouches_generic_rgr_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Rifle_new_mcam_noflag): GVAR(SOF_V_AVSCarrier_Rifle_new_mcam) {
        displayName = "[Ghost] Light Carrier Vest (Rifleman, MTP, No Flag)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_mcam_co.paa),
            QPATHTOF(data\pouches_generic_mcam_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Gunner_new_rgr): V_PlateCarrier1_rgr {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Gunner, Green)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        model = "\SOFGear\sof_characters\Vests\V_CarrierAVS_Gunner_new.p3d";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_rgr_co.paa),
            QPATHTOF(data\pouches_generic_rgr_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
        class ItemInfo: VestItem {
            uniformModel = "\SOFGear\sof_characters\Vests\V_CarrierAVS_Gunner_new.p3d";
            hiddenSelections[] = {
                "camo",
                "camo1",
                "camo2"
            };
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\v_carrieravs_rgr_co.paa),
                QPATHTOF(data\pouches_generic_rgr_co.paa),
                QPATHTOF(data\flagpatch_us_co.paa)
            };
            containerClass = "Supply110";
            mass = 60;
            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 14;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 14;
                    passThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 14;
                    passThrough = 0.1;
                };
            };
        };
    };
    class GVAR(SOF_V_AVSCarrier_Gunner_new_mcam): GVAR(SOF_V_AVSCarrier_Gunner_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Gunner, MTP)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_mcam_co.paa),
            QPATHTOF(data\pouches_generic_mcam_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Gunner_new_tna): GVAR(SOF_V_AVSCarrier_Gunner_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Gunner, Tropic)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_tna_co.paa),
            QPATHTOF(data\pouches_generic_tna_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Gunner_new_wdl): GVAR(SOF_V_AVSCarrier_Gunner_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Gunner, Woodland)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_wdl_co.paa),
            QPATHTOF(data\pouches_generic_wdl_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Gunner_new_blk): GVAR(SOF_V_AVSCarrier_Gunner_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Gunner, Black)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_blk_co.paa),
            QPATHTOF(data\pouches_generic_blk_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Gunner_new_cbr): GVAR(SOF_V_AVSCarrier_Gunner_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Gunner, Coyote)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_cbr_co.paa),
            QPATHTOF(data\pouches_generic_cbr_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Gunner_new_snd): GVAR(SOF_V_AVSCarrier_Gunner_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Gunner, Sand)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_snd_co.paa),
            QPATHTOF(data\pouches_generic_snd_co.paa),
            QPATHTOF(data\flagpatch_us_co.paa)
        };
    };
    class GVAR(SOF_V_AVSCarrier_Gunner_new_rgr_noflag): GVAR(SOF_V_AVSCarrier_Gunner_new_rgr) {
        displayName = "[Ghost] Light Carrier Vest (Gunner, Green, No Flag)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_rgr_co.paa),
            QPATHTOF(data\pouches_generic_rgr_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Gunner_new_mcam_noflag): GVAR(SOF_V_AVSCarrier_Gunner_new_mcam) {
        displayName = "[Ghost] Light Carrier Vest (Gunner, MTP, No Flag)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_mcam_co.paa),
            QPATHTOF(data\pouches_generic_mcam_co.paa),
            ""
        };
    };
};
