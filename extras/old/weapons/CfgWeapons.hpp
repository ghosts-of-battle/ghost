#include "script_component.hpp"
class CfgWeapons  {
    class Default  {
        fireLightDiffuse[]={0.937, 0.322, 0.259};
        fireLightDuration=0.005;
    };
    class RifleCore;
    class MGunCore;
    class CannonCore;
    class ItemCore;
    class GrenadeLauncher;
    class UGL_F;
    class Rifle: RifleCore  {
        zeroingSound[]={"\A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal", "db0", 1, 5};
    };
    class Rifle_Base_F: Rifle  {
        class GunParticles;
        class WeaponSlotsInfo;
    };
    class Rifle_Short_Base_F: Rifle_Base_F  {
        class GunParticles;
        class WeaponSlotsInfo;
    };
    class Rifle_Long_Base_F: Rifle_Base_F  {
        class GunParticles;
        class WeaponSlotsInfo;
    };
    class Pistol;
    class Pistol_Base_F: Pistol  {
        class GunParticles;
        class WeaponSlotsInfo;
    };
    
    class GM6_base_F: Rifle_Long_Base_F  {
    };
    class srifle_GM6_F: GM6_base_F  {
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[]={0.05, 0.38};
                iconScale=0.2;
            };
        };
    };
    class LRR_base_F: Rifle_Long_Base_F  {
        class Single: Mode_SemiAuto  {
            sounds[]={"StandardSound", "SilencedSound"};
        };
    };
    class srifle_LRR_F: LRR_base_F  {
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: MuzzleSlot {
                linkProxy="\A3\Data_F\proxies\weapon_slots\MUZZLE";
                compatibleItems[]={"muzzle_snds_408_black", "muzzle_snds_408_green", "muzzle_snds_408_sand"};
                iconPosition[]={0.05, 0.38};
                iconScale=0.2;
            };
        };
    };
    class EBR_base_F: Rifle_Long_Base_F  {
    };
    class srifle_EBR_F: EBR_base_F  {
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_762 {
                iconPosition[]={0.05, 0.38};
                iconScale=0.2;
            };
            mass=110;
        };
    };
    class DMR_01_base_F: Rifle_Long_Base_F  {
        class WeaponSlotsInfo;
    };
    class srifle_DMR_01_F: DMR_01_base_F  {
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_762R_SVD {
                iconPosition[]={0, 0.45};
                iconScale=0.2;
            };
        };
    };
    class srifle_DMR_02_F;
    class srifle_DMR_02_sniper_F: srifle_DMR_02_F  {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\LongRangeRifles\DMR_02\Data\DMR_02_01_tan_CO.paa", "\z\ghost\addons\weapons\LongRangeRifles\DMR_02\Data\DMR_02_02_tan_CO.paa"};
    };
    class DMR_03_base_F: Rifle_Long_Base_F  {
        class WeaponSlotsInfo;
    };
    class srifle_DMR_03_F: DMR_03_base_F  {
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_762 {
                iconPosition[]={0.12, 0.431};
                iconScale=0.15;
            };
        };
    };
    class srifle_DMR_03_khaki_F;
    class srifle_DMR_03_tan_F: srifle_DMR_03_F  {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\LongRangeRifles\DMR_03\Data\DMR_03_01_tan_CO.paa", "\z\ghost\addons\weapons\LongRangeRifles\DMR_03\Data\DMR_03_02_tan_CO.paa"};
    };
    class DMR_06_base_F: Rifle_Long_Base_F  {
        class WeaponSlotsInfo;
    };
    class srifle_DMR_06_camo_F: DMR_06_base_F  {
        magazines[]={"20Rnd_Mk14_762x51_Mag"};
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_762 {
                iconPosition[]={0.06, 0.4};
                iconScale=0.15;
            };
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[]={0.52, 0.36};
                iconScale=0.15;
            };
            class UnderBarrelSlot: asdg_UnderSlot {
                iconPosition[]={0.32, 0.8};
                iconScale=0.3;
            };
        };
    };
    class DMR_07_base_F: Rifle_Long_Base_F  {
        UiPicture="\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class PointerSlot {
            };
        };
    };
    class srifle_EBR_blk_F: srifle_EBR_F  {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="srifle_EBR_blk_F";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_EBR_blk_F0";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\LongRangeRifles\EBR\Data\srifle_EBR_blk_F_1_CO.paa", "\z\ghost\addons\weapons\LongRangeRifles\EBR\Data\srifle_EBR_blk_F_2_CO.paa"};
        picture="\z\ghost\addons\weapons\LongRangeRifles\EBR\Data\UI\icon_srifle_EBR_blk_F_X_CA.paa";
    };
    class srifle_EBR_khk_F: srifle_EBR_F  {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="srifle_EBR_khk_F";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_EBR_khk_F0";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\LongRangeRifles\EBR\Data\srifle_EBR_khk_F_1_CO.paa", "\z\ghost\addons\weapons\LongRangeRifles\EBR\Data\srifle_EBR_khk_F_2_CO.paa"};
        picture="\z\ghost\addons\weapons\LongRangeRifles\EBR\Data\UI\icon_srifle_EBR_khk_F_X_CA.paa";
    };
    class srifle_DMR_01_black_F: srifle_DMR_01_F  {
        author="$STR_GHOST_WEAPONS_PlusUltra";
        baseWeapon="srifle_DMR_01_black_F";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_DMR_01_black_F0";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\LongRangeRifles\DMR_01\Data\DMR_01_black_CO.paa", "\z\ghost\addons\weapons\LongRangeRifles\DMR_01\Data\DMR_02_black_CO.paa"};
        hiddenSelectionsMaterials[]={"\z\ghost\addons\weapons\LongRangeRifles\DMR_01\Data\DMR_01_black.rvmat", "\z\ghost\addons\weapons\LongRangeRifles\DMR_01\Data\DMR_02_black.rvmat"};
        picture="\z\ghost\addons\weapons\LongRangeRifles\DMR_01\Data\UI\icon_srifle_DMR_01_black_F_X_CA.paa";
    };
    class srifle_DMR_02_tna_F: srifle_DMR_02_F  {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="srifle_DMR_02_tna_F";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_DMR_02_tna_F0";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\LongRangeRifles\DMR_02\Data\DMR_02_01_tna_CO.paa", "\z\ghost\addons\weapons\LongRangeRifles\DMR_02\Data\DMR_02_02_tna_CO.paa"};
        picture="\z\ghost\addons\weapons\LongRangeRifles\DMR_02\Data\UI\icon_srifle_DMR_02_tna_F_X_CA.paa";
    };
    class srifle_DMR_06_black_F: srifle_DMR_06_camo_F  {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="srifle_DMR_06_black_F";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_DMR_06_black_F0";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\LongRangeRifles\DMR_06\Data\DMR_06_01_black_CO.paa", "\z\ghost\addons\weapons\LongRangeRifles\DMR_06\Data\DMR_06_02_black_CO.paa"};
        magazines[]={"20Rnd_762x51_Mag"};
        picture="\z\ghost\addons\weapons\LongRangeRifles\DMR_06\Data\UI\icon_srifle_DMR_06_black_F_X_CA.paa";
    };
    class MMG_02_black_F;
    class MMG_02_khaki_F: MMG_02_black_F  {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="MMG_02_khaki_F";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_MMG_02_khaki_F0";
        picture="\z\ghost\addons\weapons\Machineguns\MMG_02\Data\UI\icon_MMG_02_khaki_F_X_CA.paa";
        UIPicture="\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Machineguns\MMG_02\Data\MMG_02_01_khaki_CO.paa", "\z\ghost\addons\weapons\Machineguns\MMG_02\Data\MMG_02_02_khaki_CO.paa", "\z\ghost\addons\weapons\Machineguns\MMG_02\Data\MMG_02_03_khaki_CO.paa"};
        class LinkedItems  {
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_khk";
            };
        };
    };
    class hgun_ACPC2_F;
    class hgun_P07_F: Pistol_Base_F  {
        magazines[]={"16Rnd_9x21_Mag_v2", "16Rnd_9x21_red_Mag_v2", "16Rnd_9x21_green_Mag_v2", "16Rnd_9x21_yellow_Mag_v2", "30Rnd_9x21_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Green_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_red_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_yellow_Mag"};
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class PointerSlot: asdg_PistolUnderRail {
                iconPosition[]={0.39, 0.48};
                iconScale=0.2;
            };
        };
    };
    class hgun_Pistol_heavy_01_F;
    class hgun_Pistol_heavy_02_F: Pistol_Base_F  {
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot {
            };
        };
    };
    class hgun_Rook40_F: Pistol_Base_F  {
        magazines[]={"17Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Green_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_red_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_yellow_Mag"};
        magazineWell[]={"Rook40_9x21"};
    };
    class hgun_Pistol_heavy_01_green_F;
    class hgun_ACPC2_black_F: hgun_ACPC2_F  {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="hgun_ACPC2_black_F";
        displayname="$STR_GHOST_WEAPONS_CfgWeapons_hgun_ACPC2_black_F0";
        picture="\z\ghost\addons\weapons\Pistols\ACPC2\Data\UI\icon_hgun_ACPC2_black_F_X_CA.paa";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Pistols\ACPC2\Data\ACPC2_black_CO.paa"};
        hiddenSelectionsMaterials[]={"\z\ghost\addons\weapons\Pistols\ACPC2\Data\ACPC2_black.rvmat"};
    };
    class hgun_Pistol_heavy_01_black_F: hgun_Pistol_heavy_01_F  {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="hgun_Pistol_heavy_01_black_F";
        displayname="$STR_GHOST_WEAPONS_CfgWeapons_hgun_Pistol_heavy_01_black_F0";
        picture="\z\ghost\addons\weapons\Pistols\Pistol_Heavy_01\Data\UI\icon_hgun_Pistol_heavy_01_black_F_X_CA.paa";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Pistols\Pistol_Heavy_01\Data\Pistol_heavy_01_black_CO.paa"};
    };
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class arifle_MXC_F: arifle_MX_Base_F  {
        initSpeed=-0.91;
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\MX\Data\XMX_Short_CO.paa"};
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_65 {
                iconPosition[]={0, 0.4};
                iconScale=0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[]={0.2, 0.4};
                iconScale=0.25;
            };
        };
    };
    class arifle_MX_F: arifle_MX_Base_F  {
        initSpeed=-1;
        hiddenSelections[]={"camo1", "camo2"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\MX\Data\XMX_Base_CO.paa", "\z\ghost\addons\weapons\Rifles\MX\Data\XMX_Short_CO.paa"};
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_65 {
                iconPosition[]={0, 0.45};
                iconScale=0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[]={0.2, 0.45};
                iconScale=0.25;
            };
        };
    };
    class arifle_MX_GL_F: arifle_MX_Base_F  {
        initSpeed=-1;
        hiddenSelections[]={"camo1", "camo2"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\MX\Data\XMX_Base_CO.paa", "\z\ghost\addons\weapons\Rifles\MX\Data\GLX_CO.paa"};
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_65 {
                iconPosition[]={0, 0.45};
                iconScale=0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[]={0.2, 0.45};
                iconScale=0.25;
            };
        };
    };
    class arifle_MX_SW_F: arifle_MX_Base_F  {
        initSpeed=-1.1;
        UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
        cursor="arifle";
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\MX\Data\XMX_LMG_CO.paa"};
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_65 {
                iconPosition[]={0, 0.45};
                iconScale=0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[]={0.2, 0.45};
                iconScale=0.25;
            };
        };
    };
    class arifle_MXM_F: arifle_MX_Base_F  {
        initSpeed=-1.15;
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\MX\Data\XMX_Long_CO.paa"};
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_65 {
                iconPosition[]={0, 0.4};
                iconScale=0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[]={0.2, 0.45};
                iconScale=0.25;
            };
        };
    };
    class arifle_MX_SW_Hamr_pointer_F: arifle_MX_SW_F  {
        class LinkedItems  {
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class arifle_MXC_Holo_pointer_snds_F: arifle_MXC_F  {
        class LinkedItems  {
            class LinkedItemsMuzzle {
                item="muzzle_snds_H_snd_F";
            };
        };
    };
    class arifle_MXC_ACO_pointer_snds_F: arifle_MXC_F  {
        class LinkedItems  {
            class LinkedItemsMuzzle {
                item="muzzle_snds_H_snd_F";
            };
        };
    };
    class arifle_MX_ACO_pointer_snds_F: arifle_MX_F  {
        class LinkedItems  {
            class LinkedItemsMuzzle {
                item="muzzle_snds_H_snd_F";
            };
        };
    };
    class arifle_MX_RCO_pointer_snds_F: arifle_MX_F  {
        class LinkedItems  {
            class LinkedItemsMuzzle {
                item="muzzle_snds_H_snd_F";
            };
        };
    };
    class arifle_MX_GL_Holo_pointer_snds_F: arifle_MX_GL_F  {
        class LinkedItems  {
            class LinkedItemsMuzzle {
                item="muzzle_snds_H_snd_F";
            };
        };
    };
    class arifle_MXM_DMS_LP_BI_snds_F: arifle_MXM_F  {
        class LinkedItems  {
            class LinkedItemsMuzzle {
                item="muzzle_snds_H_snd_F";
            };
        };
    };
    class arifle_MXC_Black_F: arifle_MXC_F  {
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};
    };
    class arifle_MX_Black_F: arifle_MX_F  {
        hiddenSelections[]={"camo1", "camo2"};
        hiddenSelectionsTextures[]={"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa", "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};
    };
    class arifle_MX_Black_Hamr_Pointer_Snds_F: arifle_MX_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                item="optic_Hamr";
            };
        };
    };
    class arifle_MX_GL_Black_F: arifle_MX_GL_F  {
        hiddenSelections[]={"camo1", "camo2"};
        hiddenSelectionsTextures[]={"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa", "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"};
    };
    class arifle_MX_SW_Black_F: arifle_MX_SW_F  {
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_LMG_Black_co.paa"};
    };
    class arifle_MX_SW_Black_Hamr_pointer_F: arifle_MX_SW_Black_F  {
        class LinkedItems  {
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class arifle_MX_SW_Black_Rifle_F: arifle_MX_SW_Black_F  {
        class manual;
        class close: manual  {
            burst=5;
            aiBurstTerminable=1;
            aiRateOfFire=0.5;
            aiRateOfFireDistance=50;
            minRange=0;
            minRangeProbab=0.05;
            midRange=20;
            midRangeProbab=0.7;
            maxRange=50;
            maxRangeProbab=0.04;
            showToPlayer=0;
        };
        class short: close  {
            burst=3;
            aiBurstTerminable=1;
            aiRateOfFire=2;
            aiRateOfFireDistance=300;
            minRange=50;
            minRangeProbab=0.05;
            midRange=150;
            midRangeProbab=0.7;
            maxRange=300;
            maxRangeProbab=0.04;
        };
        class medium: close  {
            burst=3;
            aiRateOfFire=4;
            aiRateOfFireDistance=600;
            minRange=200;
            minRangeProbab=0.05;
            midRange=300;
            midRangeProbab=0.7;
            maxRange=500;
            maxRangeProbab=0.1;
        };
    };
    class arifle_MXM_Black_F: arifle_MXM_F  {
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_long_Black_co.paa"};
    };
    class SDAR_base_F: Rifle_Base_F  {
        magazineWell[]={"STANAG_556x45_SDAR"};
    };
    class Tavor_base_F: Rifle_Base_F  {
        class WeaponSlotsInfo;
        class Single: Mode_SemiAuto  {
            reloadTime=0.066;
        };
        class FullAuto: Mode_FullAuto  {
            reloadTime=0.066;
        };
    };
    class arifle_TRG21_F: Tavor_base_F  {
        initSpeed=-1;
        hiddenSelections[]={"camo"};
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_556 {
                iconPosition[]={0, 0.4};
                iconScale=0.2;
            };
        };
    };
    class arifle_TRG20_F: Tavor_base_F  {
        initSpeed=-0.91;
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_556 {
                iconPosition[]={0, 0.4};
                iconScale=0.2;
            };
        };
        class Single: Single  {
            reloadTime=0.067;
        };
        class FullAuto: FullAuto  {
            reloadTime=0.067;
        };
    };
    class arifle_TRG21_GL_F: Tavor_base_F  {
        initSpeed=-1;
        class WeaponSlotsInfo: WeaponSlotsInfo  {
            class MuzzleSlot: asdg_MuzzleSlot_556 {
                iconPosition[]={0, 0.4};
                iconScale=0.2;
            };
        };
    };
    class arifle_MX_khk_F: arifle_MX_Black_F  {
        hiddenSelectionsTextures[]={"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa", "\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Short_khk_co.paa"};
    };
    class arifle_MX_GL_khk_F: arifle_MX_GL_Black_F  {
        hiddenSelectionsTextures[]={"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa", "\A3\Weapons_F_Exp\Rifles\MX\Data\glx_khk_co.paa"};
    };
    class arifle_MX_SW_khk_F: arifle_MX_SW_Black_F  {
        hiddenSelectionsTextures[]={"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
    };
    class arifle_MXC_khk_F: arifle_MXC_Black_F  {
        hiddenSelectionsTextures[]={"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Short_khk_co.paa"};
    };
    class arifle_MXM_khk_F: arifle_MXM_Black_F  {
        hiddenSelectionsTextures[]={"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_long_khk_co.paa"};
    };
    class arifle_SPAR_01_base_F;
    class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa"
        };
    };
    class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa"
        };
    };
    class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa"
        };
    };
    class arifle_SPAR_01_GL_base_F;
    class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_blk_F_01_CO.paa"
        };
    };
    class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_khk_F_01_CO.paa"
        };
    };
    class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_snd_F_01_CO.paa"
        };
    };
    class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F  {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa"
        };
    };
    class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F  {
        magazines[]={
            "150Rnd_556x45_Drum_Green_Mag_F",
            "150Rnd_556x45_Drum_Green_Mag_Tracer_F"
        };
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa"
        };
    };
    class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F  {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa"
        };
    };
    class arifle_SPAR_03_base_F: Rifle_Base_F {
        UiPicture="\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
    };
    class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_02_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa"
        };
    };
    class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_02_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa"
        };
    };
    class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F {
        hiddenSelectionsTextures[]={
            "\z\ghost\addons\weapons\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_01_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_02_CO.paa",
            "\z\ghost\addons\weapons\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa"
        };
    };
    class pdw2000_base_F: Rifle_Short_Base_F  {
        magazines[]={"30Rnd_9x21_Mag_v2", "30Rnd_9x21_Red_Mag_v2", "30Rnd_9x21_Yellow_Mag_v2", "30Rnd_9x21_Green_Mag_v2", "30Rnd_9x21_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Green_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Red_Mag", "16Rnd_9x21_Yellow_Mag", "16Rnd_9x21_Green_Mag"};
        modes[]={"Single", "FullAuto"};
    };
    class srifle_EBR_blk_DMS_LP_BI_S_F: srifle_EBR_blk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_DMS";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class srifle_EBR_khk_DMS_LP_BI_S_F: srifle_EBR_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_DMS";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B_khk_F";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_khk";
            };
        };
    };
    class srifle_DMR_02_sniper_AMS_LP_F: srifle_DMR_02_sniper_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_AMS_snd";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class srifle_DMR_02_sniper_AMS_LP_S_F: srifle_DMR_02_sniper_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_AMS_snd";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_338_sand";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class srifle_DMR_02_AMS_LP_BI_F: srifle_DMR_02_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_AMS";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class srifle_DMR_02_AMS_LP_BI_S_F: srifle_DMR_02_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_AMS";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_338_black";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class srifle_DMR_02_tna_AMS_Pointer_Bipod_F: srifle_DMR_02_tna_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_AMS";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class srifle_DMR_03_AMS_LP_BI_F: srifle_DMR_03_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_AMS";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class srifle_DMR_03_khaki_AMS_LP_BI_F: srifle_DMR_03_khaki_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_AMS_khk";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_khk";
            };
        };
    };
    class MMG_02_black_RCO_LP_F: MMG_02_black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class MMG_02_khaki_RCO_LP_F: MMG_02_khaki_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_khk";
            };
        };
    };
    class hgun_Pistol_heavy_01_black_MRD_F: hgun_Pistol_heavy_01_black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_MRD_black";
            };
        };
    };
    class arifle_MXC_Holo_flash_F: arifle_MXC_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_flashlight";
            };
        };
    };
    class arifle_MX_Holo_pointer_snds_F: arifle_MX_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H_snd_F";
            };
        };
    };
    class arifle_MX_GL_RCO_pointer_snds_F: arifle_MX_GL_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class arifle_MX_SW_Hamr_pointer_snds_F: arifle_MX_SW_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H_snd_F";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class arifle_MX_SW_black_Hamr_pointer_rifle_F: arifle_MX_SW_Black_Rifle_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
        };
    };
    class arifle_MXM_MOS_LP_BI_F: arifle_MXM_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_SOS";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class arifle_MXM_MOS_LP_BI_S_F: arifle_MXM_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_SOS";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H_snd_F";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class arifle_MXC_Black_ACO_Pointer_F: arifle_MXC_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_ACO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
        };
    };
    class arifle_MXC_Black_ACO_FL_F: arifle_MXC_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_ACO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_flashlight";
            };
        };
    };
    class arifle_MXC_Black_Holo_Pointer_Snds_F: arifle_MXC_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_blk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H";
            };
        };
    };
    class arifle_MXC_Black_Holo_F: arifle_MXC_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_blk_F";
            };
        };
    };
    class arifle_MX_Black_Holo_Pointer_Snds_F: arifle_MX_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_blk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H";
            };
        };
    };
    class arifle_MX_Black_RCO_FL_F: arifle_MX_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_flashlight";
            };
        };
    };
    class arifle_MX_GL_Black_Hamr_Pointer_Snds_F: arifle_MX_GL_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H";
            };
        };
    };
    class arifle_MX_GL_Black_ACO_Pointer_F: arifle_MX_GL_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_ACO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
        };
    };
    class arifle_MX_SW_Black_Hamr_Pointer_Bipod_Snds_F: arifle_MX_SW_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class arifle_MX_SW_Black_FL_F: arifle_MX_SW_Black_F  {
        class LinkedItems  {
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_flashlight";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class arifle_MXM_Black_RCO_BI_F: arifle_MXM_Black_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class arifle_MX_khk_Holo_Pointer_F: arifle_MX_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
        };
    };
    class arifle_MX_khk_Holo_Pointer_Snds_F: arifle_MX_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H_khk_F";
            };
        };
    };
    class arifle_MX_GL_khk_ACO_Pointer_F: arifle_MX_GL_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_ACO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
        };
    };
    class arifle_MX_GL_khk_Hamr_Pointer_Snds_F: arifle_MX_GL_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H_khk_F";
            };
        };
    };
    class arifle_MXC_khk_ACO_Pointer_F: arifle_MXC_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_ACO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
        };
    };
    class arifle_MXC_khk_Holo_Pointer_Snds_F: arifle_MXC_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H_khk_F";
            };
        };
    };
    class arifle_MXC_khk_Holo_F: arifle_MXC_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_khk_F";
            };
        };
    };
    class arifle_MXC_khk_Holo_Flash_F: arifle_MXC_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_flashlight";
            };
        };
    };
    class arifle_MX_SW_khk_Hamr_Pointer_F: arifle_MX_SW_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_khk";
            };
        };
    };
    class arifle_MX_SW_khk_Hamr_Pointer_Snds_F: arifle_MX_SW_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_H_khk_F";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_khk";
            };
        };
    };
    class arifle_SPAR_01_blk_ERCO_Pointer_Snds_F: arifle_SPAR_01_blk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_ERCO_blk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M";
            };
        };
    };
    class arifle_SPAR_01_blk_RCO_Pointer_Snds_F: arifle_SPAR_01_blk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M";
            };
        };
    };
    class arifle_SPAR_01_blk_Holo_Pointer_Snds_F: arifle_SPAR_01_blk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_blk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M";
            };
        };
    };
    class arifle_SPAR_01_khk_RCO_Pointer_Snds_F: arifle_SPAR_01_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M_khk_F";
            };
        };
    };
    class arifle_SPAR_01_khk_Holo_Pointer_Snds_F: arifle_SPAR_01_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M_khk_F";
            };
        };
    };
    class arifle_SPAR_01_snd_RCO_Pointer_Snds_F: arifle_SPAR_01_snd_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M_snd_F";
            };
        };
    };
    class arifle_SPAR_01_snd_Holo_Pointer_Snds_F: arifle_SPAR_01_snd_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M_snd_F";
            };
        };
    };
    class arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F: arifle_SPAR_01_GL_blk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_ERCO_blk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M";
            };
        };
    };
    class arifle_SPAR_01_GL_blk_RCO_Pointer_Snds_F: arifle_SPAR_01_GL_blk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M";
            };
        };
    };
    class arifle_SPAR_01_GL_blk_Holo_Pointer_Snds_F: arifle_SPAR_01_GL_blk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_blk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M";
            };
        };
    };
    class arifle_SPAR_01_GL_khk_RCO_Pointer_Snds_F: arifle_SPAR_01_GL_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M_khk_F";
            };
        };
    };
    class arifle_SPAR_01_GL_khk_Holo_Pointer_Snds_F: arifle_SPAR_01_GL_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M_khk_F";
            };
        };
    };
    class arifle_SPAR_01_GL_snd_RCO_Pointer_Snds_F: arifle_SPAR_01_GL_snd_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M_snd_F";
            };
        };
    };
    class arifle_SPAR_01_GL_snd_Holo_Pointer_Snds_F: arifle_SPAR_01_GL_snd_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Holosight";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M_snd_F";
            };
        };
    };
    class arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F: arifle_SPAR_02_blk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_ERCO_blk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class arifle_SPAR_02_blk_RCO_Pointer_Snds_Bipod_F: arifle_SPAR_02_blk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class arifle_SPAR_02_khk_RCO_Pointer_Snds_Bipod_F: arifle_SPAR_02_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M_khk_F";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_khk";
            };
        };
    };
    class arifle_SPAR_02_snd_RCO_Pointer_Snds_Bipod_F: arifle_SPAR_02_snd_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_Hamr";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_M_snd_F";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F: arifle_SPAR_03_blk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_SOS";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class arifle_SPAR_03_khk_MOS_Pointer_Snds_Bipod_F: arifle_SPAR_03_khk_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_SOS_khk_F";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B_khk_F";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_khk";
            };
        };
    };
    class arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F: arifle_SPAR_03_snd_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_SOS";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B_snd_F";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class hgun_Pistol_heavy_01_green_MRD_F: hgun_Pistol_heavy_01_green_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_MRD_black";
            };
        };
    };
    class hgun_Pistol_heavy_01_MRD_F: hgun_Pistol_heavy_01_F  {
        class LinkedItems  {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_MRD";
            };
        };
    };
    class hgun_Pistol_heavy_01_snds_F: hgun_Pistol_heavy_01_F  {
        class LinkedItems  {
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_acp";
            };
        };
    };
    class InventoryMuzzleItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class InventoryFlashLightItem_Base_F;
    class muzzle_snds_H: ItemCore {
        picture="\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_M_CA.paa";
        model="\A3\Weapons_F\Acc\acca_snds_lmg_blk_F.p3d";
    };
    class muzzle_snds_M;
    class muzzle_snds_B;
    class muzzle_snds_acp;
    class muzzle_snds_338_black;
    class acc_pointer_IR;
    class bipod_02_F_blk;
    class muzzle_snds_H_khk_F: muzzle_snds_H {
        model="\A3\Weapons_F\Acc\acca_snds_lmg_khk_F.p3d";
        picture="\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_m_khk_F_CA.paa";
    };
    class muzzle_snds_H_snd_F: muzzle_snds_H {
        model="\A3\Weapons_F\Machineguns\M200\lmg_suppressor";
        picture="\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_m_snd_F_CA.paa";
    };
    class muzzle_snds_pistol_heavy_01: muzzle_snds_acp {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_pistol_heavy_010";
        model="\A3\Weapons_F\Acc\acca_snds_osprey_F.p3d";
        picture="\z\ghost\addons\weapons\Acc\Data\UI\icon_muzzle_snds_pistol_heavy_01_CA.paa";
    };
    class muzzle_mzls_H : ItemCore {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        htMin=1;
        htMax=600;
        afMax=0;
        mfMax=0;
        mFact=1;
        tBody=100;
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_H0";
        picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
        model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
        class ItemInfo : InventoryMuzzleItem_Base_F {
            mass=5;
            class AmmoCoef {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.5;
                audibleFire=1;
                visibleFireTime=0.5;
                audibleFireTime=1;
                cost=1;
            };
            soundTypeIndex=0;
            muzzleEnd="zaslehPoint";
            alternativeFire="Zasleh2";
            class MuzzleCoef {
                dispersionCoef="0.9f";
                artilleryDispersionCoef="1.0f";
                fireLightCoef="0.1f";
                recoilCoef="1.0f";
                recoilProneCoef="1.0f";
                minRangeCoef="1.0f";
                minRangeProbabCoef="1.0f";
                midRangeCoef="1.0f";
                midRangeProbabCoef="1.0f";
                maxRangeCoef="1.0f";
                maxRangeProbabCoef="1.0f";
            };
        };
        inertia=0.1;
    };
    class muzzle_mzls_L: muzzle_mzls_H {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_L0";
        picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_L_CA.paa";
        model="\A3\Weapons_F\Acc\acca_mzls_L_F.p3d";
        class ItemInfo: ItemInfo {
            mass = 3;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.5;
                audibleFire = 1;
                visibleFireTime = 0.5;
                audibleFireTime = 1;
                cost = 1;
            };
            soundTypeIndex = 0;
            muzzleEnd = "zaslehPoint";
            alternativeFire = "Zasleh2";
            class MuzzleCoef {
                dispersionCoef = "0.9f";
                artilleryDispersionCoef = "1.0f";
                fireLightCoef = "0.1f";
                recoilCoef = "1.0f";
                recoilProneCoef = "1.0f";
                minRangeCoef = "1.0f";
                minRangeProbabCoef = "1.0f";
                midRangeCoef = "1.0f";
                midRangeProbabCoef = "1.0f";
                maxRangeCoef = "1.0f";
                maxRangeProbabCoef = "1.0f";
            };
        };
        inertia = 0.1;
    };
    class muzzle_mzls_M: muzzle_mzls_H {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_M0";
        picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
        model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
        class ItemInfo: ItemInfo {
            mass = 4;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.5;
                audibleFire = 1;
                visibleFireTime = 0.5;
                audibleFireTime = 1;
                cost = 1;
            };
            soundTypeIndex = 0;
            muzzleEnd = "zaslehPoint";
            alternativeFire = "Zasleh2";
            class MuzzleCoef {
                dispersionCoef = "0.9f";
                artilleryDispersionCoef = "1.0f";
                fireLightCoef = "0.1f";
                recoilCoef = "1.0f";
                recoilProneCoef = "1.0f";
                minRangeCoef = "1.0f";
                minRangeProbabCoef = "1.0f";
                midRangeCoef = "1.0f";
                midRangeProbabCoef = "1.0f";
                maxRangeCoef = "1.0f";
                maxRangeProbabCoef = "1.0f";
            };
        };
        inertia = 0.1;
    };
    class muzzle_mzls_B: muzzle_mzls_H {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_B0";
        picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
        model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
        class ItemInfo: ItemInfo {
            mass = 6;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.5;
                audibleFire = 1;
                visibleFireTime = 0.5;
                audibleFireTime = 1;
                cost = 1;
            };
            soundTypeIndex = 0;
            muzzleEnd = "zaslehPoint";
            alternativeFire = "Zasleh2";
            class MuzzleCoef {
                dispersionCoef = "0.9f";
                artilleryDispersionCoef = "1.0f";
                fireLightCoef = "0.1f";
                recoilCoef = "1.0f";
                recoilProneCoef = "1.0f";
                minRangeCoef = "1.0f";
                minRangeProbabCoef = "1.0f";
                midRangeCoef = "1.0f";
                midRangeProbabCoef = "1.0f";
                maxRangeCoef = "1.0f";
                maxRangeProbabCoef = "1.0f";
            };
        };
        inertia = 0.2;
    };
    class muzzle_mzls_acp: muzzle_mzls_H {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_acp0";
        picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_L_CA.paa";
        model="\A3\Weapons_F\Acc\acca_mzls_L_F.p3d";
        class ItemInfo: ItemInfo {
		mass = 3;
		class MagazineCoef {
			initSpeed = 1;
		};
		class AmmoCoef {
			hit = 1;
			typicalSpeed = 1;
			airFriction = 1;
			visibleFire = 0.5;
			audibleFire = 1;
			visibleFireTime = 0.5;
			audibleFireTime = 1;
			cost = 1;
		};
		soundTypeIndex = 0;
		muzzleEnd = "zaslehPoint";
		alternativeFire = "Zasleh2";
		class MuzzleCoef {
			dispersionCoef = "0.9f";
			artilleryDispersionCoef = "1.0f";
			fireLightCoef = "0.1f";
			recoilCoef = "1.0f";
			recoilProneCoef = "1.0f";
			minRangeCoef = "1.0f";
			minRangeProbabCoef = "1.0f";
			midRangeCoef = "1.0f";
			midRangeProbabCoef = "1.0f";
			maxRangeCoef = "1.0f";
			maxRangeProbabCoef = "1.0f";
		};
        };
        inertia = 0.1;
    };
    class muzzle_mzls_smg_01: muzzle_mzls_acp {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_smg_010";
        model="\A3\Weapons_F\Acc\acca_mzls_SMG_01_F.p3d";
        picture="\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_H_CA.paa";
    };
    class optic_dcl: ItemCore {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_optic_dcl0";
        picture="\A3\Weapons_F\Data\UI\gear_acco_dcl_120_CA.paa";
        model="\A3\Weapons_F\Acc\acco_dcl_120_F.p3d";
        descriptionShort="$STR_GHOST_WEAPONS_CfgWeapons_optic_dcl1";
        weaponInfoType="RscWeaponZeroing";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass=14;
            opticType="CLOSE_RANGE_OPTIC";
            optics=1;
            modelOptics="\A3\Weapons_F\Acc\acco_dcl_120_F.p3d";
            class OpticsModes {
                class DCL {
                    opticsID=1;
                    useModelOptics=0;
                    opticsPPEffects[]={"OpticsCHAbera5", "OpticsBlur5"};
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                    cameraDir="";
                    visionMode[]={};
                };
            };
        };
        inertia=0.3;
    };
    class optic_ACOG: ItemCore {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        scope=1;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_optic_ACOG0";
        picture="\z\ghost\addons\weapons\Acc\Data\UI\icon_optic_ACOG_CA.paa";
        model="\z\ghost\addons\weapons\Acc\acco_ACOG_F.p3d";
        descriptionShort="$STR_GHOST_WEAPONS_CfgWeapons_optic_ACOG1";
        weaponInfoType="RscWeaponZeroing";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass=8;
            opticType="CLOSE_RANGE_OPTIC";
            optics=1;
            modelOptics="\z\ghost\addons\weapons\Acc\acco_ACOG_F.p3d";
            class OpticsModes {
                class Kolimator
                {
                    opticsID=1;
                    useModelOptics=0;
                    opticsPPEffects[]={"Default"};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    memoryPointCamera="eye";
                    visionMode[]={};
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                    cameraDir="";
                };
                class ACOG
                {
                    opticsID=2;
                    useModelOptics=0;
                    opticsPPEffects[]={"OpticsRadialBlur1", "OpticsBlur1"};
                    opticsZoomMin=0.125;
                    opticsZoomMax=0.125;
                    opticsZoomInit= 0.125;
                    memoryPointCamera="opticView";
                    opticsFlare=0;
                    opticsDisablePeripherialVision=1;
                    distanceZoomMin=300;
                    distanceZoomMax=300;
                };
            };
        };
        inertia=0.1;
    };
    class optic_tws_sniper: ItemCore {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        scope=2;
        displayName="$STR_A3_CfgWeapons_optic_tws_sniper0";
        picture="\z\ghost\addons\weapons\Acc\Data\UI\icon_optic_tws_sniper_CA.paa";
        model="\A3\Weapons_F\Acc\acco_tws_F.p3d";
        descriptionShort="$STR_A3_CfgWeapons_optic_tws_sniper1";
        weaponInfoType="RscOptics_tws_sniper";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass=16;
            weaponInfoType="RscWeaponRangeZeroingModeFOV";
            opticType="LONG_RANGE_OPTIC";
            optics=1;
            modelOptics="\z\ghost\addons\weapons\Acc\Reticle_tws_sniper.p3d";
            class OpticsModes {
                class TWS
                {
                    opticsID=1;
                    useModeloptics=1;
                    opticsPPEffects[]={"OpticsCHAbera5", "OpticsBlur5"};
                    opticsZoomMin=0.0285;
                    opticsZoomMax=0.076;
                    opticsZoomInit=0.076;
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
                    discreteDistanceInitIndex=2;
                    distanceZoomMin=100;
                    distanceZoomMax=1200;
                    discretefov[]={0.076,0.0285};
                    discreteInitIndex=0;
                    memoryPointCamera="opticView";
                    visionMode[]={"Ti", "Normal"};
                    thermalMode[]={0,1};
                    opticsFlare=0;
                    opticsDisablePeripherialVision=1;
                    cameraDir="";
                };
            };
        };
        inertia=0.2;
    };
    class muzzle_snds_B_wdm_F: muzzle_snds_B {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_B_wdm_F0";
        model="\A3\Weapons_F\Acc\acca_snds_58_wdm_F.p3d";
        picture="\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_58_wdm_F_CA.paa";
    };
    class muzzle_snds_408_black: muzzle_snds_338_black {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_408_black0";
        model="\A3\Weapons_F\Acc\acca_snds_338_black_F.p3d";
        picture="\A3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_CA.paa";
    };
    class muzzle_snds_408_green: muzzle_snds_408_black {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_408_green0";
        model="\A3\Weapons_F\Acc\acca_snds_338_green_F.p3d";
        picture="\A3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_green_CA.paa";
    };
    class muzzle_snds_408_sand: muzzle_snds_408_black {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_408_sand0";
        model="\A3\Weapons_F\Acc\acca_snds_338_tan_F.p3d";
        picture="\A3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_sand_CA.paa";
    };
    class muzzle_snds_460: ItemCore {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        htMin=1;
        htMax=600;
        afMax=0;
        mfMax=0;
        mFact=1;
        tBody=100;
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_4600";
        picture="\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_L_CA.paa";
        model="\A3\Weapons_F\Acc\acca_snds_L_F.p3d";
        class ItemInfo: InventoryMuzzleItem_Base_F {
            mass=10;
            class MagazineCoef {
                initSpeed=1.05;
            };
            class AmmoCoef {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.5;
                audibleFire=0.3;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            soundTypeIndex=1;
            muzzleEnd="zaslehPoint";
            alternativeFire="Zasleh2";
            class MuzzleCoef {
                dispersionCoef="0.8f";
                artilleryDispersionCoef="1.0f";
                fireLightCoef="0.1f";
                recoilCoef="1.0f";
                recoilProneCoef="1.0f";
                minRangeCoef="1.0f";
                minRangeProbabCoef="1.0f";
                midRangeCoef="1.0f";
                midRangeProbabCoef="1.0f";
                maxRangeCoef="1.0f";
                maxRangeProbabCoef="1.0f";
            };
        };
        inertia=0.2;
    };
    class muzzle_snds_545: muzzle_snds_H {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_5450";
        model="\A3\Weapons_F\Acc\acca_snds_h_F.p3d";
        picture="\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_H_CA.paa";
    };
    class muzzle_snds_545_wdm_F: muzzle_snds_545 {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_545_wdm_F0";
        model="\A3\Weapons_F\Acc\acca_snds_58_wdm_F.p3d";
        picture="\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_58_wdm_F_CA.paa";
    };
    class muzzle_snds_545_lush_F: muzzle_snds_545 {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_545_lush_F0";
        model="\A3\Weapons_F\Acc\acca_snds_h_lush_F.p3d";
        picture="\A3\Weapons_F_Enoch\Acc\Data\UI\icon_muzzle_snds_B_lush_F_CA.paa";
    };
    class muzzle_snds_545_arid_F: muzzle_snds_545 {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_545_arid_F0";
        model="\A3\Weapons_F\Acc\acca_snds_h_arid_F.p3d";
        picture="\A3\Weapons_F_Enoch\Acc\Data\UI\icon_muzzle_snds_B_arid_F_CA.paa";
    };
    class muzzle_mzls_58_F: muzzle_mzls_M {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_58_F0";
        model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
        picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
    };
    class muzzle_mzls_545: muzzle_mzls_M {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_5450";
        model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
        picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
    };
    class optic_srs: ItemCore {
        author = "$STR_A3_A_AveryTheKitty";
        scope = 1;
        displayName = "$STR_GHOST_WEAPONS_CfgWeapons_optic_srs0";
        picture = "\A3\Weapons_F\Data\UI\gear_acco_srs_CA.paa";
        model = "\A3\Weapons_F\Acc\acco_srs_F.p3d";
        descriptionShort = "$STR_GHOST_WEAPONS_CfgWeapons_optic_srs1";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 6;
            opticType = "CLOSE_RANGE_OPTIC";
            optics = 1;
            modelOptics = "\A3\Weapons_F\Acc\acco_srs_F.p3d";
            class OpticsModes {
                class SRS {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[]={"OpticsCHAbera5", "OpticsBlur5"};
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    cameraDir = "";
                    visionMode[] = {};
                };
            };
        };
        inertia = 0.1;
    };
    class optic_ACO_grn;
    class optic_ACO_grn_AK_F: optic_ACO_grn {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_optic_ACO_grn_AK_F0";
        model=/*"\z\ghost\addons\weapons\Acc\acco_aco_AK_F.p3d"*/ "\A3\Weapons_F\Acc\acco_aco_OP_smg_F.p3d";
        picture="\z\ghost\addons\weapons\Acc\Data\UI\icon_optic_ACO_grn_AK_F_CA.paa";
    };
    class acc_flashlight_ir: ItemCore {
        author="Ravenholme";
        scope=2;
        displayName="IR Flashlight";
        descriptionUse="$STR_A3_cfgWeapons_use_flashlight0";
        picture="\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
        model="\A3\weapons_f\acc\accv_Flashlight_F";
        descriptionShort="$STR_A3_cfgWeapons_acc_flashlight1";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=4;
            class FlashLight {
                irlight=true;
                color[]={0.705,0.627,0.51};
                ambient[]={0.9,0.81,0.7};
                intensity=1000;
                size=1;
                innerAngle=5;
                outerAngle=100;
                coneFadeCoef=8;
                position="flash dir";
                direction="flash";
                useFlare=1;
                flareSize=1.4;
                flareMaxDistance=100;
                dayLight=0;
                class Attenuation
                {
                    start=0;
                    constant=0.5;
                    linear=0.1;
                    quadratic=0.2;
                    hardLimitStart=27;
                    hardLimitEnd=34;
                };
                volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
                scale[]={1,1,1};
            };
        };
        inertia=0.1;
    };
    class acc_o_FMS: ItemCore {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        scope=2; 
        scopeArsenal=public;

        displayName="$STR_GHOST_WEAPONS_acc_o_FMS_dn";
        descriptionShort="$STR_GHOST_WEAPONS_acc_o_FMS_ds";
        model="\z\ghost\addons\weapons\acc\FMS.p3d";
        picture="\z\ghost\addons\weapons\acc\Data\UI\icon_acc_o_FMS_ca.paa";
        weaponInfoType="RscWeaponZeroing";

        class ItemInfo: InventoryOpticsItem_Base_F {
            opticType=1; // Medium Range
            optics=1;
            modelOptics="\z\ghost\addons\weapons\acc\FMS.p3d";
            mass=5; // 4.62966, but close enough for government work.

            class OpticsModes {
                class FMSScope
                {
                    opticsID=2;
                    useModelOptics=0;
                    memoryPointCamera="opticView";
                    visionMode[]={};

                    //--- FX
                    opticsFlare=0;
                    opticsDisablePeripherialVision=1;
                    opticsPPEffects[]={"OpticsRadialBlur1", "OpticsBlur1"};

                    //--- Zeroing
                    opticsZoomMin=0.125;
                    opticsZoomMax=0.125;
                    opticsZoomInit=0.125;
                    distanceZoomMin=300;
                    distanceZoomMax=300;
                };
                class FMSIronsights
                {
                    opticsID=1;
                    useModelOptics=0;
                    memoryPointCamera="eye";
                    visionMode[]={};

                    //--- FX
                    opticsFlare=0;
                    opticsDisablePeripherialVision=0;
                    opticsPPEffects[]={"Default"};

                    //--- Zeroing
                    opticsZoomMin=0.25;
                    opticsZoomMax=1.25;
                    opticsZoomInit=0.75;
                    distanceZoomMin=200;
                    distanceZoomMax=200;
                };
            };
        };
    };
};
