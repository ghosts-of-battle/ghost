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
    class arifle_SCAR_base_F : Rifle_Base_F {
        model="\z\ghost\addons\weapons\Rifles\SCAR\SCAR_F.p3d";
        UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
        descriptionShort="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_base_F1";
        class Library {
            libTextDesc="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_base_F_Library0";
        };
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_01_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_02_CO.paa"};
        handAnim[]={"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"};
        reloadAction="GestureReloadSPAR_01";
        magazineReloadSwitchPhase=0.48;
        magazines[]={"20Rnd_762x51_Mag"};
        htMin=12;
        htMax=800;
        inertia=0.6;
        aimTransitionSpeed=0.8;
        dexterity=1.5;
        initSpeed=715;
        recoil="recoil_scar";
        maxZeroing=1000;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : asdg_MuzzleSlot_762 {
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
            mass=120;
        };
        modes[]={"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2", "fullauto_medium"};
        class Single : Mode_SemiAuto {
            reloadTime=0.1;
            dispersion=0.00087;
            minRange=2;
            minRangeProbab=0.3;
            midRange=350;
            midRangeProbab=0.7;
            maxRange=500;
            maxRangeProbab=0.05;
        };
        class FullAuto : Mode_FullAuto {
            reloadTime=0.1;
            dispersion=0.00087;
            minRange=0;
            minRangeProbab=0.9;
            midRange=15;
            midRangeProbab=0.7;
            maxRange=30;
            maxRangeProbab=0.05;
            aiRateOfFire=1E-06;
        };
        class fullauto_medium : FullAuto {
            showToPlayer=0;
            burst=3;
            minRange=2;
            minRangeProbab=0.5;
            midRange=50;
            midRangeProbab=0.7;
            maxRange=100;
            maxRangeProbab=0.05;
            aiRateOfFire=2;
        };
        class single_medium_optics1 : Single {
            requiredOpticType=1;
            showToPlayer=0;
            minRange=2;
            minRangeProbab=0.05;
            midRange=300;
            midRangeProbab=0.8;
            maxRange=500;
            maxRangeProbab=0.01;
            aiRateOfFire=2;
            aiRateOfFireDistance=300;
        };
        class single_medium_optics2 : single_medium_optics1 {
            requiredOpticType=2;
            minRange=300;
            minRangeProbab=0.05;
            midRange=500;
            midRangeProbab=0.7;
            maxRange=700;
            maxRangeProbab=0.05;
            aiRateOfFire=2;
            aiRateOfFireDistance=500;
        };
        ACE_barrelTwist=304.8;
        ACE_barrelLength=406.4;
        ACE_railHeightAboveBore=4.7;
    };
    class arifle_SCAR_GL_base_F : arifle_SCAR_base_F {
        UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
        model="\z\ghost\addons\weapons\Rifles\SCAR\SCAR_GL_F.p3d";
        hiddenSelections[]={"Camo1", "Camo2", "Camo3"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_01_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_02_CO.paa", "\z\ghost\addons\weapons\Rifles\SA80\Data\SA80_F_GL_snd_CO.paa"};
        handAnim[]={"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01_GL.rtm"};
        inertia=0.6;
        dexterity=1.4;
        aimTransitionSpeed=0.7;
        initSpeed=690;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass=120;
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
    class arifle_SCAR_short_base_F : arifle_SCAR_base_F {
        model="\z\ghost\addons\weapons\Rifles\SCAR\SCAR_short_F.p3d";
        inertia=0.5;
        dexterity=1.6;
        aimTransitionSpeed=1;
        initSpeed=690;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass=100;
        };
        class Single : Single {
            dispersion=0.00102;
        };
        class FullAuto : FullAuto {
            dispersion=0.00102;
        };
        ACE_barrelLength=330.2;
    };
    class arifle_SCAR_grip_base_F : arifle_SCAR_base_F {
        model="\z\ghost\addons\weapons\Rifles\SCAR\SCAR_grip_F.p3d";
        handAnim[]={"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"};
        dexterity=1.6;
        aimTransitionSpeed=1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass=125;
        };
    };
    class arifle_SCAR_black_base_F : arifle_SCAR_base_F {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_01_black_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_02_black_CO.paa"};
    };
    class arifle_SCAR_GL_black_base_F : arifle_SCAR_GL_base_F {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_01_black_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_02_black_CO.paa", "\z\ghost\addons\weapons\Rifles\SA80\Data\SA80_F_GL_CO.paa"};
    };
    class arifle_SCAR_short_black_base_F : arifle_SCAR_short_base_F {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_01_black_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_02_black_CO.paa"};
    };
    class arifle_SCAR_grip_black_base_F : arifle_SCAR_grip_base_F {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_01_black_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_02_black_CO.paa"};
    };
    class arifle_SCAR_khaki_base_F : arifle_SCAR_base_F {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_01_khaki_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_02_khaki_CO.paa"};
    };
    class arifle_SCAR_GL_khaki_base_F : arifle_SCAR_GL_base_F {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_01_khaki_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_02_khaki_CO.paa", "\z\ghost\addons\weapons\Rifles\SA80\Data\SA80_F_GL_khk_CO.paa"};
    };
    class arifle_SCAR_short_khaki_base_F : arifle_SCAR_short_base_F {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_01_khaki_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_02_khaki_CO.paa"};
    };
    class arifle_SCAR_grip_khaki_base_F : arifle_SCAR_grip_base_F {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_01_khaki_CO.paa", "\z\ghost\addons\weapons\Rifles\SCAR\Data\SCAR_02_khaki_CO.paa"};
    };
    class arifle_SCAR_F : arifle_SCAR_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_F_X_CA.paa";
        baseWeapon="arifle_SCAR_F";
    };
    class arifle_SCAR_GL_F : arifle_SCAR_GL_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_GL_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_GL_F_X_CA.paa";
        baseWeapon="arifle_SCAR_GL_F";
    };
    class arifle_SCAR_short_F : arifle_SCAR_short_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_short_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_short_F_X_CA.paa";
        baseWeapon="arifle_SCAR_short_F";
    };
    class arifle_SCAR_grip_F : arifle_SCAR_grip_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_grip_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_grip_F_X_CA.paa";
        baseWeapon="arifle_SCAR_grip_F";
    };
    class arifle_SCAR_black_F : arifle_SCAR_black_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_black_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_black_F_X_CA.paa";
        baseWeapon="arifle_SCAR_black_F";
    };
    class arifle_SCAR_GL_black_F : arifle_SCAR_GL_black_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_GL_black_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_GL_black_F_X_CA.paa";
        baseWeapon="arifle_SCAR_GL_black_F";
    };
    class arifle_SCAR_short_black_F : arifle_SCAR_short_black_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_short_black_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_short_black_F_X_CA.paa";
        baseWeapon="arifle_SCAR_short_black_F";
    };
    class arifle_SCAR_grip_black_F : arifle_SCAR_grip_black_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_grip_black_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_grip_black_F_X_CA.paa";
        baseWeapon="arifle_SCAR_grip_black_F";
    };
    class arifle_SCAR_khaki_F : arifle_SCAR_khaki_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_khaki_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_khaki_F_X_CA.paa";
        baseWeapon="arifle_SCAR_khaki_F";
    };
    class arifle_SCAR_GL_khaki_F : arifle_SCAR_GL_khaki_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_GL_khaki_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_GL_khaki_F_X_CA.paa";
        baseWeapon="arifle_SCAR_GL_khaki_F";
    };
    class arifle_SCAR_short_khaki_F : arifle_SCAR_short_khaki_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_short_khaki_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_short_khaki_F_X_CA.paa";
        baseWeapon="arifle_SCAR_short_khaki_F";
    };
    class arifle_SCAR_grip_khaki_F : arifle_SCAR_grip_khaki_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Garkain";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_arifle_SCAR_grip_khaki_F0";
        picture="\z\ghost\addons\weapons\Rifles\SCAR\Data\UI\icon_arifle_SCAR_grip_khaki_F_X_CA.paa";
        baseWeapon="arifle_SCAR_grip_khaki_F";
    };
    class arifle_SCAR_black_snds_mrco_pointer_f : arifle_SCAR_black_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_MRCO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B";
            };
        };
    };
    class arifle_SCAR_black_DMS_LP_BI_S_F : arifle_SCAR_black_F {
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
                item="muzzle_snds_B";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_blk";
            };
        };
    };
    class arifle_SCAR_GL_black_snds_mrco_pointer_f : arifle_SCAR_GL_black_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_MRCO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B";
            };
        };
    };
    class arifle_SCAR_short_black_snds_mrco_pointer_f : arifle_SCAR_short_black_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_MRCO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B";
            };
        };
    };
    class arifle_SCAR_short_black_snds_holo_pointer_f : arifle_SCAR_short_black_F {
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
                item="muzzle_snds_B";
            };
        };
    };
    class arifle_SCAR_grip_black_snds_mrco_pointer_f : arifle_SCAR_grip_black_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_MRCO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B";
            };
        };
    };
    class arifle_SCAR_short_snds_holo_pointer_f : arifle_SCAR_short_F {
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
                item="muzzle_snds_B_snd_F";
            };
        };
    };
    class arifle_SCAR_GL_snds_mrco_pointer_f : arifle_SCAR_GL_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_MRCO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B_snd_F";
            };
        };
    };
    class arifle_SCAR_DMS_LP_BI_S_F : arifle_SCAR_F {
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
                item="muzzle_snds_B_snd_F";
            };
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="bipod_01_F_snd";
            };
        };
    };
    class arifle_SCAR_short_snds_mrco_pointer_f : arifle_SCAR_short_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_MRCO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B_snd_F";
            };
        };
    };
    class arifle_SCAR_grip_snds_mrco_pointer_f : arifle_SCAR_grip_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_MRCO";
            };
            class LinkedItemsAcc {
                slot="PointerSlot";
                item="acc_pointer_IR";
            };
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_B_snd_F";
            };
        };
    };
};