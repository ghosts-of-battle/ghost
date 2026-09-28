// THE NAVID TAKES THE FA BELTS. The base game gives the MMG_01 no magazine
// well - just magazines[] = {"150Rnd_93x64_Mag"} - and CBA JAM has no 9.3x64
// well either, so the Type40 belt (CfgMagazines.hpp) would sit in the arsenal
// and never chamber. A well of our own goes on the gun; gen_fa_tiers puts
// the tier belts in that well. `=` not `+=`: there is nothing to add to, and
// nobody else's well to wipe.
class CfgWeapons {
    class Rifle_Long_Base_F;
    class MMG_01_base_F: Rifle_Long_Base_F {
        magazineWell[] = {"FA_Navid_93x64"};
    };
    // Ghost's SCAR-H (addons/weapons), a copy of Aegis's under the ghost_weapons_ name: like Aegis's it has no
    // magazine well, so the FA 7.62x51 mags go into its magazines[] - the list fa_aegis gives Aegis's SCAR
    class Rifle_Base_F;
    class ghost_weapons_arifle_SCAR_base_F: Rifle_Base_F {
        magazines[] += {
            "FA_b_20Rnd_762_M80A2_HV",
            "FA_20Rnd_762_M80A2_HV",
            "FA_b_20Rnd_762_M80A2_HV_T_Red",
            "FA_20Rnd_762_M80A2_HV_T_Red",
            "FA_b_20Rnd_762_M80A2_HV_T_Yellow",
            "FA_20Rnd_762_M80A2_HV_T_Yellow",
            "FA_b_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_b_20Rnd_762_M80A2_HV_T_White",
            "FA_20Rnd_762_M80A2_HV_T_White",
            "FA_b_20Rnd_762_M80A2_HV_T_Blue",
            "FA_20Rnd_762_M80A2_HV_T_Blue",
            "FA_b_20Rnd_762_M80A2_HV_T_Orange",
            "FA_20Rnd_762_M80A2_HV_T_Orange",
            "FA_b_20Rnd_762_M80A2_HV_T_IR",
            "FA_20Rnd_762_M80A2_HV_T_IR",
            "FA_b_20Rnd_762_XM751_CTEP",
            "FA_20Rnd_762_XM751_CTEP",
            "FA_b_20Rnd_762_XM751_CTEP_T_Red",
            "FA_20Rnd_762_XM751_CTEP_T_Red",
            "FA_b_20Rnd_762_XM751_CTEP_T_Yellow",
            "FA_20Rnd_762_XM751_CTEP_T_Yellow",
            "FA_b_20Rnd_762_XM751_CTEP_T_Green",
            "FA_20Rnd_762_XM751_CTEP_T_Green",
            "FA_b_20Rnd_762_XM751_CTEP_T_White",
            "FA_20Rnd_762_XM751_CTEP_T_White",
            "FA_b_20Rnd_762_XM751_CTEP_T_Blue",
            "FA_20Rnd_762_XM751_CTEP_T_Blue",
            "FA_b_20Rnd_762_XM751_CTEP_T_Orange",
            "FA_20Rnd_762_XM751_CTEP_T_Orange",
            "FA_b_20Rnd_762_XM751_CTEP_T_IR",
            "FA_20Rnd_762_XM751_CTEP_T_IR"
        };
    };
};
