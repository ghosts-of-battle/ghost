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

class CfgWeapons {
    class ItemInfo;
    class V_PlateCarrier1_mtp {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_wdl {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_tna_F {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_lxWS_PlateCarrier1_desert {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_khk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_oli {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_rgr_noflag_F {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_cbr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_mtp {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_wdl {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_oli {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_tna_F {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_lxWS_PlateCarrier2_desert {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_khk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_rgr_noflag_F {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_cbr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_mtp {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_oli {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_wdl {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_tna {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_desert {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_khk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_cbr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_mtp {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_wdl {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_tna {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_desert {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_khk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_cbr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_oli {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_mtp {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_wdl {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_tna_F {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_lxWS_PlateCarrierGL_desert {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_cbr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_blk {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_mtp {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_wdl {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_lxWS_PlateCarrierSpec_desert {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_blk {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_tna_F {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_cbr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
};

#undef GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
#undef GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
