class CfgVehicles {
    class Weapon_Base_F;
    class Weapon_sgun_KSG_F : Weapon_Base_F {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_sgun_KSG_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_Shotguns";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons {
            class sgun_KSG_F {
                name="sgun_KSG_F";
                count=1;
            };
        };
        class TransportMagazines {
            class 8Rnd_12Gauge_Pellets {
                name="8Rnd_12Gauge_Pellets";
                count=1;
            };
            class 8Rnd_12Gauge_Slug {
                name="8Rnd_12Gauge_Slug";
                count=1;
            };
        };
    };
};
