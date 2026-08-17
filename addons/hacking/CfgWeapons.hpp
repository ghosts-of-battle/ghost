// The hacking tablet as a carried item. Hacking is gated on holding this AND on
// being flagged ISR - the kit is issued, and the man carrying it is trained.
//
// CBA_MiscItem so it lives in the arsenal's items list and can be put in a
// uniform or vest like any other piece of kit.

class CfgWeapons {
    class CBA_MiscItem;
    class InventoryItem_Base_F;
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    // THE TERMINAL. Hacking used to be gated on carrying a cTab, which made an
    // intrusion suite a feature of somebody else's mod. It is our own item now,
    // on the model this addon has shipped all along and never used - data\'s
    // README still calls it "Model for the Intrusion Tablet item".
    //
    // Deliberately a screen you stop and open, not a thing you glance at: the
    // scanner below is the glance.
    class GVAR(terminalItem): ACE_ItemCore {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Intrusion Tablet";
        author = QAUTHOR;
        descriptionShort = "Rugged tablet running the intrusion suite. Needed to break into a tower or take a drone down.";
        picture = QPATHTOF(data\tablet_icon.paa);
        model = QPATHTOF(data\soldiertab.p3d);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 20;
        };
    };

    // THE HAND-HELD SENSOR, REBUILT. It was removed earlier and asked back: a
    // device you hold up while walking is a different thing from a screen you
    // stop and open. Separate kit from the terminal - the tablet is what you
    // hack WITH, this is what tells you whether hacking here is a good idea.
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

    // CARRIED INTEL. A searched body yields one of these; it is worth NOTHING
    // until it is physically deposited at an intel drop (new.md section 5).
    // That is the whole point of the rework: intel is a thing you carry home,
    // and the man carrying six of them is worth killing on the way.
    //
    // THREE KINDS, because "Captured Intel" told a player nothing about what
    // they were carrying. A phone, a marked map, a GPS - what came off the
    // body is now legible in the inventory, and a pocket of three phones
    // reads differently from a pocket of three maps. They are worth the same
    // at the drop: what varies is the story, not the score. INTEL_ITEMS in
    // script_component.hpp is the one list every consumer counts.
    class GVAR(intelItem): CBA_MiscItem {
        scope = 2;
        author = QAUTHOR;
        displayName = "Captured Phone";
        descriptionShort = "A dead man's handset. Worthless until deposited at an intel drop.";
        picture = QPATHTOF(data\hackphone_icon.paa);
        class ItemInfo: InventoryItem_Base_F {
            mass = 2;
        };
    };

    class GVAR(intelMap): GVAR(intelItem) {
        displayName = "Marked Map";
        descriptionShort = "Somebody's map, marked up. Worthless until deposited at an intel drop.";
        picture = "\A3\Weapons_F\Items\data\UI\gear_map_CA.paa";
    };

    class GVAR(intelGps): GVAR(intelItem) {
        displayName = "Captured GPS";
        descriptionShort = "A GPS with its track history intact. Worthless until deposited at an intel drop.";
        picture = "\A3\Weapons_F\Items\data\UI\gear_gps_CA.paa";
    };

    // THE DROP, PACKED. Carried like the satcom mast and deployed the same
    // way, so the collection point goes where the section actually is rather
    // than where somebody drew a marker before the mission started.
    class GVAR(dropItem): CBA_MiscItem {
        scope = 2;
        author = QAUTHOR;
        displayName = "Intel Drop Case";
        descriptionShort = "Deployable collection point. Intel is worth nothing until it is deposited in one.";
        picture = QPATHTOF(data\hackphone_icon.paa);
        class ItemInfo: InventoryItem_Base_F {
            mass = 40;
        };
    };
};
