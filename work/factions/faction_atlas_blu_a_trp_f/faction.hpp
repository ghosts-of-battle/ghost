// THE 3DEN AND ZEUS NAME.
//
// Once a faction's loadouts are ours it is not the thing the mod shipped,
// and a mission maker scrolling forty NATO variants has no way to tell
// which ones we rebuilt. Everything we modify carries the ghost_ prefix;
// everything we left alone keeps its own name, so the two are one glance
// apart in the editor and in Zeus.
//
// NO BASE CLASS, AND THAT IS WHAT MAKES THIS SAFE. This merges into the
// existing faction wherever it came from; if that mod is not loaded it
// leaves an inert empty class instead of a broken config. Either way it
// cannot break a load order.

class CfgFactionClasses {
    class Atlas_BLU_A_trp_F {
        displayName = "ghost_ADF (Pacific)";
    };
};
