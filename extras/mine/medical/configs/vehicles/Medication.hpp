    
class GHOST_MorphineItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Morphine 10mg/1mL Ampoule";
    icon="\z\ghost\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";

    class TransportItems {
        TRANSPORT_ITEM(GHOST_morphine,1)
    };
};
class GHOST_epinephrineItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Adrenaline 1mg/1mL Ampoule";
    icon="\z\ghost\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";

    class TransportItems {
        TRANSPORT_ITEM(GHOST_epinephrine,1)
    };
};
class GHOST_fentanylItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Fentanyl 100mcg/2mL";
    icon="\z\ghost\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";

    class TransportItems {
        TRANSPORT_ITEM(GHOST_fentanyl,1)
    };
};

class GHOST_naloxonelItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Naloxone 1.6mg/4mL";
    author="Monk";
    icon="\z\ghost\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(GHOST_naloxone,1)
    };
};
class GHOST_ketamineItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Naloxone 1.6mg/4mL";
    author="Monk";
    icon="\z\ghost\addons\media\images\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(GHOST_ketamine,1)
    };
};

class Leaflet_05_F;
class GHOST_ApapLitter : Leaflet_05_F {
    hiddenSelectionsTextures[]= {
        "\z\ghost\addons\media\images\icon\apap_litter.paa"
    };
};

class GHOST_ApapItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Paracetemol 1g";
    icon="\z\ghost\addons\media\images\icon\apap.paa";
    model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(GHOST_Apap,1)
    };
};