#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
			"A3_Air_F_Exp_VTOL_01",
			"A3_Air_F_EPC_Plane_CAS_01",
			"A3_Air_F_EPC_Plane_CAS_02",
			"A3_Air_F_Gamma_Plane_Fighter_03",
			"A3_Air_F_Jets_Plane_Fighter_01",
			"A3_Air_F_Jets_Plane_Fighter_02",
			"A3_Air_F_Jets_Plane_Fighter_04",
			"A3_Data_F",
			"A3_Sounds_F",
			"A3_Sounds_F_Exp",
			"A3_Sounds_F_Jets",
			"A3_Sounds_F_Tank",
			"A3_Weapons_F",
			"A3_Weapons_F_Jets",
			"A3_Weapons_F_LongRangeRifles_M320",
			"A3_Weapons_F_Machineguns_Zafir",
			"A3_Weapons_F_Sams",
			"A3_Weapons_F_Tank"
        };
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgSounds.hpp"
#include "cfgAmmo.hpp"
#include "CfgUnitInsignia.hpp"