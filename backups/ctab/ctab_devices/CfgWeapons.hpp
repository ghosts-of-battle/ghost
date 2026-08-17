// The devices ARE cTab's devices, reskinned - not extra ones alongside them.
//
// Running our own handhelds beside cTab's meant two ACE entries, two device
// lists, duplicate registration, a skin swap racing cTab's own repaint, and
// displays that inherited the very device they were meant to replace. Every one
// of those problems came from there being two devices where the player only
// ever wanted one. So cTab's android IS the S23 and cTab's tablet IS the
// GFT-1: one android, one tablet, cTab's own ACE entries, nothing to keep in
// step, and no way for the wrong screen to open.
//
// Missions and crates that hand out ItemAndroid or ItemcTab keep working - they
// simply hand out an S23 or a GFT-1 now. Restating each parent is deliberate:
// a parentless reopen severs the base class and takes the device's simulation,
// model and cTab registration with it.

class CfgWeapons {
    class ItemCore;
    class CBA_MiscItem;

    class ItemcTab: ItemCore {
        displayName = "GFT-1 Rugged Tablet";
        descriptionShort = "Rugged command tablet. Blue force tracker, intrusion suite and scanner readout.";
    };

    class ItemcTabMisc: CBA_MiscItem {
        displayName = "GFT-1 Rugged Tablet";
        descriptionShort = "Rugged command tablet. Blue force tracker, intrusion suite and scanner readout.";
    };

    class ItemAndroid: ItemcTab {
        displayName = "S23 Handheld";
        descriptionShort = "Rugged S23 handset. Blue force tracker, apps and scanner readout.";
        descriptionUse = "<t color='#9cf953'>Use: </t>Blue Force Tracking";
        picture = QPATHTOF(data\icon_s23_blk_ca.paa);
    };

    class ItemAndroidMisc: CBA_MiscItem {
        displayName = "S23 Handheld";
        descriptionShort = "Rugged S23 handset. Blue force tracker, apps and scanner readout.";
        descriptionUse = "<t color='#9cf953'>Use: </t>Blue Force Tracking";
        picture = QPATHTOF(data\icon_s23_blk_ca.paa);
    };
};
