class CfgVehicles {
    class Pistol_Base_F;
    class Weapon_hgun_Mk26_F : Pistol_Base_F {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_hgun_Mk26_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_Pistols";
        vehicleClass="WeaponsHandguns";
        class TransportWeapons {
            class hgun_Mk26_F {
                weapon="hgun_Mk26_F";
                count=1;
            };
        };
        class TransportMagazines {
            class 7Rnd_127x33_Mag {
                magazine="7Rnd_127x33_Mag";
                count=1;
            };
        };
    };
};