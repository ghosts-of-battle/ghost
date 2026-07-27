class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    // Carried fiberscope. CBA_MiscItem => shows up natively in the ACE arsenal
    // misc tab with no ACE_asItem hack.
    class GVAR(item): CBA_MiscItem {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = CSTRING(displayName);
        descriptionShort = CSTRING(descriptionShort);
        model = QPATHTOF(models\fiberscope.p3d);
        picture = QPATHTOF(data\fibrescope.paa);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
        ace_arsenal_hide = 0;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };
};
