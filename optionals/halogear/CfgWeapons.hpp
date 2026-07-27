class CfgWeapons {
    class H_HelmetB;
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    // Vanilla sealed flight helmet already supplies its own air.
    class H_PilotHelmetFighter_B: H_HelmetB {
        GVAR(rebreather) = 1;
    };

    // Carried Cypres-style auto-activation device. Attached to a crate or
    // vehicle via the ACE interaction to give it an automatic chute, or fitted
    // to a rig by taking one of the AAD-equipped parachutes below.
    class GVAR(aad): CBA_MiscItem {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = CSTRING(aadItem);
        descriptionShort = CSTRING(aadItemDescription);
        model = QPATHTOF(models\cypres2aad.p3d);
        picture = QPATHTOF(data\aadPreview.paa);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
        ace_arsenal_hide = 0;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};
