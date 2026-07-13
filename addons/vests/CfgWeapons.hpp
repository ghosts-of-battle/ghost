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

// Vanilla-defined plate carriers only. Aegis-defined variants live in
// ghost_vests_aegis, Western Sahara ones in ghost_vests_ws.
// Every class MUST restate its original parent: a parentless patch strips
// the base class ("Updating base class X->") and breaks the vest.
class CfgWeapons {
    class ItemInfo; // defined for real in ghost_main (see its CfgWeapons.hpp)
    class Vest_Camo_Base;
    class Vest_NoCamo_Base;

    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_blk: Vest_Camo_Base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_rgr_noflag_F: V_PlateCarrier1_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_tna_F: V_PlateCarrier1_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_wdl: V_PlateCarrier1_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_blk: V_PlateCarrier2_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_rgr_noflag_F: V_PlateCarrier2_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_tna_F: V_PlateCarrier2_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_wdl: V_PlateCarrier2_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_rgr: Vest_NoCamo_Base {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_blk: V_PlateCarrierGL_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_mtp: V_PlateCarrierGL_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_tna_F: V_PlateCarrierGL_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_wdl: V_PlateCarrierGL_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_blk: V_PlateCarrierSpec_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_mtp: V_PlateCarrierSpec_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_tna_F: V_PlateCarrierSpec_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_wdl: V_PlateCarrierSpec_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
};

#undef GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
#undef GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
