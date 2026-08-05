// Two S23-based handhelds, in the two forms cTab ships every device in:
//
//   <name>       - assignable, inherits ItemAndroid, takes a device slot
//   <name>_misc  - a CBA misc item, so it drops into a uniform, vest or pack
//
// Both are the S7 underneath - ctab_devicetype = 2 is the whole registration:
// cTab scans CfgWeapons for it at postInit and files them with the androids, so
// they open the S7's own screen and get every app, the scanner readout and the
// card menu for free.
//
// The only difference is the bezel art, swapped at open by FUNC(deviceSkin) -
// cTab keeps the texture in cTabIfOpen, not in the dialog, so a skin is a
// one-line runtime change rather than a second dialog.

class CfgWeapons {
    class ItemCore;
    class ItemAndroid;
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class GVAR(s23_blk): ItemAndroid {
        author = QAUTHOR;
        scope = 2;
        displayName = "S23 Handheld (Black)";
        descriptionShort = "Rugged S23 in a black case. Blue force tracker, apps and scanner readout.";
        descriptionUse = "<t color='#9cf953'>Use: </t>Show Android Based BFT";
        picture = QPATHTOF(data\icon_s23_blk_ca.paa);
        ctab_devicetype = 2;
        class ItemInfo {
            mass = 5;
        };
    };

    class GVAR(s23_tan): ItemAndroid {
        author = QAUTHOR;
        scope = 2;
        displayName = "S23 Handheld (Tan)";
        descriptionShort = "Rugged S23 in a tan case. Blue force tracker, apps and scanner readout.";
        descriptionUse = "<t color='#9cf953'>Use: </t>Show Android Based BFT";
        picture = QPATHTOF(data\icon_s23_tan_ca.paa);
        ctab_devicetype = 2;
        class ItemInfo {
            mass = 5;
        };
    };

    class GVAR(s23_blk_misc): CBA_MiscItem {
        author = QAUTHOR;
        scope = 2;
        type = 0;
        displayName = "S23 Handheld (Black)";
        descriptionShort = "Rugged S23 in a black case. Blue force tracker, apps and scanner readout.";
        descriptionUse = "<t color='#9cf953'>Use: </t>Show Android Based BFT";
        picture = QPATHTOF(data\icon_s23_blk_ca.paa);
        model = "\ctab\data\itemAndroid.p3d";
        ctab_devicetype = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };

    class GVAR(s23_tan_misc): CBA_MiscItem {
        author = QAUTHOR;
        scope = 2;
        type = 0;
        displayName = "S23 Handheld (Tan)";
        descriptionShort = "Rugged S23 in a tan case. Blue force tracker, apps and scanner readout.";
        descriptionUse = "<t color='#9cf953'>Use: </t>Show Android Based BFT";
        picture = QPATHTOF(data\icon_s23_tan_ca.paa);
        model = "\ctab\data\itemAndroid.p3d";
        ctab_devicetype = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };

    // The GFT-1 rugged tablet. A tablet-class device (type 3) rather than an
    // android, and it gets its own screen rather than the current tablet's
    // dashboard: no app tiles, one menu key, and the intrusion suite aboard.
    // Art is a sourced rugged-tablet screen, rescaled to the 2048 space
    // every device in this addon is authored in.
    class ItemcTab;
    class GVAR(gft): ItemcTab {
        author = QAUTHOR;
        scope = 2;
        displayName = "GFT-1 Rugged Tablet";
        descriptionShort = "Rugged command tablet. Blue force tracker, intrusion suite and scanner readout.";
        descriptionUse = "<t color='#9cf953'>Use: </t>Show Commander's Tablet";
        picture = "\cTab\img\icon_dk10.paa";
        ctab_devicetype = 3;
        class ItemInfo {
            mass = 20;
        };
    };

    class GVAR(gft_misc): CBA_MiscItem {
        author = QAUTHOR;
        scope = 2;
        type = 0;
        displayName = "GFT-1 Rugged Tablet";
        descriptionShort = "Rugged command tablet. Blue force tracker, intrusion suite and scanner readout.";
        descriptionUse = "<t color='#9cf953'>Use: </t>Show Commander's Tablet";
        picture = "\cTab\img\icon_dk10.paa";
        model = "\ctab\data\itemDK10.p3d";
        ctab_devicetype = 3;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 20;
        };
    };
};
