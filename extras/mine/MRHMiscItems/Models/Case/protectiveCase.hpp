class MRH_MT_protectiveCase : Box_NATO_Ammo_F
{
    displayName = $STR_MRH_MRHMiscItems_MRHMTItemsCrate;
    editorCategory = "EdCat_MRH_Misc";
	editorSubcategory = "EdSubcat_MRH_Utilities";
	model = "\MRHMiscItems\Models\Case\protectiveCase.p3d";
	editorPreview = "\MRHMiscItems\Models\Case\protectiveCase.jpg";
    class TransportWeapons{};
	class TransportMagazines{};
	class TransportItems{
		item_xx(MRH_FoldedMedicalTent,2);
		item_xx(GHOST_ShootingMat_Khaki,4);
		item_xx(GHOST_ShootingMat_Olive,4);
		item_xx(GHOST_laser_designator,4);
		item_xx(MRH_KeyCard_BLUFOR,6);
		item_xx(MRH_KeyCard_OPFOR,6);
		item_xx(MRH_KeyCard_IND,6);
		item_xx(MRH_Map,10);
		item_xx(GHOST_FiberScope,5);
		item_xx(GHOST_HackingTool,5);
		item_xx(GHOST_AAD_Item,10);
		item_xx(GHOST_HaloMaskNoESS,10);
		item_xx(GHOST_HaloMask,10);
		item_xx(MRH_SoldierTab,15);
		item_xx(GHOST_AADEquippedParachute,10);
		item_xx(GHOST_AADEquippedNSParachute,10);
		item_xx(GHOST_MT_FoldedSatcomAntenna,10);
	};
	class TransportBackpacks{};
};

class MRH_empty_protectiveCase : MRH_MT_protectiveCase
{
    displayName = $STR_MRH_MRHMiscItems_EmptyProtCase;

    class TransportWeapons{};
	class TransportMagazines{};
	class TransportItems{};
	class TransportBackpacks{};
};