
class CfgPatches {
	class MRHHaloGear
	{
		units[] = {"GHOST_AADEquippedParachute","GHOST_AADEquippedNSParachute"}; //
		weapons[] = {"GHOST_AAD_Item","GHOST_HaloMaskNoESS","GHOST_HaloMask","GHOST_HaloMaskBroken"}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"MRHMilsimTools"}; //
	};
};

#include "\mrhhalogear\Models\cfgGlasses.hpp"

//----------addon dialogs
#include "\mrhhalogear\Dialogs\AASDialogs.hpp"

//---------- addon cfgs

class cfgFunctions
{
#include "\mrhhalogear\Functions\cfgFunctions.hpp"
};


class cfgSounds
{
	#include "\mrhhalogear\Sounds\cfgsounds.hpp"
};


class cfgVehicles
{
	#include "\mrhhalogear\cfghpp\cfgvehicles.hpp"
};


class cfgWeapons
{
	#include "\mrhhalogear\cfghpp\cfgweapons.hpp"
};

class Extended_PostInit_EventHandlers
{

   class MRHHaloGear_parseSettings
   {
      serverInit = "call compile preProcessFileLineNumbers '\mrhhalogear\Functions\fn_MilsimTools_HaloGear_parseSettings.sqf'";
   };
      
	
};
