#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_UI_F",
            "cba_main",
            "cba_xeh",
            "ace_vector",
            "A3_Weapons_F",
            "A3_Weapons_F_Exp",
            "cba_jr",
            "ace_xm157",
            // "MCX_Rattler",
            "A3_Weapons_F_Rifles_MX_Black",
            "A3_Weapons_F_Rifles_MX",
            "A3_Weapons_F_LongRangeRifles_M320",
            "A3_Sounds_F",
            "A3_Sounds_F_Tank",
            "A3_Weapons_F",
            "A3_Weapons_F_Enoch",
            "A3_Weapons_F_Enoch_Acc",
            "A3_Weapons_F_Enoch_Rifles_MSBS",
            "A3_Weapons_F_Exp",
            "A3_Weapons_F_Exp_LongRangeRifles_DMR_07",
            "A3_Weapons_F_Exp_Rifles_ARX",
            "A3_Weapons_F_Exp_Rifles_CTAR",
            "A3_Weapons_F_Exp_Rifles_CTARS",
            "A3_Weapons_F_Exp_Rifles_SPAR_01",
            "A3_Weapons_F_Exp_Rifles_SPAR_02",
            "A3_Weapons_F_Exp_Rifles_SPAR_03",
            "A3_Weapons_F_Jets",
            "A3_Weapons_F_LongRangeRifles_DMR_01",
            "A3_Weapons_F_LongRangeRifles_EBR",
            "A3_Weapons_F_LongRangeRifles_GM6",
            "A3_Weapons_F_LongRangeRifles_M320",
            "A3_Weapons_F_Machineguns_M200",
            "A3_Weapons_F_Mark",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_02",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_03",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_06",
            "A3_Weapons_F_Mark_Machineguns_MMG_02",
            "A3_Weapons_F_Mark_Rifles_MX",
            "A3_Weapons_F_Mod",
            "A3_Weapons_F_Orange",
            "A3_Weapons_F_Pistols_ACPC2",
            "A3_Weapons_F_Pistols_P07",
            "A3_Weapons_F_Pistols_Pistol_Heavy_01",
            "A3_Weapons_F_Pistols_Rook40",
            "A3_Weapons_F_Rifles_Khaybar",
            "A3_Weapons_F_Rifles_MK20",
            "A3_Weapons_F_Rifles_MX",
            "A3_Weapons_F_Rifles_SDAR",
            "A3_Weapons_F_Rifles_TRG20",
            "A3_Weapons_F_Sams",
            "A3_Weapons_F_SMGs_Pdw2000",
            "A3_Weapons_F_Tank",
            "A3_Weapons_F_Tank_Launchers_Vorona"
        };
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};
#include "\z\ghost\addons\main\basicDefines_A3.hpp"
#include "\z\ghost\addons\weapons\modes.hpp"
#include "\z\ghost\addons\main\sensors.hpp"
#include "slots.hpp"

/* Configuration */
#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgRecoils.hpp"
#include "cfgMagazineWells.hpp"


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "XtdGearweapon.hpp"
// #include "XtdGeartier1.hpp"
