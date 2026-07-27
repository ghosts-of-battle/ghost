class CfgWeapons {
    class Item_B_Tura_UavTerminal_lxWS;
    class B_Tura_UavTerminal_lxWS;

    class Item_ghost_taliban_UavTerminal_lxWS: Item_B_Tura_UavTerminal_lxWS {
        side = 2;
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        faction = "IND_TURA_lxWS";
        class TransportItems
        {
            class _xx_ghost_taliban_UavTerminal_lxWS
            {
                name = "ghost_taliban_UavTerminal_lxWS";
                count = 1;
            };
        };
    };
    class ghost_taliban_UavTerminal_lxWS: B_Tura_UavTerminal_lxWS {
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        class ItemInfo
        {
            side = 2;
        };
    };
};
