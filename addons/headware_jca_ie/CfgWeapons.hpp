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

#define GHOST_SOFT_HEADGEAR_ITEMINFO \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo { \
            class Head { \
                hitpointName = "HitHead"; \
                armor = 4; \
                passThrough = 0.6; \
            }; \
        }; \
    };

class CfgWeapons {
    class ItemInfo;
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
    class JCA_H_Beanie_01_black_F;
    class JCA_H_Beanie_01_headset_black_F;
    class JCA_H_Beanie_01_olive_F;
    class JCA_H_Beanie_01_headset_olive_F;
    class JCA_H_Beanie_01_sand_F;
    class JCA_H_Beanie_01_headset_sand_F;
    class JCA_H_Beret_01_black_F;
    class JCA_H_Beret_01_headset_black_F;
    class JCA_H_Beret_01_olive_F;
    class JCA_H_Beret_01_headset_olive_F;
    class JCA_H_Beret_01_sand_F;
    class JCA_H_Beret_01_headset_sand_F;
    class JCA_H_Cap_01_black_F;
    class JCA_H_Cap_01_olive_F;
    class JCA_H_Cap_01_headset_olive_F;
    class JCA_H_Cap_01_sand_F;
    class JCA_H_Cap_01_headset_sand_F;
    class JCA_H_Headset_Combat_01_olive_F;
    class JCA_H_Headset_Combat_01_sand_F;
    class JCA_H_Cap_Military_01_black_F;
    class JCA_H_Cap_Military_01_headset_black_F;
    class JCA_H_Cap_Military_01_olive_F;
    class JCA_H_Cap_Military_01_headset_olive_F;
    class JCA_H_Cap_Military_01_sand_F;
    class JCA_H_Cap_Military_01_headset_sand_F;
    class JCA_H_shemagh_01_black_F;
    class JCA_H_shemagh_01_glasses_black_F;
    class JCA_H_shemagh_01_headset_black_F;
    class JCA_H_shemagh_01_headset_glasses_black_F;
    class JCA_H_shemagh_01_olive_F;
    class JCA_H_shemagh_01_glasses_olive_F;
    class JCA_H_shemagh_01_headset_olive_F;
    class JCA_H_shemagh_01_headset_glasses_olive_F;
    class JCA_H_shemagh_01_sand_F;
    class JCA_H_shemagh_01_glasses_sand_F;
    class JCA_H_shemagh_01_headset_glasses_sand_F;
    class JCA_H_balaclava_01_black_F;
    class JCA_H_balaclava_01_glasses_black_F;
    class JCA_H_balaclava_01_headset_black_F;
    class JCA_H_balaclava_01_olive_F;
    class JCA_H_balaclava_01_glasses_olive_F;
    class JCA_H_balaclava_01_headset_olive_F;
    class JCA_H_balaclava_01_headset_glasses_olive_F;
    class JCA_H_balaclava_01_sand_F;
    class JCA_H_balaclava_01_glasses_sand_F;
    class JCA_H_balaclava_01_headset_sand_F;
    class JCA_H_balaclava_01_headset_glasses_sand_F;
    class JCA_H_balaclava_01_headset_glasses_black_F;
    class JCA_H_shemagh_01_headset_sand_F;
    class JCA_H_Headset_Combat_01_black_F;
    class JCA_H_Cap_01_headset_black_F;
    class JCA_H_HelmetHBK_ear_olive_F;

    class GVAR(JCA_H_HelmetHBK_black_F): JCA_H_HelmetHBK_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Black) (Ghost)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_chops_black_F): JCA_H_HelmetHBK_chops_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Black, Chops) (Ghost)";
        GHOST_HELMET_CHOPS_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_ear_black_F): JCA_H_HelmetHBK_ear_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Black, Ear Protectors) (Ghost)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_headset_black_F): JCA_H_HelmetHBK_headset_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Black, Headset) (Ghost)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_olive_F): JCA_H_HelmetHBK_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Olive) (Ghost)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_chops_olive_F): JCA_H_HelmetHBK_chops_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Olive, Chops) (Ghost)";
        GHOST_HELMET_CHOPS_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_headset_olive_F): JCA_H_HelmetHBK_headset_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Olive, Headset) (Ghost)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_sand_F): JCA_H_HelmetHBK_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Sand) (Ghost)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_chops_sand_F): JCA_H_HelmetHBK_chops_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Sand, Chops) (Ghost)";
        GHOST_HELMET_CHOPS_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_ear_sand_F): JCA_H_HelmetHBK_ear_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Sand, Ear Protectors) (Ghost)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_headset_sand_F): JCA_H_HelmetHBK_headset_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Sand, Headset) (Ghost)";
        GHOST_HELMET_ITEMINFO
    };
    class GVAR(JCA_H_Beanie_01_black_F): JCA_H_Beanie_01_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beanie (Black) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beanie_01_headset_black_F): JCA_H_Beanie_01_headset_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beanie (Black, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beanie_01_olive_F): JCA_H_Beanie_01_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beanie (Olive) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beanie_01_headset_olive_F): JCA_H_Beanie_01_headset_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beanie (Olive, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beanie_01_sand_F): JCA_H_Beanie_01_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beanie (Sand) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beanie_01_headset_sand_F): JCA_H_Beanie_01_headset_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beanie (Sand, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beret_01_black_F): JCA_H_Beret_01_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beret (Black) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beret_01_headset_black_F): JCA_H_Beret_01_headset_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beret (Black, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beret_01_olive_F): JCA_H_Beret_01_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beret (Olive) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beret_01_headset_olive_F): JCA_H_Beret_01_headset_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beret (Olive, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beret_01_sand_F): JCA_H_Beret_01_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beret (Sand) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Beret_01_headset_sand_F): JCA_H_Beret_01_headset_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Beret (Sand, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_01_black_F): JCA_H_Cap_01_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Cap (Black) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_01_olive_F): JCA_H_Cap_01_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Cap (Olive) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_01_headset_olive_F): JCA_H_Cap_01_headset_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Cap (Olive, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_01_sand_F): JCA_H_Cap_01_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Cap (Sand) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_01_headset_sand_F): JCA_H_Cap_01_headset_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Cap (Sand, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Headset_Combat_01_olive_F): JCA_H_Headset_Combat_01_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Combat Headset (Olive) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Headset_Combat_01_sand_F): JCA_H_Headset_Combat_01_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Combat Headset (Sand) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_Military_01_black_F): JCA_H_Cap_Military_01_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Field Cap (Black) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_Military_01_headset_black_F): JCA_H_Cap_Military_01_headset_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Field Cap (Black, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_Military_01_olive_F): JCA_H_Cap_Military_01_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Field Cap (Olive) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_Military_01_headset_olive_F): JCA_H_Cap_Military_01_headset_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Field Cap (Olive, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_Military_01_sand_F): JCA_H_Cap_Military_01_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Field Cap (Sand) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_Military_01_headset_sand_F): JCA_H_Cap_Military_01_headset_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Field Cap (Sand, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_black_F): JCA_H_shemagh_01_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Black) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_glasses_black_F): JCA_H_shemagh_01_glasses_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Black, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_headset_black_F): JCA_H_shemagh_01_headset_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Black, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_headset_glasses_black_F): JCA_H_shemagh_01_headset_glasses_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Black, Headset, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_olive_F): JCA_H_shemagh_01_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Olive) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_glasses_olive_F): JCA_H_shemagh_01_glasses_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Olive, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_headset_olive_F): JCA_H_shemagh_01_headset_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Olive, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_headset_glasses_olive_F): JCA_H_shemagh_01_headset_glasses_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Olive, Headset, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_sand_F): JCA_H_shemagh_01_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Sand) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_glasses_sand_F): JCA_H_shemagh_01_glasses_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Sand, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_headset_glasses_sand_F): JCA_H_shemagh_01_headset_glasses_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Sand, Headset, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_black_F): JCA_H_balaclava_01_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Black) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_glasses_black_F): JCA_H_balaclava_01_glasses_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Black, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_headset_black_F): JCA_H_balaclava_01_headset_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Black, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_olive_F): JCA_H_balaclava_01_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Olive) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_glasses_olive_F): JCA_H_balaclava_01_glasses_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Olive, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_headset_olive_F): JCA_H_balaclava_01_headset_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Olive, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_headset_glasses_olive_F): JCA_H_balaclava_01_headset_glasses_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Olive, Headset, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_sand_F): JCA_H_balaclava_01_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Sand) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_glasses_sand_F): JCA_H_balaclava_01_glasses_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Sand, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_headset_sand_F): JCA_H_balaclava_01_headset_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Sand, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_headset_glasses_sand_F): JCA_H_balaclava_01_headset_glasses_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Sand, Headset, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_balaclava_01_headset_glasses_black_F): JCA_H_balaclava_01_headset_glasses_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Tactical Balaclava (Black, Headset, Glasses) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_shemagh_01_headset_sand_F): JCA_H_shemagh_01_headset_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Shemagh (Sand, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Headset_Combat_01_black_F): JCA_H_Headset_Combat_01_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Combat Headset (Black) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_Cap_01_headset_black_F): JCA_H_Cap_01_headset_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Cap (Black, Headset) (Ghost)";
        GHOST_SOFT_HEADGEAR_ITEMINFO
    };
    class GVAR(JCA_H_HelmetHBK_ear_olive_F): JCA_H_HelmetHBK_ear_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Advanced Modular Helmet (Olive, Ear Protectors) (Ghost)";
        GHOST_HELMET_ITEMINFO
    };
};

#undef GHOST_HELMET_ITEMINFO
#undef GHOST_HELMET_CHOPS_ITEMINFO
#undef GHOST_SOFT_HEADGEAR_ITEMINFO
