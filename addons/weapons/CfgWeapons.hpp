class CfgWeapons {
    // ACE overheating - barrel mass set to +18% over ACE's default. ACE default barrelMass
    // = 0.55 x (WeaponSlotsInfo.mass / 22); e.g. MX_F: 0.55 x (79/22) = 1.975 -> x1.18 = 2.3305.
    // Inventory mass increases only by the ADDED barrel metal: (newBarrel - defaultBarrel) x 22
    // (ACE treats inv.mass/22 as kg, barrelMass is kg), added to the original inventory mass.
    // Set on the 5 family base classes; all 109 MX variants inherit via the config tree.
    class arifle_MX_Base_F;                          // MX family base
    class arifle_MX_F: arifle_MX_Base_F {
        ace_overheating_barrelMass = 2.3305;         // default 1.975 x 1.18
        class WeaponSlotsInfo {
            mass = 86.82;                            // 79 + (2.3305-1.975)*22
        };
    };
    class arifle_MXC_F: arifle_MX_Base_F {
        ace_overheating_barrelMass = 2.124;          // default 1.800 x 1.18
        class WeaponSlotsInfo {
            mass = 79.13;                            // 72 + (2.124-1.800)*22
        };
    };
    class arifle_MXM_F: arifle_MX_Base_F {
        ace_overheating_barrelMass = 2.5075;         // default 2.125 x 1.18
        class WeaponSlotsInfo {
            mass = 93.42;                            // 85 + (2.5075-2.125)*22
        };
    };
    class arifle_MX_SW_F: arifle_MX_Base_F {
        ace_overheating_barrelMass = 2.3895;         // default 2.025 x 1.18 - LMG
        class WeaponSlotsInfo {
            mass = 89.02;                            // 81 + (2.3895-2.025)*22
        };
    };
    class arifle_MX_GL_F: arifle_MX_Base_F {         // vanilla parent is MX_Base_F (not MX_F)
        ace_overheating_barrelMass = 3.5105;         // default 2.975 x 1.18
        class WeaponSlotsInfo {
            mass = 130.78;                           // 119 + (3.5105-2.975)*22
        };
    };

    // Mk200 LMG (Marksmen DLC). ACE default barrelMass = 0.55 x (220/22) = 5.5; increased x1.15.
    // Inventory mass raised by the added barrel metal: 220 + (6.325-5.5)*22 = 238.15.
    class LMG_Mk200_F;
    class LMG_Mk200_BI_F: LMG_Mk200_F {
        ace_overheating_barrelMass = 6.325;          // 5.5 x 1.15
        class WeaponSlotsInfo {
            mass = 238.15;                           // 220 + (6.325-5.5)*22
        };
    };
};
