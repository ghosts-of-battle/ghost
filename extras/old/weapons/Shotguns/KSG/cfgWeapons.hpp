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
    class sgun_KSG_F : Rifle_Base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="sgun_KSG_F";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_sgun_KSG_F0";
        model="\z\ghost\addons\weapons\Shotguns\KSG\KSG_F.p3d";
        magazines[]={"8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Slug", "Aegis_8Rnd_12Gauge_HE"};
        magazineWell[]={"Shotgun_12GA"};
        maxZeroing=100;
        reloadAction="GestureReloadM4SSAS";
        recoil="recoil_ksg";
        cursor="sgun";
        handAnim[]={"OFP2_ManSkeleton", "\A3\Weapons_F\Machineguns\M200\Data\Anim\M200.rtm"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot {
            };
            class CowsSlot : asdg_OpticRail1913_short {
                iconPosition[]={0.34, 0.32};
                iconScale=0.2;
            };
            class PointerSlot {
            };
            mass=90;
        };
        htMin=16;
        htMax=550;
        inertia=0.5;
        aimTransitionSpeed=1.2;
        dexterity=1.5;
        initSpeed=375;
        picture="\z\ghost\addons\weapons\Shotguns\KSG\Data\UI\icon_sgun_KSG_F_X_CA.paa";
        UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
        descriptionShort="$STR_GHOST_WEAPONS_CfgWeapons_sgun_KSG_F1";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Shotguns\KSG\Data\KSG_CO.paa"};
        class Library {
            libTextDesc="$STR_GHOST_WEAPONS_CfgWeapons_sgun_KSG_F_Library0";
        };
        distanceZoomMin=100;
        distanceZoomMax=100;
        modes[]={"Single"};
        class Single : Mode_SemiAuto {
            sounds[]={"StandardSound"};
            textureType="left";
            dispersion=0.00131;
            reloadTime=0.8;
            minRange=1;
            minRangeProbab=0.5;
            midRange=50;
            midRangeProbab=0.7;
            maxRange=100;
            maxRangeProbab=0.2;
        };
        class Secondary : Rifle_Base_F {
            displayName="$STR_GHOST_WEAPONS_CfgWeapons_sgun_KSG_F0";
            model="\z\ghost\addons\weapons\Shotguns\KSG\KSG_F.p3d";
            magazines[]={"8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Pellets"};
            magazineWell[]={"Shotgun_12GA"};
            maxZeroing=100;
            reloadAction="GestureReloadM4SSAS";
            recoil="recoil_ksg";
            cursor="sgun";
            htMin=16;
            htMax=550;
            initSpeed=375;
            distanceZoomMin=100;
            distanceZoomMax=100;
            modes[]={"Single"};
            class Single : Mode_SemiAuto {
                sounds[]={"StandardSound"};
                textureType="right";
                dispersion=0.00131;
                reloadTime=0.8;
                minRange=1;
                minRangeProbab=0.5;
                midRange=50;
                midRangeProbab=0.7;
                maxRange=100;
                maxRangeProbab=0.2;
            };
        };
        aiDispersionCoefY=6;
        aiDispersionCoefX=4;
        muzzles[]={"this", "Secondary"};
    };
    class sgun_KSG_ACO_F : sgun_KSG_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_ACO_smg";
            };
        };
    };
};