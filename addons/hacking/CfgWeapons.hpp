// The hacking tablet as a carried item. Hacking is gated on holding this AND on
// being flagged ISR - the kit is issued, and the man carrying it is trained.
//
// CBA_MiscItem so it lives in the arsenal's items list and can be put in a
// uniform or vest like any other piece of kit.

class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class GVAR(tabletItem): ACE_ItemCore {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Intrusion Tablet";
        author = QAUTHOR;
        descriptionShort = "Rugged tablet running the Ghost intrusion suite. Required to hack, and only useful in trained hands.";
        picture = QPATHTOF(data\tablet_icon.paa);
        model = QPATHTOF(data\soldiertab.p3d);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 20;
        };
    };

    // The hand-held scanner. Separate kit from the tablet: the tablet is what
    // you hack WITH, this is what tells you whether hacking here is a good idea.
    class GVAR(scannerItem): ACE_ItemCore {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Signal Scanner";
        author = QAUTHOR;
        descriptionShort = "Hand-held spectrum scanner. Warns of drones, jamming and the state of your own net.";
        picture = QPATHTOF(data\hackphone_icon.paa);
        model = QPATHTOF(data\hackphone.p3d);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 8;
        };
    };
};
