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
    class JCA_V_CarrierRigKBT_01_combat_black_F;
    class JCA_V_CarrierRigKBT_01_combat_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_combat_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_combat_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_combat_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_combat_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_combat_sand_F;
    class JCA_V_CarrierRigKBT_01_command_black_F;
    class JCA_V_CarrierRigKBT_01_command_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_command_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_command_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_command_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_command_olive_F;
    class JCA_V_CarrierRigKBT_01_command_sand_F;
    class JCA_V_CarrierRigKBT_01_compact_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_compact_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_compact_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_compact_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_compact_olive_F;
    class JCA_V_CarrierRigKBT_01_compact_sand_F;
    class JCA_V_CarrierRigKBT_01_CQB_black_F;
    class JCA_V_CarrierRigKBT_01_CQB_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_CQB_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_CQB_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_CQB_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_CQB_sand_F;
    class JCA_V_CarrierRigKBT_01_crew_black_F;
    class JCA_V_CarrierRigKBT_01_crew_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_crew_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_crew_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_crew_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_crew_olive_F;
    class JCA_V_CarrierRigKBT_01_crew_sand_F;
    class JCA_V_CarrierRigKBT_01_heavy_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_heavy_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_heavy_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_heavy_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_heavy_olive_F;
    class JCA_V_CarrierRigKBT_01_heavy_sand_F;
    class JCA_V_CarrierRigKBT_01_holster_black_F;
    class JCA_V_CarrierRigKBT_01_holster_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_holster_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_holster_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_holster_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_holster_sand_F;
    class JCA_V_CarrierRigKBT_01_light_black_F;
    class JCA_V_CarrierRigKBT_01_light_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_light_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_light_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_light_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_light_olive_F;
    class JCA_V_CarrierRigKBT_01_light_sand_F;
    class JCA_V_CarrierRigKBT_01_recon_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_recon_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_recon_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_recon_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_recon_olive_F;
    class JCA_V_CarrierRigKBT_01_recon_sand_F;
    class JCA_V_CarrierRigKBT_01_tactical_black_F;
    class JCA_V_CarrierRigKBT_01_tactical_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_tactical_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_tactical_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_tactical_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_tactical_sand_F;
    class JCA_V_CarrierRigKBT_01_black_F;
    class JCA_V_CarrierRigKBT_01_MTP_alpine_F;
    class JCA_V_CarrierRigKBT_01_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_MTP_woodland_F;
    class JCA_V_CarrierRigKBT_01_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_olive_F;
    class JCA_V_CarrierRigKBT_01_sand_F;
    class JCA_V_CarrierRigKBT_01_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_tactical_olive_F;
    class JCA_V_CarrierRigKBT_01_tactical_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_recon_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_recon_black_F;
    class JCA_V_CarrierRigKBT_01_light_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_holster_olive_F;
    class JCA_V_CarrierRigKBT_01_holster_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_heavy_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_heavy_black_F;
    class JCA_V_CarrierRigKBT_01_crew_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_CQB_olive_F;
    class JCA_V_CarrierRigKBT_01_CQB_MTP_desert_F;
    class JCA_V_CarrierRigKBT_01_compact_MTP_arid_F;
    class JCA_V_CarrierRigKBT_01_compact_black_F;
    class JCA_V_CarrierRigKBT_01_command_MTP_tropic_F;
    class JCA_V_CarrierRigKBT_01_combat_olive_F;

    class GVAR(JCA_V_CarrierRigKBT_01_combat_black_F): JCA_V_CarrierRigKBT_01_combat_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Combat Rig (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_MTP_alpine_F): JCA_V_CarrierRigKBT_01_combat_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Combat Rig (MTP-Alpine) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_MTP_desert_F): JCA_V_CarrierRigKBT_01_combat_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Combat Rig (MTP-Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_MTP_tropic_F): JCA_V_CarrierRigKBT_01_combat_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Combat Rig (MTP-Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_MTP_woodland_F): JCA_V_CarrierRigKBT_01_combat_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Combat Rig (MTP-Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_MTP_arid_F): JCA_V_CarrierRigKBT_01_combat_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Combat Rig (MTP-Arid) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_sand_F): JCA_V_CarrierRigKBT_01_combat_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Combat Rig (Sand) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_black_F): JCA_V_CarrierRigKBT_01_command_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Command Rig (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_MTP_alpine_F): JCA_V_CarrierRigKBT_01_command_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Command Rig (MTP-Alpine) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_MTP_desert_F): JCA_V_CarrierRigKBT_01_command_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Command Rig (MTP-Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_MTP_woodland_F): JCA_V_CarrierRigKBT_01_command_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Command Rig (MTP-Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_MTP_arid_F): JCA_V_CarrierRigKBT_01_command_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Command Rig (MTP-Arid) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_olive_F): JCA_V_CarrierRigKBT_01_command_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Command Rig (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_sand_F): JCA_V_CarrierRigKBT_01_command_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Command Rig (Sand) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_MTP_alpine_F): JCA_V_CarrierRigKBT_01_compact_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Compact Vest (MTP-Alpine) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_MTP_desert_F): JCA_V_CarrierRigKBT_01_compact_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Compact Vest (MTP-Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_MTP_tropic_F): JCA_V_CarrierRigKBT_01_compact_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Compact Vest (MTP-Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_MTP_woodland_F): JCA_V_CarrierRigKBT_01_compact_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Compact Vest (MTP-Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_olive_F): JCA_V_CarrierRigKBT_01_compact_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Compact Vest (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_sand_F): JCA_V_CarrierRigKBT_01_compact_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Compact Vest (Sand) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_black_F): JCA_V_CarrierRigKBT_01_CQB_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier CQB Rig (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_MTP_alpine_F): JCA_V_CarrierRigKBT_01_CQB_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier CQB Rig (MTP-Alpine) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_MTP_tropic_F): JCA_V_CarrierRigKBT_01_CQB_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier CQB Rig (MTP-Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_MTP_woodland_F): JCA_V_CarrierRigKBT_01_CQB_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier CQB Rig (MTP-Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_MTP_arid_F): JCA_V_CarrierRigKBT_01_CQB_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier CQB Rig (MTP-Arid) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_sand_F): JCA_V_CarrierRigKBT_01_CQB_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier CQB Rig (Sand) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_black_F): JCA_V_CarrierRigKBT_01_crew_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Crew Vest (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_MTP_alpine_F): JCA_V_CarrierRigKBT_01_crew_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Crew Vest (MTP-Alpine) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_MTP_desert_F): JCA_V_CarrierRigKBT_01_crew_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Crew Vest (MTP-Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_MTP_woodland_F): JCA_V_CarrierRigKBT_01_crew_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Crew Vest (MTP-Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_MTP_arid_F): JCA_V_CarrierRigKBT_01_crew_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Crew Vest (MTP-Arid) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_olive_F): JCA_V_CarrierRigKBT_01_crew_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Crew Vest (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_sand_F): JCA_V_CarrierRigKBT_01_crew_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Crew Vest (Sand) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_MTP_alpine_F): JCA_V_CarrierRigKBT_01_heavy_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier GL Rig (MTP-Alpine) (Ghost)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_MTP_desert_F): JCA_V_CarrierRigKBT_01_heavy_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier GL Rig (MTP-Desert) (Ghost)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_MTP_tropic_F): JCA_V_CarrierRigKBT_01_heavy_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier GL Rig (MTP-Tropic) (Ghost)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_MTP_woodland_F): JCA_V_CarrierRigKBT_01_heavy_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier GL Rig (MTP-Woodland) (Ghost)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_olive_F): JCA_V_CarrierRigKBT_01_heavy_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier GL Rig (Olive) (Ghost)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_sand_F): JCA_V_CarrierRigKBT_01_heavy_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier GL Rig (Sand) (Ghost)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_black_F): JCA_V_CarrierRigKBT_01_holster_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Holster (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_MTP_alpine_F): JCA_V_CarrierRigKBT_01_holster_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Holster (MTP-Alpine) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_MTP_tropic_F): JCA_V_CarrierRigKBT_01_holster_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Holster (MTP-Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_MTP_woodland_F): JCA_V_CarrierRigKBT_01_holster_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Holster (MTP-Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_MTP_arid_F): JCA_V_CarrierRigKBT_01_holster_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Holster (MTP-Arid) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_sand_F): JCA_V_CarrierRigKBT_01_holster_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Holster (Sand) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_black_F): JCA_V_CarrierRigKBT_01_light_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Lite (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_MTP_alpine_F): JCA_V_CarrierRigKBT_01_light_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Lite (MTP-Alpine) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_MTP_desert_F): JCA_V_CarrierRigKBT_01_light_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Lite (MTP-Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_MTP_woodland_F): JCA_V_CarrierRigKBT_01_light_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Lite (MTP-Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_MTP_arid_F): JCA_V_CarrierRigKBT_01_light_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Lite (MTP-Arid) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_olive_F): JCA_V_CarrierRigKBT_01_light_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Lite (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_sand_F): JCA_V_CarrierRigKBT_01_light_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Lite (Sand) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_MTP_alpine_F): JCA_V_CarrierRigKBT_01_recon_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Recon Rig (MTP-Alpine) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_MTP_desert_F): JCA_V_CarrierRigKBT_01_recon_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Recon Rig (MTP-Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_MTP_tropic_F): JCA_V_CarrierRigKBT_01_recon_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Recon Rig (MTP-Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_MTP_woodland_F): JCA_V_CarrierRigKBT_01_recon_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Recon Rig (MTP-Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_olive_F): JCA_V_CarrierRigKBT_01_recon_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Recon Rig (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_sand_F): JCA_V_CarrierRigKBT_01_recon_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Recon Rig (Sand) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_black_F): JCA_V_CarrierRigKBT_01_tactical_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Tactical Rig (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_MTP_alpine_F): JCA_V_CarrierRigKBT_01_tactical_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Tactical Rig (MTP-Alpine) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_MTP_tropic_F): JCA_V_CarrierRigKBT_01_tactical_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Tactical Rig (MTP-Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_MTP_woodland_F): JCA_V_CarrierRigKBT_01_tactical_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Tactical Rig (MTP-Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_MTP_arid_F): JCA_V_CarrierRigKBT_01_tactical_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Tactical Rig (MTP-Arid) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_sand_F): JCA_V_CarrierRigKBT_01_tactical_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Tactical Rig (Sand) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_black_F): JCA_V_CarrierRigKBT_01_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Vest (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_MTP_alpine_F): JCA_V_CarrierRigKBT_01_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Vest (MTP-Alpine) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_MTP_desert_F): JCA_V_CarrierRigKBT_01_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Vest (MTP-Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_MTP_woodland_F): JCA_V_CarrierRigKBT_01_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Vest (MTP-Woodland) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_MTP_arid_F): JCA_V_CarrierRigKBT_01_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Vest (MTP-Arid) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_olive_F): JCA_V_CarrierRigKBT_01_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Vest (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_sand_F): JCA_V_CarrierRigKBT_01_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Vest (Sand) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_MTP_tropic_F): JCA_V_CarrierRigKBT_01_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Vest (MTP-Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_olive_F): JCA_V_CarrierRigKBT_01_tactical_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Tactical Rig (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_MTP_desert_F): JCA_V_CarrierRigKBT_01_tactical_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Tactical Rig (MTP-Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_MTP_arid_F): JCA_V_CarrierRigKBT_01_recon_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Recon Rig (MTP-Arid) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_black_F): JCA_V_CarrierRigKBT_01_recon_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Recon Rig (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_MTP_tropic_F): JCA_V_CarrierRigKBT_01_light_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Lite (MTP-Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_olive_F): JCA_V_CarrierRigKBT_01_holster_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Holster (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_MTP_desert_F): JCA_V_CarrierRigKBT_01_holster_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Holster (MTP-Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_MTP_arid_F): JCA_V_CarrierRigKBT_01_heavy_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier GL Rig (MTP-Arid) (Ghost)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_black_F): JCA_V_CarrierRigKBT_01_heavy_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier GL Rig (Black) (Ghost)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_MTP_tropic_F): JCA_V_CarrierRigKBT_01_crew_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Crew Vest (MTP-Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_olive_F): JCA_V_CarrierRigKBT_01_CQB_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier CQB Rig (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_MTP_desert_F): JCA_V_CarrierRigKBT_01_CQB_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier CQB Rig (MTP-Desert) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_MTP_arid_F): JCA_V_CarrierRigKBT_01_compact_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Compact Vest (MTP-Arid) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_black_F): JCA_V_CarrierRigKBT_01_compact_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Compact Vest (Black) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_MTP_tropic_F): JCA_V_CarrierRigKBT_01_command_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Command Rig (MTP-Tropic) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_olive_F): JCA_V_CarrierRigKBT_01_combat_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "Modular Carrier Combat Rig (Olive) (Ghost)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
};

#undef GHOST_STANDARD_VEST_ITEMINFO
#undef GHOST_HEAVY_VEST_ITEMINFO
