#define GHOST_STANDARD_VEST_ITEMINFO \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo { \
            class Neck { \
                hitpointName = "HitNeck"; \
                armor = 8; \
                passThrough = 0.3; \
            }; \
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
            class Pelvis { \
                hitpointName = "HitPelvis"; \
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
    class ItemInfo; // defined for real in ghost_main (see its CfgWeapons.hpp)
    class V_CF_CarrierRig_F;
    class V_CF_CarrierRig_Lite_F;
    class V_CF_CarrierRig_MG_F;
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier1_blk;
    class V_PlateCarrier2_rgr;
    class V_PlateCarrier2_blk;
    class V_PlateCarrierGL_rgr;
    class V_PlateCarrierSpec_rgr;
    class V_PlateCarrier_CTRG_lxWS;
    class Aegis_V_PlateCarrier_RF_base;

    class GVAR(V_CF_CarrierRig_F): V_CF_CarrierRig_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Defender Rig [CDF]";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(V_CF_CarrierRig_Lite_F): V_CF_CarrierRig_Lite_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Defender Lite Rig [CDF]";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(V_CF_CarrierRig_MG_F): V_CF_CarrierRig_MG_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Defender MG Rig [CDF]";
        GHOST_STANDARD_VEST_ITEMINFO
    };

    // Aegis-defined plate carriers, buffed in place. Parents restated to match
    // the originals (mtp uses _blk to agree with the OCP retexture replacer).
    class V_PlateCarrier1_mtp: V_PlateCarrier1_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_khk: V_PlateCarrier1_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_oli: V_PlateCarrier1_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier1_cbr: V_PlateCarrier1_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_mtp: V_PlateCarrier2_blk {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_khk: V_PlateCarrier2_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_oli: V_PlateCarrier2_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrier2_cbr: V_PlateCarrier2_rgr {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_mtp: V_PlateCarrier_CTRG_lxWS {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_oli: V_PlateCarrier_CTRG_lxWS {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_wdl: V_PlateCarrier_CTRG_lxWS {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_tna: V_PlateCarrier_CTRG_lxWS {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_desert: V_PlateCarrier_CTRG_lxWS {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_khk: V_PlateCarrier_CTRG_lxWS {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_rgr: V_PlateCarrier_CTRG_lxWS {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_cbr: V_PlateCarrier_CTRG_lxWS {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier2_alt_blk: V_PlateCarrier_CTRG_lxWS {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_mtp: Aegis_V_PlateCarrier_RF_base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_wdl: Aegis_V_PlateCarrier_RF_base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_tna: Aegis_V_PlateCarrier_RF_base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_desert: Aegis_V_PlateCarrier_RF_base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_khk: Aegis_V_PlateCarrier_RF_base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_rgr: Aegis_V_PlateCarrier_RF_base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_cbr: Aegis_V_PlateCarrier_RF_base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_blk: Aegis_V_PlateCarrier_RF_base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class Aegis_V_PlateCarrier_RF_oli: Aegis_V_PlateCarrier_RF_base {
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierGL_cbr: V_PlateCarrierGL_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
    class V_PlateCarrierSpec_cbr: V_PlateCarrierSpec_rgr {
        GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
    };
};

#undef GHOST_STANDARD_VEST_ITEMINFO
#undef GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
#undef GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
