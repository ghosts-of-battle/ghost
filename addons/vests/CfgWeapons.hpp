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

    // ===== ACP retextures (textures from Ample Camo Pack, author Seb) =====
    class GVAR(V_PlateCarrier1_ocp): V_PlateCarrier1_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Rig (OCP)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_1_ocp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_ocp_co.paa)};
    };
    class GVAR(V_PlateCarrier1_mtp): V_PlateCarrier1_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Rig (MTP)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_1_mtp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mtp_co.paa)};
    };
    class GVAR(V_PlateCarrier1_mcam): V_PlateCarrier1_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Rig (Multicam)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_1_mcam.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_co.paa)};
    };
    class GVAR(V_PlateCarrier1_mcam_wdl): V_PlateCarrier1_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Rig (Multicam Woodland)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_1_mcam_wdl.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_wdl_co.paa)};
    };
    class GVAR(V_PlateCarrier1_mcam_snow): V_PlateCarrier1_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Rig (Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_1_mcam_snow.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_snow_co.paa)};
    };
    class GVAR(V_PlateCarrier2_ocp): V_PlateCarrier2_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Lite (OCP)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_2_ocp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_ocp_co.paa)};
    };
    class GVAR(V_PlateCarrier2_mtp): V_PlateCarrier2_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Lite (MTP)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_2_mtp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mtp_co.paa)};
    };
    class GVAR(V_PlateCarrier2_mcam): V_PlateCarrier2_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Lite (Multicam)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_2_mcam.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_co.paa)};
    };
    class GVAR(V_PlateCarrier2_mcam_wdl): V_PlateCarrier2_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Lite (Multicam Woodland)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_2_mcam_wdl.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_wdl_co.paa)};
    };
    class GVAR(V_PlateCarrier2_mcam_snow): V_PlateCarrier2_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Lite (Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_2_mcam_snow.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_snow_co.paa)};
    };
    class GVAR(V_PlateCarrierGL_ocp): V_PlateCarrierGL_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier GL Rig (OCP)";
        picture = QPATHTOF(data\ui\icon_carrier_gl_rig_ocp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrier_gl_rig_ocp.paa)};
    };
    class GVAR(V_PlateCarrierGL_mtp): V_PlateCarrierGL_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier GL Rig (MTP)";
        picture = QPATHTOF(data\ui\icon_carrier_gl_rig_mtp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrier_gl_rig_mtp.paa)};
    };
    class GVAR(V_PlateCarrierGL_mcam): V_PlateCarrierGL_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier GL Rig (Multicam)";
        picture = QPATHTOF(data\ui\icon_carrier_gl_rig_mcam.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrier_gl_rig_mcam.paa)};
    };
    class GVAR(V_PlateCarrierGL_mcam_wdl): V_PlateCarrierGL_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier GL Rig (Multicam Woodland)";
        picture = QPATHTOF(data\ui\icon_carrier_gl_rig_mcam_wdl.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrier_gl_rig_mcam_wdl.paa)};
    };
    class GVAR(V_PlateCarrierGL_mcam_snow): V_PlateCarrierGL_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier GL Rig (Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_carrier_gl_rig_mcam_snow.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrier_gl_rig_mcam_snow.paa)};
    };
    class GVAR(V_PlateCarrierSpec_ocp): V_PlateCarrierSpec_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Special Rig (OCP)";
        picture = QPATHTOF(data\ui\icon_carrier_spec_rig_ocp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrier_gl_rig_ocp.paa)};
    };
    class GVAR(V_PlateCarrierSpec_mtp): V_PlateCarrierSpec_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Special Rig (MTP)";
        picture = QPATHTOF(data\ui\icon_carrier_spec_rig_mtp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrier_gl_rig_mtp.paa)};
    };
    class GVAR(V_PlateCarrierSpec_mcam): V_PlateCarrierSpec_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Special Rig (Multicam)";
        picture = QPATHTOF(data\ui\icon_carrier_spec_rig_mcam.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrier_gl_rig_mcam.paa)};
    };
    class GVAR(V_PlateCarrierSpec_mcam_wdl): V_PlateCarrierSpec_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Special Rig (Multicam Woodland)";
        picture = QPATHTOF(data\ui\icon_carrier_spec_rig_mcam_wdl.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrier_gl_rig_mcam_wdl.paa)};
    };
    class GVAR(V_PlateCarrierSpec_mcam_snow): V_PlateCarrierSpec_blk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Carrier Special Rig (Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_carrier_spec_rig_mcam_snow.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrier_gl_rig_mcam_snow.paa)};
    };

    // ===== CTRG plate carriers (share PlateCarrier1/2 UV; ACP vests texture) =====
    class V_PlateCarrierL_CTRG;
    class V_PlateCarrierH_CTRG;
    class GVAR(V_PlateCarrierL_CTRG_ocp): V_PlateCarrierL_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Light, OCP)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_1_ocp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_ocp_co.paa)};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierL_CTRG_mtp): V_PlateCarrierL_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Light, MTP)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_1_mtp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mtp_co.paa)};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierL_CTRG_mcam): V_PlateCarrierL_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Light, Multicam)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_1_mcam.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_co.paa)};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierL_CTRG_mcam_wdl): V_PlateCarrierL_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Light, Multicam Woodland)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_1_mcam_wdl.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_wdl_co.paa)};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierL_CTRG_mcam_snow): V_PlateCarrierL_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Light, Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_1_mcam_snow.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_snow_co.paa)};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierL_CTRG_tna): V_PlateCarrierL_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Light, Tropic)";
        // vanilla Apex tropic carrier art -- there is no ghost tropic vest
        // texture, and the CTRG rigs share the PlateCarrier1 UV
        picture = "\A3\Characters_F_Exp\Vests\Data\UI\icon_V_PlateCarrier1_tna_F_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_tna_F_co.paa"};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierH_CTRG_ocp): V_PlateCarrierH_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Heavy, OCP)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_2_ocp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_ocp_co.paa)};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierH_CTRG_mtp): V_PlateCarrierH_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Heavy, MTP)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_2_mtp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mtp_co.paa)};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierH_CTRG_mcam): V_PlateCarrierH_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Heavy, Multicam)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_2_mcam.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_co.paa)};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierH_CTRG_mcam_wdl): V_PlateCarrierH_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Heavy, Multicam Woodland)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_2_mcam_wdl.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_wdl_co.paa)};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierH_CTRG_mcam_snow): V_PlateCarrierH_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Heavy, Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_v_plate_carrier_2_mcam_snow.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests_mcam_snow_co.paa)};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
    class GVAR(V_PlateCarrierH_CTRG_tna): V_PlateCarrierH_CTRG {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] CTRG Plate Carrier Rig (Heavy, Tropic)";
        // vanilla Apex tropic carrier art -- there is no ghost tropic vest
        // texture, and the CTRG rigs share the PlateCarrier1 UV
        picture = "\A3\Characters_F_Exp\Vests\Data\UI\icon_V_PlateCarrier1_tna_F_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_tna_F_co.paa"};
        GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
    };
};

#undef GHOST_STANDARD_PLATE_CARRIER_ITEMINFO
#undef GHOST_HEAVY_PLATE_CARRIER_ITEMINFO
