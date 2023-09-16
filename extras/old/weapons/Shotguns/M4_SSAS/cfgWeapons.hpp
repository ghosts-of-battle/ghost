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
    class sgun_M4_F : Rifle_Base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Tigg";
        baseWeapon="sgun_M4_F";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_sgun_M4_F0";
        model="\z\ghost\addons\weapons\Shotguns\M4_SSAS\M4_F.p3d";
        magazines[]={"8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Slug", "Aegis_8Rnd_12Gauge_HE"};
        magazineWell[]={"Shotgun_12GA"};
        maxZeroing=100;
        reloadAction="GestureReloadM4SSAS";
        recoil="recoil_m4";
        cursor="sgun";
        handAnim[]={"OFP2_ManSkeleton", "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\Anim\DMR_03.rtm"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : asdg_MuzzleSlot {
                linkProxy="\A3\Data_F\proxies\weapon_slots\MUZZLE";
                compatibleItems[]={""};
                iconPosition[]={-0.02, 0.41};
                iconScale=0.2;
            };
            class CowsSlot : asdg_OpticRail1913_short {
                iconPosition[]={0.486, 0.277};
                iconScale=0.15;
            };
            class PointerSlot : asdg_PistolUnderRail {
                linkProxy="\A3\Data_F\proxies\weapon_slots\SIDE";
                compatibleItems[]={"acc_flashlight_pistol"};
                iconPosition[]={0.088, 0.516};
                iconScale=0.15;
            };
            mass=100;
        };
        inertia=0.6;
        aimTransitionSpeed=1.1;
        dexterity=1.3;
        initSpeed=-1;
        picture="\z\ghost\addons\weapons\Shotguns\M4_SSAS\Data\UI\icon_sgun_M4_F_X_CA.paa";
        UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
        descriptionShort="$STR_GHOST_WEAPONS_CfgWeapons_sgun_M4_F1";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Shotguns\M4_SSAS\Data\M4_SSAS_CO.paa"};
        class Library {
            libTextDesc="$STR_GHOST_WEAPONS_CfgWeapons_sgun_M4_F_Library0";
        };
        distanceZoomMin=100;
        distanceZoomMax=100;
        modes[]={"Single"};
        class Single : Mode_SemiAuto {
            sounds[]={"StandardSound", "SilencedSound"};
            dispersion=0.00087;
            reloadTime=0.2;
            minRange=1;
            minRangeProbab=0.5;
            midRange=60;
            midRangeProbab=0.7;
            maxRange=100;
            maxRangeProbab=0.05;
        };
    };
    class sgun_M4_ACO_F : sgun_M4_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_ACO_smg";
            };
        };
    };
};