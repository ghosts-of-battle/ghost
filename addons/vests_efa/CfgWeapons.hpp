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

#define GHOST_HEAVY_VEST_ITEMINFO \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo { \
            class Neck { \
                hitpointName = "HitNeck"; \
                armor = 10; \
                passThrough = 0.25; \
            }; \
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
            class Pelvis { \
                hitpointName = "HitPelvis"; \
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
    class EF_V_AAV_Black;
    class EF_V_AAV_Diver_Black;
    class EF_V_AAV_Diver_Alt_Black;
    class EF_V_AAV_Diver_NoReb_Black;
    class EF_V_AAV_Diver_NoReb_Alt_Black;
    class EF_V_AAV_Rifleman_Black;
    class EF_V_AAV_Rifleman_Alt_Black;
    class EF_V_AAV_Sailor_Black;
    class EF_V_AAV_Sailor_Alt_Black;
    class EF_V_AAV_Scout_Black;
    class EF_V_AAV_Scout_Alt_Black;
    class EF_V_AAV_Support_Black;
    class EF_V_AAV_TL_Black;
    class EF_V_AAV_TL_Alt_Black;
    class EF_V_AAV_Coy;
    class EF_V_AAV_Diver_Coy;
    class EF_V_AAV_Diver_NoReb_Coy;
    class EF_V_AAV_Diver_NoReb_Alt_Coy;
    class EF_V_AAV_Rifleman_Coy;
    class EF_V_AAV_Rifleman_Alt_Coy;
    class EF_V_AAV_Sailor_Coy;
    class EF_V_AAV_Sailor_Alt_Coy;
    class EF_V_AAV_Scout_Coy;
    class EF_V_AAV_Scout_Alt_Coy;
    class EF_V_AAV_Support_Coy;
    class EF_V_AAV_TL_Coy;
    class EF_V_AAV_TL_Alt_Coy;
    class EFA_V_AAV_des;
    class EFA_V_AAV_Diver_des;
    class EFA_V_AAV_Diver_Alt_des;
    class EFA_V_AAV_Diver_NoReb_des;
    class EFA_V_AAV_Diver_NoReb_Alt_des;
    class EFA_V_AAV_Rifleman_des;
    class EFA_V_AAV_Rifleman_Alt_des;
    class EFA_V_AAV_Sailor_des;
    class EFA_V_AAV_Sailor_Alt_des;
    class EFA_V_AAV_Scout_DES;
    class EFA_V_AAV_Scout_Alt_DES;
    class EFA_V_AAV_Support_des;
    class EFA_V_AAV_TL_des;
    class EFA_V_AAV_TL_Alt_des;
    class EFA_V_AAV_tna;
    class EFA_V_AAV_Diver_tna;
    class EFA_V_AAV_Diver_Alt_tna;
    class EFA_V_AAV_Diver_NoReb_Alt_tna;
    class EFA_V_AAV_Rifleman_tna;
    class EFA_V_AAV_Rifleman_Alt_tna;
    class EFA_V_AAV_Sailor_tna;
    class EFA_V_AAV_Sailor_Alt_tna;
    class EFA_V_AAV_Scout_tna;
    class EFA_V_AAV_Scout_Alt_tna;
    class EFA_V_AAV_Support_tna;
    class EFA_V_AAV_TL_tna;
    class EFA_V_AAV_TL_Alt_tna;
    class EFA_V_AAV_wdl;
    class EFA_V_AAV_Diver_wdl;
    class EFA_V_AAV_Diver_Alt_wdl;
    class EFA_V_AAV_Diver_NoReb_wdl;
    class EFA_V_AAV_Diver_NoReb_Alt_wdl;
    class EFA_V_AAV_Rifleman_wdl;
    class EFA_V_AAV_Rifleman_Alt_wdl;
    class EFA_V_AAV_Sailor_wdl;
    class EFA_V_AAV_Sailor_Alt_wdl;
    class EFA_V_AAV_Scout_wdl;
    class EFA_V_AAV_Scout_Alt_wdl;
    class EFA_V_AAV_Support_wdl;
    class EFA_V_AAV_TL_wdl;
    class EFA_V_AAV_Diver_Alt_MTP;
    class EFA_V_AAV_Diver_NoReb_MTP;
    class EFA_V_AAV_Diver_NoReb_Alt_MTP;
    class EFA_V_AAV_Rifleman_Alt_MTP;
    class EFA_V_AAV_Sailor_Alt_MTP;
    class EFA_V_AAV_Scout_Alt_MTP;
    class EFA_V_AAV_TL_Alt_MTP;
    class EFA_V_AAV_MTP;
    class EFA_V_AAV_Diver_MTP;
    class EFA_V_AAV_Rifleman_MTP;
    class EFA_V_AAV_Sailor_MTP;
    class EFA_V_AAV_Scout_MTP;
    class EFA_V_AAV_Support_MTP;
    class EFA_V_AAV_TL_MTP;
    class EF_V_AAV_Olive;
    class EF_V_AAV_Diver_Olive;
    class EF_V_AAV_Diver_Alt_Olive;
    class EF_V_AAV_Diver_NoReb_Olive;
    class EF_V_AAV_Diver_NoReb_Alt_Olive;
    class EF_V_AAV_Rifleman_Olive;
    class EF_V_AAV_Rifleman_Alt_Olive;
    class EF_V_AAV_Sailor_Olive;
    class EF_V_AAV_Sailor_Alt_Olive;
    class EF_V_AAV_Scout_Alt_Olive;
    class EF_V_AAV_Support_Olive;
    class EF_V_AAV_TL_Olive;
    class EF_V_AAV_TL_Alt_Olive;
    class EF_V_CCR_Rifleman_Black;
    class EF_V_CCR_Rifleman_Alt_Black;
    class EF_V_CCR_Scout_Black;
    class EF_V_CCR_Scout_Alt_Black;
    class EF_V_CCR_Support_Black;
    class EF_V_CCR_TL_Black;
    class EF_V_CCR_TL_Alt_Black;
    class EF_V_CCR_Rifleman_Coy;
    class EF_V_CCR_Rifleman_Alt_Coy;
    class EF_V_CCR_Scout_Coy;
    class EF_V_CCR_Scout_Alt_Coy;
    class EF_V_CCR_Support_Coy;
    class EF_V_CCR_TL_Coy;
    class EF_V_CCR_TL_Alt_Coy;
    class EFA_V_CCR_Rifleman_des;
    class EFA_V_CCR_Rifleman_Alt_des;
    class EFA_V_CCR_Scout_des;
    class EFA_V_CCR_Scout_Alt_des;
    class EFA_V_CCR_Support_des;
    class EFA_V_CCR_TL_Alt_des;
    class EFA_V_CCR_Rifleman_tna;
    class EFA_V_CCR_Rifleman_Alt_tna;
    class EFA_V_CCR_Scout_tna;
    class EFA_V_CCR_Scout_Alt_tna;
    class EFA_V_CCR_Support_tna;
    class EFA_V_CCR_TL_tna;
    class EFA_V_CCR_TL_Alt_tna;
    class EFA_V_CCR_Rifleman_wdl;
    class EFA_V_CCR_Rifleman_Alt_wdl;
    class EFA_V_CCR_Scout_wdl;
    class EFA_V_CCR_Scout_Alt_wdl;
    class EFA_V_CCR_Support_wdl;
    class EFA_V_CCR_TL_wdl;
    class EFA_V_CCR_TL_Alt_wdl;
    class EFA_V_CCR_Rifleman_Alt_MTP;
    class EFA_V_CCR_Scout_Alt_MTP;
    class EFA_V_CCR_TL_Alt_MTP;
    class EFA_V_CCR_Rifleman_MTP;
    class EFA_V_CCR_Scout_MTP;
    class EFA_V_CCR_Support_MTP;
    class EFA_V_CCR_TL_MTP;
    class EF_V_CCR_Rifleman_Olive;
    class EF_V_CCR_Scout_Olive;
    class EF_V_CCR_Scout_Alt_Olive;
    class EF_V_CCR_Support_Olive;
    class EF_V_CCR_TL_Olive;
    class EF_V_CCR_TL_Alt_Olive;
    class EF_V_CCR_Rifleman_Alt_Olive;
    class EFA_V_CCR_TL_des;
    class EF_V_AAV_Scout_Olive;
    class EFA_V_AAV_TL_Alt_wdl;
    class EFA_V_AAV_Diver_NoReb_tna;
    class EF_V_AAV_Diver_Alt_Coy;

    class GVAR(EF_V_AAV_Black): EF_V_AAV_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_Black): EF_V_AAV_Diver_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Diver) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_Alt_Black): EF_V_AAV_Diver_Alt_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Diver/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_NoReb_Black): EF_V_AAV_Diver_NoReb_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Diver/No Rebreather) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_NoReb_Alt_Black): EF_V_AAV_Diver_NoReb_Alt_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Diver/No Rebreather/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Rifleman_Black): EF_V_AAV_Rifleman_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Rifleman_Alt_Black): EF_V_AAV_Rifleman_Alt_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Sailor_Black): EF_V_AAV_Sailor_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Sailor) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Sailor_Alt_Black): EF_V_AAV_Sailor_Alt_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Sailor/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Scout_Black): EF_V_AAV_Scout_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Scout_Alt_Black): EF_V_AAV_Scout_Alt_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Support_Black): EF_V_AAV_Support_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_TL_Black): EF_V_AAV_TL_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_TL_Alt_Black): EF_V_AAV_TL_Alt_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Black/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Coy): EF_V_AAV_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_Coy): EF_V_AAV_Diver_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote/Diver) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_NoReb_Coy): EF_V_AAV_Diver_NoReb_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote/Diver/No Rebreather) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_NoReb_Alt_Coy): EF_V_AAV_Diver_NoReb_Alt_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote Brown/Diver/No Rebreather/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Rifleman_Coy): EF_V_AAV_Rifleman_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Rifleman_Alt_Coy): EF_V_AAV_Rifleman_Alt_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote Brown/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Sailor_Coy): EF_V_AAV_Sailor_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote/Sailor) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Sailor_Alt_Coy): EF_V_AAV_Sailor_Alt_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote Brown/Sailor/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Scout_Coy): EF_V_AAV_Scout_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Scout_Alt_Coy): EF_V_AAV_Scout_Alt_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote Brown/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Support_Coy): EF_V_AAV_Support_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_TL_Coy): EF_V_AAV_TL_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_TL_Alt_Coy): EF_V_AAV_TL_Alt_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote Brown/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_des): EFA_V_AAV_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_des): EFA_V_AAV_Diver_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Diver) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_Alt_des): EFA_V_AAV_Diver_Alt_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Diver/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_NoReb_des): EFA_V_AAV_Diver_NoReb_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Diver/No Rebreather) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_NoReb_Alt_des): EFA_V_AAV_Diver_NoReb_Alt_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Diver/No Rebreather/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Rifleman_des): EFA_V_AAV_Rifleman_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Rifleman_Alt_des): EFA_V_AAV_Rifleman_Alt_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Sailor_des): EFA_V_AAV_Sailor_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Sailor) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Sailor_Alt_des): EFA_V_AAV_Sailor_Alt_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Sailor/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Scout_DES): EFA_V_AAV_Scout_DES {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Scout_Alt_DES): EFA_V_AAV_Scout_Alt_DES {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Support_des): EFA_V_AAV_Support_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_TL_des): EFA_V_AAV_TL_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_TL_Alt_des): EFA_V_AAV_TL_Alt_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Desert/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_tna): EFA_V_AAV_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_tna): EFA_V_AAV_Diver_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Diver) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_Alt_tna): EFA_V_AAV_Diver_Alt_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Diver/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_NoReb_Alt_tna): EFA_V_AAV_Diver_NoReb_Alt_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Diver/No Rebreather/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Rifleman_tna): EFA_V_AAV_Rifleman_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Rifleman_Alt_tna): EFA_V_AAV_Rifleman_Alt_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Sailor_tna): EFA_V_AAV_Sailor_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Sailor) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Sailor_Alt_tna): EFA_V_AAV_Sailor_Alt_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Sailor/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Scout_tna): EFA_V_AAV_Scout_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Scout_Alt_tna): EFA_V_AAV_Scout_Alt_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Support_tna): EFA_V_AAV_Support_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_TL_tna): EFA_V_AAV_TL_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_TL_Alt_tna): EFA_V_AAV_TL_Alt_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_wdl): EFA_V_AAV_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_wdl): EFA_V_AAV_Diver_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Diver) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_Alt_wdl): EFA_V_AAV_Diver_Alt_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Diver/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_NoReb_wdl): EFA_V_AAV_Diver_NoReb_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Diver/No Rebreather) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_NoReb_Alt_wdl): EFA_V_AAV_Diver_NoReb_Alt_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Diver/No Rebreather/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Rifleman_wdl): EFA_V_AAV_Rifleman_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Rifleman_Alt_wdl): EFA_V_AAV_Rifleman_Alt_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Sailor_wdl): EFA_V_AAV_Sailor_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Sailor) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Sailor_Alt_wdl): EFA_V_AAV_Sailor_Alt_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Sailor/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Scout_wdl): EFA_V_AAV_Scout_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Scout_Alt_wdl): EFA_V_AAV_Scout_Alt_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Support_wdl): EFA_V_AAV_Support_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_TL_wdl): EFA_V_AAV_TL_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_Alt_MTP): EFA_V_AAV_Diver_Alt_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Diver/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_NoReb_MTP): EFA_V_AAV_Diver_NoReb_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Diver/No Rebreather) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_NoReb_Alt_MTP): EFA_V_AAV_Diver_NoReb_Alt_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Diver/No Rebreather/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Rifleman_Alt_MTP): EFA_V_AAV_Rifleman_Alt_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Sailor_Alt_MTP): EFA_V_AAV_Sailor_Alt_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Sailor/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Scout_Alt_MTP): EFA_V_AAV_Scout_Alt_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_TL_Alt_MTP): EFA_V_AAV_TL_Alt_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_MTP): EFA_V_AAV_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_MTP): EFA_V_AAV_Diver_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Diver) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Rifleman_MTP): EFA_V_AAV_Rifleman_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Sailor_MTP): EFA_V_AAV_Sailor_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Sailor) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Scout_MTP): EFA_V_AAV_Scout_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Support_MTP): EFA_V_AAV_Support_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_TL_MTP): EFA_V_AAV_TL_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (MTP/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Olive): EF_V_AAV_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_Olive): EF_V_AAV_Diver_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Diver) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_Alt_Olive): EF_V_AAV_Diver_Alt_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Diver/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_NoReb_Olive): EF_V_AAV_Diver_NoReb_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Diver/No Rebreather) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_NoReb_Alt_Olive): EF_V_AAV_Diver_NoReb_Alt_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Diver/No Rebreather/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Rifleman_Olive): EF_V_AAV_Rifleman_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Rifleman_Alt_Olive): EF_V_AAV_Rifleman_Alt_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Sailor_Olive): EF_V_AAV_Sailor_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Sailor) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Sailor_Alt_Olive): EF_V_AAV_Sailor_Alt_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Sailor/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Scout_Alt_Olive): EF_V_AAV_Scout_Alt_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Support_Olive): EF_V_AAV_Support_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_TL_Olive): EF_V_AAV_TL_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_TL_Alt_Olive): EF_V_AAV_TL_Alt_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Rifleman_Black): EF_V_CCR_Rifleman_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Black/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Rifleman_Alt_Black): EF_V_CCR_Rifleman_Alt_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Black/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Scout_Black): EF_V_CCR_Scout_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Black/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Scout_Alt_Black): EF_V_CCR_Scout_Alt_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Black/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Support_Black): EF_V_CCR_Support_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Black/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_TL_Black): EF_V_CCR_TL_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Black/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_TL_Alt_Black): EF_V_CCR_TL_Alt_Black {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Black/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Rifleman_Coy): EF_V_CCR_Rifleman_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Coyote/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Rifleman_Alt_Coy): EF_V_CCR_Rifleman_Alt_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Coyote Brown/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Scout_Coy): EF_V_CCR_Scout_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Coyote/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Scout_Alt_Coy): EF_V_CCR_Scout_Alt_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Coyote Brown/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Support_Coy): EF_V_CCR_Support_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Coyote/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_TL_Coy): EF_V_CCR_TL_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Coyote/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_TL_Alt_Coy): EF_V_CCR_TL_Alt_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Coyote Brown/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Rifleman_des): EFA_V_CCR_Rifleman_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Desert/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Rifleman_Alt_des): EFA_V_CCR_Rifleman_Alt_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Desert/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Scout_des): EFA_V_CCR_Scout_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Desert/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Scout_Alt_des): EFA_V_CCR_Scout_Alt_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Desert/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Support_des): EFA_V_CCR_Support_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Desert/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_TL_Alt_des): EFA_V_CCR_TL_Alt_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Desert/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Rifleman_tna): EFA_V_CCR_Rifleman_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Tropic/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Rifleman_Alt_tna): EFA_V_CCR_Rifleman_Alt_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Tropic/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Scout_tna): EFA_V_CCR_Scout_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Tropic/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Scout_Alt_tna): EFA_V_CCR_Scout_Alt_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Tropic/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Support_tna): EFA_V_CCR_Support_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Tropic/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_TL_tna): EFA_V_CCR_TL_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Tropic/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_TL_Alt_tna): EFA_V_CCR_TL_Alt_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Tropic/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Rifleman_wdl): EFA_V_CCR_Rifleman_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Woodland/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Rifleman_Alt_wdl): EFA_V_CCR_Rifleman_Alt_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Woodland/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Scout_wdl): EFA_V_CCR_Scout_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Woodland/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Scout_Alt_wdl): EFA_V_CCR_Scout_Alt_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Woodland/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Support_wdl): EFA_V_CCR_Support_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Woodland/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_TL_wdl): EFA_V_CCR_TL_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Woodland/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_TL_Alt_wdl): EFA_V_CCR_TL_Alt_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Woodland/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Rifleman_Alt_MTP): EFA_V_CCR_Rifleman_Alt_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (MTP/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Scout_Alt_MTP): EFA_V_CCR_Scout_Alt_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (MTP/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_TL_Alt_MTP): EFA_V_CCR_TL_Alt_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (MTP/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Rifleman_MTP): EFA_V_CCR_Rifleman_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (MTP/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Scout_MTP): EFA_V_CCR_Scout_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (MTP/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_Support_MTP): EFA_V_CCR_Support_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (MTP/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_TL_MTP): EFA_V_CCR_TL_MTP {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (MTP/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Rifleman_Olive): EF_V_CCR_Rifleman_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Olive/Rifleman) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Scout_Olive): EF_V_CCR_Scout_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Olive/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Scout_Alt_Olive): EF_V_CCR_Scout_Alt_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Olive/Scout/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Support_Olive): EF_V_CCR_Support_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Olive/Support) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_TL_Olive): EF_V_CCR_TL_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Olive/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_TL_Alt_Olive): EF_V_CCR_TL_Alt_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Olive/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_CCR_Rifleman_Alt_Olive): EF_V_CCR_Rifleman_Alt_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Olive/Rifleman/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_CCR_TL_des): EFA_V_CCR_TL_des {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Commando Chest Rig (Desert/Team Leader) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Scout_Olive): EF_V_AAV_Scout_Olive {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Olive/Scout) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_TL_Alt_wdl): EFA_V_AAV_TL_Alt_wdl {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Woodland/Team Leader/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EFA_V_AAV_Diver_NoReb_tna): EFA_V_AAV_Diver_NoReb_tna {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Tropic/Diver/No Rebreather) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(EF_V_AAV_Diver_Alt_Coy): EF_V_AAV_Diver_Alt_Coy {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Amphibious Assault Vest (Coyote Brown/Diver/Alt) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
};

#undef GHOST_STANDARD_VEST_ITEMINFO
#undef GHOST_HEAVY_VEST_ITEMINFO
