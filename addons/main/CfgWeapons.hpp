class CfgWeapons {
    class ItemCore;

    // Real definition for the root-level ItemInfo class that the gear addons
    // declare as external (`class ItemInfo;`, required by HEMTT lint L-C04 for
    // their `class ItemInfo: ItemInfo` patches). Without a definition anywhere,
    // that declaration materializes an empty phantom class which the engine
    // instantiates at startup, spamming the RPT:
    //   "Error: creating weapon ItemInfo with scope=private" + "No entry" lines.
    // Deriving from ItemCore gives it every property that scan queries;
    // scope 1 keeps it out of the arsenal and silences the creation error.
    // Nested `class ItemInfo: ItemInfo` patches are unaffected: the engine
    // resolves those against the inherited member class, not this root class.
    class ItemInfo: ItemCore {
        author = QAUTHOR;
        scope = 1;
        scopeArsenal = 0;
        displayName = "";
    };
};
