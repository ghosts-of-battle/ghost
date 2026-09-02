// The hacking tablet as a carried item. Hacking is gated on holding this AND on
// being flagged ISR - the kit is issued, and the man carrying it is trained.
//
// ACE_ItemCore so it lives in the arsenal's items list and can be put in a
// uniform or vest like any other piece of kit - and so it has a model, which
// is what the arsenal needs to preview it.

class CfgWeapons {
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
    // ACE_ItemCore with a MODEL, not bare CBA_MiscItem. An item the arsenal can
    // show has to have something to show: with no model the 3DEN arsenal calls
    // createVehicle on the class to build its preview and the engine answers
    // "Bad vehicle type ghost_hacking_intelItem" - which is what it was doing,
    // four times, every time the arsenal was opened. The terminal and scanner
    // above never warned because they always had one.
    class GVAR(intelItem): ACE_ItemCore {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Captured Phone";
        descriptionShort = "A dead man's handset. Worthless until deposited at an intel drop.";
        picture = QPATHTOF(data\hackphone_icon.paa);
        model = QPATHTOF(data\hackphone.p3d);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };

    // The map and the GPS borrow the base game's own item models and icons -
    // the paths under Weapons_F\Items\data\UI were wrong and logged
    // "Picture ... not found" beside the four warnings above.
    class GVAR(intelMap): GVAR(intelItem) {
        displayName = "Marked Map";
        descriptionShort = "Somebody's map, marked up. Worthless until deposited at an intel drop.";
        picture = "\A3\Weapons_F\Data\UI\gear_item_map_ca.paa";
        model = "\A3\Weapons_F\Ammo\mag_map.p3d";
    };

    class GVAR(intelGps): GVAR(intelItem) {
        displayName = "Captured GPS";
        descriptionShort = "A GPS with its track history intact. Worthless until deposited at an intel drop.";
        picture = "\A3\Weapons_F\Data\UI\gear_item_gps_ca.paa";
        model = "\A3\Weapons_F\Ammo\mag_gps.p3d";
    };

    // THE DROP, PACKED. Carried like the satcom mast and deployed the same
    // way, so the collection point goes where the section actually is rather
    // than where somebody drew a marker before the mission started.
    class GVAR(dropItem): ACE_ItemCore {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Intel Drop Case";
        descriptionShort = "Deployable collection point. Intel is worth nothing until it is deposited in one.";
        picture = QPATHTOF(data\hackphone_icon.paa);
        // the packed case is the box it deploys into - see GVAR(drop)
        model = "\A3\Supplies_F_Heli\Ammoboxes\AmmoBox_rounded_F.p3d";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 40;
        };
    };
};
