class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore: CBA_MiscItem {};
    class GVAR(vs17): ACE_ItemCore {
        author = QAUTHOR;
        scope=2;
        displayName = "AI Landing Pad";
        displayNameShort = "LP-17";
        model="\ctb_marker_panel\vs17_large.p3d";
		picture="\ctb_marker_panel\data\ui\icon_rho_ctb_ca.paa";
        editorPreview = QPATHTOF(data\vs_yellow.paa);
        icon = "iconObject_1x1";
        mapSize = 0.015;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };
    };
    
};
