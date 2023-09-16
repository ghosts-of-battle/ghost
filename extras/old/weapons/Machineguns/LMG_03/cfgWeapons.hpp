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
    class LMG_03_base_F : Rifle_Long_Base_F {
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : asdg_MuzzleSlot_556 {
                class compatibleItems : compatibleItems
                {
                    muzzle_snds_M=1;
                    muzzle_snds_m_khk_F=1;
                    muzzle_snds_m_snd_F=1;
                    muzzle_mzls_M=1;
                };
            };
        };
        class FullAutoSlow;
    };
    class LMG_03_F : LMG_03_base_F {
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Machineguns\LMG_03\Data\LMG_03_F_body_CO.paa", "\z\ghost\addons\weapons\Machineguns\LMG_03\Data\LMG_03_F_acc_CO.paa", "\A3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_CO.paa"};
    };
    class LMG_03_khk_F : LMG_03_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="LMG_03_khk_F";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_LMG_03_khk_F0";
        picture="\z\ghost\addons\weapons\Machineguns\LMG_03\Data\UI\icon_LMG_03_khk_F_X_CA.paa";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Machineguns\LMG_03\Data\LMG_03_F_body_khk_CO.paa", "\z\ghost\addons\weapons\Machineguns\LMG_03\Data\LMG_03_F_acc_khk_CO.paa", "\z\ghost\addons\weapons\Machineguns\M200\Data\LMG_Mk200_khk_F_3_CO.paa"};
    };
    class LMG_03_snd_F : LMG_03_base_F {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        baseWeapon="LMG_03_snd_F";
        scope=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_LMG_03_snd_F0";
        picture="\z\ghost\addons\weapons\Machineguns\LMG_03\Data\UI\icon_LMG_03_snd_F_X_CA.paa";
        hiddenSelectionsTextures[]={"\z\ghost\addons\weapons\Machineguns\LMG_03\Data\LMG_03_F_body_snd_CO.paa", "\z\ghost\addons\weapons\Machineguns\LMG_03\Data\LMG_03_F_acc_snd_CO.paa", "\A3\Weapons_F\Machineguns\M200\Data\grip_CO.paa"};
    };
};