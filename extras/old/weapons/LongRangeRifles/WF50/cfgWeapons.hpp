class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class Rifle_Short_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;
    class WF50_base_F: Rifle_Long_Base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        scope=0;
        magazines[]={"5Rnd_127x99_Mag"};
        magazineWell[]={"WF50_127x99"};
        reloadAction="GestureReloadLRR";
        recoil="recoil_wf50";
        maxZeroing=1600;
        cursor="srifle";
        initSpeed=825;
        handAnim[]={"OFP2_ManSkeleton", "\z\ghost\addons\weapons\LongRangeRifles\WF50\Data\Anim\WF50.rtm"};
        class GunParticles {
            class FirstEffect {
                effectName="SniperCloud";
                positionName="Usti hlavne";
                directionName="Konec hlavne";
            };
        };
        distanceZoomMin=300;
        distanceZoomMax=300;
        modes[]={"Single", "far_optic1", "medium_optic2", "far_optic2"};
        deployedPivot="bipod";
        hasBipod=1;
        class Single: Mode_SemiAuto {
            sounds[]={"StandardSound"};
            reloadTime=1.2;
            dispersion=0.00044;
            minRange=2;
            minRangeProbab=0.5;
            midRange=200;
            midRangeProbab=0.7;
            maxRange=400;
            maxRangeProbab=0.3;
            aiRateOfFire=3;
            aiRateOfFireDistance=500;
        };
        class far_optic1: Single {
            showToPlayer=0;
            minRange=150;
            minRangeProbab=0.2;
            midRange=500;
            midRangeProbab=0.7;
            maxRange=1500;
            maxRangeProbab=0.4;
            aiRateOfFire=3;
            aiRateOfFireDistance=600;
            requiredOpticType=1;
        };
        class medium_optic2: Single {
            showToPlayer=0;
            minRange=250;
            minRangeProbab=0.2;
            midRange=750;
            midRangeProbab=0.7;
            maxRange=1000;
            maxRangeProbab=0.4;
            aiRateOfFire=5;
            aiRateOfFireDistance=1000;
            requiredOpticType=2;
        };
        class far_optic2: far_optic1 {
            minRange=500;
            minRangeProbab=0.2;
            midRange=1100;
            midRangeProbab=0.7;
            maxRange=2000;
            maxRangeProbab=0.3;
            aiRateOfFire=7;
            aiRateOfFireDistance=1500;
            requiredOpticType=2;
        };
    };
    class srifle_WF50_F: WF50_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Skaveria";
        baseWeapon="srifle_WF50_F";
        scope=1;
        model="\z\ghost\addons\weapons\LongRangeRifles\WF50\WF50_F.p3d";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_WF50_F0";
        picture="\z\ghost\addons\weapons\LongRangeRifles\WF50\Data\UI\icon_srifle_WF50_F_X_CA.paa";
        UiPicture="\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
        class Library {
            libTextDesc="$STR_GHOST_WEAPONS_CfgWeapons_srifle_WF50_F_Library0";
        };
        descriptionShort="$STR_GHOST_WEAPONS_CfgWeapons_srifle_WF50_F1";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass=380;
            class MuzzleSlot {
            };
            class CowsSlot: asdg_OpticRail1913 {
                iconPosition[]={0.6, 0.35};
                iconScale=0.2;
            };
            class PointerSlot {
            };
            class UnderbarrelSlot {
            };
        };
        inertia=1;
        aimTransitionSpeed=0.5;
        dexterity=1.2;
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\LongRangeRifles\WF50\Data\WF50_CO.paa"};
    };
    class srifle_WF50_camo_F: srifle_WF50_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Skaveria";
        baseWeapon="srifle_WF50_camo_F";
        scope=1;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_WF50_camo_F0";
        picture="\z\ghost\addons\weapons\LongRangeRifles\WF50\Data\UI\icon_srifle_WF50_camo_F_X_CA.paa";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\LongRangeRifles\WF50\Data\WF50_BLUFOR_CO.paa"};
        hiddenSelectionsMaterials[]={"\z\ghost\addons\weapons\LongRangeRifles\WF50\Data\WF50_BLUFOR.rvmat"};
    };
    class srifle_WF50_tna_F: srifle_WF50_camo_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty_and_Skaveria";
        baseWeapon="srifle_WF50_tna_F";
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_WF50_tna_F0";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\LongRangeRifles\WF50\Data\srifle_WF50_tna_F_CO.paa"};
        picture="\z\ghost\addons\weapons\LongRangeRifles\WF50\Data\UI\icon_srifle_WF50_tna_F_X_CA.paa";
    };
    class srifle_WF50_LRPS_F: srifle_WF50_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_LRPS";
            };
        };
    };
    class srifle_WF50_camo_LRPS_F: srifle_WF50_camo_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_LRPS";
            };
        };
    };
    class srifle_WF50_tna_LRPS_F: srifle_WF50_tna_F {
        class LinkedItems {
            class LinkedItemsOptic {
                slot="CowsSlot";
                item="optic_LRPS_tna_F";
            };
        };
    };
};