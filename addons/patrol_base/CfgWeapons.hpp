class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore: CBA_MiscItem {};

    // Carried patrol-base kit item. CBA_MiscItem => native ACE Arsenal misc item
    // (no ACE_asItem hack). Deploy the required number, then any player can
    // establish a patrol base. Weight = 3x a vanilla ToolKit (mass 60). The world
    // object it drops as lives in CfgVehicles (GVAR(kit_*_object)).
    class GVAR(kit_sand): ACE_ItemCore {
        author = QAUTHOR;
        scope = 2;
        displayName = "Patrol Base Kit (Sand)";
        descriptionShort = "Small equipment case. Drop the required number within range to establish a patrol base.";
        model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_brown_folded_F.p3d";
        picture = "\A3\Weapons_F\data\UI\gear_item_radio_ca.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = KIT_MASS;
        };
    };

    class GVAR(kit_olive): GVAR(kit_sand) {
        displayName = "Patrol Base Kit (Olive)";
        model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_folded_F.p3d";
    };
};
