// not documented: postInit

if (isserver) then {{_x setSpeaker "NoVoice"} forEach playableUnits;}; // Here because it has nowhere else to go!

if (!hasinterface) exitwith {};

if !(isClass (configFile >> "CfgPatches" >> "task_force_radio")) exitwith {};

if (isNil "ghost_Main_TFARTransmitRange") exitwith {};
player setVariable ["tf_sendingDistanceMultiplicator", GHOST_Main_TFARTransmitRange];

if (isNil "ghost_Main_TFARTerrainInterference") exitwith {};
player setVariable ["TF_terrain_interception_coefficient", GHOST_Main_TFARTerrainInterference];
