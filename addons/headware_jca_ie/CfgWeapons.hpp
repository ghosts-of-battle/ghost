#define GHOST_HELMET_ITEMINFO \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo { \
            class Head { \
                hitpointName = "HitHead"; \
                armor = 12; \
                passThrough = 0.35; \
            }; \
        }; \
    };

#define GHOST_HELMET_CHOPS_ITEMINFO \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo { \
            class Head { \
                hitpointName = "HitHead"; \
                armor = 12; \
                passThrough = 0.35; \
            }; \
            class Face { \
                hitpointName = "HitFace"; \
                armor = 6; \
                passThrough = 0.1; \
            }; \
        }; \
    };

class CfgWeapons {
    class ItemInfo; // defined for real in ghost_main (see its CfgWeapons.hpp)
    class HelmetBase;

    // ACE electronic hearing protection for all JCA HBK helmets: every variant
    // (and our ghost ones) inherits from this base, so one patch covers them.
    // Parent restated to avoid severing the inheritance chain.
    class JCA_H_HelmetHBK_base_F: HelmetBase {
        MACRO_ACE_HEARING
    };

    class JCA_H_HelmetHBK_black_F;
    class JCA_H_HelmetHBK_chops_black_F;
    class JCA_H_HelmetHBK_ear_black_F;
    class JCA_H_HelmetHBK_headset_black_F;
    class JCA_H_HelmetHBK_olive_F;
    class JCA_H_HelmetHBK_chops_olive_F;
    class JCA_H_HelmetHBK_headset_olive_F;
    class JCA_H_HelmetHBK_sand_F;
    class JCA_H_HelmetHBK_chops_sand_F;
    class JCA_H_HelmetHBK_ear_sand_F;
    class JCA_H_HelmetHBK_headset_sand_F;
    class JCA_H_HelmetHBK_ear_olive_F;

    class GVAR(JCA_H_HelmetHBK_black_F): JCA_H_HelmetHBK_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Black)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_chops_black_F): JCA_H_HelmetHBK_chops_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Black, Chops)";
        GHOST_HELMET_CHOPS_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_ear_black_F): JCA_H_HelmetHBK_ear_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Black, Ear Protectors)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_headset_black_F): JCA_H_HelmetHBK_headset_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Black, Headset)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_olive_F): JCA_H_HelmetHBK_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Olive)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_chops_olive_F): JCA_H_HelmetHBK_chops_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Olive, Chops)";
        GHOST_HELMET_CHOPS_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_headset_olive_F): JCA_H_HelmetHBK_headset_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Olive, Headset)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_sand_F): JCA_H_HelmetHBK_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Sand)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_chops_sand_F): JCA_H_HelmetHBK_chops_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Sand, Chops)";
        GHOST_HELMET_CHOPS_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_ear_sand_F): JCA_H_HelmetHBK_ear_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Sand, Ear Protectors)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_headset_sand_F): JCA_H_HelmetHBK_headset_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Sand, Headset)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_ear_olive_F): JCA_H_HelmetHBK_ear_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Advanced Modular Helmet (Olive, Ear Protectors)";
        GHOST_HELMET_ITEMINFO
    };
};

#undef GHOST_HELMET_ITEMINFO
#undef GHOST_HELMET_CHOPS_ITEMINFO
