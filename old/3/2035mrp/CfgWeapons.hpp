// All equipment (except backpacks) belongs to CfgWeapons
class CfgWeapons
{
    // Define base classes for extended equipment
    class H_HelmetB;
    class HeadgearItem;

    // Helmet configuration; unspecified parts follow base defaults

    // No Cover HighCut----------------------------------------------------------------------------------------------------------

    // No Cover HighCut base class
    class opscore_highcut_base: H_HelmetB
    {
        author = "Kiyo";
        scope = 1;
        displayName = "HighCut Helmet Base";
        picture = "\2035mrp\UI\Helmet\ui_opscore_sample.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_1.p3d";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_blk_co.paa"
        };
        // Note: textures not listed are baked into the P3D (common items) and must be changed in Blender
        descriptionShort = "Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_1.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
            // Base classes must repeat this field (children do not) or variants will not load textures
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };

    // Black
    class opscore_highcut_blk_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Black | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_blk_US.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_blk_co.paa"
        };
    };

    // Olive Drab
    class opscore_highcut_od_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Olive Drab | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od_US.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_od_co.paa"
        };
    };

    // Ranger Green
    class opscore_highcut_rgr_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Ranger Green | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr_US.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_rgr_co.paa"
        };
    };

    // Coyote
    class opscore_highcut_coy_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Coyote | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy_US.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_coy_co.paa"
        };
    };

    // Tan
    class opscore_highcut_tan_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Tan | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan_US.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_tan_co.paa"
        };
    };

    // SnakeSkin Tan
    class opscore_highcut_tan_snake_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Tan & SnakeSkin | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan_snake_US.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_tan_snake_co.paa"
        };
    };

    // SnakeSkin Coyote
    class opscore_highcut_coy_snake_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Coyote & SnakeSkin | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy_snake_US.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_coy_snake_co.paa"
        };
    };

    // SnakeSkin Olive Drab
    class opscore_highcut_od_snake_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Olive Drab & SnakeSkin | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od_snake_US.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_od_snake_co.paa"
        };
    };

    // SnakeSkin Ranger Green
    class opscore_highcut_rgr_snake_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Ranger Green & SnakeSkin | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr_snake_US.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_rgr_snake_co.paa"
        };
    };

    // Hydro-dip Multicam
    class opscore_highcut_mc_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Multicam | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_mc_US.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_mc_co.paa"
        };
    };

    // Plain base class
    class opscore_highcut_plain_base: H_HelmetB
    {
        author = "Kiyo";
        scope = 1;
        displayName = "Plain HighCut Helmet Base";
        picture = "\2035mrp\UI\Helmet\ui_opscore_sample.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_5.p3d";
        hiddenSelections[] = {"Camo1", "headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa"
        };
        descriptionShort = "Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_5.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1", "headset"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };

    // Black Plain
    class opscore_highcut_blk_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Black)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_blk_plain.paa";
        hiddenSelections[] = {"Camo1", "headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa"
        };
    };

    // Tan Plain
    class opscore_highcut_tan_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Tan)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan_plain.paa";
        hiddenSelections[] = {"Camo1", "headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa"
        };
    };

    // Tan SnakeSkin Plain
    class opscore_highcut_tan_snake_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Tan | SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan_snake_plain.paa";
        hiddenSelections[] = {"Camo1", "headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa"
        };
    };

    // Coyote Plain
    class opscore_highcut_coy_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Coyote)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy_plain.paa";
        hiddenSelections[] = {"Camo1", "headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa"
        };
    };

    // Coyote SnakeSkin Plain
    class opscore_highcut_coy_snake_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Coyote | SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy_snake_plain.paa";
        hiddenSelections[] = {"Camo1", "headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa"
        };
    };

    // Ranger Green Plain
    class opscore_highcut_rgr_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Ranger Green)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr_plain.paa";
        hiddenSelections[] = {"Camo1", "headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa"
        };
    };

    // Ranger Green SnakeSkin Plain
    class opscore_highcut_rgr_snake_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Ranger Green | SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr_snake_plain.paa";
        hiddenSelections[] = {"Camo1", "headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa"
        };
    };

    // Olive Drab Plain
    class opscore_highcut_od_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Olive Drab)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od_plain.paa";
        hiddenSelections[] = {"Camo1", "headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa"
        };
    };

    // Olive Drab SnakeSkin Plain
    class opscore_highcut_od_snake_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Olive Drab | SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od_snake_plain.paa";
        hiddenSelections[] = {"Camo1", "headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa"
        };
    };

    // Covered HighCut----------------------------------------------------------------------------------------------------------

    // Covered HighCut base class
    class opscore_highcut_cover_base: H_HelmetB
    {
        author = "Kiyo";
        scope = 1;
        displayName = "Covered HighCut Helmet Base";
        picture = "\2035mrp\UI\Helmet\ui_opscore_sample.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_2.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
        descriptionShort = "Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_2.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };

    // Black Cover
    class opscore_highcut_cover_blk_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Black | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_blk_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };

    // Grey Cover
    class opscore_highcut_cover_gry_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Grey | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_gry_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_gry_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_gry_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };

    // Multicam Black Camo Cover
    class opscore_highcut_cover_mcbk_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Black | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcbk_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcbk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcbk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };

    // Ranger Green Cover
    class opscore_highcut_cover_rgr_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Ranger Green | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_rgr_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };

    // Olive Drab Cover
    class opscore_highcut_cover_od_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Olive Drab | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_od_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa"
        };
    };

    // 2035 Edition Multicam Woodland Camo Cover
    class opscore_highcut_cover_mcwdl_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Woodland | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcwdl_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcwdl_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcwdl_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };

    // Multicam Tropic Camo Cover
    class opscore_highcut_cover_mctp_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Tropic | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mctp_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mctp_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mctp_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa"
        };
    };

    // Coyote Cover
    class opscore_highcut_cover_coy_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Coyote | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_coy_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa"
        };
    };

    // Tan Cover
    class opscore_highcut_cover_tan_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Tan | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_tan_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };

    // Night Desert Camo Cover
    class opscore_highcut_cover_NightDesert_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Night Desert | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_NightDesert_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_NightDesert_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_NightDesert_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };

    // Multicam Arid Camo Cover
    class opscore_highcut_cover_mcarid_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Arid | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcarid_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };

    // Multicam Camo Cover
    class opscore_highcut_cover_mc_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mc_US.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };

    // Covered HighCut base class (INDEP faction)
    class opscore_highcut_cover_alt_base: H_HelmetB
    {
        author = "Kiyo";
        scope = 1;
        displayName = "Covered HighCut Helmet Base (alt)";
        picture = "\2035mrp\UI\Helmet\ui_opscore_sample.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_3.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "headset", "MPLS", "surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\GP_pouch_aaf_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
        descriptionShort = "Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_3.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "headset", "MPLS", "surefire"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };

    // AAF Digital Camo Cover
    class opscore_highcut_cover_alt_AAF: opscore_highcut_cover_alt_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Digital | AAF)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_alt_AAF.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "headset", "MPLS", "surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_aaf_co.paa",
            "\2035mrp\Texture\Helmet\attachment\GP_pouch_aaf_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\surefire_blk_co.paa"
        };
    };

    // LDF Geometric Camo Cover
    class opscore_highcut_cover_alt_LDF: opscore_highcut_cover_alt_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Geometric | LDF)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_alt_LDF.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "headset", "MPLS", "surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_ldf_co.paa",
            "\2035mrp\Texture\Helmet\attachment\GP_pouch_ldf_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\surefire_rgr_co.paa"
        };
    };

    // Multicam Camo Cover (INDEP)
    class opscore_highcut_cover_alt_mc: opscore_highcut_cover_alt_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Black & Multicam Cover)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_alt_mc.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "headset", "MPLS", "surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\GP_pouch_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\surefire_blk_co.paa"
        };
    };

    // No Flag All Variants HighCut------------------------------------------------------------------------------------------------------

    // Black
    class opscore_highcut_blk: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Black)";
        picture = "\2035mrp\UI\Helmet\ui_opscore_sample.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_blk_co.paa"
        };
    };

    // Olive Drab
    class opscore_highcut_od: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Olive Drab)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_od_co.paa"
        };
    };

    // Ranger Green
    class opscore_highcut_rgr: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Ranger Green)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_rgr_co.paa"
        };
    };

    // Coyote
    class opscore_highcut_coy: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Coyote)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_coy_co.paa"
        };
    };

    // Tan
    class opscore_highcut_tan: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Tan)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_tan_co.paa"
        };
    };

    // SnakeSkin Tan
    class opscore_highcut_tan_snake: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Tan & SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan_snake.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_snake_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_tan_snake_co.paa"
        };
    };

    // SnakeSkin Coyote
    class opscore_highcut_coy_snake: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Coyote & SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy_snake.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_snake_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_coy_snake_co.paa"
        };
    };

    // SnakeSkin Olive Drab
    class opscore_highcut_od_snake: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Olive Drab & SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od_snake.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_snake_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_od_snake_co.paa"
        };
    };

    // SnakeSkin Ranger Green
    class opscore_highcut_rgr_snake: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Ranger Green & SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr_snake.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_snake_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_rgr_snake_co.paa"
        };
    };

    // Hydro-dip Multicam
    class opscore_highcut_mc: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Multicam)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_mc.paa";
        hiddenSelections[] = {"Camo1", "flag_left", "headset", "MPLS", "battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_mc_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_mc_co.paa"
        };
    };

    // Black Cover
    class opscore_highcut_cover_blk: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Black)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_blk.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_blk_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };

    // Grey Cover
    class opscore_highcut_cover_gry: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Grey)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_gry.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_gry_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_gry_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };

    // Multicam Black Camo Cover
    class opscore_highcut_cover_mcbk: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Black)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcbk.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcbk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcbk_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };

    // Ranger Green Cover
    class opscore_highcut_cover_rgr: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Ranger Green)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_rgr.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_rgr_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };

    // Olive Drab Cover
    class opscore_highcut_cover_od: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Olive Drab)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_od.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_od_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa"
        };
    };

    // 2035 Edition Multicam Woodland Camo Cover
    class opscore_highcut_cover_mcwdl: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Woodland)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcwdl.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcwdl_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcwdl_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };

    // Multicam Tropic Camo Cover
    class opscore_highcut_cover_mctp: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Tropic)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mctp.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mctp_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mctp_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa"
        };
    };

    // DPM Camo Cover
    class opscore_highcut_cover_DPM: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (DPM)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_DPM.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_DPM_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_DPM_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };

    // Coyote Cover
    class opscore_highcut_cover_coy: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Coyote)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_coy.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_coy_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa"
        };
    };

    // Tan Cover
    class opscore_highcut_cover_tan: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Tan)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_tan.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_tan_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };

    // Night Desert Camo Cover
    class opscore_highcut_cover_NightDesert: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Night Desert)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_NightDesert.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_NightDesert_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_NightDesert_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };

    // Multicam Arid Camo Cover
    class opscore_highcut_cover_mcarid: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Arid)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcarid.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcarid_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };

    // MTP Camo Cover
    class opscore_highcut_cover_mtp: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (MTP)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mtp.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mtp_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mtp_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };

    // Multicam Camo Cover
    class opscore_highcut_cover_mc: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mc.paa";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag_left", "headset", "MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mc_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };


};

