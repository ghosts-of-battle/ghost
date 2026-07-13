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
    class ItemInfo; // defined for real in ghost_main (see its CfgWeapons.hpp)
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
        displayName = "[Ghost] Modular Carrier Combat Rig (Black)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_MTP_alpine_F): JCA_V_CarrierRigKBT_01_combat_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Combat Rig (MTP-Alpine)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_MTP_desert_F): JCA_V_CarrierRigKBT_01_combat_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Combat Rig (MTP-Desert)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_MTP_tropic_F): JCA_V_CarrierRigKBT_01_combat_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Combat Rig (MTP-Tropic)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_MTP_woodland_F): JCA_V_CarrierRigKBT_01_combat_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Combat Rig (MTP-Woodland)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_MTP_arid_F): JCA_V_CarrierRigKBT_01_combat_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Combat Rig (MTP-Arid)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_sand_F): JCA_V_CarrierRigKBT_01_combat_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Combat Rig (Sand)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_black_F): JCA_V_CarrierRigKBT_01_command_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Command Rig (Black)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_MTP_alpine_F): JCA_V_CarrierRigKBT_01_command_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Command Rig (MTP-Alpine)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_MTP_desert_F): JCA_V_CarrierRigKBT_01_command_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Command Rig (MTP-Desert)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_MTP_woodland_F): JCA_V_CarrierRigKBT_01_command_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Command Rig (MTP-Woodland)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_MTP_arid_F): JCA_V_CarrierRigKBT_01_command_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Command Rig (MTP-Arid)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_olive_F): JCA_V_CarrierRigKBT_01_command_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Command Rig (Olive)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_sand_F): JCA_V_CarrierRigKBT_01_command_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Command Rig (Sand)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_MTP_alpine_F): JCA_V_CarrierRigKBT_01_compact_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Compact Vest (MTP-Alpine)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_MTP_desert_F): JCA_V_CarrierRigKBT_01_compact_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Compact Vest (MTP-Desert)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_MTP_tropic_F): JCA_V_CarrierRigKBT_01_compact_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Compact Vest (MTP-Tropic)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_MTP_woodland_F): JCA_V_CarrierRigKBT_01_compact_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Compact Vest (MTP-Woodland)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_olive_F): JCA_V_CarrierRigKBT_01_compact_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Compact Vest (Olive)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_sand_F): JCA_V_CarrierRigKBT_01_compact_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Compact Vest (Sand)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_black_F): JCA_V_CarrierRigKBT_01_CQB_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier CQB Rig (Black)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_MTP_alpine_F): JCA_V_CarrierRigKBT_01_CQB_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier CQB Rig (MTP-Alpine)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_MTP_tropic_F): JCA_V_CarrierRigKBT_01_CQB_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier CQB Rig (MTP-Tropic)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_MTP_woodland_F): JCA_V_CarrierRigKBT_01_CQB_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier CQB Rig (MTP-Woodland)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_MTP_arid_F): JCA_V_CarrierRigKBT_01_CQB_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier CQB Rig (MTP-Arid)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_sand_F): JCA_V_CarrierRigKBT_01_CQB_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier CQB Rig (Sand)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_black_F): JCA_V_CarrierRigKBT_01_crew_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Crew Vest (Black)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_MTP_alpine_F): JCA_V_CarrierRigKBT_01_crew_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Crew Vest (MTP-Alpine)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_MTP_desert_F): JCA_V_CarrierRigKBT_01_crew_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Crew Vest (MTP-Desert)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_MTP_woodland_F): JCA_V_CarrierRigKBT_01_crew_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Crew Vest (MTP-Woodland)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_MTP_arid_F): JCA_V_CarrierRigKBT_01_crew_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Crew Vest (MTP-Arid)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_olive_F): JCA_V_CarrierRigKBT_01_crew_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Crew Vest (Olive)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_sand_F): JCA_V_CarrierRigKBT_01_crew_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Crew Vest (Sand)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_MTP_alpine_F): JCA_V_CarrierRigKBT_01_heavy_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier GL Rig (MTP-Alpine)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_MTP_desert_F): JCA_V_CarrierRigKBT_01_heavy_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier GL Rig (MTP-Desert)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_MTP_tropic_F): JCA_V_CarrierRigKBT_01_heavy_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier GL Rig (MTP-Tropic)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_MTP_woodland_F): JCA_V_CarrierRigKBT_01_heavy_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier GL Rig (MTP-Woodland)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_olive_F): JCA_V_CarrierRigKBT_01_heavy_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier GL Rig (Olive)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_sand_F): JCA_V_CarrierRigKBT_01_heavy_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier GL Rig (Sand)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_black_F): JCA_V_CarrierRigKBT_01_holster_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Holster (Black)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_MTP_alpine_F): JCA_V_CarrierRigKBT_01_holster_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Holster (MTP-Alpine)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_MTP_tropic_F): JCA_V_CarrierRigKBT_01_holster_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Holster (MTP-Tropic)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_MTP_woodland_F): JCA_V_CarrierRigKBT_01_holster_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Holster (MTP-Woodland)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_MTP_arid_F): JCA_V_CarrierRigKBT_01_holster_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Holster (MTP-Arid)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_sand_F): JCA_V_CarrierRigKBT_01_holster_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Holster (Sand)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_black_F): JCA_V_CarrierRigKBT_01_light_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Lite (Black)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_MTP_alpine_F): JCA_V_CarrierRigKBT_01_light_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Lite (MTP-Alpine)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_MTP_desert_F): JCA_V_CarrierRigKBT_01_light_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Lite (MTP-Desert)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_MTP_woodland_F): JCA_V_CarrierRigKBT_01_light_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Lite (MTP-Woodland)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_MTP_arid_F): JCA_V_CarrierRigKBT_01_light_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Lite (MTP-Arid)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_olive_F): JCA_V_CarrierRigKBT_01_light_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Lite (Olive)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_sand_F): JCA_V_CarrierRigKBT_01_light_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Lite (Sand)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_MTP_alpine_F): JCA_V_CarrierRigKBT_01_recon_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Recon Rig (MTP-Alpine)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_MTP_desert_F): JCA_V_CarrierRigKBT_01_recon_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Recon Rig (MTP-Desert)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_MTP_tropic_F): JCA_V_CarrierRigKBT_01_recon_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Recon Rig (MTP-Tropic)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_MTP_woodland_F): JCA_V_CarrierRigKBT_01_recon_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Recon Rig (MTP-Woodland)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_olive_F): JCA_V_CarrierRigKBT_01_recon_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Recon Rig (Olive)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_sand_F): JCA_V_CarrierRigKBT_01_recon_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Recon Rig (Sand)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_black_F): JCA_V_CarrierRigKBT_01_tactical_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Tactical Rig (Black)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_MTP_alpine_F): JCA_V_CarrierRigKBT_01_tactical_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Tactical Rig (MTP-Alpine)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_MTP_tropic_F): JCA_V_CarrierRigKBT_01_tactical_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Tactical Rig (MTP-Tropic)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_MTP_woodland_F): JCA_V_CarrierRigKBT_01_tactical_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Tactical Rig (MTP-Woodland)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_MTP_arid_F): JCA_V_CarrierRigKBT_01_tactical_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Tactical Rig (MTP-Arid)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_sand_F): JCA_V_CarrierRigKBT_01_tactical_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Tactical Rig (Sand)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_black_F): JCA_V_CarrierRigKBT_01_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Vest (Black)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_MTP_alpine_F): JCA_V_CarrierRigKBT_01_MTP_alpine_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Vest (MTP-Alpine)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_MTP_desert_F): JCA_V_CarrierRigKBT_01_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Vest (MTP-Desert)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_MTP_woodland_F): JCA_V_CarrierRigKBT_01_MTP_woodland_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Vest (MTP-Woodland)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_MTP_arid_F): JCA_V_CarrierRigKBT_01_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Vest (MTP-Arid)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_olive_F): JCA_V_CarrierRigKBT_01_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Vest (Olive)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_sand_F): JCA_V_CarrierRigKBT_01_sand_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Vest (Sand)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_MTP_tropic_F): JCA_V_CarrierRigKBT_01_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Vest (MTP-Tropic)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_olive_F): JCA_V_CarrierRigKBT_01_tactical_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Tactical Rig (Olive)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_tactical_MTP_desert_F): JCA_V_CarrierRigKBT_01_tactical_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Tactical Rig (MTP-Desert)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_MTP_arid_F): JCA_V_CarrierRigKBT_01_recon_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Recon Rig (MTP-Arid)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_recon_black_F): JCA_V_CarrierRigKBT_01_recon_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Recon Rig (Black)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_light_MTP_tropic_F): JCA_V_CarrierRigKBT_01_light_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Lite (MTP-Tropic)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_olive_F): JCA_V_CarrierRigKBT_01_holster_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Holster (Olive)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_holster_MTP_desert_F): JCA_V_CarrierRigKBT_01_holster_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Holster (MTP-Desert)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_MTP_arid_F): JCA_V_CarrierRigKBT_01_heavy_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier GL Rig (MTP-Arid)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_heavy_black_F): JCA_V_CarrierRigKBT_01_heavy_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier GL Rig (Black)";
        GHOST_HEAVY_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_crew_MTP_tropic_F): JCA_V_CarrierRigKBT_01_crew_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Crew Vest (MTP-Tropic)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_olive_F): JCA_V_CarrierRigKBT_01_CQB_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier CQB Rig (Olive)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_CQB_MTP_desert_F): JCA_V_CarrierRigKBT_01_CQB_MTP_desert_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier CQB Rig (MTP-Desert)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_MTP_arid_F): JCA_V_CarrierRigKBT_01_compact_MTP_arid_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Compact Vest (MTP-Arid)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_compact_black_F): JCA_V_CarrierRigKBT_01_compact_black_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Compact Vest (Black)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_command_MTP_tropic_F): JCA_V_CarrierRigKBT_01_command_MTP_tropic_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Command Rig (MTP-Tropic)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
    class GVAR(JCA_V_CarrierRigKBT_01_combat_olive_F): JCA_V_CarrierRigKBT_01_combat_olive_F {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Modular Carrier Combat Rig (Olive)";
        GHOST_STANDARD_VEST_ITEMINFO
    };
};

#undef GHOST_STANDARD_VEST_ITEMINFO
#undef GHOST_HEAVY_VEST_ITEMINFO
