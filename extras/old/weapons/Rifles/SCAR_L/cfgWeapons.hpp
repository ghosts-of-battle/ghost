class CfgWeapons {
    class Rifle;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class Rifle_Long_Base_F : Rifle_Base_F {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class Rifle_Short_Base_F : Rifle_Base_F {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;
    class arifle_SCAR_L_base_F : Rifle_Base_F {
        model="\z\ghost\addons\weapons\Rifles\SCAR_L\SCAR_L_F.p3d";
        UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
        descriptionShort="$STR_A3_CfgWeapons_arifle_SPAR_01_base_F1";
        class Library {
            libTextDesc="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_base_F_Library0";
        };
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_02_CO.paa"};
        handAnim[]={"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"};
        reloadAction="GestureReloadSPAR_01";
        magazineReloadSwitchPhase=0.48;
        magazines[]={"30Rnd_556x45_Stanag_Sand"};
        magazineWell[]={"STANAG_556x45", "STANAG_556x45_Large"};
        htMin=8;
        htMax=920;
        inertia=0.5;
        aimTransitionSpeed=1.1;
        dexterity=1.4;
        initSpeed=870;
        recoil="recoil_sa80";
        maxZeroing=800;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : asdg_MuzzleSlot_556 {
                iconPosition[]={0.12, 0.43};
                iconScale=0.2;
            };
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[]={0.5, 0.36};
                iconScale=0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[]={0.33, 0.4};
                iconScale=0.2;
            };
            class UnderBarrelSlot : asdg_UnderSlot {
                iconPosition[]={0.3, 0.8};
                iconScale=0.3;
            };
            mass=105;
        };
        modes[]={"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium"};
        class Single : Mode_SemiAuto {
            reloadTime=0.096;
            dispersion=0.00073;
            minRange=2;
            minRangeProbab=0.5;
            midRange=150;
            midRangeProbab=0.7;
            maxRange=250;
            maxRangeProbab=0.2;
        };
        class FullAuto : Mode_FullAuto {
            reloadTime=0.096;
            dispersion=0.00073;
            minRange=0;
            minRangeProbab=0.9;
            midRange=15;
            midRangeProbab=0.7;
            maxRange=30;
            maxRangeProbab=0.05;
            aiRateOfFire=1E-06;
        };
        class fullauto_medium : FullAuto {
            showToPlayer=0.096;
            burst=3;
            minRange=2;
            minRangeProbab=0.5;
            midRange=75;
            midRangeProbab=0.7;
            maxRange=100;
            maxRangeProbab=0.05;
            aiRateOfFire=2;
        };
        class single_medium_optics1 : Single {
            requiredOpticType=1;
            showToPlayer=0;
            minRange=5;
            minRangeProbab=0.2;
            midRange=300;
            midRangeProbab=0.7;
            maxRange=450;
            maxRangeProbab=0.3;
            aiRateOfFire=5;
            aiRateOfFireDistance=500;
        };
        class single_medium_optics2 : single_medium_optics1 {
            requiredOpticType=2;
            minRange=100;
            minRangeProbab=0.1;
            midRange=400;
            midRangeProbab=0.7;
            maxRange=600;
            maxRangeProbab=0.05;
            aiRateOfFire=6;
            aiRateOfFireDistance=600;
        };
        ACE_barrelTwist=304.8;
        ACE_barrelLength=406.4;
        ACE_railHeightAboveBore=4.7;
    };
    class arifle_SCAR_L_GL_base_F : arifle_SCAR_L_base_F {
        UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
        model="\z\ghost\addons\weapons\Rifles\SCAR_L\SCAR_L_GL_F.p3d";
        hiddenSelections[]={"Camo1", "Camo2", "Camo3"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_02_CO.paa", "\z\ghost\addons\weapons\Rifles\SA80\Data\SA80_F_GL_snd_CO.paa"};
        handAnim[]={"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01_GL.rtm"};
        inertia=0.6;
        dexterity=1.3;
        aimTransitionSpeed=0.7;
        initSpeed=800;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass=115;
        };
        class Single : Single {
            dispersion=0.00102;
        };
        class FullAuto : FullAuto {
            dispersion=0.00102;
        };
        muzzles[]={"this", "EGLM"};
        class EGLM : UGL_F {
            displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_GL_base_F_EGLM0";
            useModelOptics=0;
            useExternalOptic=0;
            cameraDir="OP_look";
            discreteDistance[]={50, 75, 100, 150, 200, 250, 300, 350, 400};
            discreteDistanceCameraPoint[]={"OP_eye_50", "OP_eye_75", "OP_eye_100", "OP_eye_150", "OP_eye_200", "OP_eye_250", "OP_eye_300", "OP_eye_350", "OP_eye_400"};
            discreteDistanceInitIndex=1;
            reloadAction="GestureReloadSPARUGL";
            magazineReloadSwitchPhase=0.4;
        };
        ACE_barrelLength=330.2;
    };
    class arifle_SCAR_L_short_base_F : arifle_SCAR_L_base_F {
        model="\z\ghost\addons\weapons\Rifles\SCAR_L\SCAR_L_short_F.p3d";
        inertia=0.4;
        dexterity=1.5;
        aimTransitionSpeed=1;
        initSpeed=800;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass=95;
        };
        class Single : Single {
            dispersion=0.00102;
        };
        class FullAuto : FullAuto {
            dispersion=0.00102;
        };
        ACE_barrelLength=330.2;
    };
    class arifle_SCAR_L_grip_base_F : arifle_SCAR_L_base_F {
        model="\z\ghost\addons\weapons\Rifles\SCAR_L\SCAR_L_grip_F.p3d";
        handAnim[]={"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"};
        dexterity=1.7;
        aimTransitionSpeed=1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass=115;
        };
    };
    class arifle_SCAR_L_black_base_F : arifle_SCAR_L_base_F {
        magazines[]={"30Rnd_556x45_Stanag"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_01_black_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_02_black_CO.paa"};
    };
    class arifle_SCAR_L_GL_black_base_F : arifle_SCAR_L_GL_base_F {
        magazines[]={"30Rnd_556x45_Stanag"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_01_black_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_02_black_CO.paa", "\z\ghost\addons\weapons\Rifles\SA80\Data\SA80_F_GL_CO.paa"};
    };
    class arifle_SCAR_L_short_black_base_F : arifle_SCAR_L_short_base_F {
        magazines[]={"30Rnd_556x45_Stanag"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_01_black_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_02_black_CO.paa"};
    };
    class arifle_SCAR_L_grip_black_base_F : arifle_SCAR_L_grip_base_F {
        magazines[]={"30Rnd_556x45_Stanag"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_01_black_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_02_black_CO.paa"};
    };
    class arifle_SCAR_L_khaki_base_F : arifle_SCAR_L_base_F {
        magazines[]={"30Rnd_556x45_Stanag"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_01_khaki_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_02_khaki_CO.paa"};
    };
    class arifle_SCAR_L_GL_khaki_base_F : arifle_SCAR_L_GL_base_F {
        magazines[]={"30Rnd_556x45_Stanag"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_01_khaki_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_02_khaki_CO.paa", "\z\ghost\addons\weapons\Rifles\SA80\Data\SA80_F_GL_khk_CO.paa"};
    };
    class arifle_SCAR_L_short_khaki_base_F : arifle_SCAR_L_short_base_F {
        magazines[]={"30Rnd_556x45_Stanag"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_01_khaki_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_02_khaki_CO.paa"};
    };
    class arifle_SCAR_L_grip_khaki_base_F : arifle_SCAR_L_grip_base_F {
        magazines[]={"30Rnd_556x45_Stanag"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_01_khaki_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR_L\Data\SCAR_L_02_khaki_CO.paa"};
    };
    class arifle_SCAR_L_F : arifle_SCAR_L_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L.paa";
        baseWeapon="arifle_SCAR_L_F";
    };
    class arifle_SCAR_L_GL_F : arifle_SCAR_L_GL_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_GL_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_gl.paa";
        baseWeapon="arifle_SCAR_L_GL_F";
    };
    class arifle_SCAR_L_short_F : arifle_SCAR_L_short_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_short_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_short.paa";
        baseWeapon="arifle_SCAR_L_short_F";
    };
    class arifle_SCAR_L_grip_F : arifle_SCAR_L_grip_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_grip_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_grip.paa";
        baseWeapon="arifle_SCAR_L_grip_F";
    };
    class arifle_SCAR_L_black_F : arifle_SCAR_L_black_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_black_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_black.paa";
        baseWeapon="arifle_SCAR_L_black_F";
    };
    class arifle_SCAR_L_GL_black_F : arifle_SCAR_L_GL_black_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_GL_black_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_gl_black.paa";
        baseWeapon="arifle_SCAR_L_GL_black_F";
    };
    class arifle_SCAR_L_short_black_F : arifle_SCAR_L_short_black_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_short_black_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_short_black.paa";
        baseWeapon="arifle_SCAR_L_short_black_F";
    };
    class arifle_SCAR_L_grip_black_F : arifle_SCAR_L_grip_black_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_grip_black_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_grip_black.paa";
        baseWeapon="arifle_SCAR_L_grip_black_F";
    };
    class arifle_SCAR_L_khaki_F : arifle_SCAR_L_khaki_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_khaki_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_khaki.paa";
        baseWeapon="arifle_SCAR_L_khaki_F";
    };
    class arifle_SCAR_L_GL_khaki_F : arifle_SCAR_L_GL_khaki_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_GL_khaki_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_gl_khaki.paa";
        baseWeapon="arifle_SCAR_L_GL_khaki_F";
    };
    class arifle_SCAR_L_short_khaki_F : arifle_SCAR_L_short_khaki_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_short_khaki_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_short_khaki.paa";
        baseWeapon="arifle_SCAR_L_short_khaki_F";
    };
    class arifle_SCAR_L_grip_khaki_F : arifle_SCAR_L_grip_khaki_base_F {
        author="$STR_GHOST_WEAPONS_Heliotrope";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_L_grip_khaki_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR_L\Data\UI\icon_arifle_scar_L_grip_khaki.paa";
        baseWeapon="arifle_SCAR_L_grip_khaki_F";
    };
    class arifle_SCAR_L_black_snds_Holosight_pointer_f : arifle_SCAR_L_black_F {
        class LinkedItems {
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
                item="muzzle_snds_M";
            };
        };
    };
    class arifle_SCAR_L_black_DMS_LP_BI_S_F : arifle_SCAR_L_black_F {
        class LinkedItems {
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
                item="muzzle_snds_M";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class arifle_SCAR_L_GL_black_snds_Holosight_pointer_f : arifle_SCAR_L_GL_black_F {
        class LinkedItems {
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
                item="muzzle_snds_M";
            };
        };
    };
    class arifle_SCAR_L_short_black_snds_Holosight_pointer_f : arifle_SCAR_L_short_black_F {
        class LinkedItems {
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
                item="muzzle_snds_M";
            };
        };
    };
    class arifle_SCAR_L_short_black_snds_holo_pointer_f : arifle_SCAR_L_short_black_F {
        class LinkedItems {
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
    class arifle_SCAR_L_grip_black_snds_Holosight_pointer_f : arifle_SCAR_L_grip_black_F {
        class LinkedItems {
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
                item="muzzle_snds_M";
            };
        };
    };
    class arifle_SCAR_L_short_snds_holo_pointer_f : arifle_SCAR_L_short_F {
        class LinkedItems {
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
    class arifle_SCAR_L_GL_snds_Holosight_pointer_f : arifle_SCAR_L_GL_F {
        class LinkedItems {
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
    class arifle_SCAR_L_DMS_LP_BI_S_F : arifle_SCAR_L_F {
        class LinkedItems {
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
                item="muzzle_snds_M_snd_F";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class arifle_SCAR_L_short_snds_Holosight_pointer_f : arifle_SCAR_L_short_F {
        class LinkedItems {
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
    class arifle_SCAR_L_grip_snds_Holosight_pointer_f : arifle_SCAR_L_grip_F {
        class LinkedItems {
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
};