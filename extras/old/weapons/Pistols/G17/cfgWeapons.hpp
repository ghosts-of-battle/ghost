class CfgWeapons {
    class Pistol;
    class Pistol_Base_F : Pistol {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class hgun_G17_F : Pistol_Base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="hgun_G17_F";
        scope=2;
        model="\z\ghost\addons\weapons\Pistols\G17\G17_F.p3d";
        picture="\z\ghost\addons\weapons\Pistols\G17\Data\UI\icon_hgun_G17_F_X_CA.paa";
        UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
        magazines[]={"17Rnd_9x21_Mag"};
        magazineWell[]={"G17_9x21"};
        reloadAction="GestureReloadPistol";
        recoil="recoil_pistol_g17";
        displayname="$STR_GHOST_WEAPONS_CfgWeapons_hgun_G17_F0";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Pistols\G17\Data\G17_CO.paa"};
        modes[]={"Single"};
        class Single : Mode_SemiAuto {
            reloadTime=0.13;
            dispersion=0.0029;
            minRange=5;
            minRangeProbab=0.3;
            midRange=25;
            midRangeProbab=0.6;
            maxRange=50;
            maxRangeProbab=0.1;
            aiRateOfFire=2;
            aiRateOfFireDistance=25;
        };
        class Library {
            libTextDesc="$STR_GHOST_WEAPONS_CfgWeapons_hgun_G17_F_Library0";
        };
        descriptionShort="$STR_GHOST_WEAPONS_CfgWeapons_hgun_G17_F1";
        inertia=0.1;
        aimTransitionSpeed=1.6;
        dexterity=1.9;
        initSpeed=375;
        maxZeroing=100;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass=20;
            class MuzzleSlot : asdg_MuzzleSlot_9MM {
                iconPosition[]={0.22, 0.26};
                iconScale=0.2;
            };
            class CowsSlot {
            };
            class PointerSlot {
            };
        };
    };
    class hgun_G17_black_F : hgun_G17_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="hgun_G17_black_F";
        displayname="$STR_GHOST_WEAPONS_CfgWeapons_hgun_G17_black_F0";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Pistols\G17\Data\G17_black_CO.paa"};
        picture="\z\ghost\addons\weapons\Pistols\G17\Data\UI\icon_hgun_G17_black_F_X_CA.paa";
    };
    class hgun_G17_khaki_F : hgun_G17_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="hgun_G17_khaki_F";
        displayname="$STR_GHOST_WEAPONS_CfgWeapons_hgun_G17_khaki_F0";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Pistols\G17\Data\G17_khaki_CO.paa"};
        picture="\z\ghost\addons\weapons\Pistols\G17\Data\UI\icon_hgun_G17_khaki_F_X_CA.paa";
    };
    class hgun_G17_snds_F : hgun_G17_F {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_L";
            };
        };
    };
    class hgun_G17_black_snds_F : hgun_G17_black_F {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_L";
            };
        };
    };
    class hgun_G17_khaki_snds_F : hgun_G17_khaki_F {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="muzzle_snds_L";
            };
        };
    };
};