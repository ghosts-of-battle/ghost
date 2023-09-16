#include "script_component.hpp"
class CBA_Extended_EventHandlers;
class CfgVehicles  {
    class FxCartridge;
    class FxCartridge_pellets : FxCartridge  {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        mapSize=0.07;
        model="\z\ghost\addons\weapons\Ammo\cartridge_pellets.p3d";
    };
    class FxCartridge_25x40 : FxCartridge  {
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        mapSize=0.1;
        model="\z\ghost\addons\weapons\Ammo\cartridge_25x40.p3d";
    };
    class Weapon_Base_F;
    class Pistol_Base_F;
    class Launcher_Base_F;
    class Item_Base_F;
    class Item_optic_MRD_black : Item_Base_F  {
        editorSubcategory="EdSubcat_TopSlot_Collimators";
    };
    class Item_bipod_02_F_lush : Item_Base_F  {
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_bipod_02_F_lush0";
    };
    class Item_bipod_02_F_arid : Item_Base_F  {
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_bipod_02_F_arid0";
    };
    class Item_muzzle_snds_pistol_heavy_01 : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_pistol_heavy_010";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_pistol_heavy_01
            {
                name="muzzle_snds_pistol_heavy_01";
                count=1;
            };
        };
    };
    class Item_muzzle_snds_H_snd_F : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_H_snd0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_H_snd_F
            {
                name="muzzle_snds_H_snd_F";
                count=1;
            };
        };
    };
    class Item_muzzle_mzls_H : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_H0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_mzls_H
            {
                name="muzzle_mzls_H";
                count=1;
            };
        };
    };
    class Item_muzzle_mzls_L : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_L0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_mzls_L
            {
                name="muzzle_mzls_L";
                count=1;
            };
        };
    };
    class Item_muzzle_mzls_M : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_M0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_mzls_M
            {
                name="muzzle_mzls_M";
                count=1;
            };
        };
    };
    class Item_muzzle_mzls_B : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_B0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_mzls_B
            {
                name="muzzle_mzls_B";
                count=1;
            };
        };
    };
    class Item_muzzle_mzls_acp : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_acp0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_mzls_acp
            {
                name="muzzle_mzls_acp";
                count=1;
            };
        };
    };
    class Item_acc_o_FMS : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="FMS";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class acc_o_FMS
            {
                name="acc_o_FMS";
                count=1;
            };
        };
    };
    class Item_acc_flashlight_ir : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="IR Flashlight";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_SideSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class acc_flashlight_ir
            {
                name="acc_flashlight_ir";
                count=1;
            };
        };
    };
    class Item_optic_dcl : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_optic_dcl0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Collimators";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class optic_dcl
            {
                name="optic_dcl";
                count=1;
            };
        };
    };
    class Item_optic_tws_sniper : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_A3_CfgWeapons_optic_tws_sniper0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class optic_tws_sniper
            {
                name="optic_tws_sniper";
                count=1;
            };
        };
    };
    class Item_muzzle_snds_B_wdm_F : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_B_wdm_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_B_wdm_F
            {
                name="muzzle_snds_B_wdm_F";
                count=1;
            };
        };
    };
    class Item_muzzle_snds_408_black : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_408_black0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_408_black
            {
                name="muzzle_snds_408_black";
                count=1;
            };
        };
    };
    class Item_muzzle_snds_408_green : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_408_green0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_408_green
            {
                name="muzzle_snds_408_green";
                count=1;
            };
        };
    };
    class Item_muzzle_snds_408_sand : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_408_sand0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_408_sand
            {
                name="muzzle_snds_408_sand";
                count=1;
            };
        };
    };
    class Item_muzzle_snds_460 : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_4600";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_460
            {
                name="muzzle_snds_460";
                count=1;
            };
        };
    };
    class Item_muzzle_snds_545 : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_5450";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_545
            {
                name="muzzle_snds_545";
                count=1;
            };
        };
    };
    class Item_muzzle_snds_545_wdm_F : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_545_wdm_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_545_wdm_F
            {
                name="muzzle_snds_545_wdm_F";
                count=1;
            };
        };
    };
    class Item_muzzle_snds_545_lush_F : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_545_lush_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_545_lush_F
            {
                name="muzzle_snds_545_lush_F";
                count=1;
            };
        };
    };
    class Item_muzzle_snds_545_arid_F : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_snds_545_arid_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_snds_545_arid_F
            {
                name="muzzle_snds_545_arid_F";
                count=1;
            };
        };
    };
    class Item_muzzle_mzls_58_F : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_58_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_mzls_58_F
            {
                name="muzzle_mzls_58_F";
                count=1;
            };
        };
    };
    class Item_muzzle_mzls_545 : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_muzzle_mzls_5450";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class muzzle_mzls_545
            {
                name="muzzle_mzls_545";
                count=1;
            };
        };
    };
    class Item_optic_ACO_grn_AK_F : Item_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_optic_ACO_grn_AK_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Collimators";
        vehicleClass="WeaponAccessories";
        class TransportItems  {
            class optic_ACO_grn_AK_F
            {
                name="optic_ACO_grn_AK_F";
                count=1;
            };
        };
    };
    class Weapon_srifle_EBR_blk_F : Weapon_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_EBR_blk_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons  {
            class srifle_EBR_blk_F
            {
                weapon="srifle_EBR_blk_F";
                count=1;
            };
        };
        class TransportMagazines  {
            class 20Rnd_762x51_Mag
            {
                magazine="20Rnd_762x51_Mag";
                count=1;
            };
        };
    };
    class Weapon_srifle_EBR_khk_F : Weapon_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_EBR_khk_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons  {
            class srifle_EBR_khk_F
            {
                weapon="srifle_EBR_khk_F";
                count=1;
            };
        };
        class TransportMagazines  {
            class 20Rnd_762x51_Mag
            {
                magazine="20Rnd_762x51_Mag";
                count=1;
            };
        };
    };
    class Weapon_srifle_DMR_01_black_F : Weapon_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_DMR_01_black_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons  {
            class srifle_DMR_01_black_F
            {
                weapon="srifle_DMR_01_black_F";
                count=1;
            };
        };
        class TransportMagazines  {
            class 10Rnd_762x54_Mag
            {
                magazine="10Rnd_762x54_Mag";
                count=1;
            };
        };
    };
    class Weapon_srifle_DMR_02_tna_F : Weapon_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_DMR_02_tna_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons  {
            class srifle_DMR_02_tna_F
            {
                weapon="srifle_DMR_02_tna_F";
                count=1;
            };
        };
        class TransportMagazines  {
            class 10Rnd_338_Mag
            {
                magazine="10Rnd_338_Mag";
                count=1;
            };
        };
    };
    class Weapon_srifle_DMR_06_black_F : Weapon_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_srifle_DMR_06_black_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons  {
            class srifle_DMR_06_black_F
            {
                weapon="srifle_DMR_06_black_F";
                count=1;
            };
        };
        class TransportMagazines  {
            class 20Rnd_762x51_Mag
            {
                magazine="20Rnd_762x51_Mag";
                count=1;
            };
        };
    };
    class Weapon_LMG_Mk200_F : Weapon_Base_F  {
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_LMG_Mk200_F0";
    };
    class Weapon_LMG_Mk200_black_F : Weapon_Base_F  {
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_LMG_Mk200_black_F0";
    };
    class Weapon_LMG_Mk200_plain_F : Weapon_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_LMG_Mk200_plain_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_MachineGuns";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons  {
            class LMG_Mk200_plain_F
            {
                weapon="LMG_Mk200_plain_F";
                count=1;
            };
        };
        class TransportMagazines  {
            class 200Rnd_65x39_cased_Box
            {
                magazine="200Rnd_65x39_cased_Box";
                count=1;
            };
        };
    };
    class Weapon_LMG_Mk200_khk_F : Weapon_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_LMG_Mk200_khk_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_MachineGuns";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons  {
            class LMG_Mk200_khk_F
            {
                weapon="LMG_Mk200_khk_F";
                count=1;
            };
        };
        class TransportMagazines  {
            class 200Rnd_65x39_cased_Box
            {
                magazine="200Rnd_65x39_cased_Box";
                count=1;
            };
        };
    };
    class Weapon_MMG_02_khaki_F : Weapon_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_MMG_02_khaki_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_MachineGuns";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons  {
            class MMG_02_khaki_F
            {
                weapon="MMG_02_khaki_F";
                count=1;
            };
        };
        class TransportMagazines  {
            class 130Rnd_338_Mag
            {
                magazine="130Rnd_338_Mag";
                count=1;
            };
        };
    };
    class Weapon_hgun_ACPC2_black_F : Pistol_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_hgun_ACPC2_black_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_Pistols";
        vehicleClass="WeaponsHandguns";
        class TransportWeapons  {
            class hgun_ACPC2_black_F
            {
                weapon="hgun_ACPC2_black_F";
                count=1;
            };
        };
        class TransportMagazines  {
            class 9Rnd_45ACP_Mag
            {
                magazine="9Rnd_45ACP_Mag";
                count=1;
            };
        };
    };
    class Weapon_hgun_Pistol_heavy_01_black_F : Pistol_Base_F  {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_hgun_Pistol_heavy_01_black_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_Pistols";
        vehicleClass="WeaponsHandguns";
        class TransportWeapons  {
            class hgun_Pistol_heavy_01_black_F
            {
                weapon="hgun_Pistol_heavy_01_black_F";
                count=1;
            };
        };
        class TransportMagazines  {
            class 11Rnd_45ACP_Mag
            {
                magazine="11Rnd_45ACP_Mag";
                count=1;
            };
        };
    };
    class Weapon_hgun_C1911_F : Weapon_hgun_ACPC2_black_F  {
        scope=1;
        scopeCurator=0;
    };
};

