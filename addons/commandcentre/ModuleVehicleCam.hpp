class GHOST_ModuleVehicleCam: Module_F
{
	scope = 2;
	displayName = "Add Vehicle Camera";
	icon = "\z\ghost\addons\media\images\icons\Camera.paa";
	category = QPREFIX;
	function = "ghost_commandcenter_fnc_moduleVehicleCam";
	functionPriority = 4;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 0;
	is3DEN = 0;
	class Attributes: AttributesBase
	{
		class ModuleDescription: ModuleDescription{};
	};
	class ModuleDescription: ModuleDescription
	{
		description[] = {
			"Synched vehicle can be viewed from the Command Center screens.",
			"You can sync as many vehicles to this module as you like."
		};
			position = 0; // Position is taken into effect
			direction = 0; // Direction is taken into effect
			optional = 0; // Synced entity is optional
			duplicate = 1; // Multiple entities of this type can be synced
	};
};