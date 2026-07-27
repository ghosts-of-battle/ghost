// Full ACP OCP + Multicam Snow gear set ported into ghost.
// Included from the addon's own Cfg*.hpp -- no root class here.

    class GVAR(G_Balaclava_US_OCP): G_Balaclava_blk {
        author = QAUTHOR;
        displayName = "[Ghost] Balaclava (OCP)";
        picture = QPATHTOF(data\ui\icon_G_Balaclava_US_OCP_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\headgear_balaclava_US_OCP_co.paa)};
        MACRO_ITEM_COMMON
    };
    class GVAR(G_Balaclava_Multicam_Snow): G_Balaclava_blk {
        author = QAUTHOR;
        displayName = "[Ghost] Balaclava (Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_G_Balaclava_Multicam_Snow_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\headgear_balaclava_Multicam_Snow_co.paa)};
        MACRO_ITEM_COMMON
    };
