class CfgVehicles {
    // base classes
    class B_soldier_F;
    class Item_Base_F;

    // ===== Uniforms (wearers) =====
    class GVAR(SOF_B_SFFatigues_rgr): B_soldier_F {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_rgr);
        model = "\SOFGear\sof_characters\Uniforms\U_UniformSF.p3d";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_rgr_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_rgr_co.paa),
            QPATHTOF(data\gloves_sf_blk_co.paa),
            QPATHTOF(data\u_tacboots_blk_co.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\u_fatiguessf.rvmat),
            QPATHTOF(data\u_fatiguessf_pants.rvmat),
            QPATHTOF(data\gloves_sf.rvmat),
            QPATHTOF(data\u_tacboots.rvmat),
            ""
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_Shortsleeve_rgr): B_soldier_F {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_rgr);
        model = "\SOFGear\sof_characters\Uniforms\U_UniformSF_shortsleeve.p3d";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_rgr_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_rgr_co.paa),
            QPATHTOF(data\gloves_sf_blk_co.paa),
            QPATHTOF(data\u_tacboots_blk_co.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\u_fatiguessf.rvmat),
            QPATHTOF(data\u_fatiguessf_pants.rvmat),
            QPATHTOF(data\gloves_sf.rvmat),
            QPATHTOF(data\u_tacboots.rvmat),
            ""
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_mcam): GVAR(SOF_B_SFFatigues_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_mcam);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_mcam_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_mcam_co.paa),
            QPATHTOF(data\gloves_sf_snd_co.paa),
            QPATHTOF(data\u_tacboots_snd_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_Shortsleeve_mcam): GVAR(SOF_B_SFFatigues_Shortsleeve_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_mcam);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_mcam_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_mcam_co.paa),
            QPATHTOF(data\gloves_sf_snd_co.paa),
            QPATHTOF(data\u_tacboots_snd_co.paa)

        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_tna): GVAR(SOF_B_SFFatigues_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_tna);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_tna_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_tna_co.paa),
            QPATHTOF(data\gloves_sf_tna_co.paa),
            QPATHTOF(data\u_tacboots_tna_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_Shortsleeve_tna): GVAR(SOF_B_SFFatigues_Shortsleeve_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_tna);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_tna_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_tna_co.paa),
            QPATHTOF(data\gloves_sf_tna_co.paa),
            QPATHTOF(data\u_tacboots_tna_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_wdl): GVAR(SOF_B_SFFatigues_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_wdl);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_wdl_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_wdl_co.paa),
            QPATHTOF(data\gloves_sf_blk_co.paa),
            QPATHTOF(data\u_tacboots_blk_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_Shortsleeve_wdl): GVAR(SOF_B_SFFatigues_Shortsleeve_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_wdl);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_wdl_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_wdl_co.paa),
            QPATHTOF(data\gloves_sf_blk_co.paa),
            QPATHTOF(data\u_tacboots_blk_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_mrpt): GVAR(SOF_B_SFFatigues_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_mrpt);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_mrpt_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_mrpt_co.paa),
            QPATHTOF(data\gloves_sf_snd_co.paa),
            QPATHTOF(data\u_tacboots_snd_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_Shortsleeve_mrpt): GVAR(SOF_B_SFFatigues_Shortsleeve_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_mrpt);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_mrpt_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_mrpt_co.paa),
            QPATHTOF(data\gloves_sf_snd_co.paa),
            QPATHTOF(data\u_tacboots_snd_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_mrpt_des): GVAR(SOF_B_SFFatigues_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_mrpt_des);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_mrpt_des_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_mrpt_des_co.paa),
            QPATHTOF(data\gloves_sf_snd_co.paa),
            QPATHTOF(data\u_tacboots_snd_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_Shortsleeve_mrpt_des): GVAR(SOF_B_SFFatigues_Shortsleeve_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_mrpt_des);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_mrpt_des_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_mrpt_des_co.paa),
            QPATHTOF(data\gloves_sf_snd_co.paa),
            QPATHTOF(data\u_tacboots_snd_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_nwu): GVAR(SOF_B_SFFatigues_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_nwu);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_nwu_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_nwu_co.paa),
            QPATHTOF(data\gloves_sf_tna_co.paa),
            QPATHTOF(data\u_tacboots_tna_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };
    class GVAR(SOF_B_SFFatigues_Shortsleeve_nwu): GVAR(SOF_B_SFFatigues_Shortsleeve_rgr) {        scope = 1;
        scopeCurator = 0;
        uniformClass = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_nwu);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_fatiguessf_nwu_co.paa),
            QPATHTOF(data\u_fatiguessf_pants_nwu_co.paa),
            QPATHTOF(data\gloves_sf_tna_co.paa),
            QPATHTOF(data\u_tacboots_tna_co.paa)
        };
        modelSides[] = {0,1,2,3};
    };

    // ===== OCP retextures =====
    class GVAR(SOF_B_SFFatigues_ocp): GVAR(SOF_B_SFFatigues_rgr) {        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_assaultuniform_shirt_ocp_co.paa),
            QPATHTOF(data\u_assaultuniform_pants_ocp_co.paa),
            QPATHTOF(data\gloves_sf_snd_co.paa),
            QPATHTOF(data\u_tacboots_snd_co.paa)
        };
    };
    class GVAR(SOF_B_SFFatigues_Shortsleeve_ocp): GVAR(SOF_B_SFFatigues_Shortsleeve_rgr) {        hiddenSelectionsTextures[] = {
            QPATHTOF(data\u_assaultuniform_shirt_ocp_co.paa),
            QPATHTOF(data\u_assaultuniform_pants_ocp_co.paa),
            QPATHTOF(data\gloves_sf_snd_co.paa),
            QPATHTOF(data\u_tacboots_snd_co.paa)
        };
    };

    // ===== Headgear - editor/Zeus placeable items =====
    class GVAR(Item_SOF_H_Opscore_rgr): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Green)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_rgr) {
                name = QGVAR(SOF_H_Opscore_rgr);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_snd): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Sand)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_snd) {
                name = QGVAR(SOF_H_Opscore_snd);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_blk): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Black)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_blk) {
                name = QGVAR(SOF_H_Opscore_blk);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_oli): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Olive)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_oli) {
                name = QGVAR(SOF_H_Opscore_oli);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_OpscoreSpec_rgr): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Green)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_OpscoreSpec_rgr) {
                name = QGVAR(SOF_H_OpscoreSpec_rgr);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_OpscoreSpec_snd): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Sand)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_OpscoreSpec_snd) {
                name = QGVAR(SOF_H_OpscoreSpec_snd);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_OpscoreSpec_blk): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Black)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_OpscoreSpec_blk) {
                name = QGVAR(SOF_H_OpscoreSpec_blk);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_OpscoreSpec_oli): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Olive)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_OpscoreSpec_oli) {
                name = QGVAR(SOF_H_OpscoreSpec_oli);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_Cover_rgr): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, Green)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_Cover_rgr) {
                name = QGVAR(SOF_H_Opscore_Cover_rgr);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverSpec_rgr): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Cover, Green)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverSpec_rgr) {
                name = QGVAR(SOF_H_Opscore_CoverSpec_rgr);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverCamo_rgr): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, Green/Camo)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverCamo_rgr) {
                name = QGVAR(SOF_H_Opscore_CoverCamo_rgr);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_Cover_mcam): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, MTP)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_Cover_mcam) {
                name = QGVAR(SOF_H_Opscore_Cover_mcam);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverSpec_mcam): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Cover, MTP)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverSpec_mcam) {
                name = QGVAR(SOF_H_Opscore_CoverSpec_mcam);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverCamo_mcam): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, MTP/Camo)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverCamo_mcam) {
                name = QGVAR(SOF_H_Opscore_CoverCamo_mcam);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_Cover_tna): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, Tropic)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_Cover_tna) {
                name = QGVAR(SOF_H_Opscore_Cover_tna);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverSpec_tna): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Cover, Tropic)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverSpec_tna) {
                name = QGVAR(SOF_H_Opscore_CoverSpec_tna);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_Cover_wdl): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_Cover_wdl) {
                name = QGVAR(SOF_H_Opscore_Cover_wdl);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverSpec_wdl): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Cover, Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverSpec_wdl) {
                name = QGVAR(SOF_H_Opscore_CoverSpec_wdl);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_Cover_mrpt_wdl): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, USMC Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_Cover_mrpt_wdl) {
                name = QGVAR(SOF_H_Opscore_Cover_mrpt_wdl);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverSpec_mrpt_wdl): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Cover, USMC Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverSpec_mrpt_wdl) {
                name = QGVAR(SOF_H_Opscore_CoverSpec_mrpt_wdl);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_Cover_mrpt_des): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, USMC Desert)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_Cover_mrpt_des) {
                name = QGVAR(SOF_H_Opscore_Cover_mrpt_des);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverSpec_mrpt_des): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Cover, USMC Desert)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverSpec_mrpt_des) {
                name = QGVAR(SOF_H_Opscore_CoverSpec_mrpt_des);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_Cover_nwu): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, USN Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_Cover_nwu) {
                name = QGVAR(SOF_H_Opscore_Cover_nwu);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverSpec_nwu): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Cover, USN Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverSpec_nwu) {
                name = QGVAR(SOF_H_Opscore_CoverSpec_nwu);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_BaseballCap_rgr): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Baseball Cap (Green)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_BaseballCap_rgr) {
                name = QGVAR(SOF_H_BaseballCap_rgr);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_BaseballCapSpec_rgr): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Baseball Cap (Headset, Green)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_BaseballCapSpec_rgr) {
                name = QGVAR(SOF_H_BaseballCapSpec_rgr);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_BaseballCap_khk): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Baseball Cap (Khaki)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_BaseballCap_khk) {
                name = QGVAR(SOF_H_BaseballCap_khk);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_BaseballCapSpec_khk): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Baseball Cap (Headset, Khaki)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_BaseballCapSpec_khk) {
                name = QGVAR(SOF_H_BaseballCapSpec_khk);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_BaseballCap_mcam): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Baseball Cap (MTP)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_BaseballCap_mcam) {
                name = QGVAR(SOF_H_BaseballCap_mcam);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_BaseballCapSpec_mcam): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Baseball Cap (Headset, MTP)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_BaseballCapSpec_mcam) {
                name = QGVAR(SOF_H_BaseballCapSpec_mcam);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_BaseballCapSpec_tna): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Baseball Cap (Headset, Tropic)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_BaseballCapSpec_tna) {
                name = QGVAR(SOF_H_BaseballCapSpec_tna);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_BaseballCapSpec_wdl): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Baseball Cap (Headset, Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_BaseballCapSpec_wdl) {
                name = QGVAR(SOF_H_BaseballCapSpec_wdl);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_Cover_ocp): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, OCP)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_Cover_ocp) {
                name = QGVAR(SOF_H_Opscore_Cover_ocp);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverSpec_ocp): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Enhanced Hi-Cut Helmet (Cover, OCP)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverSpec_ocp) {
                name = QGVAR(SOF_H_Opscore_CoverSpec_ocp);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_H_Opscore_CoverCamo_ocp): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Hi-Cut Helmet (Cover, OCP/Camo)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Headgear";
        vehicleClass = "ItemsHeadgear";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_H_Opscore_CoverCamo_ocp) {
                name = QGVAR(SOF_H_Opscore_CoverCamo_ocp);
                count = 1;
            };
        };
    };

    // ===== Vests - editor/Zeus placeable items =====
    class GVAR(Item_SOF_V_AVSCarrier_Lite_rgr): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Light Carrier Vest (Green)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Vests";
        vehicleClass = "ItemsVest";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_V_AVSCarrier_Lite_rgr) {
                name = QGVAR(SOF_V_AVSCarrier_Lite_rgr);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_V_AVSCarrier_Lite_rgr_noflag): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Light Carrier Vest (Green, No Flag)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Vests";
        vehicleClass = "ItemsVest";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_V_AVSCarrier_Lite_rgr_noflag) {
                name = QGVAR(SOF_V_AVSCarrier_Lite_rgr_noflag);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_V_AVSCarrier_Lite_mcam): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Light Carrier Vest (MTP)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Vests";
        vehicleClass = "ItemsVest";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_V_AVSCarrier_Lite_mcam) {
                name = QGVAR(SOF_V_AVSCarrier_Lite_mcam);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_V_AVSCarrier_Lite_tna): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Light Carrier Vest (Tropic)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Vests";
        vehicleClass = "ItemsVest";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_V_AVSCarrier_Lite_tna) {
                name = QGVAR(SOF_V_AVSCarrier_Lite_tna);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_V_AVSCarrier_Lite_wdl): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Light Carrier Vest (Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Vests";
        vehicleClass = "ItemsVest";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_V_AVSCarrier_Lite_wdl) {
                name = QGVAR(SOF_V_AVSCarrier_Lite_wdl);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_V_AVSCarrier_Lite_ocp): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Light Carrier Vest (OCP)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Vests";
        vehicleClass = "ItemsVest";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_V_AVSCarrier_Lite_ocp) {
                name = QGVAR(SOF_V_AVSCarrier_Lite_ocp);
                count = 1;
            };
        };
    };

    // ===== Uniforms - editor/Zeus placeable items =====
    class GVAR(Item_SOF_U_B_SFFatigues_rgr): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (Green)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_rgr) {
                name = QGVAR(SOF_U_B_SFFatigues_rgr);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_rgr): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (Green, Rolled-up)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_Shortsleeve_rgr) {
                name = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_rgr);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_mcam): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (MTP)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_mcam) {
                name = QGVAR(SOF_U_B_SFFatigues_mcam);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_mcam): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (MTP, Rolled-up)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_Shortsleeve_mcam) {
                name = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_mcam);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_tna): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (Tropic)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_tna) {
                name = QGVAR(SOF_U_B_SFFatigues_tna);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_tna): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (Tropic, Rolled-up)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_Shortsleeve_tna) {
                name = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_tna);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_wdl): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_wdl) {
                name = QGVAR(SOF_U_B_SFFatigues_wdl);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_wdl): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (Woodland, Rolled-up)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_Shortsleeve_wdl) {
                name = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_wdl);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_mrpt): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (USMC Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_mrpt) {
                name = QGVAR(SOF_U_B_SFFatigues_mrpt);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_mrpt): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (USMC Woodland, Rolled-up)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_Shortsleeve_mrpt) {
                name = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_mrpt);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_mrpt_des): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (USMC Desert)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_mrpt_des) {
                name = QGVAR(SOF_U_B_SFFatigues_mrpt_des);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_mrpt_des): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (USMC Desert, Rolled-up)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_Shortsleeve_mrpt_des) {
                name = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_mrpt_des);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_nwu): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (USN Woodland)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_nwu) {
                name = QGVAR(SOF_U_B_SFFatigues_nwu);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_nwu): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (USN Woodland, Rolled-up)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_Shortsleeve_nwu) {
                name = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_nwu);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_ocp): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (OCP)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_ocp) {
                name = QGVAR(SOF_U_B_SFFatigues_ocp);
                count = 1;
            };
        };
    };
    class GVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_ocp): Item_Base_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Special Fatigues (OCP, Rolled-Up)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_SOF_Uniforms";
        vehicleClass = "ItemsUniform";
        model = "\A3\Weapons_F\dummyweapon.p3d";
        class TransportItems {
            class GVAR(SOF_U_B_SFFatigues_Shortsleeve_ocp) {
                name = QGVAR(SOF_U_B_SFFatigues_Shortsleeve_ocp);
                count = 1;
            };
        };
    };
};
