class CfgWeapons {
    class Pistol;
    class Pistol_Base_F : Pistol {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class hgun_Mk26_F : Pistol_Base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_SilverTM";
        baseWeapon="hgun_Mk26_F";
        scope=2;
        model="\z\ghost\addons\weapons\Pistols\Mk26\Mk26_F.p3d";
        picture="\z\ghost\addons\weapons\Pistols\Mk26\Data\UI\icon_hgun_Mk26_F_X_CA.paa";
        UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
        magazines[]={"7Rnd_127x33_Mag"};
        magazineWell[]={"Mk26_127x33"};
        displayname="$STR_GHOST_WEAPONS_CfgWeapons_hgun_Mk26_F0";
        descriptionShort="$STR_GHOST_WEAPONS_CfgWeapons_hgun_Mk26_F1";
        class Library {
            libTextDesc="$STR_GHOST_WEAPONS_CfgWeapons_hgun_Mk26_F_Library0";
        };
        reloadAction="GestureReloadPistol";
        recoil="recoil_pistol_mk26";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Pistols\Mk26\Data\Mk26_CO.paa"};
        modes[]={"Single"};
        class Single : Mode_SemiAuto {
            sounds[]={"StandardSound"};
            reloadTime=0.25;
            dispersion=0.00493;
            minRange=5;
            minRangeProbab=0.1;
            midRange=25;
            midRangeProbab=0.3;
            maxRange=50;
            maxRangeProbab=0.1;
        };
        inertia=0.3;
        aimTransitionSpeed=1.6;
        dexterity=1.7;
        initSpeed=470;
        maxZeroing=100;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass=50;
            holsterScale=0.7;
            class CowsSlot : asdg_PistolOpticRail1913 {
                iconPosition[]={0.46, 0.15};
                iconScale=0.15;
            };
            class MuzzleSlot {
            };
            class PointerSlot : asdg_PistolUnderRail {
                iconPosition[]={0.35, 0.47};
                iconScale=0.3;
            };
        };
    };
};