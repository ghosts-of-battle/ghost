#define GHOST_STANDARD_PLATE_CARRIER_ITEMINFO \
    class ItemInfo: ItemInfo { \
        mass = 60; \
        class HitpointsProtectionInfo { \
            class Chest { \
                hitpointName = "HitChest"; \
                armor = 29; \
                passThrough = 0.085; \
            }; \
            class Body { \
                hitpointName = "HitBody"; \
                passThrough = 0.085; \
            }; \
            class Diaphragm { \
                hitpointName = "HitDiaphragm"; \
                armor = 29; \
                passThrough = 0.085; \
            }; \
            class Abdomen { \
                hitpointName = "HitAbdomen"; \
                armor = 19; \
                passThrough = 0.255; \
            }; \
            class Arms { \
                hitpointName = "HitArms"; \
                armor = 12; \
                passThrough = 0.55; \
            }; \
            class Legs { \
                hitpointName = "HitLegs"; \
                armor = 12; \
                passThrough = 0.55; \
            }; \
        }; \
    };

#define GHOST_HEAVY_PLATE_CARRIER_ITEMINFO \
    class ItemInfo: ItemInfo { \
        mass = 85; \
        class HitpointsProtectionInfo { \
            class Chest { \
                hitpointName = "HitChest"; \
                armor = 34; \
                passThrough = 0.06; \
            }; \
            class Body { \
                hitpointName = "HitBody"; \
                passThrough = 0.06; \
            }; \
            class Diaphragm { \
                hitpointName = "HitDiaphragm"; \
                armor = 34; \
                passThrough = 0.06; \
            }; \
            class Abdomen { \
                hitpointName = "HitAbdomen"; \
                armor = 24; \
                passThrough = 0.21; \
            }; \
            class Arms { \
                hitpointName = "HitArms"; \
                armor = 14; \
                passThrough = 0.5; \
            }; \
            class Legs { \
                hitpointName = "HitLegs"; \
                armor = 14; \
                passThrough = 0.5; \
            }; \
        }; \
    };

// Western Sahara CDLC plate carriers, buffed in place with parents restated.
class CfgWeapons {
    class ItemInfo; // defined for real in ghost_main (see its CfgWeapons.hpp)
    class V_PlateCarrier1_blk;
    class V_PlateCarrier2_blk;
    class V_PlateCarrierGL_rgr;
    class V_PlateCarrierSpec_blk;

    class V_lxWS_PlateCarrier1_desert: V_PlateCarrier1_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_lxWS_PlateCarrier2_desert: V_PlateCarrier2_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_lxWS_PlateCarrierGL_desert: V_PlateCarrierGL_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_lxWS_PlateCarrierSpec_desert: V_PlateCarrierSpec_blk {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
};

#undef GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
#undef GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
