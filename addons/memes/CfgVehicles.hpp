class CfgVehicles {
    class Item_Base_F;
    class ghost_cheezItBoxPlaceable: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Placeable Cheez-It Box";
        author = "Ghost";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(ghost_cheezItBox,1);
        };
    };
    class ghost_serverPlaceable: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Placeable Dedicated Server";
        author = "Ghost";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(ghost_serverBox,1);
        };
    };
    class ghost_gamestopPlaceable: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Placeable Gamestop Stock";
        author = "Ghost";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(ghost_gamestop,1);
        };
    };
};
