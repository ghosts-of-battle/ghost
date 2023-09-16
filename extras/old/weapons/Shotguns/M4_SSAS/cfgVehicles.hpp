class CfgVehicles {
    class Weapon_Base_F;
    class Weapon_sgun_M4_F : Weapon_Base_F {
        scope=2;
        scopeCurator=2;
        displayName="$STR_GHOST_WEAPONS_CfgWeapons_sgun_M4_F0";
        author="$STR_GHOST_WEAPONS_AveryTheKitty";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_Shotguns";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons {
            class sgun_M4_F
            {
                weapon="sgun_M4_F";
                count=1;
            };
        };
        class TransportMagazines {
            class 8Rnd_12Gauge_Pellets {
                magazine="8Rnd_12Gauge_Pellets";
                count=1;
            };
        };
    };
};